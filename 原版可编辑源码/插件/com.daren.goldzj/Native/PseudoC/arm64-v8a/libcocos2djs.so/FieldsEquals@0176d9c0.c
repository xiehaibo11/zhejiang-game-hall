
/* v8::internal::compiler::LoadElimination::AbstractState::FieldsEquals(std::__ndk1::array<v8::internal::compiler::LoadElimination::AbstractField
   const*, 32ul> const&, std::__ndk1::array<v8::internal::compiler::LoadElimination::AbstractField
   const*, 32ul> const&) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractState::FieldsEquals
          (AbstractState *this,array *param_1,array *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  lVar7 = 0;
  do {
    puVar2 = *(undefined8 **)(param_1 + lVar7 * 8);
    puVar8 = *(undefined8 **)(param_2 + lVar7 * 8);
    if (puVar2 == (undefined8 *)0x0) {
      if (puVar8 != (undefined8 *)0x0) {
        return 0;
      }
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
      if (puVar8 != puVar2) {
        if (puVar8[3] != puVar2[3]) {
          return 0;
        }
        if ((long *)*puVar8 != puVar8 + 1) {
          plVar3 = (long *)*puVar8;
          plVar9 = (long *)*puVar2;
          do {
            if (plVar3[4] != plVar9[4]) {
              return 0;
            }
            if (plVar3[5] != plVar9[5]) {
              return 0;
            }
            if ((char)plVar3[6] != (char)plVar9[6]) {
              return 0;
            }
            if (plVar3[7] != plVar9[7]) {
              return 0;
            }
            uVar1 = compiler::operator==
                              ((ConstFieldInfo *)(plVar3 + 8),(ConstFieldInfo *)(plVar9 + 8));
            if ((uVar1 & 1) == 0) {
              return 0;
            }
            plVar5 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              plVar5 = plVar3 + 2;
              plVar4 = (long *)*plVar5;
              if ((long *)*plVar4 != plVar3) {
                do {
                  lVar6 = *plVar5;
                  plVar5 = (long *)(lVar6 + 0x10);
                  plVar4 = (long *)*plVar5;
                } while (*plVar4 != lVar6);
                goto LAB_0176dad4;
              }
              plVar3 = (long *)plVar9[1];
              if ((long *)plVar9[1] != (long *)0x0) goto LAB_0176dadc;
LAB_0176daf8:
              plVar3 = plVar9 + 2;
              plVar5 = (long *)*plVar3;
              if ((long *)*plVar5 != plVar9) {
                do {
                  lVar6 = *plVar3;
                  plVar3 = (long *)(lVar6 + 0x10);
                  plVar5 = (long *)*plVar3;
                } while (*plVar5 != lVar6);
              }
            }
            else {
              do {
                plVar4 = plVar5;
                plVar5 = (long *)*plVar4;
              } while ((long *)*plVar4 != (long *)0x0);
LAB_0176dad4:
              plVar3 = (long *)plVar9[1];
              if ((long *)plVar9[1] == (long *)0x0) goto LAB_0176daf8;
LAB_0176dadc:
              do {
                plVar5 = plVar3;
                plVar3 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            plVar3 = plVar4;
            plVar9 = plVar5;
          } while (plVar4 != puVar8 + 1);
        }
      }
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x20) {
      return 1;
    }
  } while( true );
}

