program pascal_while_if_test;

var a, b, c, d : integer;

begin
    a := 2 + 3;
    b := a + 5;
    c := a + b;

    while (a < b) do
        if (c > b) then
            d := b + c
        else
            d := b - c;
end.
