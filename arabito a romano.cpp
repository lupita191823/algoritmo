programa Arabigoto Romano;
uses crt;
const
  I = 'I';
  V = 'V';
  X = 'X';
  L = 'L';
  C = 'C';
  D = 'D';
  M = 'M';
var
  num,divi,resi:integer;{numero,auxiliar de division, auxiliar de residuo}
  mensaje,auxnum:string;{mensaje, auxiliar de numero}
{agrega I/X/C/M}
function AddIXCM(y:integer;u:string):string;
  var
     integer; {variable de iteracióm}
  begin
    AddIXCM:='';
    if y in [1,2,3] then
      for j:=1 to y do
        AddIXCM:=AddIXCM+u;
  end;
{agrega V/L/D}
function AddVLD(y:integer;u:string):string;
  begin
    if y in [4,5,6,7,8] then
      AddVLD:=u
    else
      AddVLD:='';
  end;
{valida unidades formato: III I V III I X}
function ValUni(z:integer):string;
  begin
    ValUni:= AddIXCM(z,I)+AddIXCM(((z div 4)+10*(z mod 4))*(z div 4),I)
     +AddVLD(z,V)+AddIXCM(z-5,I)+AddIXCM((z div 9)+10*(z mod 9),I)+AddIXCM((z div 9)+10*(z mod 9),X);
 end;
{valida decenas formato: XXX X L XXX X C}
function ValDec(z:integer):string;
  begin
   ValDec:= AddIXCM(z,X)+AddIXCM(((z div 4)+10*(z mod 4))*(z div 4),X)
     +AddVLD(z,L)+AddIXCM(z-5,X)+AddIXCM((z div 9)+10*(z mod 9),X)+AddIXCM((z div 9)+10*(z mod 9),C);
  end;
{valida centenas formato: CCC C D CCC C M}
function ValCen(z:integer):string;
  begin
   ValCen:= AddIXCM(z,C)+AddIXCM(((z div 4)+10*(z mod 4))*(z div 4),C)
     +AddVLD(z,D)+AddIXCM(z-5,C)+AddIXCM((z div 9)+10*(z mod 9),C)+AddIXCM((z div 9)+10*(z mod 9),M);
  end;
begin clrscr;
  {Desde el principio se supone que habrá un error}
  {si el dato introducido es correcto, el mensaje cambiará}
  mensaje:='error o es mayor a 1000';
  {Introducir el numero}
  writeln('Convertir n',#163,'mero ar',#160,'bigo a romano. De 1 a 1000');
  write('Ponga un n',#163,'mero = ');
  readln(auxnum); {una variable tipo string se usa para llegar al fin de programa}
  val(auxnum,num);  {es necesario convertir el string a un numero}
  {Verificar si está entre 1 y 1000}
  if num in [1..9]  then
    mensaje:=ValUni(num);
  if num in [10..99] then
    begin
      divi:= num div 10;
      resi:= num mod 10;
      mensaje:=ValDec(divi)+ValUni(resi);
    end;
  if (num>=100) and (num<1000) then
    begin
      divi:=num div 100;
      resi:=num mod 100;
      mensaje:=ValCen(divi)+ValDec(resi div 10)+ValUni(resi mod 10);
    end;
  if num= 1000 then
    mensaje:='M';
  {Mostrar el numero convertido}
  writeln('Resultado = ',mensaje);
readkey; end.
