## marcos
denoted by preceding $
ex:
$import file
$formalize (new_keyword) {implementation}
$formalize Addition (add $x:Number $y:Number $| add1 $x:Number)
$formalize Modulo (mod $x:Integer $y:Integer)
$formalize Multiplication (mul $x:<Addition && !Modulo> $y:Addition) {
    $x + $y
}
$macro
$let PI = 3.14

$replace ($replace) value
$replace whenever $condition: $body = if ($condition) $body

$$$$$
$5$
$1$let x = 5

|>
$formalize Pipeline ($x |> $y:Function){
    $y($x)
} before Addition 

(x |> f(@, y) |> f(g)(@, @, 1 |> +(2))) + 1