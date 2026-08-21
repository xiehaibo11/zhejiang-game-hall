
/* v8::internal::DescriptorArray::Initialize(v8::internal::EnumCache, v8::internal::HeapObject, int,
   int) */

void __thiscall
v8::internal::DescriptorArray::Initialize
          (DescriptorArray *this,ulong param_2,undefined4 param_3,short param_4,short param_5)

{
  short sVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  *(short *)(*(long *)this + 3) = param_5 + param_4;
  *(short *)(*(long *)this + 5) = param_4;
  *(undefined2 *)(*(long *)this + 7) = 0;
  *(undefined2 *)(*(long *)this + 9) = 0;
  *(int *)(*(long *)this + 0xb) = (int)param_2;
  uVar3 = *(ulong *)this;
  if ((param_2 & 1) != 0) {
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar3 + 0xb;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar5,param_2);
      uVar3 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar3 + 0xb;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar5,param_2);
      uVar3 = *(ulong *)this;
    }
  }
  sVar1 = *(short *)(uVar3 + 3);
  if (sVar1 != 0) {
    uVar4 = (long)sVar1 + (long)sVar1 * 2;
    if (uVar4 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(uVar3 + 0x1f);
      uVar9 = uVar7;
      do {
        puVar8[-1] = CONCAT44(param_3,param_3);
        puVar8[-2] = CONCAT44(param_3,param_3);
        puVar8[1] = CONCAT44(param_3,param_3);
        *puVar8 = CONCAT44(param_3,param_3);
        uVar9 = uVar9 - 8;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar4 == uVar7) {
        return;
      }
    }
    lVar5 = uVar7 - uVar4;
    puVar6 = (undefined4 *)(uVar3 + 0xf + uVar7 * 4);
    do {
      bVar2 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      *puVar6 = param_3;
      puVar6 = puVar6 + 1;
    } while (bVar2);
  }
  return;
}

