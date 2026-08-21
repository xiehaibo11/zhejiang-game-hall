
/* v8::internal::MathRandom::InitializeContext(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>) */

void v8::internal::MathRandom::InitializeContext(Factory *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)Factory::NewFixedDoubleArray(param_1,0x40);
  lVar3 = 7;
  do {
    *(undefined8 *)(lVar3 + *puVar2) = 0;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x207);
  uVar6 = *param_2;
  uVar5 = *puVar2;
  puVar1 = (undefined4 *)(uVar6 + 0x1e3);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
    }
  }
  puVar2 = (ulong *)Factory::NewByteArray(param_1,0x10,1);
  uVar6 = *param_2;
  uVar5 = *puVar2;
  puVar1 = (undefined4 *)(uVar6 + 0x1df);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
    }
  }
  uVar5 = *param_2;
  *(undefined4 *)(uVar5 + 0x1db) = 0;
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1df);
  *(undefined8 *)(uVar5 + 0xf) = 0;
  *(undefined8 *)(uVar5 + 7) = 0;
  return;
}

