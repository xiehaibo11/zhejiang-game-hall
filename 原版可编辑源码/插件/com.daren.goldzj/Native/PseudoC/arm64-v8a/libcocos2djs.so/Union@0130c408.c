
/* v8::internal::compiler::Type::Union(int, v8::internal::Zone*) */

undefined4 * v8::internal::compiler::Type::Union(int param_1,Zone *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined4 *)Zone::NewExpand(param_2,0x10);
  }
  else {
    *(undefined4 **)(param_2 + 0x10) = puVar1 + 4;
  }
  *puVar1 = 3;
  puVar1[1] = param_1;
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
  if ((ulong)(*(long *)(param_2 + 0x18) - lVar2) < uVar3) {
    lVar2 = Zone::NewExpand(param_2,uVar3);
  }
  else {
    *(ulong *)(param_2 + 0x10) = lVar2 + uVar3;
  }
  *(long *)(puVar1 + 2) = lVar2;
  return puVar1;
}

