NAME   = charcode
SRCS   = charcode.c
OBJS   = charcode.o

CC     = gcc
CFLAGS = -Wall -Wextra -Werror -Wconversion

PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

.PHONY: install
install: $(NAME)
	install -d $(DESTDIR)$(BINDIR)
	install -m 755 $(NAME) $(DESTDIR)$(BINDIR)/

.PHONY: clean
clean:
	rm -f $(OBJS) $(NAME)
