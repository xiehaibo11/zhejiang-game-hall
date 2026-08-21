
/* v8::internal::compiler::CodeAssembler::ToInt64Constant(v8::internal::compiler::Node*, long*) */

undefined8 __thiscall
v8::internal::compiler::CodeAssembler::ToInt64Constant
          (CodeAssembler *this,Node *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(short *)(lVar1 + 0x10) == 0x18) {
    lVar1 = *(long *)(lVar1 + 0x30);
  }
  else {
    if (*(short *)(lVar1 + 0x10) != 0x17) {
      return 0;
    }
    lVar1 = (long)*(int *)(lVar1 + 0x2c);
  }
  *param_2 = lVar1;
  return 1;
}

