
undefined8 SSL_CONF_cmd(uint *param_1,char *param_2,long param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  char *__s2;
  
  if (param_2 == (char *)0x0) {
    ERR_put_error(0x14,0x14e,0x181,"ssl/ssl_conf.c",0x2ab);
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) goto LAB_00af6770;
    if (*param_2 != '-') {
      return 0xfffffffe;
    }
    if (param_2[1] == '\0') {
      return 0xfffffffe;
    }
    uVar7 = 1;
  }
  else {
    sVar2 = strlen(param_2);
    uVar7 = *(ulong *)(param_1 + 4);
    if (sVar2 <= uVar7) {
      return 0xfffffffe;
    }
    uVar5 = *param_1;
    if (((uVar5 & 1) != 0) && (iVar1 = strncmp(param_2,__s2,uVar7), iVar1 != 0)) {
      return 0xfffffffe;
    }
    if (((uVar5 >> 1 & 1) != 0) && (iVar1 = strncasecmp(param_2,__s2,uVar7), iVar1 != 0)) {
      return 0xfffffffe;
    }
  }
  param_2 = param_2 + uVar7;
LAB_00af6770:
  puVar3 = (undefined8 *)FUN_00af68fc(param_1,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    if ((uVar5 >> 4 & 1) != 0) {
      ERR_put_error(0x14,0x14e,0x182,"ssl/ssl_conf.c",0x2c8);
      ERR_add_error_data(2,&DAT_013d3dae,param_2);
    }
    return 0xfffffffe;
  }
  if (*(short *)((long)puVar3 + 0x1a) == 4) {
    uVar7 = (long)(puVar3 + -0x2d5b9c) >> 5;
    if (uVar7 < 0xf) {
      puVar6 = param_1 + 10;
      if (*(long *)puVar6 == 0) {
        return 1;
      }
      uVar5 = *(uint *)(&DAT_013d4238 + uVar7 * 0x10) & 0xf00;
      if (uVar5 != 0) {
        if (uVar5 == 0x200) {
          puVar6 = param_1 + 0x1c;
        }
        else {
          if (uVar5 != 0x100) {
            return 1;
          }
          puVar6 = param_1 + 0x1a;
        }
      }
      puVar6 = *(uint **)puVar6;
      if ((uVar7 == 6) || (uVar7 == 0xd)) {
        uVar5 = *puVar6 & ((uint)*(undefined8 *)(&DAT_013d4230 + uVar7 * 0x10) ^ 0xffffffff);
      }
      else {
        uVar5 = (uint)*(undefined8 *)(&DAT_013d4230 + uVar7 * 0x10) | *puVar6;
      }
      *puVar6 = uVar5;
      return 1;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffd;
    }
    uVar4 = (*(code *)*puVar3)(param_1,param_3);
    if (0 < (int)uVar4) {
      return 2;
    }
    if ((int)uVar4 == -2) {
      return uVar4;
    }
    if (((byte)*param_1 >> 4 & 1) != 0) {
      ERR_put_error(0x14,0x14e,0x180,"ssl/ssl_conf.c",0x2c1);
      ERR_add_error_data(4,&DAT_013d3dae,param_2,", value=",param_3);
      return 0;
    }
  }
  return 0;
}

