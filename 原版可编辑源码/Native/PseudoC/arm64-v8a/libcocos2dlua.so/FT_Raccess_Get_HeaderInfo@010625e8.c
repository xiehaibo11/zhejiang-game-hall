
void FT_Raccess_Get_HeaderInfo
               (undefined8 param_1,long *param_2,ulong param_3,ulong *param_4,long *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  undefined1 local_7c [4];
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  byte local_74;
  char local_73;
  char local_72;
  char local_71;
  byte local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  char local_6c;
  char local_6b;
  char local_6a;
  char local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((code *)param_2[5] == (code *)0x0) {
    uVar9 = param_2[1];
    if (param_3 <= uVar9) goto LAB_0106265c;
  }
  else {
    lVar5 = (*(code *)param_2[5])(param_2,param_3,0,0);
    if (lVar5 == 0) {
      uVar9 = param_2[1];
LAB_0106265c:
      puVar12 = (ulong *)(param_2 + 1);
      sVar6 = uVar9 - param_3;
      param_2[2] = param_3;
      if (param_3 <= uVar9 && sVar6 != 0) {
        if ((code *)param_2[5] == (code *)0x0) {
          if (0xf < sVar6) {
            sVar6 = 0x10;
          }
          memcpy(&local_68,(void *)(*param_2 + param_3),sVar6);
        }
        else {
          sVar6 = (*(code *)param_2[5])(param_2,param_3,&local_68,0x10);
        }
        param_2[2] = sVar6 + param_3;
        if (0xf < sVar6) {
          uVar7 = 2;
          uVar3 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
          lVar5 = param_3 + (long)(int)(uVar3 >> 0x10 | uVar3 << 0x10);
          uVar3 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          *param_5 = lVar5;
          if ((uVar3 == 0) ||
             (param_3 = param_3 + (long)(int)uVar3,
             uVar3 = (local_60 & 0xff00ff00) >> 8 | (local_60 & 0xff00ff) << 8,
             lVar5 + (int)(uVar3 >> 0x10 | uVar3 << 0x10) != param_3)) goto LAB_010626c0;
          if ((code *)param_2[5] == (code *)0x0) {
            uVar9 = *puVar12;
            if (param_3 <= uVar9) goto LAB_01062754;
          }
          else {
            lVar5 = (*(code *)param_2[5])(param_2,param_3,0,0);
            if (lVar5 == 0) {
              uVar9 = *puVar12;
LAB_01062754:
              param_2[2] = param_3;
              sVar6 = uVar9 - param_3;
              local_69 = local_59 + '\x01';
              if (param_3 <= uVar9 && sVar6 != 0) {
                if ((code *)param_2[5] == (code *)0x0) {
                  if (0xf < sVar6) {
                    sVar6 = 0x10;
                  }
                  memcpy(&local_78,(void *)(*param_2 + param_3),sVar6);
                }
                else {
                  sVar6 = (*(code *)param_2[5])(param_2,param_3,&local_78,0x10);
                }
                param_2[2] = sVar6 + param_3;
                if (0xf < sVar6) {
                  if ((local_69 != local_59 ||
                       (local_6a != local_5a ||
                       (local_6b != local_5b ||
                       (local_6c != local_5c ||
                       (local_6d != local_60._3_1_ ||
                       (local_6e != local_60._2_1_ ||
                       (local_6f != local_60._1_1_ ||
                       ((uint)local_70 != (local_60 & 0xff) ||
                       (local_71 != local_64._3_1_ ||
                       (local_72 != local_64._2_1_ ||
                       (local_73 != local_64._1_1_ ||
                       ((uint)local_74 != (local_64 & 0xff) ||
                       (local_75 != local_68._3_1_ ||
                       (local_76 != local_68._2_1_ ||
                       (local_77 != local_68._1_1_ || local_78 != (char)local_68))))))))))))))) &&
                     (local_69 != '\0' ||
                      (local_6a != '\0' ||
                      (local_6b != '\0' ||
                      (local_6c != '\0' ||
                      (local_6d != '\0' ||
                      (local_6e != '\0' ||
                      (local_6f != '\0' ||
                      (local_70 != 0 ||
                      (local_71 != '\0' ||
                      (local_72 != '\0' ||
                      (local_73 != '\0' ||
                      (local_74 != 0 ||
                      (local_75 != '\0' ||
                      (local_76 != '\0' || (local_77 != '\0' || local_78 != '\0')))))))))))))))) {
                    uVar7 = 2;
                    goto LAB_010626c0;
                  }
                  uVar8 = param_2[2];
                  uVar9 = uVar8 + 8;
                  if ((code *)param_2[5] == (code *)0x0) {
                    if (uVar9 <= *puVar12) goto LAB_01062988;
                  }
                  else {
                    lVar5 = (*(code *)param_2[5])(param_2,uVar9,0,0);
                    if (lVar5 == 0) {
LAB_01062988:
                      param_2[2] = uVar9;
                      uVar8 = uVar9;
                    }
                    else {
                      uVar8 = param_2[2];
                    }
                  }
                  if (uVar8 + 1 < *puVar12) {
                    if ((code *)param_2[5] == (code *)0x0) {
                      puVar11 = (undefined1 *)(*param_2 + uVar8);
                      if (puVar11 != (undefined1 *)0x0) {
                        pcVar10 = (code *)0x0;
                        goto LAB_010629e0;
                      }
                      param_2[2] = uVar8 + 2;
LAB_01062a20:
                      if (param_3 <= *puVar12) {
LAB_01062a2c:
                        uVar7 = 0;
                        param_2[2] = param_3;
                        *param_4 = param_3;
                        goto LAB_010626c0;
                      }
                    }
                    else {
                      lVar5 = (*(code *)param_2[5])(param_2,uVar8,local_7c,2);
                      if (lVar5 == 2) {
                        uVar8 = param_2[2];
                        pcVar10 = (code *)param_2[5];
                        puVar11 = local_7c;
LAB_010629e0:
                        uVar1 = *puVar11;
                        uVar2 = puVar11[1];
                        param_2[2] = uVar8 + 2;
                        param_3 = CONCAT11(uVar1,uVar2) + param_3;
                        if (pcVar10 == (code *)0x0) goto LAB_01062a20;
                        lVar5 = (*pcVar10)(param_2,param_3,0,0);
                        if (lVar5 != 0) goto LAB_010626bc;
                        goto LAB_01062a2c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_010626bc:
  uVar7 = 0x55;
LAB_010626c0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

