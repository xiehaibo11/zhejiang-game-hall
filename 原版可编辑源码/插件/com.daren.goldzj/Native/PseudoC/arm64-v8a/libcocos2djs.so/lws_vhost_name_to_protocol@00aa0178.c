
undefined8 * lws_vhost_name_to_protocol(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  if (0 < iVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x188);
    lVar4 = 0;
    do {
      iVar2 = strcmp(param_2,(char *)*puVar3);
      if (iVar2 == 0) {
        return puVar3;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 7;
    } while (lVar4 < iVar1);
  }
  return (undefined8 *)0x0;
}

