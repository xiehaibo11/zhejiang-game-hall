
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualJSObjectDetails(v8::internal::JSObject) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualJSObjectDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  ulong local_58;
  ulong local_38;
  
  uVar12 = param_2 & 0xffffffff00000000;
  uVar13 = uVar12 | 7;
  if (*(short *)(uVar13 + *(uint *)(param_2 - 1)) == 0xaa) {
    return;
  }
  if (*(short *)(uVar13 + *(uint *)(param_2 - 1)) == 0x439) {
    if (*(int *)((uVar12 | *(uint *)(param_2 + 0x17)) + 0x27) != 0x42) {
      uVar7 = *(uint *)((uVar12 | *(uint *)(param_2 + 0xb)) + 3);
      if ((uVar7 != 0x84) &&
         (((uVar7 & 1) == 0 || (1 < *(ushort *)(uVar13 + *(uint *)((uVar12 | uVar7) - 1)) - 0x95))))
      goto LAB_00ffc5e8;
    }
    local_38 = param_2;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar12 | *(uint *)(param_2 - 1));
    RecordVirtualObjectStats(this,0,param_2,0x2b,(long)iVar3,0,0);
  }
LAB_00ffc5e8:
  if ((*(uint *)((uVar12 | 0xb) + (ulong)*(uint *)(param_2 - 1)) >> 0x15 & 1) == 0) {
    uVar7 = *(uint *)(param_2 + 3);
    if (((uVar7 & 1) == 0) || (uVar7 == *(uint *)(uVar12 + 0x168))) {
      uVar10 = *(ulong *)(uVar12 + 0x3b8);
    }
    else {
      uVar10 = uVar12 | uVar7;
    }
    local_38 = uVar10;
    if ((int)uVar10 != *(int *)(*(long *)this + -0x8498)) {
      uVar9 = uVar12 | *(uint *)(param_2 - 1);
      bVar1 = *(byte *)(uVar9 + 5);
      uVar7 = (uint)bVar1;
      if (2 < bVar1) {
        uVar7 = (uint)*(byte *)(uVar9 + 3) - (uint)bVar1;
      }
      iVar3 = uVar7 << 2;
      uVar8 = 0x35;
      if ((*(uint *)((uVar12 | *(uint *)(param_2 - 1)) + 0xb) & 0x100000) != 0) {
        uVar8 = 0x3b;
      }
      iVar4 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_38,
                         uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1));
      goto LAB_00ffc730;
    }
  }
  else {
    if ((*(uint *)(param_2 + 3) & 1) == 0) {
      uVar10 = *(ulong *)(uVar12 + 0x410);
    }
    else {
      uVar10 = uVar12 | *(uint *)(param_2 + 3);
    }
    uVar8 = 0x36;
    if ((*(uint *)((uVar12 | *(uint *)(param_2 - 1)) + 0xb) & 0x100000) != 0) {
      uVar8 = 0x3c;
    }
    iVar3 = (((*(int *)(uVar10 + 0xf) >> 1) - (*(int *)(uVar10 + 7) >> 1)) -
            (*(int *)(uVar10 + 0xb) >> 1)) * 0xc;
    local_38 = uVar10;
    iVar4 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_38,
                       uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1));
LAB_00ffc730:
    RecordVirtualObjectStats(this,param_2,uVar10,uVar8,(long)iVar4,(long)iVar3,0);
  }
  uVar10 = uVar12 | *(uint *)(param_2 + 7);
  sVar2 = *(short *)(uVar13 + *(uint *)(param_2 - 1));
  local_58 = uVar10;
  if ((*(byte *)((uVar12 | 10) + (ulong)*(uint *)(param_2 - 1)) & 0xf8) == 0x60) {
    uVar8 = 0xd;
    if (sVar2 != 0x423) {
      uVar8 = 0x33;
    }
    lVar11 = (long)((((*(int *)(uVar10 + 0xf) >> 1) - (*(int *)(uVar10 + 7) >> 1)) -
                    (*(int *)(uVar10 + 0xb) >> 1)) * 0xc);
    local_38 = uVar10;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar12 | *(uint *)(uVar10 - 1));
    lVar6 = (long)iVar3;
  }
  else if (sVar2 == 0x423) {
    if (*(uint *)(param_2 + 7) == *(uint *)(*(long *)this + -0x86e8)) goto LAB_00ffc89c;
    iVar5 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar12 | *(uint *)(uVar10 - 1));
    uVar10 = local_58;
    uVar7 = *(uint *)(param_2 + 0xb);
    iVar3 = *(int *)(local_58 + 3) >> 1;
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = (iVar5 + -8) / iVar3;
    }
    if ((uVar7 & 1) == 0) {
      dVar14 = (double)((int)uVar7 >> 1);
    }
    else {
      dVar14 = *(double *)((uVar12 | uVar7) + 3);
    }
    lVar11 = (ulong)(uint)(iVar3 - (int)dVar14) * (long)iVar4;
    iVar3 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_58,
                       local_58 & 0xffffffff00000000 | (ulong)*(uint *)(local_58 - 1));
    lVar6 = (long)iVar3;
    uVar8 = 0xe;
  }
  else {
    local_38 = uVar10;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar12 | *(uint *)(uVar10 - 1));
    lVar6 = (long)iVar3;
    uVar8 = 0x34;
    lVar11 = 0;
  }
  RecordVirtualObjectStats(this,param_2,uVar10,uVar8,lVar6,lVar11,0);
LAB_00ffc89c:
  if ((*(ushort *)(uVar13 + *(uint *)(param_2 - 1)) & 0xfffe) == 0x41c) {
    uVar13 = uVar12 | *(uint *)(param_2 + 0xb);
    local_38 = uVar13;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar12 | *(uint *)(uVar13 - 1));
    RecordVirtualObjectStats(this,param_2,uVar13,0x29,(long)iVar3,0,0);
  }
  return;
}

