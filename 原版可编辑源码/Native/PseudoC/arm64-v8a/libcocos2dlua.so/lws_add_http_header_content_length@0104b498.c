
void lws_add_http_header_content_length(long param_1,undefined8 param_2,long *param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  size_t __n;
  char acStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = sprintf(acStack_60,"%llu",param_2);
  pcVar5 = (char *)*param_3;
  if (pcVar5 < param_4) {
    pcVar8 = "content-length:";
    do {
      cVar1 = *pcVar8;
      if (cVar1 == '\0') break;
      *param_3 = (long)(pcVar5 + 1);
      *pcVar5 = cVar1;
      pcVar5 = (char *)*param_3;
      pcVar8 = pcVar8 + 1;
    } while (pcVar5 < param_4);
  }
  if (pcVar5 != param_4) {
    *param_3 = (long)(pcVar5 + 1);
    *pcVar5 = ' ';
    __n = (size_t)iVar3;
    if ((char *)(*param_3 + __n + 3) < param_4) {
      memcpy((void *)*param_3,acStack_60,__n);
      lVar6 = *param_3;
      uVar4 = 0;
      *param_3 = (long)((undefined1 *)(lVar6 + __n) + 1);
      *(undefined1 *)(lVar6 + __n) = 0xd;
      puVar7 = (undefined1 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
      *puVar7 = 10;
      *(undefined8 *)(param_1 + 0x148) = param_2;
      *(undefined8 *)(param_1 + 0x150) = param_2;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
      goto LAB_0104b59c;
    }
  }
  uVar4 = 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0104b59c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

