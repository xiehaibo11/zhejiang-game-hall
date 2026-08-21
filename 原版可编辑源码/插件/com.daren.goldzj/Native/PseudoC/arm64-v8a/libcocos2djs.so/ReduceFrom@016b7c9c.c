
/* v8::internal::compiler::EffectGraphReducer::ReduceFrom(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectGraphReducer::ReduceFrom(EffectGraphReducer *this,Node *param_1)

{
  deque<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
  *this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined2 local_78;
  undefined2 *local_70;
  long local_68;
  
  lVar7 = *(long *)(this + 0x70);
  lVar8 = *(long *)(this + 0x78);
  uVar6 = 0;
  if (lVar8 - lVar7 != 0) {
    uVar6 = (lVar8 - lVar7) * 0x20 - 1;
  }
  uVar10 = *(long *)(this + 0xa0) + *(long *)(this + 0x98);
  this_00 = (deque<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
             *)(this + 0x68);
  if (uVar6 == uVar10) {
    std::__ndk1::
    deque<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
    ::__add_back_capacity(this_00);
    lVar7 = *(long *)(this + 0x70);
    lVar8 = *(long *)(this + 0x78);
    uVar10 = *(long *)(this + 0x98) + *(long *)(this + 0xa0);
  }
  if (lVar8 == lVar7) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)
             (*(long *)(lVar7 + (uVar10 >> 5 & 0x7fffffffffffff8)) + (uVar10 & 0xff) * 0x10);
  }
  *puVar9 = param_1;
  *(undefined4 *)(puVar9 + 1) = 0;
  lVar7 = *(long *)(this + 0xa0);
  *(long *)(this + 0xa0) = lVar7 + 1;
  if (lVar7 != -1) {
    do {
      while( true ) {
        TickCounter::DoTick(*(TickCounter **)(this + 0xf0));
        lVar7 = *(long *)(this + 0xa0);
        lVar8 = lVar7 + -1;
        uVar6 = lVar8 + *(long *)(this + 0x98);
        lVar13 = *(long *)(*(long *)(this + 0x70) + (uVar6 >> 5 & 0x7fffffffffffff8));
        lVar11 = (uVar6 & 0xff) * 0x10;
        lVar15 = *(long *)(lVar13 + lVar11);
        piVar12 = (int *)(lVar13 + lVar11 + 8);
        iVar3 = *piVar12;
        uVar1 = *(uint *)(lVar15 + 0x14) & 0xf000000;
        if (uVar1 != 0xf000000) break;
        if (iVar3 < *(int *)(*(long *)(lVar15 + 0x20) + 8)) goto LAB_016b7f2c;
LAB_016b7db4:
        lVar13 = *(long *)(this + 0x78);
        *(long *)(this + 0xa0) = lVar8;
        lVar11 = lVar13 - *(long *)(this + 0x70);
        lVar8 = 0;
        if (lVar11 != 0) {
          lVar8 = lVar11 * 0x20 + -1;
        }
        if (0x1ff < (lVar8 - (lVar7 + *(long *)(this + 0x98))) + 1U) {
          puVar9 = *(undefined8 **)(lVar13 + -8);
          if ((*(long *)(this + 0xb0) == 0) || (*(ulong *)(*(long *)(this + 0xb0) + 8) < 0x101)) {
            puVar9[1] = 0x100;
            *puVar9 = *(undefined8 *)(this + 0xb0);
            lVar13 = *(long *)(this + 0x78);
            *(undefined8 **)(this + 0xb0) = puVar9;
          }
          *(long *)(this + 0x78) = lVar13 + -8;
        }
        local_70 = &local_78;
        local_78 = 0;
        plVar5 = *(long **)(this + 0xe0);
        local_68 = lVar15;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_68,&local_70);
        plVar5 = (long *)*(long *)(lVar15 + 0x18);
        while (plVar5 != (long *)0x0) {
          uVar1 = *(uint *)(plVar5 + 2);
          plVar16 = (long *)*plVar5;
          puVar9 = plVar5 + (ulong)(uVar1 >> 1) * 3 + 3;
          lVar7 = 0x10;
          if ((uVar1 & 1) != 0) {
            lVar7 = 0x20;
          }
          lVar7 = (long)puVar9 + (ulong)(uVar1 >> 1) * 8 + lVar7;
          if ((uVar1 & 1) == 0) {
            puVar9 = (undefined8 *)*puVar9;
          }
          uVar6 = NodeProperties::IsEffectEdge(plVar5,lVar7);
          if ((uVar6 & 1) == 0) {
            cVar4 = (char)local_78;
          }
          else {
            cVar4 = local_78._1_1_;
          }
          plVar5 = plVar16;
          if (cVar4 != '\0') {
            uVar2 = *(uint *)(this + 0x10);
            uVar1 = 0;
            if (uVar2 <= *(uint *)(puVar9 + 2)) {
              uVar1 = *(uint *)(puVar9 + 2) - uVar2;
            }
            if ((uVar1 & 0xff) == 3) {
              *(uint *)(puVar9 + 2) = uVar2 + 1;
              lVar7 = *(long *)(this + 0x20);
              uVar6 = 0;
              if (*(long *)(this + 0x28) - lVar7 != 0) {
                uVar6 = (*(long *)(this + 0x28) - lVar7) * 0x40 - 1;
              }
              uVar10 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
              if (uVar6 == uVar10) {
                std::__ndk1::
                deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                ::__add_back_capacity
                          ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                            *)(this + 0x18));
                lVar7 = *(long *)(this + 0x20);
                uVar10 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
              }
              *(undefined8 **)
               (*(long *)(lVar7 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) =
                   puVar9;
              *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
            }
          }
        }
        *(int *)(lVar15 + 0x10) = *(int *)(this + 0x10) + 3;
        lVar7 = *(long *)(this + 0x50);
        while (lVar7 != 0) {
          lVar8 = *(long *)(this + 0x48);
          lVar11 = lVar7 + -1;
          lVar13 = *(long *)(this + 0x20);
          lVar15 = *(long *)(*(long *)(lVar13 + ((ulong)(lVar11 + lVar8) >> 6 & 0x3fffffffffffff8))
                            + (lVar11 + lVar8 & 0x1ffU) * 8);
          uVar2 = *(uint *)(this + 0x10);
          uVar1 = 0;
          if (uVar2 <= *(uint *)(lVar15 + 0x10)) {
            uVar1 = *(uint *)(lVar15 + 0x10) - uVar2;
          }
          if ((uVar1 & 0xff) == 1) {
            *(uint *)(lVar15 + 0x10) = uVar2 + 2;
            lVar7 = *(long *)(this + 0x70);
            lVar8 = *(long *)(this + 0x78);
            uVar6 = 0;
            if (lVar8 - lVar7 != 0) {
              uVar6 = (lVar8 - lVar7) * 0x20 - 1;
            }
            uVar10 = *(long *)(this + 0xa0) + *(long *)(this + 0x98);
            if (uVar6 == uVar10) {
              std::__ndk1::
              deque<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
              ::__add_back_capacity(this_00);
              lVar7 = *(long *)(this + 0x70);
              lVar8 = *(long *)(this + 0x78);
              uVar10 = *(long *)(this + 0x98) + *(long *)(this + 0xa0);
            }
            if (lVar8 == lVar7) {
              plVar5 = (long *)0x0;
            }
            else {
              plVar5 = (long *)(*(long *)(lVar7 + (uVar10 >> 5 & 0x7fffffffffffff8)) +
                               (uVar10 & 0xff) * 0x10);
            }
            *plVar5 = lVar15;
            *(undefined4 *)(plVar5 + 1) = 0;
            lVar8 = *(long *)(this + 0x48);
            lVar7 = *(long *)(this + 0x50);
            lVar13 = *(long *)(this + 0x20);
            *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 1;
            lVar11 = lVar7 + -1;
          }
          lVar14 = *(long *)(this + 0x28);
          lVar8 = lVar7 + lVar8;
          *(long *)(this + 0x50) = lVar11;
          lVar15 = 0;
          if (lVar14 - lVar13 != 0) {
            lVar15 = (lVar14 - lVar13) * 0x40 + -1;
          }
          lVar7 = lVar11;
          if (0x3ff < (lVar15 - lVar8) + 1U) {
            puVar9 = *(undefined8 **)(lVar14 + -8);
            if ((*(long *)(this + 0x60) == 0) || (*(ulong *)(*(long *)(this + 0x60) + 8) < 0x201)) {
              puVar9[1] = 0x200;
              *puVar9 = *(undefined8 *)(this + 0x60);
              lVar14 = *(long *)(this + 0x28);
              lVar11 = *(long *)(this + 0x50);
              *(undefined8 **)(this + 0x60) = puVar9;
            }
            *(long *)(this + 0x28) = lVar14 + -8;
            lVar7 = lVar11;
          }
        }
LAB_016b7d54:
        if (*(long *)(this + 0xa0) == 0) {
          return;
        }
      }
      if ((int)(*(uint *)(lVar15 + 0x14) >> 0x18 & 0xf) <= iVar3) goto LAB_016b7db4;
LAB_016b7f2c:
      plVar5 = (long *)(lVar15 + 0x20);
      if (uVar1 == 0xf000000) {
        plVar5 = (long *)(*plVar5 + 0x10);
      }
      lVar7 = plVar5[iVar3];
      *piVar12 = iVar3 + 1;
      uVar2 = *(uint *)(this + 0x10);
      uVar1 = 0;
      if (uVar2 <= *(uint *)(lVar7 + 0x10)) {
        uVar1 = *(uint *)(lVar7 + 0x10) - uVar2;
      }
      if (1 < (uVar1 & 0xff)) goto LAB_016b7d54;
      *(uint *)(lVar7 + 0x10) = uVar2 + 2;
      lVar8 = *(long *)(this + 0x70);
      lVar11 = *(long *)(this + 0x78);
      uVar6 = 0;
      if (lVar11 - lVar8 != 0) {
        uVar6 = (lVar11 - lVar8) * 0x20 - 1;
      }
      uVar10 = *(long *)(this + 0xa0) + *(long *)(this + 0x98);
      if (uVar6 == uVar10) {
        std::__ndk1::
        deque<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
        ::__add_back_capacity(this_00);
        lVar8 = *(long *)(this + 0x70);
        lVar11 = *(long *)(this + 0x78);
        uVar10 = *(long *)(this + 0x98) + *(long *)(this + 0xa0);
      }
      if (lVar11 == lVar8) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = (long *)(*(long *)(lVar8 + (uVar10 >> 5 & 0x7fffffffffffff8)) +
                         (uVar10 & 0xff) * 0x10);
      }
      *plVar5 = lVar7;
      *(undefined4 *)(plVar5 + 1) = 0;
      lVar7 = *(long *)(this + 0xa0);
      *(long *)(this + 0xa0) = lVar7 + 1;
    } while (lVar7 + 1 != 0);
  }
  return;
}

