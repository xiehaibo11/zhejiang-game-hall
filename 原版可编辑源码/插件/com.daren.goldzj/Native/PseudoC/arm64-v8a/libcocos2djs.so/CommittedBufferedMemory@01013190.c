
/* v8::internal::MemoryAllocator::Unmapper::CommittedBufferedMemory() */

long __thiscall v8::internal::MemoryAllocator::Unmapper::CommittedBufferedMemory(Unmapper *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  base::Mutex::Lock((Mutex *)(this + 0x10));
  puVar6 = *(undefined8 **)(this + 0x38);
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar6 == puVar3) {
    lVar10 = 0;
  }
  else {
    uVar2 = ((ulong)((long)puVar3 + (-8 - (long)puVar6)) >> 3) + 1;
    if (uVar2 < 2) {
      lVar10 = 0;
      puVar5 = puVar6;
    }
    else {
      uVar8 = uVar2 & 0x3ffffffffffffffe;
      lVar7 = 0;
      lVar10 = 0;
      puVar5 = puVar6 + uVar8;
      puVar6 = puVar6 + 1;
      uVar9 = uVar8;
      do {
        puVar1 = puVar6 + -1;
        plVar4 = (long *)*puVar6;
        uVar9 = uVar9 - 2;
        puVar6 = puVar6 + 2;
        lVar7 = *(long *)*puVar1 + lVar7;
        lVar10 = *plVar4 + lVar10;
      } while (uVar9 != 0);
      lVar10 = lVar10 + lVar7;
      if (uVar2 == uVar8) goto LAB_01013240;
    }
    do {
      puVar6 = puVar5 + 1;
      lVar10 = *(long *)*puVar5 + lVar10;
      puVar5 = puVar6;
    } while (puVar3 != puVar6);
  }
LAB_01013240:
  puVar6 = *(undefined8 **)(this + 0x50);
  puVar3 = *(undefined8 **)(this + 0x58);
  if (puVar6 != puVar3) {
    uVar2 = ((ulong)((long)puVar3 + (-8 - (long)puVar6)) >> 3) + 1;
    if (1 < uVar2) {
      uVar8 = uVar2 & 0x3ffffffffffffffe;
      lVar7 = 0;
      puVar5 = puVar6 + 1;
      uVar9 = uVar8;
      do {
        puVar1 = puVar5 + -1;
        plVar4 = (long *)*puVar5;
        uVar9 = uVar9 - 2;
        puVar5 = puVar5 + 2;
        lVar10 = *(long *)*puVar1 + lVar10;
        lVar7 = *plVar4 + lVar7;
      } while (uVar9 != 0);
      lVar10 = lVar7 + lVar10;
      puVar6 = puVar6 + uVar8;
      if (uVar2 == uVar8) goto LAB_010132c0;
    }
    do {
      puVar5 = puVar6 + 1;
      lVar10 = *(long *)*puVar6 + lVar10;
      puVar6 = puVar5;
    } while (puVar3 != puVar5);
  }
LAB_010132c0:
  base::Mutex::Unlock((Mutex *)(this + 0x10));
  return lVar10;
}

