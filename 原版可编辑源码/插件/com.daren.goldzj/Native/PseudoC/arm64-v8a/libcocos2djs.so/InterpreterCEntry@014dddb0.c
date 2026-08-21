
/* v8::internal::CodeFactory::InterpreterCEntry(v8::internal::Isolate*, int) */

void __thiscall
v8::internal::CodeFactory::InterpreterCEntry(CodeFactory *this,Isolate *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *in_x8;
  
  iVar1 = (int)param_1;
  if (iVar1 == 1) {
    iVar3 = 0x277;
  }
  else {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code",param_1,(ulong)(uint)param_2);
    }
    iVar3 = 0x27c;
  }
  uVar2 = Builtins::builtin_handle((Builtins *)(this + 0x9e00),iVar3);
  *in_x8 = uVar2;
  in_x8[1] = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uVar2 = 0x1d2c850;
  if (iVar1 != 1) {
    uVar2 = 0x1d2c878;
  }
  in_x8[2] = uVar2;
  return;
}

