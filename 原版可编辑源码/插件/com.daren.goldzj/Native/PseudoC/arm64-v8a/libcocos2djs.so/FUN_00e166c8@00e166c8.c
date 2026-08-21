
void FUN_00e166c8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xe0) != (code *)0x0) {
    (**(code **)(param_2 + 0xe0))(*(undefined8 *)(param_2 + 0xd8));
  }
  lVar5 = *(long *)(param_2 + 0x98);
joined_r0x00e16704:
  do {
    do {
      if (lVar5 == 0) {
        if (param_1 != 0) {
          lVar5 = *(long *)(param_2 + 200);
          while (lVar5 != 0) {
            lVar3 = *(long *)(lVar5 + 8);
            lVar6 = *(long *)(lVar5 + 0x10);
            if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
              (**(code **)(lVar6 + 0x10))(lVar6);
            }
            pcVar2 = *(code **)(*(long *)(param_3 + 0x18) + 0x78);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(lVar6);
            }
            if (*(long *)(lVar6 + 0x50) != 0) {
              (**(code **)(param_1 + 0x10))(param_1);
            }
            *(undefined8 *)(lVar6 + 0x50) = 0;
            (**(code **)(param_1 + 0x10))(param_1,lVar6);
            (**(code **)(param_1 + 0x10))(param_1,lVar5);
            lVar5 = lVar3;
          }
          *(long *)(param_2 + 200) = 0;
          *(undefined8 *)(param_2 + 0xd0) = 0;
        }
        *(undefined8 *)(param_2 + 0xa0) = 0;
        if (*(code **)(param_2 + 0x60) != (code *)0x0) {
          (**(code **)(param_2 + 0x60))(param_2);
        }
        if (0 < *(int *)(param_2 + 0x48)) {
          lVar5 = 0;
          do {
            plVar1 = *(long **)(*(long *)(param_2 + 0x50) + lVar5 * 8);
            lVar3 = *(long *)(*plVar1 + 0xb8);
            if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
              (**(code **)(plVar1[2] + 0x10))(plVar1);
            }
            (**(code **)(lVar3 + 0x10))(lVar3,plVar1);
            *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(param_2 + 0x48));
        }
        if (*(long *)(param_2 + 0x50) != 0) {
          (**(code **)(param_1 + 0x10))(param_1);
        }
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(undefined4 *)(param_2 + 0x48) = 0;
        pcVar2 = *(code **)(lVar8 + 0x68);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(param_2);
        }
        lVar8 = *(long *)(param_2 + 0xc0);
        if (lVar8 != 0) {
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          lVar5 = *(long *)(lVar8 + 0x38);
          if (*(code **)(lVar8 + 0x30) != (code *)0x0) {
            (**(code **)(lVar8 + 0x30))(lVar8);
          }
          if (((uint)uVar7 >> 10 & 1) == 0) {
            (**(code **)(lVar5 + 0x10))(lVar5,lVar8);
          }
        }
        *(undefined8 *)(param_2 + 0xc0) = 0;
        if (*(long *)(param_2 + 0xf0) != 0) {
          (**(code **)(param_1 + 0x10))(param_1);
          *(undefined8 *)(param_2 + 0xf0) = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00e168f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x10))(param_1,param_2);
        return;
      }
      plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x98);
      lVar3 = *plVar1;
    } while (lVar3 == 0);
    lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 8) + 0xb0) + 0x10);
    if (lVar3 != lVar5) {
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 0x10);
        if (lVar3 == 0) goto joined_r0x00e16704;
      } while (lVar3 != lVar5);
      plVar1 = (long *)(lVar4 + 0x10);
    }
    *plVar1 = *(long *)(lVar5 + 0x10);
    if (*(code **)(lVar5 + 0x28) != (code *)0x0) {
      (**(code **)(lVar5 + 0x28))(lVar5);
    }
    FUN_00e155a8(lVar5);
    (**(code **)(lVar6 + 0x10))(lVar6,lVar5);
    lVar5 = *(long *)(param_2 + 0x98);
  } while( true );
}

