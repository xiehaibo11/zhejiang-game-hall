
/* v8::internal::compiler::LiveRangeBuilder::FixedFPLiveRangeFor(int,
   v8::internal::MachineRepresentation, v8::internal::compiler::RegisterAllocationData::SpillMode)
    */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::FixedFPLiveRangeFor
          (LiveRangeBuilder *this,ulong param_2,byte param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  Zone *this_00;
  uint *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)this;
  lVar7 = puVar10[4];
  iVar3 = 0;
  if (param_4 != 0) {
    iVar3 = *(int *)(lVar7 + 0x10);
  }
  iVar5 = (int)param_2;
  uVar1 = iVar3 + iVar5;
  if (*(long *)(puVar10[0x1d] + (long)(int)uVar1 * 8) != 0) {
    return;
  }
  uVar9 = ~uVar1;
  if (param_3 == 0xb) {
LAB_0165af9c:
    uVar9 = uVar9 + *(int *)(lVar7 + 0x10) * -2;
  }
  else if (param_3 != 0xc) {
    if (param_3 != 0xd) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar9 = uVar9 + *(int *)(lVar7 + 0xc) * -2;
    goto LAB_0165af9c;
  }
  this_00 = (Zone *)*puVar10;
  iVar3 = *(int *)(lVar7 + 8);
  puVar4 = *(undefined4 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0xa8) {
    puVar4 = (undefined4 *)Zone::NewExpand(this_00,0xa8);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar4 + 0x2a;
  }
  uVar2 = (uint)param_3;
  *puVar4 = 0;
  puVar6 = puVar4 + 1;
  *puVar6 = uVar2 << 0xd | iVar5 << 7 | 0x8000000;
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined4 **)(puVar4 + 8) = puVar4;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(undefined8 *)(puVar4 + 10) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  puVar4[0x16] = 0xffffffff;
  puVar4[0x17] = uVar9 + iVar3 * -2;
  puVar4[0x18] = 0;
  *(undefined8 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + 0x1e) = 0;
  *(undefined8 *)(puVar4 + 0x1a) = 0;
  *(undefined1 *)(puVar4 + 0x20) = 0;
  puVar4[0x21] = 0x7fffffff;
  *(undefined8 *)(puVar4 + 0x22) = 0;
  *(undefined4 **)(puVar4 + 0x24) = puVar4;
  *(undefined8 *)(puVar4 + 0x26) = 0;
  *(undefined1 *)(puVar4 + 0x28) = 0;
  if (((uVar2 == 0xd) || (uVar2 == 0xc)) || (uVar2 == 0xb)) {
    lVar7 = *(long *)(*(long *)this + 0x170);
    if (*(int *)(lVar7 + 4) != 1) {
      iVar3 = iVar5 + 0x3f;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      puVar8 = (ulong *)(*(long *)(lVar7 + 8) + (long)(iVar3 >> 6) * 8);
      goto LAB_0165b088;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)this + 0x168);
    if (*(int *)(lVar7 + 4) != 1) {
      iVar3 = iVar5 + 0x3f;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      puVar8 = (ulong *)(*(long *)(lVar7 + 8) + (long)(iVar3 >> 6) * 8);
      goto LAB_0165b088;
    }
  }
  puVar8 = (ulong *)(lVar7 + 8);
LAB_0165b088:
  *puVar8 = *puVar8 | 1L << (param_2 & 0x3f);
  if (param_4 == 1) {
    *puVar6 = *puVar6 | 0x10000000;
  }
  *(undefined4 **)(puVar10[0x1d] + (long)(int)uVar1 * 8) = puVar4;
  return;
}

