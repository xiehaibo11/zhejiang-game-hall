
/* v8::internal::JSObject::RawFastPropertyAtPut(v8::internal::FieldIndex, v8::internal::Object,
   v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::JSObject::RawFastPropertyAtPut(JSObject *this,ulong param_2,ulong param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  
  if (((uint)param_2 >> 0xd & 1) == 0) {
    uVar1 = *(uint *)(*(ulong *)this + 3);
    uVar2 = *(ulong *)this & 0xffffffff00000000;
    if (((uVar1 & 1) == 0) || (uVar1 == *(uint *)(uVar2 + 0x168))) {
      uVar2 = *(ulong *)(uVar2 + 0x3b8);
    }
    else {
      uVar2 = uVar2 | uVar1;
    }
    lVar4 = ((param_2 & 0x1ffc) - (param_2 >> 0x1a & 0x7c)) + uVar2;
    *(int *)(lVar4 + 7) = (int)param_3;
    if ((param_3 & 1) != 0) {
      uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
      lVar4 = lVar4 + 7;
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar4,param_3);
        uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_00f80258:
        Heap_GenerationalBarrierSlow(uVar2,lVar4,param_3);
        return;
      }
    }
  }
  else {
    lVar4 = (param_2 & 0x1fff) - 1;
    *(int *)(*(long *)this + lVar4) = (int)param_3;
    if (param_4 != 0) {
      if (param_4 == 4) {
        if ((param_3 & 1) == 0) {
          return;
        }
        pbVar5 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
        if ((*(byte *)((param_3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar4,param_3);
        }
      }
      else {
        if ((param_3 & 1) == 0) {
          return;
        }
        pbVar5 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
      }
      if (((*pbVar5 & 0x18) != 0) &&
         (uVar2 = *(ulong *)this, (*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        lVar4 = uVar2 + lVar4;
        goto LAB_00f80258;
      }
    }
  }
  return;
}

