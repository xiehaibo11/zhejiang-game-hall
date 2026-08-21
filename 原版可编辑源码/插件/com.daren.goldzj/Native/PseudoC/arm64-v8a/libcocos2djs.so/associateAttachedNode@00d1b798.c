
/* spine::AttachUtilBase::associateAttachedNode(spine::Skeleton*, cocos2d::renderer::NodeProxy*) */

void __thiscall
spine::AttachUtilBase::associateAttachedNode
          (AttachUtilBase *this,Skeleton *param_1,NodeProxy *param_2)

{
  code *pcVar1;
  long lVar2;
  void *__src;
  int iVar3;
  Ref *pRVar4;
  BoneData *pBVar5;
  long lVar6;
  size_t sVar7;
  void *__dest;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
  *this_00;
  ulong uVar11;
  char *__s;
  Ref *pRVar12;
  Bone *pBVar13;
  ulong uVar14;
  undefined **local_e0;
  code *pcStack_d8;
  void *local_d0;
  NodeProxy *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined **local_a0;
  code *pcStack_98;
  void *local_90;
  undefined ***local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  this_00 = (vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
             *)(this + 0x10);
  puVar8 = *(undefined8 **)this_00;
  lVar10 = *(long *)(this + 0x18);
  if (lVar10 - (long)puVar8 != 0) {
    uVar11 = 0;
    pRVar4 = (Ref *)*puVar8;
    while( true ) {
      if (pRVar4 != (Ref *)0x0) {
        cocos2d::Ref::release(pRVar4);
      }
      uVar11 = uVar11 + 1;
      if ((ulong)(lVar10 - (long)puVar8 >> 3) <= uVar11) break;
      pRVar4 = *(Ref **)(*(long *)this_00 + uVar11 * 8);
    }
    puVar8 = *(undefined8 **)this_00;
  }
  *(undefined8 **)(this + 0x18) = puVar8;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if ((param_1 == (Skeleton *)0x0) || (param_2 == (NodeProxy *)0x0)) goto LAB_00d1baf4;
  uStack_a4 = 0;
  local_b8 = 0x24;
  uStack_a7 = 0x4545;
  uStack_af = 0x545f45444f4e5f;
  uStack_a8 = 0x52;
  uStack_b7 = 0x45484341545441;
  uStack_b0 = 0x44;
  uStack_a5 = 0;
  pRVar4 = (Ref *)cocos2d::renderer::NodeProxy::getChildByName(param_2,&local_b8);
  if ((local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT21(uStack_a7,uStack_a8))));
  }
  if ((pRVar4 == (Ref *)0x0) || (*(long *)(pRVar4 + 0x88) == 0)) goto LAB_00d1baf4;
  *(Ref **)(this + 0x28) = pRVar4;
  cocos2d::Ref::retain(pRVar4);
  lVar10 = *(long *)(this + 0x28);
  local_a0 = &PTR_FUN_01c694f0;
  *(undefined1 *)(lVar10 + 0x41) = 0;
  pcStack_98 = cocos2d::renderer::NodeProxy::visit;
  local_80 = &local_a0;
  FUN_00923dac(&local_a0,lVar10 + 0x10);
  if (&local_a0 == local_80) {
    pcVar9 = (code *)(*local_80)[4];
LAB_00d1b8f4:
    (*pcVar9)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_80)[5];
    goto LAB_00d1b8f4;
  }
  lVar10 = Skeleton::getBones(param_1);
  uVar11 = *(ulong *)(lVar10 + 8);
  if (uVar11 != 0) {
    uVar14 = 0;
    do {
      pBVar13 = *(Bone **)(*(long *)(lVar10 + 0x18) + uVar14 * 8);
      pBVar5 = (BoneData *)Bone::getData(pBVar13);
      local_a0 = (undefined **)CONCAT71(local_a0._1_7_,0x1c);
      local_90 = (void *)0x0;
      builtin_strncpy((char *)((ulong)&local_a0 | 1),"ATTACHED_NODE:",0xe);
      pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff);
      lVar6 = BoneData::getName(pBVar5);
      __s = *(char **)(lVar6 + 0x10);
      sVar7 = strlen(__s);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,__s,sVar7);
      lVar6 = Bone::getParent(pBVar13);
      pRVar12 = pRVar4;
      if (lVar6 == 0) {
LAB_00d1b9dc:
        __src = local_90;
        pcVar9 = pcStack_98;
        local_c0 = (NodeProxy *)0x0;
        if (pRVar12 != (Ref *)0x0) {
          local_e0 = (undefined **)0x0;
          pcStack_d8 = (code *)0x0;
          local_d0 = (void *)0x0;
          if (((ulong)local_a0 & 1) == 0) {
            local_d0 = local_90;
            pcStack_d8 = pcStack_98;
            local_e0 = local_a0;
          }
          else {
            if ((code *)0xffffffffffffffef < pcStack_98) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (pcStack_98 < (code *)0x17) {
              local_e0 = (undefined **)(ulong)(byte)((int)pcStack_98 << 1);
              __dest = (void *)((ulong)&local_e0 | 1);
              if (pcStack_98 != (code *)0x0) goto LAB_00d1ba64;
            }
            else {
              pcVar1 = pcStack_98 + 0x10;
              __dest = operator_new((ulong)pcVar1 & 0xfffffffffffffff0);
              local_e0 = (undefined **)((ulong)pcVar1 & 0xfffffffffffffff0 | 1);
              pcStack_d8 = pcVar9;
              local_d0 = __dest;
LAB_00d1ba64:
              memcpy(__dest,__src,(size_t)pcVar9);
            }
            *(code *)((long)__dest + (long)pcVar9) = (code)0x0;
          }
          local_c0 = (NodeProxy *)
                     cocos2d::renderer::NodeProxy::getChildByName((NodeProxy *)pRVar12,&local_e0);
          if (((ulong)local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
          if ((local_c0 != (NodeProxy *)0x0) && (*(long *)(local_c0 + 0x88) != 0)) {
            *(Ref *)(local_c0 + 0x41) = (Ref)0x0;
            cocos2d::Ref::retain((Ref *)local_c0);
          }
        }
      }
      else {
        pBVar13 = (Bone *)Bone::getParent(pBVar13);
        pBVar5 = (BoneData *)Bone::getData(pBVar13);
        iVar3 = BoneData::getIndex(pBVar5);
        if ((ulong)(long)iVar3 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
          pRVar12 = *(Ref **)(*(long *)(this + 0x10) + (long)iVar3 * 8);
          goto LAB_00d1b9dc;
        }
        local_c0 = (NodeProxy *)0x0;
      }
      if (*(undefined8 **)(this + 0x18) == *(undefined8 **)(this + 0x20)) {
        std::__ndk1::
        vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
        ::__push_back_slow_path<cocos2d::renderer::NodeProxy*const&>(this_00,&local_c0);
      }
      else {
        **(undefined8 **)(this + 0x18) = local_c0;
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
      }
      if (((ulong)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar11);
  }
LAB_00d1baf4:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

