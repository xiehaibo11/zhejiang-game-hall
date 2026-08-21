
/* v8::Context::SetEmbedderData(int, v8::Local<v8::Value>) */

void __thiscall v8::Context::SetEmbedderData(Context *this,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = (ulong *)FUN_00ea45f0(this,param_2,1,"v8::Context::SetEmbedderData()");
  if (puVar2 != (ulong *)0x0) {
    uVar5 = *puVar2;
    uVar4 = *param_3;
    lVar1 = uVar5 + (long)((int)param_2 * 8 + 8);
    *(int *)(lVar1 + -1) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar5,lVar1 + -1,uVar4);
        uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar5,lVar1 + -1,uVar4);
      }
    }
    *(undefined4 *)(lVar1 + 3) = 0;
  }
  return;
}

