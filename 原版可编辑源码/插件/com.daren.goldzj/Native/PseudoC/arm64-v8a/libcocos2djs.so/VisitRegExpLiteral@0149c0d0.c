
/* v8::internal::CallPrinter::VisitRegExpLiteral(v8::internal::RegExpLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitRegExpLiteral(CallPrinter *this,RegExpLiteral *param_1)

{
  uint uVar1;
  
  Print(this,"/");
  PrintLiteral(this,**(undefined8 **)(param_1 + 0x10),0);
  Print(this,"/");
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    Print(this,"g");
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    Print(this,"i");
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    Print(this,"m");
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    Print(this,"u");
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    Print(this,"y");
    return;
  }
  return;
}

