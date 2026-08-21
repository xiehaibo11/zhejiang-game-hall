
undefined8 * _Uaarch64_create_addr_space(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *__s;
  
  if (((param_2 == 0x4d2 || param_2 == 0) || (param_2 == 0x10e1)) &&
     (__s = malloc(0x32aa0), __s != (undefined8 *)0x0)) {
    memset(__s,0,0x32aa0);
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    uVar2 = param_1[4];
    uVar6 = param_1[5];
    uVar3 = param_1[6];
    uVar7 = param_1[7];
    *__s = *param_1;
    __s[1] = uVar4;
    __s[2] = uVar1;
    __s[3] = uVar5;
    __s[4] = uVar2;
    __s[5] = uVar6;
    __s[6] = uVar3;
    __s[7] = uVar7;
    if ((param_2 != 0x4d2) && (param_2 != 0)) {
      *(undefined4 *)(__s + 8) = 1;
      return __s;
    }
    *(undefined4 *)(__s + 8) = 0;
    return __s;
  }
  return (undefined8 *)0x0;
}

