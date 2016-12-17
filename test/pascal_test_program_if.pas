program pascal_if_test;

var a, b, c, d : integer;

begin
    a := 2 + 3;
    b := a + 5;
    c := a + b;

    if (a < b) then
        d := 1
    else
        d := 0;
    if (a < b and b < c) then
        d := 1
    else
        d := 0;
end.
