
long * FUN_00ab049c(long param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong __n;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x228) + 0x160);
  if (plVar5 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = 0;
    plVar3 = (long *)0x0;
    do {
      bVar1 = *(byte *)((long)plVar5 + 0x4e);
      __n = (ulong)bVar1;
      if ((((int)(uint)bVar1 <= param_3) &&
          (iVar2 = strncmp(param_2,(char *)plVar5[1],__n), iVar2 == 0)) &&
         ((param_2[__n] == '\0' || ((param_2[__n] == '/' || (bVar1 == 1)))))) {
        if (*(char *)((long)plVar5 + 0x4d) == '\x03') {
LAB_00ab0558:
          __n = (ulong)*(byte *)((long)plVar5 + 0x4e);
          if (*(byte *)((long)plVar5 + 0x4e) <= uVar4) goto LAB_00ab056c;
        }
        else if (*(char *)((long)plVar5 + 0x4d) != '\x06') {
          iVar2 = lws_hdr_total_length(param_1,0);
          if ((iVar2 == 0) &&
             ((((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0 ||
               (iVar2 = lws_hdr_total_length(param_1,0x25), iVar2 == 0)) && (plVar5[4] == 0))))
          goto LAB_00ab056c;
          goto LAB_00ab0558;
        }
        uVar4 = (uint)__n;
        plVar3 = plVar5;
      }
LAB_00ab056c:
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return plVar3;
}

