
/* v8::internal::Factory::NewJSArrayStorage(v8::internal::Handle<v8::internal::JSArray>, int, int,
   v8::internal::ArrayStorageAllocationMode) */

void __thiscall
v8::internal::Factory::NewJSArrayStorage
          (Factory *this,ulong *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    *(undefined4 *)(*param_2 + 0xb) = 0;
    uVar6 = *param_2;
    uVar5 = *(ulong *)(this + 0x168);
    *(int *)(uVar6 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5);
        return;
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x95a0);
    lVar2 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    puVar3 = (ulong *)NewJSArrayStorage(this,*(byte *)((*param_2 & 0xffffffff00000000 | 10) +
                                                      (ulong)*(uint *)(*param_2 - 1)) >> 3,param_4,
                                        param_5);
    uVar6 = *param_2;
    uVar5 = *puVar3;
    *(int *)(uVar6 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5);
      }
    }
    *(int *)(*param_2 + 0xb) = param_3 << 1;
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions((Isolate *)this);
      return;
    }
  }
  return;
}

