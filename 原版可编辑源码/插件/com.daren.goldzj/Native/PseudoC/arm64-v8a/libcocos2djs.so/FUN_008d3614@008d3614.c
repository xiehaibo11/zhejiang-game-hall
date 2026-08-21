
void FUN_008d3614(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar6 = param_2 - 1;
      if ((uVar6 & param_2) == 0) {
        uVar4 = uVar4 & uVar6;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
joined_r0x008d36c4:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_2) == 0) {
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_008d3708;
LAB_008d36cc:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
            if (param_2 <= uVar8) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar8 / param_2;
              }
              uVar8 = uVar8 - uVar1 * param_2;
            }
            if (uVar8 == uVar4) goto LAB_008d36cc;
LAB_008d3708:
            plVar10 = plVar7;
            if (*(long *)(*param_1 + uVar8 * 8) == 0) goto LAB_008d3764;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_008d3764:
  *(long **)(*param_1 + uVar8 * 8) = plVar5;
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x008d36c4;
}

