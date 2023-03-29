# Implementacja wielomianów na bazie tablic

Program umożliwia dodawanie, odejmowanie, mnożenie oraz obliczanie metodą Hornera
wielomianów. Po uruchomieniu i wpisaniu wielomianów program będzie wyświetlał możliwe do
wykonania operacje oraz instrukcję co wpisać, aby z nich skorzystać. Aby program był bardziej
praktyczny dodałem opcję wprowadzenia wielomianów od nowa oraz po każdym obliczeniu program
pyta użytkownika, czy chce policzyć wynik metodą hornera. Funkcje zadeklarowałem w pliku
nagłówkowym poly.h.

## Złożoności obliczeniowe i pamięciowe:

## Funkcja add:

W funkcji występują 2 pętle wykonujące działania na tablicy. Pierwsza wykonuje ich **_a_** razy, a
druga **_b_** razy. W związku z tym złożoność obliczeniowa równa jest **_O(a + b)_**. Złożoność
pamięciowa algorytmu wyniesie **_O(n_** ), ponieważ do wykonania operacji korzysta on z tablicy
o rozmiarze **_n_**.

## Funkcja sub:

Funkcja wygląda niemal identycznie jak funkcja **_add_**. Jedyną różnicą jest fakt, że odejmuje
ona wartości w drugiej pętli zamiast dodawać. Dlatego też złożoność obliczeniowa i
pamięciowa są takie same i wynoszą kolejno **_O(a + b)_** i **_O(n)._**

## Funkcja mul:

Głównym działaniem funkcji jest przemnażanie elementów pierwszego i drugiego
wielomianu i dodawanie ich do odpowiednich komórek tablicy. Znajduje się ono w pętli
zależnej od **_b_** która leży w pętli zależnej od **a.** W związku z tym złożoność obliczeniowa
wynosi **_O(ab)._** Złożoność pamięciowa wyniesie **_O(n+m)_** , ponieważ algorytm do wykonywania
obliczeń korzysta z tablicy o rozmiarze **_n + m_**.

## Funkcja horner:

W funkcji znajduje się jedna pętla wykonująca działania na zmiennej **_result_**. Pętla wykona się
**_n_** razy, dlatego też złożoność obliczeniowa wyniesie tutaj **_O(n)_**. Złożoność pamięciowa
wyniesie **_O(1)_** , ponieważ do przechowywania wyniku algorytm korzysta z jednej zmiennej
**_result_**.