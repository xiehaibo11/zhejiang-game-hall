
void lws_return_http_status(long param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *__s;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *local_78;
  char acStack_6c [20];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_2 = param_2 & 0xffffffff;
  lVar6 = lws_get_context();
  pcVar1 = (char *)(*(long *)(lVar6 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8) + 0x10);
  uVar3 = *(uint *)(lVar6 + 0xc84);
  __s = "";
  if (param_3 != (char *)0x0) {
    __s = param_3;
  }
  pcVar11 = pcVar1 + ((ulong)uVar3 - 0x10);
  local_78 = pcVar1;
  iVar5 = lws_add_http_header_status(param_1,param_2,&local_78,pcVar11);
  pcVar9 = local_78;
  if (iVar5 == 0) {
    if (local_78 < pcVar11) {
      pcVar9 = "content-type:";
      do {
        if (*pcVar9 == '\0') break;
        pcVar2 = local_78 + 1;
        *local_78 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_78 = pcVar2;
      } while (pcVar2 < pcVar11);
    }
    pcVar9 = local_78;
    if (local_78 != pcVar11) {
      *local_78 = ' ';
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b944 with catch @ 0104bac0
                        */
      pcVar9 = local_78 + 1;
      if (local_78 + 0xd < pcVar11) {
        builtin_strncpy(local_78 + 1,"text/html\r\n",0xb);
        local_78 = local_78 + 0xc;
        sVar8 = strlen(__s);
        iVar5 = sprintf(acStack_6c,"%d",param_2);
        iVar5 = sprintf(acStack_6c,"%d",(ulong)((int)sVar8 + iVar5 + 0x23));
        if (local_78 < pcVar11) {
          pcVar9 = "content-length:";
          do {
            if (*pcVar9 == '\0') break;
            pcVar2 = local_78 + 1;
            *local_78 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            local_78 = pcVar2;
          } while (pcVar2 < pcVar11);
        }
        pcVar9 = local_78;
        if (local_78 != pcVar11) {
          pcVar9 = local_78 + 1;
          *local_78 = ' ';
          sVar8 = (size_t)iVar5;
          if (pcVar9 + sVar8 + 3 < pcVar11) {
            local_78 = pcVar9;
            memcpy(pcVar9,acStack_6c,sVar8);
            pcVar2 = local_78 + sVar8;
            *pcVar2 = '\r';
            pcVar9 = pcVar2 + 2;
            pcVar2[1] = '\n';
            if (2 < (long)pcVar11 - (long)pcVar9) {
              *pcVar9 = '\r';
              local_78 = pcVar2 + 4;
              pcVar2[3] = '\n';
              iVar5 = lws_snprintf(local_78,pcVar1 + (((ulong)uVar3 - 0x11) - (long)local_78),
                                   "<html><body><h1>%u</h1>%s</body></html>",param_2,__s);
              local_78 = local_78 + iVar5;
              iVar10 = (int)local_78 - (int)pcVar1;
              iVar5 = lws_write(param_1,pcVar1,(long)iVar10,3);
              pcVar9 = local_78;
              if (iVar5 == iVar10) {
                _lws_log(4,"%s: return\n","lws_return_http_status");
                uVar7 = 0;
                if (*(long *)(lVar4 + 0x28) == local_58) {
                  return;
                }
                goto LAB_0104bc7c;
              }
            }
          }
        }
      }
    }
  }
  local_78 = pcVar9;
  uVar7 = 1;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_0104bc7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

