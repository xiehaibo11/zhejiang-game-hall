
/* v8::internal::Debug::GetLoadedScripts() */

Factory * __thiscall v8::internal::Debug::GetLoadedScripts(Debug *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Factory *pFVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  Iterator aIStack_60 [16];
  
  Heap::CollectAllGarbage(*(long *)(this + 0x88) + 0x8850,0,5,0);
  pFVar4 = *(Factory **)(this + 0x88);
  uVar6 = *(ulong *)(pFVar4 + 0xf58);
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa7) {
    puVar5 = (ulong *)Factory::NewFixedArray(pFVar4,*(int *)(uVar6 + 7) >> 1,0);
    Script::Iterator::Iterator(aIStack_60,*(Isolate **)(this + 0x88));
    uVar6 = Script::Iterator::Next(aIStack_60);
    if ((int)uVar6 != 0) {
      iVar10 = 0;
      uVar3 = *(uint *)(uVar6 + 3);
      do {
        if ((uVar3 & 1) == 0) {
LAB_00f0ba28:
          uVar7 = *puVar5;
          iVar2 = iVar10 + 1;
          lVar1 = uVar7 + (long)(iVar10 << 2);
          *(int *)(lVar1 + 7) = (int)uVar6;
          iVar10 = iVar2;
          if ((uVar6 & 1) != 0) {
            uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar7,lVar1,uVar6);
              uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar6);
            }
          }
        }
        else {
          uVar9 = uVar6 & 0xffffffff00000000;
          uVar7 = uVar9 | uVar3;
          uVar8 = uVar9 | 7;
          if ((((0x3f < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1))) ||
               ((*(ushort *)((uVar9 | *(uint *)(uVar7 - 1)) + 7) & 7) != 2)) ||
              (((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) >> 3 & 1) == 0 &&
               ((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) >> 3 & 1) != 0)))) ||
             (*(long *)(uVar7 + 0xb) != 0)) goto LAB_00f0ba28;
        }
        uVar6 = Script::Iterator::Next(aIStack_60);
        if ((int)uVar6 == 0) goto LAB_00f0ba98;
        uVar3 = *(uint *)(uVar6 + 3);
      } while( true );
    }
    iVar10 = 0;
LAB_00f0ba98:
    pFVar4 = (Factory *)FixedArray::ShrinkOrEmpty(*(undefined8 *)(this + 0x88),puVar5,iVar10);
  }
  else {
    pFVar4 = pFVar4 + 0x168;
  }
  return pFVar4;
}

