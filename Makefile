NAME		= charcode
SRCS		= charcode.c
OBJS		= charcode.o

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -O2

PREFIX		= /usr/local
BINDIR		= $(PREFIX)/bin

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

install: $(NAME)
	mkdir -p $(DESTDIR)$(BINDIR)
	install -m 755 $(NAME) $(DESTDIR)$(BINDIR)/

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re all install
