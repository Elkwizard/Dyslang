if [[ "$(pwd)" == "/g/"* ]]; then
	CC="clang++"
else
	CC="g++"
fi
$CC Source/*.cpp -o dys.exe -std=c++23 && ./dys.exe ${@:1}