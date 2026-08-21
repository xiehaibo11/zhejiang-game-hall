
void FUN_00e3a420(long param_1,ulong *param_2)

{
  ulong *puVar1;
  void *__src;
  int iVar2;
  int iVar3;
  char *__s1;
  ulong uVar4;
  void *__dest;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  ulong local_70;
  int local_64;
  
  uVar5 = param_2[4];
  puVar7 = *(undefined8 **)(param_1 + 0x310);
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) {
      return;
    }
  }
  else {
    local_70 = (*(code *)param_2[9])(param_2);
    if (-1 < (int)local_70) {
      uVar4 = param_2[2] - *param_2;
      if (((*param_2 <= param_2[2]) && ((long)uVar4 >> 3 < (long)(int)local_70)) &&
         (local_70 = uVar4 >> 3, param_2[0x57] == 0)) {
        uVar4 = FUN_00e1388c(uVar5,0x28,&local_64);
        param_2[0x57] = uVar4;
        if ((local_64 != 0) || (local_64 = FUN_00e144f8(uVar4,uVar5), local_64 != 0))
        goto LAB_00e3a7b0;
      }
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) {
        return;
      }
      puVar1 = param_2 + 0x4b;
      (*(code *)param_2[7])(param_2);
      if (((int)param_2[0x4a] != 0) ||
         (local_64 = (**(code **)*puVar7)(puVar1,local_70,uVar5), local_64 == 0)) {
        __s1 = (char *)*param_2;
        if (__s1 + 4 < (char *)param_2[2]) {
          iVar6 = 0;
          do {
            iVar2 = strncmp(__s1,"dup",3);
            if (iVar2 != 0) break;
            (*(code *)param_2[8])(param_2);
            iVar2 = (*(code *)param_2[9])(param_2);
            pbVar8 = (byte *)param_2[2];
            lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x68);
            (*(code *)param_2[7])(param_2);
            if ((pbVar8 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_00e3a7a8:
              if (lVar9 != 0) {
                return;
              }
              goto LAB_00e3a7ac;
            }
            uVar4 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if ((long)uVar4 < 0) goto LAB_00e3a7a8;
            __src = (void *)(*param_2 + 1);
            if ((long)pbVar8 - (long)__src <= (long)uVar4) goto LAB_00e3a7a8;
            *param_2 = *param_2 + uVar4 + 1;
            if ((int)param_2[3] != 0) {
              return;
            }
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
            (*(code *)param_2[7])(param_2);
            if (((char *)*param_2 + 4 < (char *)param_2[2]) &&
               (iVar3 = strncmp((char *)*param_2,"put",3), iVar3 == 0)) {
              (*(code *)param_2[8])(param_2);
              (*(code *)param_2[7])(param_2);
            }
            if (param_2[0x57] != 0) {
              FUN_00e14818(iVar2,iVar6,param_2[0x57],uVar5);
              iVar2 = iVar6;
            }
            if ((int)param_2[0x4a] == 0) {
              if (*(int *)(param_1 + 0x13c) < 0) {
                local_64 = (*(code *)param_2[0x55])(puVar1,iVar2,__src,uVar4 & 0xffffffff);
              }
              else {
                if (uVar4 < (ulong)(long)*(int *)(param_1 + 0x13c)) {
                  local_64 = 3;
                  goto LAB_00e3a7b0;
                }
                __dest = (void *)FUN_00e1388c(uVar5,uVar4,&local_64);
                if (local_64 != 0) goto LAB_00e3a7b0;
                memcpy(__dest,__src,uVar4);
                (*(code *)puVar7[4])(__dest,uVar4,0x10ea);
                local_64 = (*(code *)param_2[0x55])
                                     (puVar1,iVar2,(long)__dest + (long)*(int *)(param_1 + 0x13c),
                                      (int)uVar4 - *(int *)(param_1 + 0x13c));
                FUN_00e139fc(uVar5,__dest);
              }
              if (local_64 != 0) goto LAB_00e3a7b0;
            }
            __s1 = (char *)*param_2;
            iVar6 = iVar6 + 1;
          } while (__s1 + 4 < (char *)param_2[2]);
        }
        if ((int)param_2[0x4a] != 0) {
          return;
        }
        *(int *)(param_2 + 0x4a) = (int)local_70;
        return;
      }
      goto LAB_00e3a7b0;
    }
  }
LAB_00e3a7ac:
  local_64 = 3;
LAB_00e3a7b0:
  *(int *)(param_2 + 3) = local_64;
  return;
}

