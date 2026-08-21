
void strbuf_append_string(long *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    iVar3 = (int)param_1[1] + ~uVar1;
    do {
      if (iVar3 < 1) {
        strbuf_resize(param_1,uVar1 + 1);
        uVar1 = *(uint *)((long)param_1 + 0xc);
        cVar2 = *param_2;
        iVar3 = (int)param_1[1] + ~uVar1;
      }
      iVar3 = iVar3 + -1;
      *(char *)(*param_1 + (long)(int)uVar1) = cVar2;
      uVar1 = *(int *)((long)param_1 + 0xc) + 1;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      cVar2 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
  }
  return;
}

