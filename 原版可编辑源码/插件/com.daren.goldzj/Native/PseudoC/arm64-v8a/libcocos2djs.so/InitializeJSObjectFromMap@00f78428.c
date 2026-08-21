
/* v8::internal::Factory::InitializeJSObjectFromMap(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::Factory::InitializeJSObjectFromMap
          (Factory *this,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_2;
  uVar5 = *param_3;
  *(int *)(uVar6 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
    }
  }
  uVar5 = *param_2;
  uVar6 = uVar5 & 0xffffffff00000000;
  bVar2 = *(byte *)((uVar6 | *(uint *)(uVar5 - 1)) + 10);
  if (((bVar2 < 0x30) || (bVar1 = bVar2 & 0xf8, bVar1 == 0x78)) || ((byte)((bVar2 >> 3) - 6) < 6)) {
    puVar4 = (undefined4 *)(uVar6 + 0x168);
  }
  else if (bVar1 == 0x68) {
    puVar4 = (undefined4 *)(uVar6 + 0x3e0);
  }
  else if ((byte)((bVar2 >> 3) - 0x11) < 0xb) {
    puVar4 = (undefined4 *)(uVar6 + 0x3c0);
  }
  else {
    if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar4 = (undefined4 *)(uVar6 + 1000);
  }
  *(undefined4 *)(uVar5 + 7) = *puVar4;
  InitializeJSObjectBody(this,param_2,param_4,0xc);
  return;
}

