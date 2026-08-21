
bool FUN_00a9fa04(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *__s1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x228) + 0x188);
  if ((*(long *)(param_1 + 0x248) != 0) && (*(long *)(param_1 + 0x270) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x248) + 8))(param_1,0x32,*(long *)(param_1 + 0x270),0,0);
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 5 & 1) == 0) {
    thunk_FUN_00aa8a48(*(undefined8 *)(param_1 + 0x270),0,"free");
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  FUN_00aa3bb4(param_1);
  *(undefined8 **)(param_1 + 0x248) = param_2;
  if (param_2 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    if ((param_2[2] != 0) && (*(long *)(param_1 + 0x270) == 0)) {
      lVar4 = FUN_00aa8a78(param_2[2],"user space");
      *(long *)(param_1 + 0x270) = lVar4;
      if (lVar4 == 0) {
        _lws_log(1,"%s: OOM\n","lws_ensure_user_space");
        return true;
      }
    }
    lVar4 = *(long *)(param_1 + 0x228);
    iVar3 = *(int *)(lVar4 + 0x1dc);
    if ((puVar6 < param_2) && (param_2 < puVar6 + (long)iVar3 * 7)) {
      uVar5 = (long)param_2 - (long)puVar6;
LAB_00a9fb34:
      FUN_00aa3e24(param_1,(int)(uVar5 >> 3) * -0x49249249);
    }
    else {
      if ((iVar3 != 0) && (__s1 = (char *)*param_2, puVar7 = puVar6, __s1 != (char *)0x0)) {
        do {
          if (((char *)*puVar7 != (char *)0x0) && (iVar2 = strcmp(__s1,(char *)*puVar7), iVar2 == 0)
             ) {
            uVar5 = (long)puVar7 - (long)puVar6;
            goto LAB_00a9fb34;
          }
          iVar3 = iVar3 + -1;
          puVar7 = puVar7 + 7;
        } while (iVar3 != 0);
      }
      _lws_log(1,"%s: %p is not in vhost \'%s\' protocols list\n","lws_bind_protocol",param_2,
               *(undefined8 *)(lVar4 + 0x170));
    }
    iVar3 = (**(code **)(*(long *)(param_1 + 0x248) + 8))
                      (param_1,0x31,*(undefined8 *)(param_1 + 0x270),0,0);
    bVar1 = iVar3 != 0;
  }
  return bVar1;
}

