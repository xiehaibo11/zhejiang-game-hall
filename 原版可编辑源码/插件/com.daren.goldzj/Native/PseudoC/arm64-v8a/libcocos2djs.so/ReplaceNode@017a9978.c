
/* v8::internal::compiler::SimdScalarLowering::ReplaceNode(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, int) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::ReplaceNode
          (SimdScalarLowering *this,Node *param_1,Node **param_2,int param_3)

{
  Zone *this_00;
  long lVar1;
  ulong uVar2;
  
  uVar2 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_3 << 3;
  this_00 = *(Zone **)**(undefined8 **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - lVar1) < uVar2) {
    lVar1 = Zone::NewExpand(this_00,uVar2);
  }
  else {
    *(ulong *)(this_00 + 0x10) = lVar1 + uVar2;
  }
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar1;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
       lVar1) = *(undefined8 *)((long)param_2 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((ulong)(uint)param_3 * 8 - lVar1 != 0);
  }
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       param_3;
  return;
}

