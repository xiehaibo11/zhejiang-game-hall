
/* v8::internal::Factory::NewFixedArrayWithFiller(v8::internal::RootIndex, int,
   v8::internal::Object, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewFixedArrayWithFiller
          (Factory *this,ushort param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (0x7fffffd < param_3) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar1 = AllocateRawArray(this,param_3 * 4 + 8,param_5);
  *(undefined4 *)(uVar1 - 1) = *(undefined4 *)(this + (ulong)param_2 * 8 + 0x80);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0x95a0);
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
    uVar1 = *puVar2;
  }
  *(uint *)(uVar1 + 3) = param_3 << 1;
  if (param_3 != 0) {
    uVar1 = *puVar2;
    uVar4 = (ulong)(int)param_3;
    if (param_3 < 8) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffffffffffff8;
      puVar7 = (undefined8 *)(uVar1 + 0x17);
      uVar8 = uVar6;
      do {
        puVar7[-1] = CONCAT44(param_4,param_4);
        puVar7[-2] = CONCAT44(param_4,param_4);
        puVar7[1] = CONCAT44(param_4,param_4);
        *puVar7 = CONCAT44(param_4,param_4);
        uVar8 = uVar8 - 8;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar6 == uVar4) {
        return;
      }
    }
    lVar5 = uVar4 - uVar6;
    puVar3 = (undefined4 *)(uVar1 + 7 + uVar6 * 4);
    do {
      lVar5 = lVar5 + -1;
      *puVar3 = param_4;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}

