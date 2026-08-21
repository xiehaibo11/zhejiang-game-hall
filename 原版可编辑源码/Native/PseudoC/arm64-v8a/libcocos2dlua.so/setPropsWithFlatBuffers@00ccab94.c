
/* TabControlReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
TabControlReader::setPropsWithFlatBuffers(TabControlReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  Ref *this_00;
  TabHeader *pTVar4;
  CSLoader *this_01;
  Layout *pLVar5;
  int iVar6;
  Table *pTVar7;
  NodeTree *pNVar8;
  Table *pTVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  
  pTVar9 = param_2 + -(long)*(int *)param_2;
  if (*(ushort *)pTVar9 < 7) {
    uVar12 = 0;
  }
  else {
    if ((ulong)*(ushort *)(pTVar9 + 6) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_2 + *(ushort *)(pTVar9 + 6));
    }
    if ((0x10 < *(ushort *)pTVar9) && ((ulong)*(ushort *)(pTVar9 + 0x10) != 0)) {
      bVar3 = param_2[*(ushort *)(pTVar9 + 0x10)] != (Table)0x0;
      goto LAB_00ccac04;
    }
  }
  bVar3 = false;
LAB_00ccac04:
  cocos2d::ui::TabControl::ignoreHeadersTextureSize((TabControl *)param_1,bVar3);
  cocos2d::ui::TabControl::setHeaderDockPlace((TabControl *)param_1,uVar12);
  fVar16 = 0.0;
  if (8 < *(ushort *)(param_2 + -(long)*(int *)param_2)) {
    uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    fVar16 = 0.0;
    if (uVar10 != 0) {
      fVar16 = (float)*(int *)(param_2 + uVar10);
    }
  }
  cocos2d::ui::TabControl::setHeaderWidth((TabControl *)param_1,fVar16);
  fVar16 = 0.0;
  if ((10 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), fVar16 = 0.0, uVar10 != 0)
     ) {
    fVar16 = (float)*(int *)(param_2 + uVar10);
  }
  cocos2d::ui::TabControl::setHeaderHeight((TabControl *)param_1,fVar16);
  fVar16 = 0.0;
  if ((0xc < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
     (uVar10 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc), fVar16 = 0.0, uVar10 != 0
     )) {
    fVar16 = *(float *)(param_2 + uVar10);
  }
  cocos2d::ui::TabControl::setHeaderSelectedZoom((TabControl *)param_1,fVar16);
  uVar15 = (ulong)*(ushort *)(param_2 + (0x12 - (long)*(int *)param_2));
  uVar10 = (ulong)*(uint *)(param_2 + uVar15);
  uVar2 = *(uint *)(param_2 + uVar15 + uVar10);
  if ((int)uVar2 < 1) {
    lVar11 = -(long)*(int *)param_2;
  }
  else {
    lVar13 = 0;
    pTVar9 = param_2 + 10;
    while( true ) {
      uVar14 = (ulong)*(uint *)(pTVar9 + uVar15 + uVar10 + -6);
      this_00 = TabHeaderReader::_tabheaderReaderInstance;
      if ((TabHeaderReader::_tabheaderReaderInstance == (Ref *)0x0) &&
         (this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow), this_00 != (Ref *)0x0)) {
        cocos2d::Ref::Ref(this_00);
        *(undefined ***)this_00 = &PTR__TabHeaderReader_016ce078;
        *(undefined ***)(this_00 + 0x28) = &PTR__TabHeaderReader_016ce0b0;
      }
      TabHeaderReader::_tabheaderReaderInstance = this_00;
      lVar11 = uVar15 + uVar10 + uVar14;
      if ((*(ushort *)(pTVar9 + (lVar11 - *(int *)(pTVar9 + lVar11 + -6)) + -6) < 5) ||
         ((ulong)*(ushort *)
                  (pTVar9 + ((uVar15 + uVar10 + uVar14) - (long)*(int *)(pTVar9 + lVar11 + -6)) + -2
                  ) == 0)) {
        pTVar7 = (Table *)0x0;
      }
      else {
        lVar1 = uVar15 + uVar10 + uVar14 +
                (ulong)*(ushort *)
                        (pTVar9 + ((uVar15 + uVar10 + uVar14) - (long)*(int *)(pTVar9 + lVar11 + -6)
                                  ) + -2);
        pTVar7 = pTVar9 + lVar1 + (ulong)*(uint *)(pTVar9 + lVar1 + -6) + -6;
      }
      pTVar4 = (TabHeader *)
               (**(code **)(*(long *)TabHeaderReader::_tabheaderReaderInstance + 0x20))
                         (TabHeaderReader::_tabheaderReaderInstance,pTVar7);
      this_01 = (CSLoader *)cocos2d::CSLoader::getInstance();
      if ((*(ushort *)
            (pTVar9 + ((uVar15 + uVar10 + uVar14) - (long)*(int *)(pTVar9 + lVar11 + -6)) + -6) < 7)
         || ((ulong)*(ushort *)
                     (pTVar9 + ((uVar15 + uVar10 + uVar14) - (long)*(int *)(pTVar9 + lVar11 + -6)))
             == 0)) {
        pNVar8 = (NodeTree *)0x0;
      }
      else {
        lVar11 = uVar15 + uVar10 + uVar14 +
                 (ulong)*(ushort *)
                         (pTVar9 + ((uVar15 + uVar10 + uVar14) -
                                   (long)*(int *)(pTVar9 + lVar11 + -6)));
        pNVar8 = (NodeTree *)(pTVar9 + lVar11 + (ulong)*(uint *)(pTVar9 + lVar11 + -6) + -6);
      }
      pLVar5 = (Layout *)cocos2d::CSLoader::nodeWithFlatBuffers(this_01,pNVar8);
      cocos2d::ui::TabControl::insertTab((TabControl *)param_1,(int)lVar13,pTVar4,pLVar5);
      lVar11 = -(long)*(int *)param_2;
      if ((ulong)uVar2 - 1 == lVar13) break;
      uVar15 = (ulong)*(ushort *)(param_2 + lVar11 + 0x12);
      lVar13 = lVar13 + 1;
      pTVar9 = pTVar9 + 4;
      uVar10 = (ulong)*(uint *)(param_2 + uVar15);
    }
  }
  if ((*(ushort *)(param_2 + lVar11) < 0xf) ||
     (uVar10 = (ulong)*(ushort *)(param_2 + lVar11 + 0xe), uVar10 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + uVar10);
  }
  cocos2d::ui::TabControl::setSelectTab((TabControl *)param_1,iVar6);
  return;
}

