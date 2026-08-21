
/* v8::internal::ObjectBoilerplateDescription::set_key_value(int, v8::internal::Object,
   v8::internal::Object) */

void __thiscall
v8::internal::ObjectBoilerplateDescription::set_key_value
          (ObjectBoilerplateDescription *this,int param_1,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1 << 3 | 4;
  lVar4 = (long)(int)uVar1 + 7;
  *(int *)(*(long *)this + lVar4) = (int)param_3;
  uVar2 = *(ulong *)this;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + lVar4;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_3);
      uVar2 = *(ulong *)this;
      uVar5 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + lVar4;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_3);
      uVar2 = *(ulong *)this;
    }
  }
  uVar5 = (long)(int)(uVar1 + 4) | 7;
  *(int *)(uVar2 + uVar5) = (int)param_4;
  if ((param_4 & 1) != 0) {
    uVar2 = *(ulong *)this;
    uVar6 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar2 + uVar5;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar4,param_4);
      uVar2 = *(ulong *)this;
      uVar6 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar2 + uVar5;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar4,param_4);
      return;
    }
  }
  return;
}

