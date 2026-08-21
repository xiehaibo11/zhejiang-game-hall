
undefined8 lws_http_client_read(long param_1,long *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  iVar3 = lws_ssl_capable_read(param_1,*param_2,*param_3);
  *param_3 = 0;
  FUN_00aa3be0(param_1,0,1);
  if (iVar3 != 0) {
    if (iVar3 != -1) {
      if (iVar3 < 0) {
        return 0;
      }
      *param_3 = iVar3;
      uVar6 = *(uint *)(param_1 + 0x2f4) & 0xf7ffffff;
      *(uint *)(param_1 + 0x2f4) = uVar6;
      do {
        if ((uVar6 >> 0x1a & 1) != 0) {
          do {
            if ((*(char *)(param_1 + 0x308) == '\x02') || (*param_3 == 0)) {
              bVar1 = false;
              if (*(int *)(param_1 + 0x2ec) == 0) {
                return 0;
              }
              goto LAB_00aa2bb4;
            }
            switch(*(char *)(param_1 + 0x308)) {
            case '\0':
              if (*(char *)*param_2 == '\r') {
                *(undefined1 *)(param_1 + 0x308) = 1;
              }
              else {
                cVar2 = FUN_00aa59fc();
                if (cVar2 < 0) {
                  return 0xffffffff;
                }
                *(int *)(param_1 + 0x2ec) = (int)cVar2 | *(int *)(param_1 + 0x2ec) << 4;
              }
              break;
            case '\x01':
              if (*(char *)*param_2 != '\n') {
                return 0xffffffff;
              }
              *(undefined1 *)(param_1 + 0x308) = 2;
              if (*(int *)(param_1 + 0x2ec) == 0) goto LAB_00aa2c80;
              break;
            case '\x03':
              if (*(char *)*param_2 != '\r') {
                return 0xffffffff;
              }
              *(undefined1 *)(param_1 + 0x308) = 4;
              break;
            case '\x04':
              if (*(char *)*param_2 != '\n') {
                return 0xffffffff;
              }
              *(undefined1 *)(param_1 + 0x308) = 0;
              *(undefined4 *)(param_1 + 0x2ec) = 0;
            }
            *param_2 = *param_2 + 1;
            *param_3 = *param_3 + -1;
          } while ((*(byte *)(param_1 + 0x2f7) >> 2 & 1) != 0);
        }
        bVar1 = true;
LAB_00aa2bb4:
        uVar8 = *(ulong *)(param_1 + 0x160);
        iVar3 = (int)uVar8;
        if ((ulong)(long)*param_3 <= uVar8 || uVar8 == 0) {
          iVar3 = *param_3;
        }
        iVar7 = iVar3;
        if ((!bVar1) && (iVar7 = *(int *)(param_1 + 0x2ec), iVar3 <= iVar7 || iVar7 == 0)) {
          iVar7 = iVar3;
        }
        lVar9 = (long)iVar7;
        iVar3 = FUN_00aa08a4(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x30,
                             *(undefined8 *)(param_1 + 0x270),*param_2,lVar9);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar6 = *(uint *)(param_1 + 0x2f4);
        if (((uVar6 >> 0x1a & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2ec), iVar3 != 0)) {
          *param_2 = *param_2 + lVar9;
          *(int *)(param_1 + 0x2ec) = iVar3 - iVar7;
          *param_3 = *param_3 - iVar7;
          uVar6 = *(uint *)(param_1 + 0x2f4);
        }
        if ((uVar6 >> 0x1a & 1) == 0) {
          if (*(long *)(param_1 + 0x158) == 0) {
            return 0;
          }
          lVar9 = *(long *)(param_1 + 0x160) - lVar9;
          *(long *)(param_1 + 0x160) = lVar9;
          if (*(long *)(param_1 + 0x158) == 0) {
            return 0;
          }
          if (lVar9 != 0) {
            return 0;
          }
LAB_00aa2c80:
          iVar3 = FUN_00aa08a4(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x2f,
                               *(undefined8 *)(param_1 + 0x270),0,0);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          uVar4 = FUN_00aab114(param_1);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          pcVar5 = "%s: transaction completed says -1\n";
          goto LAB_00aa2a70;
        }
        if (*(int *)(param_1 + 0x2ec) == 0) {
          *(undefined1 *)(param_1 + 0x308) = 3;
          if (*param_3 == 0) {
            return 0;
          }
        }
        else if (*param_3 == 0) {
          return 0;
        }
      } while( true );
    }
    pcVar5 = "%s: SSL capable error\n";
LAB_00aa2a70:
    _lws_log(4,pcVar5,"lws_http_client_read");
  }
  return 0xffffffff;
}

