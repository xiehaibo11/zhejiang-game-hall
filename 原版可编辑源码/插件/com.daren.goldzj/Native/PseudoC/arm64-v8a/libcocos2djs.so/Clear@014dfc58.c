
/* v8::internal::CompilationCache::Clear() */

void __thiscall v8::internal::CompilationCache::Clear(CompilationCache *this)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = *(long **)(this + 0x68);
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    lVar6 = plVar2[2];
    uVar3 = *(undefined8 *)(*plVar2 + 0xa0);
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar4 & 0xfffffffffffffffc;
      puVar7 = (undefined8 *)(lVar6 + 0x10);
      uVar9 = uVar8;
      do {
        puVar7[-1] = uVar3;
        puVar7[-2] = uVar3;
        puVar7[1] = uVar3;
        *puVar7 = uVar3;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar4) goto LAB_014dfcbc;
    }
    lVar5 = uVar4 - uVar8;
    puVar7 = (undefined8 *)(lVar6 + uVar8 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_014dfcbc:
  plVar2 = *(long **)(this + 0x70);
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    lVar6 = plVar2[2];
    uVar3 = *(undefined8 *)(*plVar2 + 0xa0);
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar4 & 0xfffffffffffffffc;
      puVar7 = (undefined8 *)(lVar6 + 0x10);
      uVar9 = uVar8;
      do {
        puVar7[-1] = uVar3;
        puVar7[-2] = uVar3;
        puVar7[1] = uVar3;
        *puVar7 = uVar3;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar4) goto LAB_014dfd20;
    }
    lVar5 = uVar4 - uVar8;
    puVar7 = (undefined8 *)(lVar6 + uVar8 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_014dfd20:
  plVar2 = *(long **)(this + 0x78);
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    lVar6 = plVar2[2];
    uVar3 = *(undefined8 *)(*plVar2 + 0xa0);
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar4 & 0xfffffffffffffffc;
      puVar7 = (undefined8 *)(lVar6 + 0x10);
      uVar9 = uVar8;
      do {
        puVar7[-1] = uVar3;
        puVar7[-2] = uVar3;
        puVar7[1] = uVar3;
        *puVar7 = uVar3;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar4) goto LAB_014dfd84;
    }
    lVar5 = uVar4 - uVar8;
    puVar7 = (undefined8 *)(lVar6 + uVar8 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_014dfd84:
  plVar2 = *(long **)(this + 0x80);
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    lVar6 = plVar2[2];
    uVar3 = *(undefined8 *)(*plVar2 + 0xa0);
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar4 & 0xfffffffffffffffc;
      puVar7 = (undefined8 *)(lVar6 + 0x10);
      uVar9 = uVar8;
      do {
        puVar7[-1] = uVar3;
        puVar7[-2] = uVar3;
        puVar7[1] = uVar3;
        *puVar7 = uVar3;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar4) {
        return;
      }
    }
    lVar5 = uVar4 - uVar8;
    puVar7 = (undefined8 *)(lVar6 + uVar8 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  return;
}

