
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualMapDetails(v8::internal::Map) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualMapDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_48;
  
  local_48 = param_2;
  if ((*(uint *)(param_2 + 0xb) >> 0x14 & 1) == 0) {
    if ((*(uint *)(param_2 + 0xb) >> 0x18 & 1) != 0) {
      iVar2 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_48,
                         param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
      lVar4 = (long)iVar2;
      uVar3 = 0x2d;
      goto LAB_00ffd398;
    }
    if ((*(uint *)(param_2 + 0xb) >> 0x15 & 1) != 0) {
      iVar2 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_48,
                         param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
      lVar4 = (long)iVar2;
      uVar3 = 0x2e;
      goto LAB_00ffd398;
    }
    if ((*(uint *)(param_2 + 0xb) >> 0x19 & 1) == 0) {
      iVar2 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_48,
                         param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
      lVar4 = (long)iVar2;
      uVar3 = 0x31;
      goto LAB_00ffd398;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0xb) >> 0x15 & 1) == 0) {
      if (((*(uint *)(param_2 + 0xb) >> 0x14 & 1) == 0) ||
         ((*(uint *)(param_2 + 0xb) >> 0x16 & 1) != 0)) {
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_48,
                           param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
        lVar4 = (long)iVar2;
        uVar3 = 0x30;
      }
      else {
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_48,
                           param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
        lVar4 = (long)iVar2;
        uVar3 = 0x2c;
      }
    }
    else {
      iVar2 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_48,
                         param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
      lVar4 = (long)iVar2;
      uVar3 = 0x2f;
    }
LAB_00ffd398:
    RecordVirtualObjectStats(this,0,param_2,uVar3,lVar4,0,0);
  }
  uVar7 = param_2 & 0xffffffff00000000;
  if (((*(uint *)(param_2 + 0xb) >> 0x16 & 1) == 0) ||
     (*(uint *)(param_2 + 0x17) == *(uint *)(*(long *)this + -0x86e0))) goto LAB_00ffd4b8;
  uVar5 = uVar7 | *(uint *)(param_2 + 0x17);
  local_48 = uVar5;
  if ((*(uint *)(param_2 + 0xb) >> 0x14 & 1) == 0) {
    if ((*(uint *)(param_2 + 0xb) >> 0x18 & 1) != 0) {
      iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar7 | *(uint *)(uVar5 - 1));
      uVar3 = 0x17;
      goto LAB_00ffd420;
    }
  }
  else {
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar7 | *(uint *)(uVar5 - 1));
    uVar3 = 0x3a;
LAB_00ffd420:
    RecordVirtualObjectStats(this,param_2,uVar5,uVar3,(long)iVar2,0,0);
  }
  uVar8 = uVar7 | *(uint *)(uVar5 + 0xb);
  uVar6 = uVar7 | *(uint *)(uVar8 + 3);
  local_48 = uVar6;
  iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar7 | *(uint *)(uVar6 - 1));
  RecordVirtualObjectStats(this,uVar5,uVar6,0x19,(long)iVar2,0,0);
  uVar6 = uVar7 | *(uint *)(uVar8 + 7);
  local_48 = uVar6;
  iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar7 | *(uint *)(uVar6 - 1));
  RecordVirtualObjectStats(this,uVar5,uVar6,0x1a,(long)iVar2,0,0);
LAB_00ffd4b8:
  if (((*(uint *)(param_2 + 0xb) >> 0x14 & 1) != 0) && ((*(uint *)(param_2 + 0x23) & 1) != 0)) {
    uVar5 = uVar7 | *(uint *)(param_2 + 0x23);
    if ((*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 100) &&
       ((uVar1 = *(uint *)(uVar5 + 7), (uVar1 & 1) != 0 &&
        (uVar5 = uVar7 | uVar1, *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x97 < 2)))
       ) {
      local_48 = uVar5;
      iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar7 | *(uint *)(uVar5 - 1));
      RecordVirtualObjectStats(this,param_2,uVar5,0x3d,(long)iVar2,0,0);
    }
  }
  return;
}

