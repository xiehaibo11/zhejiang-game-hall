
/* v8::internal::compiler::LiveRangeBuilder::FixedLiveRangeFor(int,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::FixedLiveRangeFor
          (LiveRangeBuilder *this,ulong param_2,int param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  uint *puVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  
  puVar2 = *(undefined8 **)this;
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(puVar2[4] + 8);
  }
  iVar7 = (int)param_2;
  uVar1 = iVar4 + iVar7;
  if (*(long *)(puVar2[0x15] + (long)(int)uVar1 * 8) == 0) {
    this_00 = (Zone *)*puVar2;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0xa8) {
      puVar2 = (undefined8 *)Zone::NewExpand(this_00,0xa8);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + 0x15;
    }
    *puVar2 = 0x800b00000000000;
    puVar3 = (uint *)((long)puVar2 + 4);
    *puVar3 = iVar7 << 7 | 0x800a000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = puVar2;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(uint *)((long)puVar2 + 0x5c) = ~uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)((long)puVar2 + 0x84) = 0x7fffffff;
    puVar2[0x11] = 0;
    puVar2[0x12] = puVar2;
    puVar2[0x13] = 0;
    *(undefined1 *)(puVar2 + 0x14) = 0;
    lVar5 = *(long *)(*(long *)this + 0x168);
    if (*(int *)(lVar5 + 4) == 1) {
      puVar6 = (ulong *)(lVar5 + 8);
    }
    else {
      iVar4 = iVar7 + 0x3f;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      puVar6 = (ulong *)(*(long *)(lVar5 + 8) + (long)(iVar4 >> 6) * 8);
    }
    *puVar6 = *puVar6 | 1L << (param_2 & 0x3f);
    if (param_3 == 1) {
      *puVar3 = *puVar3 | 0x10000000;
    }
    *(undefined8 **)(*(long *)(*(long *)this + 0xa8) + (long)(int)uVar1 * 8) = puVar2;
  }
  return;
}

