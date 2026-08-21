
void memcpy_by_index_array
               (undefined4 *param_1,uint param_2,long param_3,uint param_4,char *param_5,
               undefined8 param_6,long param_7)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  
  switch(param_6) {
  case 1:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        if (param_2 != 0) {
          lVar8 = (long)*param_5;
          uVar3 = (ulong)param_2;
          pcVar4 = param_5;
          if (lVar8 < 0) goto LAB_00e8f7b8;
          do {
            uVar5 = *(undefined1 *)(param_3 + lVar8);
            puVar2 = param_1;
            while( true ) {
              param_1 = (undefined4 *)((long)puVar2 + 1);
              *(undefined1 *)puVar2 = uVar5;
              uVar3 = uVar3 - 1;
              pcVar4 = pcVar4 + 1;
              if (uVar3 == 0) goto LAB_00e8f77c;
              lVar8 = (long)*pcVar4;
              if (-1 < lVar8) break;
LAB_00e8f7b8:
              uVar5 = 0;
              puVar2 = param_1;
            }
          } while( true );
        }
LAB_00e8f77c:
        param_3 = param_3 + (ulong)param_4;
      } while (param_7 != 0);
    }
    break;
  case 2:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        if (param_2 != 0) {
          lVar8 = (long)*param_5;
          uVar3 = (ulong)param_2;
          pcVar4 = param_5;
          if (lVar8 < 0) goto LAB_00e8f8e4;
          do {
            uVar6 = *(undefined2 *)(param_3 + lVar8 * 2);
            puVar2 = param_1;
            while( true ) {
              param_1 = (undefined4 *)((long)puVar2 + 2);
              *(undefined2 *)puVar2 = uVar6;
              uVar3 = uVar3 - 1;
              pcVar4 = pcVar4 + 1;
              if (uVar3 == 0) goto LAB_00e8f8a8;
              lVar8 = (long)*pcVar4;
              if (-1 < lVar8) break;
LAB_00e8f8e4:
              uVar6 = 0;
              puVar2 = param_1;
            }
          } while( true );
        }
LAB_00e8f8a8:
        param_3 = param_3 + (ulong)param_4 * 2;
      } while (param_7 != 0);
    }
    break;
  case 3:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        uVar3 = (ulong)param_2;
        pcVar4 = param_5;
        if (param_2 != 0) {
          do {
            puVar2 = (undefined4 *)((long)param_1 + 3);
            if ((long)*pcVar4 < 0) {
              *(undefined1 *)((long)param_1 + 2) = 0;
              *(undefined2 *)param_1 = 0;
            }
            else {
              puVar1 = (undefined2 *)(param_3 + (long)*pcVar4 * 3);
              uVar6 = *puVar1;
              *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar1 + 1);
              *(undefined2 *)param_1 = uVar6;
            }
            uVar3 = uVar3 - 1;
            param_1 = puVar2;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_3 = param_3 + (ulong)param_4 * 3;
      } while (param_7 != 0);
    }
    break;
  case 4:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        if (param_2 != 0) {
          lVar8 = (long)*param_5;
          uVar3 = (ulong)param_2;
          pcVar4 = param_5;
          if (lVar8 < 0) goto LAB_00e8f88c;
          do {
            uVar7 = *(undefined4 *)(param_3 + lVar8 * 4);
            puVar2 = param_1;
            while( true ) {
              param_1 = puVar2 + 1;
              *puVar2 = uVar7;
              uVar3 = uVar3 - 1;
              pcVar4 = pcVar4 + 1;
              if (uVar3 == 0) goto LAB_00e8f850;
              lVar8 = (long)*pcVar4;
              if (-1 < lVar8) break;
LAB_00e8f88c:
              uVar7 = 0;
              puVar2 = param_1;
            }
          } while( true );
        }
LAB_00e8f850:
        param_3 = param_3 + (ulong)param_4 * 4;
      } while (param_7 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

