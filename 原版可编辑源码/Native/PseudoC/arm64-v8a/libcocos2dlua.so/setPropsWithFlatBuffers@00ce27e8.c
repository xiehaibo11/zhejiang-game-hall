
/* cocostudio::Sprite3DReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::Sprite3DReader::setPropsWithFlatBuffers
          (Sprite3DReader *this,Node *param_1,Table *param_2)

{
  Table *pTVar1;
  Table *pTVar2;
  Table TVar3;
  Table TVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  Animation3D *pAVar10;
  ActionInterval *pAVar11;
  undefined8 uVar12;
  Table *pTVar13;
  Table TVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  pTVar13 = param_2 + -(long)*(int *)param_2;
  uVar5 = *(ushort *)pTVar13;
  if (uVar5 < 0xd) {
    if (8 < uVar5) goto LAB_00ce284c;
    iVar16 = 0;
    iVar17 = 0;
    bVar8 = true;
    if (uVar5 < 7) {
      pTVar13 = (Table *)0x0;
      bVar7 = true;
      goto LAB_00ce289c;
    }
    bVar7 = true;
    uVar15 = (ulong)*(ushort *)(pTVar13 + 6);
    if (uVar15 == 0) {
      pTVar13 = (Table *)0x0;
      iVar17 = iVar16;
      goto LAB_00ce289c;
    }
  }
  else {
    if ((ulong)*(ushort *)(pTVar13 + 0xc) == 0) {
LAB_00ce284c:
      iVar16 = 0;
      uVar15 = (ulong)*(ushort *)(pTVar13 + 8);
      TVar14 = (Table)0x0;
      if (uVar15 != 0) goto LAB_00ce2858;
    }
    else {
      iVar16 = *(int *)(param_2 + *(ushort *)(pTVar13 + 0xc));
      uVar15 = (ulong)*(ushort *)(pTVar13 + 8);
      if (uVar15 == 0) {
        TVar14 = (Table)0x0;
      }
      else {
LAB_00ce2858:
        TVar14 = param_2[uVar15];
      }
    }
    bVar7 = TVar14 == (Table)0x0;
    if (uVar5 < 0xb) {
      TVar14 = (Table)0x0;
    }
    else {
      TVar14 = (Table)0x0;
      if ((ulong)*(ushort *)(pTVar13 + 10) != 0) {
        TVar14 = param_2[*(ushort *)(pTVar13 + 10)];
      }
    }
    bVar8 = TVar14 == (Table)0x0;
    uVar15 = (ulong)*(ushort *)(pTVar13 + 6);
    pTVar13 = (Table *)0x0;
    iVar17 = iVar16;
    if (uVar15 == 0) goto LAB_00ce289c;
  }
  pTVar13 = param_2 + uVar15 + *(uint *)(param_2 + uVar15);
  iVar17 = iVar16;
LAB_00ce289c:
  if ((*(ushort *)(pTVar13 + -(long)*(int *)pTVar13) < 5) ||
     (uVar15 = (ulong)*(ushort *)(pTVar13 + -(long)*(int *)pTVar13 + 4), uVar15 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = pTVar13 + uVar15 + *(uint *)(pTVar13 + uVar15);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,(char *)(pTVar13 + 4));
  if (!bVar7) {
    plVar9 = (long *)cocos2d::FileUtils::getInstance();
    uVar15 = (**(code **)(*plVar9 + 0x128))(plVar9,local_70);
    if ((uVar15 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,"");
      pAVar10 = (Animation3D *)
                cocos2d::Animation3D::create((basic_string *)local_70,(basic_string *)local_88);
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (pAVar10 != (Animation3D *)0x0) {
        pAVar11 = (ActionInterval *)cocos2d::Animate3D::create(pAVar10);
        uVar12 = cocos2d::RepeatForever::create(pAVar11);
        (**(code **)(*(long *)param_1 + 0x3a8))(param_1,uVar12);
      }
    }
  }
  pTVar13 = param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)) +
            *(uint *)(param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)));
  pTVar13 = pTVar13 + *(ushort *)(pTVar13 + (4 - (long)*(int *)pTVar13)) +
            *(uint *)(pTVar13 + *(ushort *)(pTVar13 + (4 - (long)*(int *)pTVar13)));
  pTVar1 = pTVar13 + *(ushort *)(pTVar13 + (0x18 - (long)*(int *)pTVar13));
  pTVar2 = (Table *)0x0;
  if (*(ushort *)(pTVar13 + (0x18 - (long)*(int *)pTVar13)) != 0) {
    pTVar2 = pTVar1;
  }
  TVar14 = pTVar2[1];
  TVar3 = pTVar2[2];
  TVar4 = pTVar1[3];
  if (*pTVar1 != (Table)0xff) {
    (**(code **)(*(long *)param_1 + 0x490))(param_1);
  }
  if ((((byte)TVar3 & (byte)TVar14) != 0xff) || (TVar4 != (Table)0xff)) {
    cocos2d::Color3B::Color3B((Color3B *)local_88,(uchar)TVar14,(uchar)TVar3,(uchar)TVar4);
    (**(code **)(*(long *)param_1 + 0x4c0))(param_1,local_88);
  }
  if (!bVar8) {
    cocos2d::Sprite3D::setCullFaceEnabled((Sprite3D *)param_1,true);
    cocos2d::Sprite3D::setCullFace((Sprite3D *)param_1,0x404);
  }
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  *(int *)(param_1 + 0x3c4) = iVar17;
  plVar9 = (long *)Node3DReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar15 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar15 == 0)) {
    pTVar13 = (Table *)0x0;
  }
  else {
    pTVar13 = param_2 + uVar15 + *(uint *)(param_2 + uVar15);
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,param_1,pTVar13);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

