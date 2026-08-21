
/* v8::Isolate::RemoveMessageListeners(void (*)(v8::Local<v8::Message>, v8::Local<v8::Value>)) */

void __thiscall v8::Isolate::RemoveMessageListeners(Isolate *this,_func_void_Local_Local *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  uVar4 = *(undefined4 *)(this + 0x2c60);
  *(undefined4 *)(this + 0x2c60) = 5;
  uVar2 = *(undefined8 *)(this + 0x95a0);
  lVar3 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  uVar6 = *(ulong *)(this + 0xf98);
  if (1 < *(int *)(uVar6 + 7)) {
    lVar9 = 0;
    iVar8 = 4;
    do {
      puVar1 = (uint *)((long)(uVar6 + 7) + (long)iVar8);
      if ((((*puVar1 & 1) == 0) || (*puVar1 != *(uint *)(this + 0xa0))) &&
         (*(_func_void_Local_Local **)
           ((uVar6 & 0xffffffff00000000 |
            (ulong)*(uint *)((uVar6 & 0xffffffff00000000 | (ulong)*puVar1) + 7)) + 3) == param_1)) {
        uVar7 = *(ulong *)(this + 0xa0);
        *puVar1 = (uint)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            internal::Heap_MarkingBarrierSlow(uVar6,puVar1,uVar7);
            uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar5 & 0x18) != 0) && ((*(byte *)(uVar6 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
            internal::Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar7);
          }
        }
      }
      lVar9 = lVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (lVar9 < *(int *)(uVar6 + 7) >> 1);
    if (this == (Isolate *)0x0) goto LAB_00ecee90;
  }
  *(undefined8 *)(this + 0x95a0) = uVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar3) {
    *(long *)(this + 0x95a8) = lVar3;
    internal::HandleScope::DeleteExtensions((Isolate *)this);
  }
LAB_00ecee90:
  *(undefined4 *)(this + 0x2c60) = uVar4;
  return;
}

