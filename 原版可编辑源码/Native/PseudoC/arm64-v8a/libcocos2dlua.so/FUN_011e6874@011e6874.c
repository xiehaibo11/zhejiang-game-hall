
long * FUN_011e6874(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   wchar_t param_6)

{
  ulong __n;
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  wchar_t *pwVar5;
  ulong local_80;
  ulong local_78;
  wchar_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_011e69f0;
  lVar3 = param_4 - param_2 >> 2;
  __n = *(long *)(param_5 + 0x18) - lVar3;
  if (__n == 0 || *(long *)(param_5 + 0x18) < lVar3) {
    __n = 0;
  }
  if ((param_3 - param_2 < 1) ||
     (lVar4 = param_3 - param_2 >> 2, lVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4),
     lVar3 == lVar4)) {
    if (0 < (long)__n) {
      local_78 = 0;
      local_70 = (wchar_t *)0x0;
      local_80 = 0;
      if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 5) {
        pwVar5 = (wchar_t *)((ulong)&local_80 | 4);
        local_80 = (ulong)(byte)((int)__n << 1);
      }
      else {
        if ((__n + 4 >> 0x3e & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        uVar2 = __n + 4 & 0x7ffffffffffffffc;
        pwVar5 = operator_new(uVar2 << 2);
        local_80 = uVar2 | 1;
        local_78 = __n;
        local_70 = pwVar5;
      }
      wmemset(pwVar5,param_6,__n);
      pwVar5[__n] = L'\0';
      pwVar5 = (wchar_t *)((ulong)&local_80 | 4);
      if ((local_80 & 1) != 0) {
        pwVar5 = local_70;
      }
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1,pwVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar2 != __n) goto LAB_011e69ec;
    }
    if ((param_4 - param_3 < 1) ||
       (lVar4 = param_4 - param_3 >> 2,
       lVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_3,lVar4), lVar3 == lVar4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_011e69f0;
    }
  }
LAB_011e69ec:
  param_1 = (long *)0x0;
LAB_011e69f0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

