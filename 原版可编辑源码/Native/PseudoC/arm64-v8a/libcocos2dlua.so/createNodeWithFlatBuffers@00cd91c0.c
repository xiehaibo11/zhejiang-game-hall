
/* cocostudio::GameMapReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

long * __thiscall
cocostudio::GameMapReader::createNodeWithFlatBuffers(GameMapReader *this,Table *param_1)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  __String *this_00;
  char *pcVar9;
  Size *pSVar10;
  ulong uVar11;
  Table *pTVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  Table *pTVar17;
  float fVar18;
  float fVar19;
  float local_b8;
  float fStack_b4;
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar11 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar11 == 0)) {
    pTVar17 = (Table *)0x0;
  }
  else {
    pTVar17 = param_1 + uVar11 + *(uint *)(param_1 + uVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"");
  if (*(ushort *)(pTVar17 + -(long)*(int *)pTVar17) < 5) {
    pTVar12 = (Table *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(pTVar17 + -(long)*(int *)pTVar17 + 4);
    pTVar12 = (Table *)0x0;
    if (uVar11 != 0) {
      pTVar12 = pTVar17 + uVar11 + *(uint *)(pTVar17 + uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,(char *)(pTVar12 + 4));
  if (((*(ushort *)(pTVar17 + -(long)*(int *)pTVar17) < 9) ||
      (uVar11 = (ulong)*(ushort *)(pTVar17 + -(long)*(int *)pTVar17 + 8), uVar11 == 0)) ||
     (*(int *)(pTVar17 + uVar11) == 0)) {
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar11 = (**(code **)(*plVar6 + 0x128))(plVar6,local_88);
    if ((uVar11 & 1) != 0) {
      lVar7 = cocos2d::TMXMapInfo::create((basic_string *)local_88);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a0,"");
      plVar6 = *(long **)(lVar7 + 0x50);
      plVar8 = *(long **)(lVar7 + 0x58);
      if (plVar6 != plVar8) {
LAB_00cd92e4:
        if (*(char *)(*plVar6 + 0x78) != '\0') {
          cocos2d::Size::Size((Size *)&local_b8,(Size *)(*plVar6 + 0x68));
          plVar2 = *(long **)(lVar7 + 0x68);
          plVar13 = *(long **)(lVar7 + 0x70);
          if ((0 < (long)plVar13 - (long)plVar2) && (plVar13 != plVar2)) {
            bVar5 = false;
            plVar13 = plVar13 + -1;
            lVar14 = *plVar13;
            do {
              if ((lVar14 != 0) && (0.0 < fStack_b4)) {
                iVar15 = 0;
                fVar18 = 0.0;
                do {
                  if (0.0 < local_b8) {
                    fVar19 = 0.0;
                    iVar16 = 1;
                    do {
                      uVar3 = *(uint *)(*(long *)(*plVar6 + 0x70) +
                                       (long)(int)(fVar19 + fVar18 * local_b8) * 4);
                      if ((uVar3 != 0) && (*(uint *)(lVar14 + 0x40) <= (uVar3 & 0x1fffffff))) {
                        bVar5 = true;
                        goto LAB_00cd932c;
                      }
                      fVar19 = (float)iVar16;
                      iVar16 = iVar16 + 1;
                    } while (fVar19 < local_b8);
                  }
                  if (bVar5) break;
                  iVar15 = iVar15 + 1;
                  fVar18 = (float)iVar15;
                } while (fVar18 < fStack_b4);
              }
LAB_00cd932c:
              if (plVar13 == plVar2) goto LAB_00cd92d4;
              plVar13 = plVar13 + -1;
              lVar14 = *plVar13;
            } while( true );
          }
          bVar5 = false;
          goto LAB_00cd9410;
        }
        bVar5 = true;
        goto LAB_00cd92d8;
      }
      goto LAB_00cd9448;
    }
    uVar11 = (ulong)((byte)local_88[0] >> 1);
    pcVar9 = (char *)((ulong)local_88 | 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar11 = local_80;
      pcVar9 = local_78;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_70,pcVar9,uVar11);
  }
  plVar6 = (long *)cocos2d::Node::create();
  (**(code **)(*(long *)this + 0x18))(this,plVar6,param_1);
LAB_00cd955c:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
LAB_00cd92d4:
  if (!bVar5) {
LAB_00cd9410:
    lVar7 = *plVar6;
    if (local_a0 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar7 + 0x50)) {
      uVar11 = *(ulong *)(lVar7 + 0x58);
      pcVar9 = *(char **)(lVar7 + 0x60);
      if ((*(byte *)(lVar7 + 0x50) & 1) == 0) {
        pcVar9 = (char *)(lVar7 + 0x51);
        uVar11 = (ulong)(*(byte *)(lVar7 + 0x50) >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_a0,pcVar9,uVar11);
    }
    goto LAB_00cd9444;
  }
LAB_00cd92d8:
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar8) goto LAB_00cd9444;
  goto LAB_00cd92e4;
LAB_00cd9444:
  if (bVar5) {
    plVar6 = (long *)cocos2d::TMXTiledMap::create((basic_string *)local_88);
    if (plVar6 != (long *)0x0) {
      pSVar10 = (Size *)(**(code **)(*plVar6 + 0x168))(plVar6);
      cocos2d::Size::Size((Size *)&local_b8,pSVar10);
      (**(code **)(*(long *)this + 0x18))(this,plVar6,param_1);
      (**(code **)(*plVar6 + 0x160))(plVar6,&local_b8);
    }
  }
  else {
LAB_00cd9448:
    plVar6 = (long *)cocos2d::Node::create();
    (**(code **)(*(long *)this + 0x18))(this,plVar6,param_1);
    plVar8 = (long *)cocos2d::Label::create();
    pvVar1 = (void *)((ulong)local_a0 | 1);
    if (((byte)local_a0[0] & 1) != 0) {
      pvVar1 = local_90;
    }
    this_00 = (__String *)
              cocos2d::__String::createWithFormat
                        ("Some error of gid are in TMX Layer \'%s\'",pvVar1);
    pcVar9 = (char *)cocos2d::__String::getCString(this_00);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,pcVar9);
    (**(code **)(*plVar8 + 0x588))(plVar8,&local_b8);
    if (((byte)local_b8._0_1_ & 1) != 0) {
      operator_delete(local_a8);
    }
    (**(code **)(*plVar6 + 0x80))(0x3f800000,plVar6);
    (**(code **)(*plVar6 + 0x208))(plVar6,plVar8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  goto LAB_00cd955c;
}

