
/* v8::internal::compiler::CodeAssembler::ToInt32Constant(v8::internal::compiler::Node*, int*) */

undefined8 __thiscall
v8::internal::compiler::CodeAssembler::ToInt32Constant
          (CodeAssembler *this,Node *param_1,int *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(short *)(lVar1 + 0x10) == 0x18) {
    lVar1 = *(long *)(lVar1 + 0x30);
    if (lVar1 != (int)lVar1) {
      return 0;
    }
  }
  else {
    if (*(short *)(lVar1 + 0x10) != 0x17) {
      return 0;
    }
    lVar1 = (long)*(int *)(lVar1 + 0x2c);
  }
  *param_2 = (int)lVar1;
  return 1;
}

