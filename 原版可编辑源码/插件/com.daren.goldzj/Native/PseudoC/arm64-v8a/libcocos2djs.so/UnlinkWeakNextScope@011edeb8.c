
/* v8::internal::UnlinkWeakNextScope::UnlinkWeakNextScope(v8::internal::Heap*,
   v8::internal::HeapObject) */

void __thiscall
v8::internal::UnlinkWeakNextScope::UnlinkWeakNextScope
          (UnlinkWeakNextScope *this,long param_1,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = param_3 & 0xffffffff00000000;
  if ((*(short *)((uVar1 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x55) &&
     (*(int *)(param_3 - 1) == *(int *)(uVar1 + 0xdd0))) {
    *(ulong *)this = param_3;
    puVar3 = (uint *)(param_3 + 0x17);
    *(ulong *)(this + 8) = uVar1 | *puVar3;
    uVar1 = *(ulong *)(param_1 + -0x87b0);
    *puVar3 = (uint)uVar1;
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)((uVar1 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(param_3,puVar3,uVar1);
        uVar2 = *(ulong *)(uVar1 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((param_3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(param_3,puVar3,uVar1);
        return;
      }
    }
  }
  return;
}

