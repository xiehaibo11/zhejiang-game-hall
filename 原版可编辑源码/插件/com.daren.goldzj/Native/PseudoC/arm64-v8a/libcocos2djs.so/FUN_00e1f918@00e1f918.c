
void FUN_00e1f918(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __n;
  char local_c8;
  byte local_c7;
  char acStack_c6 [61];
  char local_89;
  char local_7e;
  char local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 != (undefined8 *)0x0) &&
     (((code *)param_2[5] == (code *)0x0 ||
      (lVar2 = (*(code *)param_2[5])(param_2,0,0,0), lVar2 == 0)))) {
    __n = param_2[1];
    param_2[2] = 0;
    if (__n != 0) {
      if ((code *)param_2[5] == (code *)0x0) {
        if (0x7f < __n) {
          __n = 0x80;
        }
        memcpy(&local_c8,(void *)*param_2,__n);
        param_2[2] = __n;
      }
      else {
        __n = (*(code *)param_2[5])(param_2,0,&local_c8,0x80);
        param_2[2] = __n;
      }
      if (0x7f < __n) {
        if ((((local_c8 == '\0') && (local_7e == '\0')) && (local_76 == '\0')) &&
           ((((byte)(local_c7 - 1) < 0x21 && (local_89 == '\0')) &&
            ((acStack_c6[local_c7] == '\0' && (-1 < (char)local_75)))))) {
          uVar3 = FUN_00e1fab4(param_1,param_2,
                               ((long)(int)((uint)local_75 << 0x18) | (ulong)local_74 << 0x10 |
                                (ulong)local_73 << 8 | (ulong)local_72) + 0xff & 0xffffffffffffff80,
                               param_3,param_4);
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return;
          }
        }
        else {
          uVar3 = 2;
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return;
          }
        }
        goto LAB_00e1fab0;
      }
    }
  }
  uVar3 = 0x55;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00e1fab0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

