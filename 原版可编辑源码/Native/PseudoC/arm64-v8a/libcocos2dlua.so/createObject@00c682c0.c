
/* cocostudio::SceneReader::createObject(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocos2d::Node*, cocostudio::SceneReader::AttachComponentType) */

Node * __thiscall
cocostudio::SceneReader::createObject
          (SceneReader *this,CocoLoader *param_1,stExpCocoNode *param_2,long *param_3,int param_5)

{
  void *pvVar1;
  long lVar2;
  Component *pCVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  stExpCocoNode *psVar8;
  SceneReader *pSVar9;
  long lVar10;
  ulong uVar11;
  Ref *pRVar12;
  long *plVar13;
  SceneReader *this_00;
  SceneReader *extraout_x0;
  SceneReader *extraout_x0_00;
  Ref *this_01;
  undefined8 *puVar14;
  ulong uVar15;
  SceneReader *pSVar16;
  Node *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [16];
  void *local_f0;
  Component *local_e8;
  Ref *local_e0;
  ulong local_d8;
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  void *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  void *local_88;
  SceneReader *local_80;
  Ref *pRStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar6 = stExpCocoNode::GetChildArray(param_2,param_1);
  pcVar7 = (char *)stExpCocoNode::GetName((stExpCocoNode *)(lVar6 + 0x10),param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,pcVar7);
  uVar15 = (ulong)((byte)local_98[0] >> 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar15 = local_90;
  }
  if (uVar15 == 9) {
    pvVar1 = (void *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      pvVar1 = local_88;
    }
    iVar4 = memcmp(pvVar1,"classname",9);
    if (iVar4 != 0) goto LAB_00c6836c;
    pcVar7 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar6 + 0x10),param_1);
  }
  else {
LAB_00c6836c:
    pcVar7 = (char *)0x0;
  }
  iVar4 = strcmp(pcVar7,"CCNode");
  if (iVar4 != 0) {
    this_02 = (Node *)0x0;
    goto joined_r0x00c68784;
  }
  psVar8 = (stExpCocoNode *)(lVar6 + 0xd0);
  local_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  pcVar7 = (char *)stExpCocoNode::GetName(psVar8,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,pcVar7);
  uVar15 = (ulong)((byte)local_c8[0] >> 1);
  if (((byte)local_c8[0] & 1) != 0) {
    uVar15 = local_c0;
  }
  if (uVar15 == 10) {
    pvVar1 = (void *)((ulong)local_c8 | 1);
    if (((byte)local_c8[0] & 1) != 0) {
      pvVar1 = local_b8;
    }
    iVar4 = memcmp(pvVar1,"components",10);
    if (iVar4 != 0) goto LAB_00c683f8;
    uVar5 = stExpCocoNode::GetChildNum(psVar8);
  }
  else {
LAB_00c683f8:
    uVar5 = 0;
  }
  psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar8,param_1);
  pSVar9 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (pSVar9 == (SceneReader *)0x0) {
    pSVar16 = (SceneReader *)0x0;
    if (0 < (int)uVar5) goto LAB_00c68444;
LAB_00c68604:
    this_01 = (Ref *)0x0;
    this_00 = pSVar9;
  }
  else {
    *(undefined8 *)pSVar9 = 0;
    *(undefined8 *)(pSVar9 + 8) = 0;
    *(undefined8 *)(pSVar9 + 0x10) = 0;
    pSVar16 = pSVar9;
    if ((int)uVar5 < 1) goto LAB_00c68604;
LAB_00c68444:
    this_01 = (Ref *)0x0;
    uVar15 = (ulong)uVar5;
    do {
      lVar10 = stExpCocoNode::GetChildArray(psVar8,param_1);
      if (lVar10 == 0) {
        this_00 = (SceneReader *)0x0;
      }
      else {
        pcVar7 = (char *)stExpCocoNode::GetName((stExpCocoNode *)(lVar10 + 0x10),param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,pcVar7);
        pcVar7 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar10 + 0x10),param_1);
        local_e8 = (Component *)0x0;
        uVar11 = (ulong)local_e0 >> 1 & 0x7f;
        if (((ulong)local_e0 & 1) != 0) {
          uVar11 = local_d8;
        }
        pRVar12 = this_01;
        if (uVar11 == 9) {
          pvVar1 = (void *)((ulong)&local_e0 | 1);
          if (((ulong)local_e0 & 1) != 0) {
            pvVar1 = local_d0;
          }
          iVar4 = memcmp(pvVar1,"classname",9);
          if ((pcVar7 != (char *)0x0) && (iVar4 == 0)) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_100,pcVar7);
            local_e8 = (Component *)createComponent(this,local_100);
            if (((byte)local_100[0] & 1) != 0) {
              operator_delete(local_f0);
            }
            if (local_e8 != (Component *)0x0) {
              *(undefined8 *)pSVar16 = 0;
              *(long *)(pSVar16 + 8) = lVar10;
              *(CocoLoader **)(pSVar16 + 0x10) = param_1;
              uVar11 = (**(code **)(*(long *)local_e8 + 0x38))(local_e8,pSVar9);
              pCVar3 = local_e8;
              if ((uVar11 & 1) == 0) {
                if (local_e8 != (Component *)0x0) {
                  cocos2d::Ref::release((Ref *)local_e8);
                  local_e8 = (Component *)0x0;
                }
              }
              else if ((local_e8 == (Component *)0x0) ||
                      (pRVar12 = (Ref *)__dynamic_cast(local_e8,&cocos2d::Component::typeinfo,
                                                       &ComRender::typeinfo,0),
                      pRVar12 == (Ref *)0x0)) {
                if (local_a8 == puStack_a0) {
                  std::__ndk1::
                  vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>::
                  __push_back_slow_path<cocos2d::Component*const&>
                            ((vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>
                              *)&local_b0,&local_e8);
                  pRVar12 = this_01;
                }
                else {
                  *local_a8 = pCVar3;
                  pRVar12 = this_01;
                  local_a8 = local_a8 + 1;
                }
              }
            }
          }
        }
        plVar13 = *(long **)(this + 0x30);
        this_00 = (SceneReader *)0x0;
        if (plVar13 != (long *)0x0) {
          pRStack_78 = (Ref *)local_e8;
          local_80 = pSVar9;
          this_00 = (SceneReader *)(**(code **)(*plVar13 + 0x30))(plVar13,&pRStack_78,&local_80);
        }
        this_01 = pRVar12;
        if (((ulong)local_e0 & 1) != 0) {
          operator_delete(local_d0);
          this_00 = extraout_x0;
        }
      }
      uVar15 = uVar15 - 1;
      psVar8 = psVar8 + 0x10;
    } while (uVar15 != 0);
  }
  if (pSVar16 != (SceneReader *)0x0) {
    operator_delete(pSVar9);
    this_00 = extraout_x0_00;
  }
  if (param_3 == (long *)0x0) {
    this_02 = (Node *)0x0;
  }
  else {
    if ((param_5 == 0) || (this_01 == (Ref *)0x0)) {
      this_02 = (Node *)cocos2d::Node::create();
      if (this_01 != (Ref *)0x0) {
        local_e0 = this_01;
        if (local_a8 < puStack_a0) {
          *local_a8 = this_01;
          local_a8 = local_a8 + 1;
        }
        else {
          std::__ndk1::vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>::
          __push_back_slow_path<cocos2d::Component*>
                    ((vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>> *)
                     &local_b0,(Component **)&local_e0);
        }
      }
    }
    else {
      this_02 = (Node *)(**(code **)(*(long *)this_01 + 0x60))(this_01);
      cocos2d::Ref::retain((Ref *)this_02);
      (**(code **)(*(long *)this_01 + 0x68))(this_01,0);
      cocos2d::Ref::release(this_01);
    }
    this_00 = (SceneReader *)(**(code **)(*param_3 + 0x208))(param_3,this_02);
  }
  setPropertyFromJsonDict(this_00,param_1,param_2,this_02);
  puVar14 = local_b0;
  if (local_b0 != local_a8) {
    do {
      (**(code **)(*(long *)this_02 + 0x460))(this_02,*puVar14);
      puVar14 = puVar14 + 1;
    } while (puVar14 != local_a8);
  }
  lVar10 = stExpCocoNode::GetChildArray((stExpCocoNode *)(lVar6 + 0xc0),param_1);
  if ((lVar10 != 0) &&
     (uVar5 = stExpCocoNode::GetChildNum((stExpCocoNode *)(lVar6 + 0xc0)), 0 < (int)uVar5)) {
    uVar15 = (ulong)uVar5;
    do {
      createObject(this,param_1,lVar10,this_02,param_5);
      uVar15 = uVar15 - 1;
      lVar10 = lVar10 + 0x10;
    } while (uVar15 != 0);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
joined_r0x00c68784:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_02;
}

