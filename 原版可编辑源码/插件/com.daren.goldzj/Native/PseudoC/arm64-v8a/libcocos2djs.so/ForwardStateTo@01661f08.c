
/* v8::internal::compiler::LinearScanAllocator::ForwardStateTo(v8::internal::compiler::LifetimePosition)
    */

void __thiscall
v8::internal::compiler::LinearScanAllocator::ForwardStateTo(LinearScanAllocator *this,int param_2)

{
  ulong uVar1;
  LinearScanAllocator *pLVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  __tree_node_base *p_Var15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  Zone *pZVar21;
  LinearScanAllocator *pLVar22;
  long lVar23;
  __tree_node_base *p_Var24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  int local_68;
  int local_64;
  
  pLVar22 = this + 0x88;
  if (*(int *)pLVar22 <= param_2) {
    puVar4 = *(undefined8 **)(this + 0x48);
    puVar11 = *(undefined8 **)(this + 0x50);
    *(undefined4 *)(this + 0x88) = 0x7fffffff;
    if (puVar11 != puVar4) {
      do {
        puVar7 = (uint *)*puVar4;
        if (param_2 < *(int *)(*(long *)(puVar7 + 2) + 4)) {
          puVar12 = puVar7 + 4;
          if ((*(int **)puVar12 != (int *)0x0) && (**(int **)puVar12 <= param_2)) {
            puVar7 = puVar7 + 0xc;
            puVar14 = *(uint **)puVar7;
            puVar17 = puVar12;
            if ((puVar14 != (uint *)0x0) && (puVar17 = puVar7, param_2 < (int)*puVar14)) {
              puVar14 = (uint *)0x0;
              puVar7[0] = 0;
              puVar7[1] = 0;
              puVar17 = puVar12;
            }
            puVar17 = *(uint **)puVar17;
            if (puVar17 != (uint *)0x0) {
LAB_01661fe0:
              uVar18 = *puVar17;
              if ((int)uVar18 <= param_2) {
                puVar14 = *(uint **)puVar7;
                if (puVar14 == (uint *)0x0) {
                  if (uVar18 < 0x80000000) goto LAB_01662000;
                }
                else if ((int)*puVar14 < (int)uVar18) {
LAB_01662000:
                  *(uint **)puVar7 = puVar17;
                  uVar18 = *puVar17;
                  puVar14 = puVar17;
                }
              }
              if ((int)uVar18 <= param_2) {
                if ((int)puVar17[1] <= param_2) goto code_r0x01662020;
                puVar17 = puVar12;
                if ((puVar14 != (uint *)0x0) && (puVar17 = puVar7, param_2 < (int)*puVar14)) {
                  puVar7[0] = 0;
                  puVar7[1] = 0;
                  puVar17 = puVar12;
                }
                do {
                  local_64 = *(int *)(*(long *)puVar17 + 4);
                  puVar17 = (uint *)(*(long *)puVar17 + 8);
                } while (local_64 < param_2);
                puVar4 = puVar4 + 1;
                pLVar2 = (LinearScanAllocator *)&local_64;
                if (*(int *)pLVar22 <= local_64) {
                  pLVar2 = pLVar22;
                }
                *(int *)pLVar22 = *(int *)pLVar2;
                goto LAB_01661f7c;
              }
            }
          }
LAB_01661f68:
          puVar4 = (undefined8 *)ActiveToInactive(this,puVar4,param_2);
        }
        else {
          if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
            PrintF("Moving live range %d:%d from active to handled\n",
                   (ulong)*(uint *)(*(long *)(puVar7 + 8) + 0x5c),(ulong)*puVar7);
            puVar11 = *(undefined8 **)(this + 0x50);
          }
          __n = (long)puVar11 - (long)(puVar4 + 1);
          if (__n != 0) {
            memmove(puVar4,puVar4 + 1,__n);
          }
          *(undefined8 **)(this + 0x50) = puVar4 + ((long)__n >> 3);
        }
LAB_01661f7c:
        puVar11 = *(undefined8 **)(this + 0x50);
      } while (puVar11 != puVar4);
    }
  }
  if ((*(int *)(this + 0x8c) <= param_2) &&
     (*(undefined4 *)(this + 0x8c) = 0x7fffffff, 0 < *(int *)(this + 0xc))) {
    lVar23 = 0;
    do {
      lVar26 = *(long *)(this + 0x68);
      pZVar21 = (Zone *)**(undefined8 **)this;
      plVar20 = (long *)(lVar26 + lVar23 * 0x20);
      p_Var6 = (__tree_node_base *)*plVar20;
      if ((__tree_node_base *)(plVar20 + 1) == p_Var6) {
        plVar28 = (long *)0x0;
        plVar20 = (long *)0x0;
      }
      else {
        plVar25 = (long *)0x0;
        plVar19 = (long *)0x0;
        plVar27 = (long *)0x0;
        do {
          lVar26 = *(long *)(p_Var6 + 0x20);
          plVar20 = plVar19;
          plVar28 = plVar27;
          if (param_2 < *(int *)(*(long *)(lVar26 + 8) + 4)) {
            piVar8 = (int *)(lVar26 + 0x10);
            if ((*(int **)piVar8 != (int *)0x0) && (**(int **)piVar8 <= param_2)) {
              piVar13 = (int *)(lVar26 + 0x30);
              piVar9 = piVar8;
              if ((*(int **)piVar13 != (int *)0x0) &&
                 (piVar9 = piVar13, param_2 < **(int **)piVar13)) {
                piVar13[0] = 0;
                piVar13[1] = 0;
                piVar9 = piVar8;
              }
              for (puVar7 = *(uint **)piVar9; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2)
                  ) {
                uVar18 = *puVar7;
                if ((int)uVar18 <= param_2) {
                  if (*(int **)piVar13 == (int *)0x0) {
                    if (uVar18 < 0x80000000) goto LAB_016621e0;
                  }
                  else if (**(int **)piVar13 < (int)uVar18) {
LAB_016621e0:
                    *(uint **)piVar13 = puVar7;
                    uVar18 = *puVar7;
                  }
                }
                if (param_2 < (int)uVar18) break;
                if (param_2 < (int)puVar7[1]) {
                  p_Var24 = (__tree_node_base *)InactiveToActive(this,p_Var6,param_2);
                  goto LAB_01662150;
                }
              }
            }
            piVar13 = (int *)(lVar26 + 0x30);
            piVar9 = piVar8;
            if ((*(int **)piVar13 != (int *)0x0) && (piVar9 = piVar13, param_2 < **(int **)piVar13))
            {
              piVar13[0] = 0;
              piVar13[1] = 0;
              piVar9 = piVar8;
            }
            do {
              local_68 = **(int **)piVar9;
              piVar9 = *(int **)piVar9 + 2;
            } while (local_68 < param_2);
            *(int *)(lVar26 + 0x58) = local_68;
            pLVar22 = (LinearScanAllocator *)&local_68;
            if (*(int *)(this + 0x8c) <= local_68) {
              pLVar22 = this + 0x8c;
            }
            *(int *)(this + 0x8c) = *(int *)pLVar22;
            lVar10 = *(long *)(this + 0x68);
            plVar28 = (long *)(lVar10 + lVar23 * 0x20);
            p_Var15 = *(__tree_node_base **)(p_Var6 + 8);
            if (*(__tree_node_base **)(p_Var6 + 8) == (__tree_node_base *)0x0) {
              p_Var15 = p_Var6 + 0x10;
              p_Var24 = *(__tree_node_base **)p_Var15;
              if (*(__tree_node_base **)p_Var24 != p_Var6) {
                do {
                  lVar5 = *(long *)p_Var15;
                  p_Var15 = (__tree_node_base *)(lVar5 + 0x10);
                  p_Var24 = *(__tree_node_base **)p_Var15;
                } while (*(long *)p_Var24 != lVar5);
              }
            }
            else {
              do {
                p_Var24 = p_Var15;
                p_Var15 = *(__tree_node_base **)p_Var24;
              } while (*(__tree_node_base **)p_Var24 != (__tree_node_base *)0x0);
            }
            if ((__tree_node_base *)*plVar28 == p_Var6) {
              *plVar28 = (long)p_Var24;
            }
            lVar10 = lVar10 + lVar23 * 0x20;
            *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(lVar10 + 8),p_Var6);
            if (plVar27 == plVar25) {
              lVar10 = (long)plVar27 - (long)plVar19 >> 3;
              uVar1 = lVar10 + 1;
              if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar16 = (long)plVar25 - (long)plVar19 >> 2;
              if (uVar1 <= uVar16) {
                uVar1 = uVar16;
              }
              if (0x7fffffe < (ulong)((long)plVar25 - (long)plVar19 >> 3)) {
                uVar1 = 0xfffffff;
              }
              if (uVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = *(long *)(pZVar21 + 0x10);
                uVar16 = uVar1 * 8;
                if (uVar16 < (ulong)(*(long *)(pZVar21 + 0x18) - lVar5) ||
                    uVar16 - (*(long *)(pZVar21 + 0x18) - lVar5) == 0) {
                  *(ulong *)(pZVar21 + 0x10) = lVar5 + uVar16;
                }
                else {
                  lVar5 = Zone::NewExpand(pZVar21,uVar16);
                }
              }
              plVar20 = (long *)(lVar5 + lVar10 * 8);
              plVar25 = (long *)(lVar5 + uVar1 * 8);
              plVar28 = plVar20 + 1;
              *plVar20 = lVar26;
              while (plVar27 != plVar19) {
                plVar27 = plVar27 + -1;
                plVar20 = plVar20 + -1;
                *plVar20 = *plVar27;
              }
            }
            else {
              *plVar27 = lVar26;
              plVar28 = plVar27 + 1;
            }
          }
          else {
            p_Var24 = (__tree_node_base *)InactiveToHandled(this);
          }
LAB_01662150:
          lVar26 = *(long *)(this + 0x68);
          p_Var6 = p_Var24;
          plVar19 = plVar20;
          plVar27 = plVar28;
        } while ((__tree_node_base *)(lVar26 + lVar23 * 0x20 + 8) != p_Var24);
      }
      if (plVar20 != plVar28) {
        do {
          plVar25 = (long *)(lVar26 + lVar23 * 0x20);
          pZVar21 = (Zone *)plVar25[2];
          lVar10 = *plVar20;
          p_Var6 = *(__tree_node_base **)(pZVar21 + 0x10);
          if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)p_Var6) < 0x28) {
            p_Var6 = (__tree_node_base *)Zone::NewExpand(pZVar21,0x28);
          }
          else {
            *(__tree_node_base **)(pZVar21 + 0x10) = p_Var6 + 0x28;
          }
          *(long *)(p_Var6 + 0x20) = lVar10;
          puVar11 = (undefined8 *)(lVar26 + lVar23 * 0x20 + 8);
          puVar4 = puVar11;
          if ((undefined8 *)*puVar11 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*puVar11;
            do {
              while (puVar11 = puVar3, *(int *)(puVar11[4] + 0x58) <= *(int *)(lVar10 + 0x58)) {
                puVar3 = (undefined8 *)puVar11[1];
                if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
                  puVar4 = puVar11 + 1;
                  goto LAB_01662430;
                }
              }
              puVar3 = (undefined8 *)*puVar11;
              puVar4 = puVar11;
            } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
          }
LAB_01662430:
          *(undefined8 *)p_Var6 = 0;
          *(undefined8 *)(p_Var6 + 8) = 0;
          *(undefined8 **)(p_Var6 + 0x10) = puVar11;
          *puVar4 = p_Var6;
          if (*(long *)*plVar25 != 0) {
            *plVar25 = *(long *)*plVar25;
            p_Var6 = (__tree_node_base *)*puVar4;
          }
          lVar26 = lVar26 + lVar23 * 0x20;
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(lVar26 + 8),p_Var6);
          plVar20 = plVar20 + 1;
          *(long *)(lVar26 + 0x18) = *(long *)(lVar26 + 0x18) + 1;
          if (plVar20 == plVar28) break;
          lVar26 = *(long *)(this + 0x68);
        } while( true );
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(this + 0xc));
  }
  return;
code_r0x01662020:
  puVar17 = *(uint **)(puVar17 + 2);
  if (puVar17 == (uint *)0x0) goto LAB_01661f68;
  goto LAB_01661fe0;
}

