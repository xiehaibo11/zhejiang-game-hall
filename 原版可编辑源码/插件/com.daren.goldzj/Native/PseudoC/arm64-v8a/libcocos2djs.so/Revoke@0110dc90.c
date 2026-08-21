
/* v8::internal::JSProxy::Revoke(v8::internal::Handle<v8::internal::JSProxy>) */

void v8::internal::JSProxy::Revoke(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar4 = uVar2 & 0xffffffff00000000;
  if (0xa8 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar2 + 0xb)) - 1))) {
    uVar3 = *(ulong *)(uVar4 + 0xb0);
    *(int *)(uVar2 + 7) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar1 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar1 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,uVar2 + 7,uVar3);
        uVar1 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar1 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,uVar2 + 7,uVar3);
      }
    }
    uVar3 = *param_1;
    uVar2 = *(ulong *)(uVar4 + 0xb0);
    *(int *)(uVar3 + 0xb) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xb,uVar2);
        uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xb,uVar2);
        return;
      }
    }
  }
  return;
}

