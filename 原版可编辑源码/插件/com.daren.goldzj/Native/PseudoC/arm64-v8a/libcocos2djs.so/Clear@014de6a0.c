
/* v8::internal::CompilationSubCache::Clear() */

void __thiscall v8::internal::CompilationSubCache::Clear(CompilationSubCache *this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(this + 8);
  uVar3 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    lVar5 = *(long *)(this + 0x10);
    uVar2 = *(undefined8 *)(*(long *)this + 0xa0);
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3 & 0xfffffffffffffffc;
      puVar6 = (undefined8 *)(lVar5 + 0x10);
      uVar8 = uVar7;
      do {
        puVar6[-1] = uVar2;
        puVar6[-2] = uVar2;
        puVar6[1] = uVar2;
        *puVar6 = uVar2;
        uVar8 = uVar8 - 4;
        puVar6 = puVar6 + 4;
      } while (uVar8 != 0);
      if (uVar7 == uVar3) {
        return;
      }
    }
    lVar4 = uVar3 - uVar7;
    puVar6 = (undefined8 *)(lVar5 + uVar7 * 8);
    do {
      lVar4 = lVar4 + -1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}

