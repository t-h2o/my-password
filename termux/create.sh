git clone https://github.com/theo-grivel/42-Libft
git clone https://github.com/theo-grivel/my-password-manager
cd 42-libft
pkg install clang
ar rc libft.a *c
mv libft.a ../my-password-manager
cd ../my-password-manager
clang src/main.c -L. -lft
mv a.out pass
./pass
