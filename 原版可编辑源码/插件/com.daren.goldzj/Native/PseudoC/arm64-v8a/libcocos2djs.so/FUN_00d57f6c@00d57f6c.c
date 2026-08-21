
void FUN_00d57f6c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  Bone **ppBVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  void *__src;
  void *__dest;
  long *plVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  long lVar9;
  Bone *pBVar10;
  __tree_node_base *p_Var11;
  ulong uVar12;
  Bone **ppBVar13;
  long lVar14;
  NodeProxy *pNVar15;
  __tree_node_base *p_Var16;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  NodeProxy *local_90;
  ulong local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  void *local_78;
  NodeProxy *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 != 0) {
    lVar14 = param_1[1];
    local_70 = (NodeProxy *)0x0;
    if (*(long *)(param_2 + 0x30) == 0) {
      local_70 = *(NodeProxy **)*param_1;
    }
    else if (DAT_01d3e770 != (__tree_node_base *)0x0) {
      uVar8 = *(ulong *)(*(long *)(param_2 + 0x30) + 0x180);
      p_Var7 = (__tree_node_base *)&DAT_01d3e770;
      p_Var11 = DAT_01d3e770;
      do {
        if (*(ulong *)(p_Var11 + 0x20) >= uVar8) {
          p_Var7 = p_Var11;
        }
        p_Var11 = *(__tree_node_base **)(p_Var11 + (ulong)(*(ulong *)(p_Var11 + 0x20) < uVar8) * 8);
      } while (p_Var11 != (__tree_node_base *)0x0);
      if ((p_Var7 != (__tree_node_base *)&DAT_01d3e770) && (*(ulong *)(p_Var7 + 0x20) <= uVar8)) {
        local_70 = *(NodeProxy **)(p_Var7 + 0x28);
      }
    }
    ppBVar13 = *(Bone ***)(param_2 + 0x60);
    ppBVar2 = *(Bone ***)(param_2 + 0x68);
    if (ppBVar13 != ppBVar2) {
      do {
        if (*(undefined8 **)(lVar14 + 0x18) == *(undefined8 **)(lVar14 + 0x20)) {
          std::__ndk1::vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>>::
          __push_back_slow_path<dragonBones::Bone*const&>
                    ((vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>> *)
                     (lVar14 + 0x10),ppBVar13);
        }
        else {
          **(undefined8 **)(lVar14 + 0x18) = *ppBVar13;
          *(long *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + 8;
        }
        local_78 = (void *)0x0;
        local_88 = CONCAT71(local_88._1_7_,0x1c);
        builtin_strncpy((char *)((ulong)&local_88 | 1),"ATTACHED_NODE:",0xe);
        uStack_79 = 0;
        lVar9 = *(long *)(*ppBVar13 + 0xa8);
        uVar8 = (ulong)(*(byte *)(lVar9 + 0x18) >> 1);
        pcVar5 = (char *)(lVar9 + 0x19);
        if ((*(byte *)(lVar9 + 0x18) & 1) != 0) {
          uVar8 = *(ulong *)(lVar9 + 0x20);
          pcVar5 = *(char **)(lVar9 + 0x28);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_88,pcVar5,uVar8);
        __src = local_78;
        uVar8 = *(ulong *)(*ppBVar13 + 0xc0);
        if (uVar8 == 0) {
          p_Var7 = (__tree_node_base *)&local_70;
LAB_00d58150:
          pNVar15 = *(NodeProxy **)p_Var7;
          local_90 = (NodeProxy *)0x0;
          if (pNVar15 != (NodeProxy *)0x0) {
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = (void *)0x0;
            if ((local_88 & 1) == 0) {
              uStack_a8 = CONCAT17(uStack_79,uStack_80);
              local_a0 = local_78;
              local_b0 = local_88;
            }
            else {
              uVar8 = CONCAT17(uStack_79,uStack_80);
              if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uVar8 < 0x17) {
                local_b0 = (ulong)(byte)((int)uStack_80 << 1);
                __dest = (void *)((ulong)&local_b0 | 1);
                if (uVar8 != 0) goto LAB_00d581d0;
              }
              else {
                uVar12 = uVar8 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar12);
                local_b0 = uVar12 | 1;
                uStack_a8 = uVar8;
                local_a0 = __dest;
LAB_00d581d0:
                memcpy(__dest,__src,uVar8);
              }
              *(undefined1 *)((long)__dest + uVar8) = 0;
            }
            local_90 = (NodeProxy *)cocos2d::renderer::NodeProxy::getChildByName(pNVar15,&local_b0);
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            if ((local_90 != (NodeProxy *)0x0) && (*(long *)(local_90 + 0x88) != 0)) {
              *(Ref *)(local_90 + 0x41) = (Ref)0x0;
              cocos2d::Ref::retain((Ref *)local_90);
              pNVar15 = local_90;
              p_Var7 = (__tree_node_base *)&DAT_01d3e770;
              p_Var11 = p_Var7;
              if (DAT_01d3e770 != (__tree_node_base *)0x0) {
                p_Var16 = DAT_01d3e770;
                do {
                  while (p_Var7 = p_Var16, *ppBVar13 < *(Bone **)(p_Var7 + 0x20)) {
                    p_Var16 = *(__tree_node_base **)p_Var7;
                    p_Var11 = p_Var7;
                    if (*(__tree_node_base **)p_Var7 == (__tree_node_base *)0x0) {
                      p_Var16 = *(__tree_node_base **)p_Var7;
                      if (p_Var16 != (__tree_node_base *)0x0) goto LAB_00d582fc;
                      goto LAB_00d5828c;
                    }
                  }
                  if (*ppBVar13 <= *(Bone **)(p_Var7 + 0x20)) break;
                  p_Var11 = p_Var7 + 8;
                  p_Var16 = *(__tree_node_base **)p_Var11;
                } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
              }
              p_Var16 = *(__tree_node_base **)p_Var11;
              if (p_Var16 == (__tree_node_base *)0x0) {
LAB_00d5828c:
                p_Var16 = operator_new(0x30);
                pBVar10 = *ppBVar13;
                *(undefined8 *)p_Var16 = 0;
                *(undefined8 *)(p_Var16 + 8) = 0;
                *(__tree_node_base **)(p_Var16 + 0x10) = p_Var7;
                *(Bone **)(p_Var16 + 0x20) = pBVar10;
                *(undefined8 *)(p_Var16 + 0x28) = 0;
                *(__tree_node_base **)p_Var11 = p_Var16;
                p_Var7 = p_Var16;
                if ((long *)*DAT_01d3e768 != (long *)0x0) {
                  p_Var7 = *(__tree_node_base **)p_Var11;
                  DAT_01d3e768 = (long *)*DAT_01d3e768;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (DAT_01d3e770,p_Var7);
                DAT_01d3e778 = DAT_01d3e778 + 1;
              }
LAB_00d582fc:
              *(NodeProxy **)(p_Var16 + 0x28) = pNVar15;
            }
          }
        }
        else {
          if (DAT_01d3e770 != (__tree_node_base *)0x0) {
            p_Var7 = (__tree_node_base *)&DAT_01d3e770;
            p_Var11 = DAT_01d3e770;
            do {
              if (*(ulong *)(p_Var11 + 0x20) >= uVar8) {
                p_Var7 = p_Var11;
              }
              p_Var11 = *(__tree_node_base **)
                         (p_Var11 + (ulong)(*(ulong *)(p_Var11 + 0x20) < uVar8) * 8);
            } while (p_Var11 != (__tree_node_base *)0x0);
            if ((p_Var7 != (__tree_node_base *)&DAT_01d3e770) &&
               (*(ulong *)(p_Var7 + 0x20) <= uVar8)) {
              p_Var7 = p_Var7 + 0x28;
              goto LAB_00d58150;
            }
          }
          local_90 = (NodeProxy *)0x0;
        }
        if (*(undefined8 **)(lVar14 + 0x48) == *(undefined8 **)(lVar14 + 0x50)) {
          std::__ndk1::
          vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
          ::__push_back_slow_path<cocos2d::renderer::NodeProxy*const&>
                    ((vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                      *)(lVar14 + 0x40),&local_90);
        }
        else {
          **(undefined8 **)(lVar14 + 0x48) = local_90;
          *(long *)(lVar14 + 0x48) = *(long *)(lVar14 + 0x48) + 8;
        }
        if (*(undefined8 **)(lVar14 + 0x30) == *(undefined8 **)(lVar14 + 0x38)) {
          std::__ndk1::
          vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
          ::__push_back_slow_path<cocos2d::renderer::NodeProxy*const&>
                    ((vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                      *)(lVar14 + 0x28),&local_70);
        }
        else {
          **(undefined8 **)(lVar14 + 0x30) = local_70;
          *(long *)(lVar14 + 0x30) = *(long *)(lVar14 + 0x30) + 8;
        }
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        ppBVar13 = ppBVar13 + 1;
      } while (ppBVar13 != ppBVar2);
    }
    plVar3 = *(long **)(param_2 + 0x80);
    uVar8 = local_88;
    for (plVar1 = *(long **)(param_2 + 0x78); local_88 = uVar8, plVar1 != plVar3;
        plVar1 = plVar1 + 1) {
      local_88 = *(ulong *)(*plVar1 + 0x178);
      if (local_88 != 0) {
        plVar6 = *(long **)(param_1[2] + 0x20);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_88);
        uVar8 = local_88;
      }
      local_88 = uVar8;
      uVar8 = local_88;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

