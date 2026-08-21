
/* v8::Isolate::AddMessageListenerWithErrorLevel(void (*)(v8::Local<v8::Message>,
   v8::Local<v8::Value>), int, v8::Local<v8::Value>) */

undefined8 __thiscall
v8::Isolate::AddMessageListenerWithErrorLevel
          (Isolate *this,ulong param_1,int param_2,Isolate *param_4)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = *(undefined4 *)(this + 0x2c60);
  *(undefined4 *)(this + 0x2c60) = 5;
  uVar2 = *(undefined8 *)(this + 0x95a0);
  lVar3 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar5 = (ulong *)internal::Factory::NewFixedArray((Factory *)this,3,0);
  puVar6 = (ulong *)internal::Factory::NewForeign((Factory *)this,param_1);
  uVar10 = *puVar5;
  uVar9 = *puVar6;
  *(int *)(uVar10 + 7) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar9);
    }
  }
  pIVar1 = this + 0xa0;
  if (param_4 != (Isolate *)0x0) {
    pIVar1 = param_4;
  }
  uVar10 = *puVar5;
  uVar9 = *(ulong *)pIVar1;
  *(int *)(uVar10 + 0xb) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar9);
    }
  }
  *(int *)(*puVar5 + 0xf) = param_2 << 1;
  puVar7 = (undefined8 *)internal::TemplateList::Add(this,this + 0xf98,puVar5);
  *(undefined8 *)(this + 0xf98) = *puVar7;
  *(undefined8 *)(this + 0x95a0) = uVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar3) {
    *(long *)(this + 0x95a8) = lVar3;
    internal::HandleScope::DeleteExtensions((Isolate *)this);
  }
  *(undefined4 *)(this + 0x2c60) = uVar4;
  return 1;
}

