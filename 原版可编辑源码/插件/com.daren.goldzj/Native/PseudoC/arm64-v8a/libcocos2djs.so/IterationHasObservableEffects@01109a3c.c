
/* v8::internal::Object::IterationHasObservableEffects() */

undefined8 __thiscall v8::internal::Object::IterationHasObservableEffects(Object *this)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)this;
  if ((uVar4 & 1) != 0) {
    uVar3 = uVar4 & 0xffffffff00000000;
    if ((((*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x423) &&
         (0xa9 < *(ushort *)
                  ((uVar3 | 7) +
                  (ulong)*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 - 1)) + 0xf)) - 1))))
        && (uVar5 = *(ulong *)(uVar3 + 0x2bc8) & 0xffffffff00000000,
           *(int *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(uVar3 + 0x2bc8) - 1)) + 0x13))
                   + 0xe7) == *(int *)((uVar3 | *(uint *)(uVar4 - 1)) + 0xf))) &&
       (*(int *)(*(long *)(uVar3 + 0xed8) + 0xb) == 2)) {
      bVar1 = *(byte *)((uVar3 | 10) + (ulong)*(uint *)(uVar4 - 1));
      bVar2 = bVar1 >> 3 & 1;
      if ((bVar1 < 0x28) && (bVar2 == 0)) {
        return 0;
      }
      if ((bVar1 < 0x30) && ((bVar2 != 0 && (*(int *)(*(long *)(uVar3 + 0xea8) + 0xb) == 2)))) {
        return 0;
      }
    }
  }
  return 1;
}

