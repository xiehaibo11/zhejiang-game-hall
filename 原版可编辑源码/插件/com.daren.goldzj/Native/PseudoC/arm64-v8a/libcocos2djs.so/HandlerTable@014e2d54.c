
/* v8::internal::HandlerTable::HandlerTable(unsigned long, int,
   v8::internal::HandlerTable::EncodingMode) */

void __thiscall
v8::internal::HandlerTable::HandlerTable
          (HandlerTable *this,undefined8 param_1,int param_2,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 1) {
    iVar2 = 2;
  }
  else {
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar2 = 4;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_2 / iVar2;
  }
  *(int *)this = iVar1 >> 2;
  *(undefined8 *)(this + 8) = param_1;
  return;
}

