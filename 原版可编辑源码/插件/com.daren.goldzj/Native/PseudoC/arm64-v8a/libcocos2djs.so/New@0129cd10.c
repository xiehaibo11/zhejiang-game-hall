
/* v8::internal::compiler::Node::OutOfLineInputs::New(v8::internal::Zone*, int) */

void v8::internal::compiler::Node::OutOfLineInputs::New(Zone *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = (long)param_2 << 5 | 0x10;
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar2) < uVar1) {
    lVar2 = Zone::NewExpand(param_1,uVar1);
  }
  else {
    *(ulong *)(param_1 + 0x10) = lVar2 + uVar1;
  }
  lVar2 = lVar2 + (long)param_2 * 0x18;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(int *)(lVar2 + 0xc) = param_2;
  return;
}

