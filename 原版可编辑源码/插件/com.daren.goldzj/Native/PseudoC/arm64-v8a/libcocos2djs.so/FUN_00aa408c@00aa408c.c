
ulong FUN_00aa408c(long param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  ulong __n;
  char *local_68;
  char acStack_5c [19];
  undefined1 local_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_68 = param_2;
  lVar5 = lws_get_context();
  if (param_3 == 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return 0;
    }
    goto LAB_00aa410c;
  }
  uVar4 = *(uint *)(param_1 + 0x2e8);
  if (*(char *)(param_1 + 0x2ff) == '\v') {
    if (uVar4 != 0) goto LAB_00aa4114;
LAB_00aa40e0:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_3 & 0xffffffff;
    }
  }
  else {
    if (uVar4 == 0) {
LAB_00aa4168:
      uVar4 = FUN_00ab3f44(param_1,0xd,&local_68,param_3 & 0xffffffff);
      if (-1 < (int)uVar4) {
        if (uVar4 == 0) {
                    /* try { // try from 00aa41f4 to 00ba41fb has its CatchHandler @ 00aa4420 */
          if (((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) && (*(int *)(param_1 + 0x2d0) < 0)) {
            _lws_log(2,"** error invalid sock but expected to send\n");
          }
          uVar6 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x30);
          if ((uVar6 == 0) &&
             (uVar4 = *(uint *)(*(long *)(param_1 + 0x248) + 0x18), uVar6 = (ulong)uVar4, uVar4 == 0
             )) {
            uVar6 = (ulong)*(uint *)(lVar5 + 0xc84);
          }
          uVar4 = (int)uVar6 + 0x14;
          uVar1 = (uint)param_3;
          if (uVar4 <= param_3) {
            uVar1 = uVar4;
          }
          uVar4 = lws_ssl_capable_write(param_1,local_68,uVar1);
          if (uVar4 != 0xfffffffe) {
            if (uVar4 == 0xffffffff) {
              *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
              if (*(long *)(lVar3 + 0x28) == local_48) {
                return 0xffffffff;
              }
              goto LAB_00aa410c;
            }
            goto LAB_00aa4188;
          }
          uVar6 = 0;
          iVar2 = *(int *)(param_1 + 0x2e8);
        }
        else {
LAB_00aa4188:
          uVar6 = (ulong)uVar4;
          iVar2 = *(int *)(param_1 + 0x2e8);
        }
        if (iVar2 == 0) {
          if (uVar6 == param_3) {
LAB_00aa430c:
            if (*(long *)(lVar3 + 0x28) == local_48) {
              return uVar6;
            }
            goto LAB_00aa410c;
          }
          __dest = *(void **)(param_1 + 0x288);
          __n = param_3 - uVar6;
          if ((__dest == (void *)0x0) || (*(uint *)(param_1 + 0x2e0) < __n)) {
                    /* try { // try from 00aa42a4 to 00ba42ab has its CatchHandler @ 00aa43b0 */
                    /* try { // try from 00aa42ac to 00ba42cf has its CatchHandler @ 00aa401c */
            thunk_FUN_00aa8a48(__dest,0,"lws_free");
            *(int *)(param_1 + 0x2e0) = (int)__n;
            __dest = (void *)thunk_FUN_00aa8a48(0,__n,"truncated send alloc");
            *(void **)(param_1 + 0x288) = __dest;
            if (__dest == (void *)0x0) {
              _lws_log(1,"truncated send: unable to malloc %lu\n",__n);
              uVar6 = 0xffffffff;
              goto LAB_00aa430c;
            }
          }
                    /* try { // try from 00aa42d0 to 00ba42e7 has its CatchHandler @ 00aa43c0 */
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          *(int *)(param_1 + 0x2e8) = (int)__n;
          memcpy(__dest,local_68 + uVar6,__n);
                    /* try { // try from 00aa42e8 to 00ba4393 has its CatchHandler @ 00aa401c */
          lws_callback_on_writable(param_1);
          goto LAB_00aa40e0;
        }
                    /* try { // try from 00aa4190 to 00ba4197 has its CatchHandler @ 00aa43ac */
        iVar2 = iVar2 - (int)uVar6;
                    /* try { // try from 00aa4198 to 00ba41f3 has its CatchHandler @ 00aa401c */
        *(int *)(param_1 + 0x2e8) = iVar2;
        *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + (int)uVar6;
        if ((iVar2 != 0) || (uVar6 = param_3 & 0xffffffff, *(char *)(param_1 + 0x2ff) != '\v')) {
          lws_callback_on_writable(param_1);
          if (*(long *)(lVar3 + 0x28) == local_48) {
            return uVar6;
          }
          goto LAB_00aa410c;
        }
      }
    }
    else {
LAB_00aa4114:
      if ((*(char **)(param_1 + 0x288) <= param_2) &&
         (param_2 <= *(char **)(param_1 + 0x288) + (ulong)*(uint *)(param_1 + 0x2e4) + (ulong)uVar4)
         ) goto LAB_00aa4168;
      strncpy(acStack_5c,param_2,0x13);
      local_49 = 0;
      _lws_log(1,
               "****** %p: Sending new %lu (%s), pending truncated ...\n       It\'s illegal to do an lws_write outside of\n       the writable callback: fix your code\n"
               ,param_1,param_3,acStack_5c);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return 0xffffffff;
    }
  }
LAB_00aa410c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

