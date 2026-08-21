
/* cocostudio::NodeReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::NodeReader::setPropsWithFlatBuffers(NodeReader *this,Node *param_1,Table *param_2)

{
  Table *pTVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  NodeReader *this_00;
  ulong uVar9;
  Table *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  Table TVar14;
  Table TVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_e8;
  float fStack_e4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  Color3B aCStack_c8 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) {
    pTVar10 = (Table *)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4);
    pTVar10 = (Table *)0x0;
    if (uVar9 != 0) {
      pTVar10 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,(char *)(pTVar10 + 4));
  pTVar10 = param_2 + -(long)*(int *)param_2;
  uVar4 = *(ushort *)pTVar10;
  if (uVar4 < 0x15) goto LAB_00cd5b1c;
  pTVar1 = (Table *)0x0;
  if (*(ushort *)(pTVar10 + 0x14) != 0) {
    pTVar1 = param_2 + *(ushort *)(pTVar10 + 0x14);
  }
  if (uVar4 < 0x17) goto LAB_00cd5b1c;
  fVar21 = *(float *)(param_2 + *(ushort *)(pTVar10 + 0x14));
  fVar20 = *(float *)(pTVar1 + 4);
  fVar19 = *(float *)(param_2 + *(ushort *)(pTVar10 + 8));
  fVar16 = *(float *)(param_2 + *(ushort *)(pTVar10 + 8) + 4);
  pTVar1 = (Table *)0x0;
  if (*(ushort *)(pTVar10 + 0x16) != 0) {
    pTVar1 = param_2 + *(ushort *)(pTVar10 + 0x16);
  }
  fVar2 = *(float *)(param_2 + *(ushort *)(pTVar10 + 0x12));
  fVar3 = *(float *)(param_2 + *(ushort *)(pTVar10 + 0x12) + 4);
  fVar17 = *(float *)(param_2 + *(ushort *)(pTVar10 + 0x16));
  fVar22 = *(float *)(pTVar1 + 4);
  if ((ulong)*(ushort *)(pTVar10 + 10) == 0) {
    iVar13 = 0;
    uVar9 = (ulong)*(ushort *)(pTVar10 + 0x10);
    if (uVar9 != 0) goto LAB_00cd5aa0;
LAB_00cd5af8:
    uVar12 = 0;
    uVar9 = (ulong)*(ushort *)(pTVar10 + 6);
    if (uVar9 != 0) goto LAB_00cd5aac;
LAB_00cd5b04:
    uVar11 = 0;
    uVar9 = (ulong)*(ushort *)(pTVar10 + 0xc);
    if (uVar9 != 0) goto LAB_00cd5ab8;
LAB_00cd5b10:
    TVar15 = (Table)0x1;
  }
  else {
    iVar13 = *(int *)(param_2 + *(ushort *)(pTVar10 + 10));
    uVar9 = (ulong)*(ushort *)(pTVar10 + 0x10);
    if (uVar9 == 0) goto LAB_00cd5af8;
LAB_00cd5aa0:
    uVar12 = *(undefined4 *)(param_2 + uVar9);
    uVar9 = (ulong)*(ushort *)(pTVar10 + 6);
    if (uVar9 == 0) goto LAB_00cd5b04;
LAB_00cd5aac:
    uVar11 = *(undefined4 *)(param_2 + uVar9);
    uVar9 = (ulong)*(ushort *)(pTVar10 + 0xc);
    if (uVar9 == 0) goto LAB_00cd5b10;
LAB_00cd5ab8:
    TVar15 = param_2[uVar9];
  }
  if (0x1a < uVar4) {
    fVar18 = *(float *)(param_2 + *(ushort *)(pTVar10 + 0x1a));
    pTVar1 = (Table *)0x0;
    if (*(ushort *)(pTVar10 + 0x1a) != 0) {
      pTVar1 = param_2 + *(ushort *)(pTVar10 + 0x1a);
    }
    fVar23 = *(float *)(pTVar1 + 4);
    if ((ulong)*(ushort *)(pTVar10 + 0xe) == 0) {
      TVar14 = (Table)0xff;
    }
    else {
      TVar14 = param_2[*(ushort *)(pTVar10 + 0xe)];
    }
    pTVar1 = (Table *)0x0;
    if (*(ushort *)(pTVar10 + 0x18) != 0) {
      pTVar1 = param_2 + *(ushort *)(pTVar10 + 0x18);
    }
    cocos2d::Color3B::Color3B
              (aCStack_c8,(uchar)pTVar1[1],(uchar)pTVar1[2],
               (uchar)(param_2 + *(ushort *)(pTVar10 + 0x18))[3]);
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x27) {
      pTVar10 = (Table *)0x0;
    }
    else {
      uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x26);
      pTVar10 = (Table *)0x0;
      if (uVar9 != 0) {
        pTVar10 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e0,(char *)(pTVar10 + 4));
    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,local_c0);
    local_e8 = fVar2;
    fStack_e4 = fVar3;
    (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_e8);
    if (fVar21 != 1.0) {
      (**(code **)(*(long *)param_1 + 0x50))(fVar21,param_1);
    }
    if (fVar20 != 1.0) {
      (**(code **)(*(long *)param_1 + 0x60))(fVar20,param_1);
    }
    if (fVar19 != 0.0) {
      (**(code **)(*(long *)param_1 + 0x1b0))(fVar19,param_1);
    }
    if (fVar16 != 0.0) {
      (**(code **)(*(long *)param_1 + 0x1d0))(fVar16,param_1);
    }
    if ((fVar17 != 0.5) || (fVar22 != 0.5)) {
      local_e8 = fVar17;
      fStack_e4 = fVar22;
      (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_e8);
    }
    if (iVar13 != 0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar13);
    }
    if (TVar15 == (Table)0x0) {
      (**(code **)(*(long *)param_1 + 0x170))(param_1,0);
    }
    cocos2d::Size::Size((Size *)&local_e8,fVar18,fVar23);
    (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_e8);
    if (TVar14 != (Table)0xff) {
      (**(code **)(*(long *)param_1 + 0x490))(param_1,TVar14);
    }
    (**(code **)(*(long *)param_1 + 0x4c0))(param_1,aCStack_c8);
    (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar12);
    plVar7 = (long *)ComExtensionData::create();
    (**(code **)(*plVar7 + 0x60))(plVar7,local_e0);
    (**(code **)(*plVar7 + 0x70))(plVar7,uVar11);
    lVar8 = cocos2d::Node::getComponent(param_1,(basic_string *)&ComExtensionData::COMPONENT_NAME);
    if (lVar8 != 0) {
      (**(code **)(*(long *)param_1 + 0x468))(param_1,&ComExtensionData::COMPONENT_NAME);
    }
    (**(code **)(*(long *)param_1 + 0x460))(param_1,plVar7);
    (**(code **)(*(long *)param_1 + 0x4d8))(param_1,1);
    this_00 = (NodeReader *)(**(code **)(*(long *)param_1 + 0x4a8))(param_1,1);
    setLayoutComponentPropsWithFlatBuffers(this_00,param_1,param_2);
    if (((byte)local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    if (((byte)local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00cd5b1c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0xcd5b20);
  (*pcVar6)();
}

