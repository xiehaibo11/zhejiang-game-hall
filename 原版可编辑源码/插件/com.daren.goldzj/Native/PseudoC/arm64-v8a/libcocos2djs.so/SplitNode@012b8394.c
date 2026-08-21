
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::ScheduleLateNodeVisitor::SplitNode(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

BasicBlock * __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::SplitNode
          (ScheduleLateNodeVisitor *this,BasicBlock *param_1,Node *param_2)

{
  Use *pUVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  BasicBlock *pBVar6;
  BasicBlock *pBVar7;
  Node *this_00;
  __tree_node_base *p_Var8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Use *pUVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  void *__s;
  Use *pUVar16;
  size_t __n;
  long *plVar17;
  Use *pUVar18;
  __tree_node_base *p_Var19;
  __tree_node_base *p_Var20;
  Node *this_01;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  Zone *local_70;
  long local_68;
  
  if ((((~*(byte *)(*(long *)param_2 + 0x12) & 0x7c) == 0) &&
      (*(short *)(*(long *)param_2 + 0x10) != 0x37)) &&
     (1 < (ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3))) {
    __s = *(void **)(this + 0x18);
    uVar14 = *(ulong *)(this + 0x20);
    if (uVar14 != 0) {
      __n = (uVar14 >> 6) * 8;
      memset(__s,0,__n);
      if ((uVar14 & 0x3f) != 0) {
        *(ulong *)((long)__s + __n) =
             *(ulong *)((long)__s + __n) &
             (0xffffffffffffffffU >> (-(uVar14 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
      }
    }
    std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize
              ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x18),
               (*(long *)(*(long *)(this + 0x10) + 0x10) - *(long *)(*(long *)(this + 0x10) + 8) >>
               3) + 1,false);
    plVar17 = (long *)*(long *)(param_2 + 0x18);
    while (plVar5 = plVar17, plVar5 != (long *)0x0) {
      uVar2 = *(uint *)(plVar5 + 2);
      plVar17 = (long *)*plVar5;
      puVar9 = plVar5 + (ulong)(uVar2 >> 1) * 3 + 3;
      lVar10 = 0x10;
      if ((uVar2 & 1) != 0) {
        lVar10 = 0x20;
      }
      puVar11 = puVar9;
      if ((uVar2 & 1) == 0) {
        puVar11 = (undefined8 *)*puVar9;
      }
      if (((*(int *)(*(long *)(*(long *)(this + 8) + 0xb0) +
                     ((ulong)*(uint *)((long)puVar11 + 0x14) & 0xffffff) * 0x10 + 0xc) != 0) &&
          (pBVar6 = (BasicBlock *)
                    GetBlockForUse(this,plVar5,(long)puVar9 + (ulong)(uVar2 >> 1) * 8 + lVar10),
          pBVar6 != (BasicBlock *)0x0)) &&
         ((*(ulong *)(*(long *)(this + 0x18) + (*(ulong *)(pBVar6 + 0xa0) >> 3 & 0x1ffffffffffffff8)
                     ) >> (*(ulong *)(pBVar6 + 0xa0) & 0x3f) & 1) == 0)) {
        if (pBVar6 == param_1) {
          if (FLAG_trace_turbo_scheduler != '\0') {
            PrintF("  not splitting #%d:%s, it is used in id:%d\n",
                   (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)param_2 + 8),(ulong)*(uint *)(param_1 + 0xa0));
          }
          std::__ndk1::
          __deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
          ::clear((__deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                   *)(this + 0x38));
          return param_1;
        }
        MarkBlock(this,pBVar6);
      }
    }
    lVar10 = *(long *)(this + 0x70);
    do {
      uVar14 = *(ulong *)(this + 0x68);
      puVar9 = *(undefined8 **)(this + 0x40);
      pBVar6 = *(BasicBlock **)
                (*(long *)((long)puVar9 + (uVar14 >> 6 & 0x3fffffffffffff8)) + (uVar14 & 0x1ff) * 8)
      ;
      uVar14 = uVar14 + 1;
      *(ulong *)(this + 0x68) = uVar14;
      *(long *)(this + 0x70) = lVar10 + -1;
      if (0x3ff < uVar14) {
        puVar11 = (undefined8 *)*puVar9;
        if ((*(long *)(this + 0x80) == 0) || (*(ulong *)(*(long *)(this + 0x80) + 8) < 0x201)) {
          puVar11[1] = 0x200;
          *puVar11 = *(undefined8 *)(this + 0x80);
          puVar9 = *(undefined8 **)(this + 0x40);
          uVar14 = *(ulong *)(this + 0x68);
          *(undefined8 **)(this + 0x80) = puVar11;
        }
        *(undefined8 **)(this + 0x40) = puVar9 + 1;
        *(ulong *)(this + 0x68) = uVar14 - 0x200;
      }
      if ((*(ulong *)(*(long *)(this + 0x18) + (*(ulong *)(pBVar6 + 0xa0) >> 3 & 0x1ffffffffffffff8)
                     ) >> (*(ulong *)(pBVar6 + 0xa0) & 0x3f) & 1) == 0) {
        if (*(long **)(pBVar6 + 0x60) != *(long **)(pBVar6 + 0x68)) {
          bVar4 = true;
          plVar17 = *(long **)(pBVar6 + 0x60);
          do {
            uVar14 = *(ulong *)(*(long *)(this + 0x18) +
                               (*(ulong *)(*plVar17 + 0xa0) >> 3 & 0x1ffffffffffffff8));
            uVar13 = 1L << (*(ulong *)(*plVar17 + 0xa0) & 0x3f);
            bVar4 = (bool)(bVar4 & (uVar13 & uVar14) != 0);
            if (*(long **)(pBVar6 + 0x68) + -1 == plVar17) break;
            plVar17 = plVar17 + 1;
          } while ((uVar13 & uVar14) != 0);
          if (!bVar4) goto LAB_012b8524;
        }
        MarkBlock(this,pBVar6);
      }
LAB_012b8524:
      lVar10 = *(long *)(this + 0x70);
    } while (lVar10 != 0);
    if ((*(ulong *)(*(long *)(this + 0x18) + (*(ulong *)(param_1 + 0xa0) >> 3 & 0x1ffffffffffffff8))
         >> (*(ulong *)(param_1 + 0xa0) & 0x3f) & 1) == 0) {
      puVar9 = *(undefined8 **)(this + 8);
      local_70 = (Zone *)*puVar9;
      local_78 = (__tree_node_base *)0x0;
      local_68 = 0;
      pUVar18 = *(Use **)(param_2 + 0x18);
      local_80 = (__tree_node_base *)&local_78;
      if (pUVar18 != (Use *)0x0) {
        do {
          uVar2 = *(uint *)(pUVar18 + 0x10);
          pUVar16 = *(Use **)pUVar18;
          pUVar1 = pUVar18 + (ulong)(uVar2 >> 1) * 0x18 + 0x18;
          lVar10 = 0x10;
          if ((uVar2 & 1) != 0) {
            lVar10 = 0x20;
          }
          pUVar12 = pUVar1;
          if ((uVar2 & 1) == 0) {
            pUVar12 = *(Use **)pUVar1;
          }
          if (*(int *)(puVar9[0x16] + ((ulong)*(uint *)(pUVar12 + 0x14) & 0xffffff) * 0x10 + 0xc) !=
              0) {
            pUVar1 = pUVar1 + (ulong)(uVar2 >> 1) * 8 + lVar10;
            pBVar6 = (BasicBlock *)GetBlockForUse(this,pUVar18,pUVar1);
            if (pBVar6 != (BasicBlock *)0x0) {
              do {
                pBVar7 = pBVar6;
                uVar14 = *(ulong *)(*(BasicBlock **)(pBVar7 + 0x10) + 0xa0);
                pBVar6 = *(BasicBlock **)(pBVar7 + 0x10);
                p_Var20 = (__tree_node_base *)&local_78;
                p_Var8 = (__tree_node_base *)&local_78;
                p_Var19 = local_78;
              } while ((*(ulong *)(*(long *)(this + 0x18) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                        (uVar14 & 0x3f) & 1) != 0);
              while (p_Var19 != (__tree_node_base *)0x0) {
                while (p_Var8 = p_Var19, pBVar7 < *(BasicBlock **)(p_Var8 + 0x20)) {
                  p_Var19 = *(__tree_node_base **)p_Var8;
                  p_Var20 = p_Var8;
                  if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
                    p_Var19 = *(__tree_node_base **)p_Var8;
                    goto joined_r0x012b8768;
                  }
                }
                if (pBVar7 <= *(BasicBlock **)(p_Var8 + 0x20)) break;
                p_Var20 = p_Var8 + 8;
                p_Var19 = *(__tree_node_base **)(p_Var8 + 8);
              }
              p_Var19 = *(__tree_node_base **)p_Var20;
joined_r0x012b8768:
              if (p_Var19 == (__tree_node_base *)0x0) {
                p_Var19 = *(__tree_node_base **)(local_70 + 0x10);
                if ((ulong)(*(long *)(local_70 + 0x18) - (long)p_Var19) < 0x30) {
                  p_Var19 = (__tree_node_base *)Zone::NewExpand(local_70,0x30);
                }
                else {
                  *(__tree_node_base **)(local_70 + 0x10) = p_Var19 + 0x30;
                }
                *(BasicBlock **)(p_Var19 + 0x20) = pBVar7;
                *(undefined8 *)(p_Var19 + 0x28) = 0;
                *(undefined8 *)p_Var19 = 0;
                *(undefined8 *)(p_Var19 + 8) = 0;
                *(__tree_node_base **)(p_Var19 + 0x10) = p_Var8;
                *(__tree_node_base **)p_Var20 = p_Var19;
                p_Var8 = p_Var19;
                if (*(__tree_node_base **)local_80 != (__tree_node_base *)0x0) {
                  p_Var8 = *(__tree_node_base **)p_Var20;
                  local_80 = *(__tree_node_base **)local_80;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_78,p_Var8);
                local_68 = local_68 + 1;
                this_01 = *(Node **)(p_Var19 + 0x28);
              }
              else {
                this_01 = *(Node **)(p_Var19 + 0x28);
              }
              if (this_01 == (Node *)0x0) {
                if (local_68 == 1) {
                  *(Node **)(p_Var19 + 0x28) = param_2;
                  this_01 = param_2;
                  param_1 = pBVar7;
                  if (FLAG_trace_turbo_scheduler == '\0') goto LAB_012b88d4;
                  PrintF("  pushing #%d:%s down to id:%d\n",
                         (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),
                         *(undefined8 *)(*(long *)param_2 + 8),(ulong)*(uint *)(pBVar7 + 0xa0));
                }
                else {
                  plVar17 = (long *)CloneNode(this,param_2);
                  *(long **)(p_Var19 + 0x28) = plVar17;
                  if (FLAG_trace_turbo_scheduler != '\0') {
                    PrintF("  cloning #%d:%s for id:%d\n",
                           (ulong)(*(uint *)((long)plVar17 + 0x14) & 0xffffff),
                           *(undefined8 *)(*plVar17 + 8),(ulong)*(uint *)(pBVar7 + 0xa0));
                  }
                  lVar15 = *(long *)(this + 8);
                  lVar10 = *(long *)(lVar15 + 0x68);
                  lVar3 = *(long *)(lVar15 + 0x70) - lVar10;
                  uVar14 = 0;
                  if (lVar3 != 0) {
                    uVar14 = lVar3 * 0x40 - 1;
                  }
                  uVar13 = *(long *)(lVar15 + 0x98) + *(long *)(lVar15 + 0x90);
                  if (uVar14 == uVar13) {
                    std::__ndk1::
                    deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                    ::__add_back_capacity
                              ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                                *)(lVar15 + 0x60));
                    lVar10 = *(long *)(lVar15 + 0x68);
                    uVar13 = *(long *)(lVar15 + 0x90) + *(long *)(lVar15 + 0x98);
                  }
                  *(undefined8 *)
                   (*(long *)(lVar10 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) =
                       *(undefined8 *)(p_Var19 + 0x28);
                  *(long *)(lVar15 + 0x98) = *(long *)(lVar15 + 0x98) + 1;
                }
                this_01 = *(Node **)(p_Var19 + 0x28);
              }
LAB_012b88d4:
              this_00 = *(Node **)pUVar1;
              if (this_00 != this_01) {
                if (this_00 != (Node *)0x0) {
                  Node::RemoveUse(this_00,pUVar18);
                }
                *(Node **)pUVar1 = this_01;
                if (this_01 != (Node *)0x0) {
                  Node::AppendUse(this_01,pUVar18);
                }
              }
            }
          }
          if (pUVar16 == (Use *)0x0) break;
          puVar9 = *(undefined8 **)(this + 8);
          pUVar18 = pUVar16;
        } while( true );
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::BasicBlock*,std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::BasicBlock*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::BasicBlock*,std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::BasicBlock*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>>>
                 *)&local_80,(__tree_node *)local_78);
    }
    else if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("  not splitting #%d:%s, its common dominator id:%d is perfect\n",
             (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_2 + 8));
    }
  }
  return param_1;
}

