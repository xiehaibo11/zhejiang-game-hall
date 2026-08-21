
void FUN_00d6f408(long param_1,char *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pbVar8 = (byte *)(param_2 + 1);
  if (*param_2 == '\"') {
    iVar6 = 1;
    bVar5 = *pbVar8;
    pbVar3 = pbVar8;
    while ((bVar5 != 0 && (bVar5 != 0x22))) {
      lVar7 = 1;
      if (bVar5 == 0x5c) {
        lVar7 = 2;
      }
      pbVar3 = pbVar3 + lVar7;
      iVar6 = iVar6 + 1;
      bVar5 = *pbVar3;
    }
    pbVar2 = (byte *)_spMalloc((long)iVar6,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c"
                               ,0x8d);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) {
      bVar5 = *pbVar8;
      pbVar3 = pbVar2;
joined_r0x00d6f4bc:
      if (bVar5 != 0) {
        do {
          if (bVar5 == 0x22) break;
          pbVar4 = pbVar8 + 1;
          if (bVar5 == 0x5c) {
            bVar5 = *pbVar4;
            switch(bVar5) {
            case 0x62:
              goto switchD_00d6f504_caseD_62;
            default:
              goto switchD_00d6f504_caseD_63;
            case 0x66:
              bVar5 = 0xc;
              goto switchD_00d6f504_caseD_63;
            case 0x6e:
              *pbVar3 = 10;
              bVar5 = pbVar8[2];
              pbVar3 = pbVar3 + 1;
              pbVar8 = pbVar8 + 2;
              break;
            case 0x72:
              *pbVar3 = 0xd;
              bVar5 = pbVar8[2];
              pbVar3 = pbVar3 + 1;
              pbVar8 = pbVar8 + 2;
              break;
            case 0x74:
              *pbVar3 = 9;
              pbVar8 = pbVar8 + 2;
              bVar5 = *pbVar8;
              pbVar3 = pbVar3 + 1;
              goto joined_r0x00d6f4bc;
            case 0x75:
              sscanf((char *)(pbVar8 + 2),"%4x",&local_6c);
              pbVar4 = pbVar8 + 5;
              if ((local_6c == 0) || ((local_6c & 0xfffffc00) == 0xdc00)) goto LAB_00d6f5b8;
              if ((local_6c & 0xfffffc00) == 0xd800) {
                if ((pbVar8[6] != 0x5c) || (pbVar8[7] != 0x75)) goto LAB_00d6f5b8;
                sscanf((char *)(pbVar8 + 8),"%4x",&local_70);
                pbVar4 = pbVar8 + 0xb;
                if (local_70 >> 10 != 0x37) goto LAB_00d6f5b8;
                local_6c = (local_70 & 0x3ff | (local_6c & 0x3ff) << 10) + 0x10000;
LAB_00d6f620:
                pbVar3[3] = (byte)local_6c & 0x3f | 0x80;
                lVar7 = 4;
                local_6c = local_6c >> 6;
LAB_00d6f63c:
                pbVar3[2] = (byte)local_6c & 0x3f | 0x80;
                local_6c = local_6c >> 6;
LAB_00d6f654:
                pbVar3[1] = (byte)local_6c & 0x3f | 0x80;
                local_6c = local_6c >> 6;
              }
              else {
                if (0x7f < local_6c) {
                  if (0x7ff < local_6c) {
                    if (0xffff < local_6c) goto LAB_00d6f620;
                    lVar7 = 3;
                    goto LAB_00d6f63c;
                  }
                  lVar7 = 2;
                  goto LAB_00d6f654;
                }
                lVar7 = 1;
              }
              pbVar8 = pbVar4 + 1;
              *pbVar3 = (&UNK_0141b250)[lVar7] | (byte)local_6c;
              pbVar3 = pbVar3 + lVar7;
              bVar5 = *pbVar8;
            }
          }
          else {
            *pbVar3 = bVar5;
            bVar5 = *pbVar4;
            pbVar3 = pbVar3 + 1;
            pbVar8 = pbVar4;
          }
          if (bVar5 == 0) break;
        } while( true );
      }
      *pbVar3 = 0;
      bVar5 = *pbVar8;
      *(byte **)(param_1 + 0x18) = pbVar2;
      *(undefined4 *)(param_1 + 0x10) = 4;
      pbVar3 = pbVar8 + 1;
      if (bVar5 != 0x22) {
        pbVar3 = pbVar8;
      }
    }
  }
  else {
    pbVar3 = (byte *)0x0;
    DAT_01787608 = param_2;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar3);
  }
  return;
switchD_00d6f504_caseD_62:
  bVar5 = 8;
switchD_00d6f504_caseD_63:
  *pbVar3 = bVar5;
  pbVar3 = pbVar3 + 1;
LAB_00d6f5b8:
  pbVar8 = pbVar4 + 1;
  bVar5 = *pbVar8;
  goto joined_r0x00d6f4bc;
}

