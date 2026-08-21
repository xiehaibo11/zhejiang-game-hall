
/* spine::Json::parseString(spine::Json*, char const*) */

void spine::Json::parseString(Json *param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pbVar9 = (byte *)(param_2 + 1);
  if (*param_2 == '\"') {
    iVar7 = 1;
    bVar6 = *pbVar9;
    pbVar4 = pbVar9;
    while ((bVar6 != 0 && (bVar6 != 0x22))) {
      lVar8 = 1;
      if (bVar6 == 0x5c) {
        lVar8 = 2;
      }
      pbVar4 = pbVar4 + lVar8;
      iVar7 = iVar7 + 1;
      bVar6 = *pbVar4;
    }
    plVar2 = (long *)SpineExtension::getInstance();
    pbVar3 = (byte *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,(long)iVar7,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Json.cpp"
                                ,0xed);
    pbVar4 = (byte *)0x0;
    if (pbVar3 != (byte *)0x0) {
      bVar6 = *pbVar9;
      pbVar4 = pbVar3;
joined_r0x00d58d58:
      if (bVar6 != 0) {
        while( true ) {
          if (bVar6 == 0x22) goto LAB_00d58f4c;
          pbVar5 = pbVar9 + 1;
          if (bVar6 == 0x5c) break;
          *pbVar4 = bVar6;
          bVar6 = *pbVar5;
          pbVar9 = pbVar5;
          pbVar4 = pbVar4 + 1;
joined_r0x00d58d6c:
          if (bVar6 == 0) goto LAB_00d58f4c;
        }
        bVar6 = *pbVar5;
        switch(bVar6) {
        case 0x62:
          bVar6 = 8;
          break;
        default:
          break;
        case 0x66:
          bVar6 = 0xc;
          break;
        case 0x6e:
          *pbVar4 = 10;
          bVar6 = pbVar9[2];
          goto joined_r0x00d58e78;
        case 0x72:
          *pbVar4 = 0xd;
          bVar6 = pbVar9[2];
joined_r0x00d58e78:
          pbVar9 = pbVar9 + 2;
          pbVar4 = pbVar4 + 1;
          goto joined_r0x00d58d58;
        case 0x74:
          goto switchD_00d58da0_caseD_74;
        case 0x75:
          sscanf((char *)(pbVar9 + 2),"%4x",&local_6c);
          pbVar5 = pbVar9 + 5;
          if ((local_6c != 0) && ((local_6c & 0xfffffc00) != 0xdc00)) {
            if ((local_6c & 0xfffffc00) != 0xd800) {
              if (0x7f < local_6c) {
                if (0x7ff < local_6c) {
                  if (0xffff < local_6c) goto LAB_00d58ed4;
                  lVar8 = 3;
                  goto LAB_00d58ef4;
                }
                lVar8 = 2;
                goto LAB_00d58f10;
              }
              lVar8 = 1;
LAB_00d58f28:
              pbVar9 = pbVar5 + 1;
              *pbVar4 = (&UNK_019493c5)[lVar8] | (byte)local_6c;
              pbVar4 = pbVar4 + lVar8;
              bVar6 = *pbVar9;
              goto joined_r0x00d58d6c;
            }
            if ((pbVar9[6] == 0x5c) && (pbVar9[7] == 0x75)) {
              sscanf((char *)(pbVar9 + 8),"%4x",&local_70);
              pbVar5 = pbVar9 + 0xb;
              if (local_70 >> 10 == 0x37) {
                local_6c = (local_70 & 0x3ff | (local_6c & 0x3ff) << 10) + 0x10000;
LAB_00d58ed4:
                pbVar4[3] = (byte)local_6c & 0x3f | 0x80;
                lVar8 = 4;
                local_6c = local_6c >> 6;
LAB_00d58ef4:
                pbVar4[2] = (byte)local_6c & 0x3f | 0x80;
                local_6c = local_6c >> 6;
LAB_00d58f10:
                pbVar4[1] = (byte)local_6c & 0x3f | 0x80;
                local_6c = local_6c >> 6;
                goto LAB_00d58f28;
              }
            }
          }
          goto LAB_00d58e5c;
        }
        *pbVar4 = bVar6;
        pbVar4 = pbVar4 + 1;
LAB_00d58e5c:
        pbVar9 = pbVar5 + 1;
        bVar6 = *pbVar9;
        goto joined_r0x00d58d58;
      }
LAB_00d58f4c:
      *pbVar4 = 0;
      bVar6 = *pbVar9;
      *(byte **)(param_1 + 0x18) = pbVar3;
      *(undefined4 *)(param_1 + 0x10) = 4;
      pbVar4 = pbVar9 + 1;
      if (bVar6 != 0x22) {
        pbVar4 = pbVar9;
      }
    }
  }
  else {
    pbVar4 = (byte *)0x0;
    _error = param_2;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
switchD_00d58da0_caseD_74:
  *pbVar4 = 9;
  pbVar9 = pbVar9 + 2;
  bVar6 = *pbVar9;
  pbVar4 = pbVar4 + 1;
  goto joined_r0x00d58d58;
}

