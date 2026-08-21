
ulong FUN_01046810(long param_1,char *param_2,ulong param_3)

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
  
                    /* try { // try from 01046828 to 01146883 has its CatchHandler @ 01046828
                       catch() { ... } // from try @ 01046828 with catch @ 01046828
                       catch() { ... } // from try @ 010468a8 with catch @ 01046828 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_68 = param_2;
  lVar5 = lws_get_context();
  if (param_3 == 0) {
                    /* try { // try from 01046884 to 01146893 has its CatchHandler @ 0104694c */
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return 0;
    }
    goto LAB_01046890;
  }
  uVar4 = *(uint *)(param_1 + 0x2e8);
  if (*(char *)(param_1 + 0x2ff) == '\v') {
    if (uVar4 != 0) goto LAB_01046898;
LAB_01046864:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_3 & 0xffffffff;
    }
  }
  else {
                    /* try { // try from 01046894 to 011468a7 has its CatchHandler @ 0104692c */
    if (uVar4 == 0) {
LAB_010468ec:
      uVar4 = FUN_010566c8(param_1,0xd,&local_68,param_3 & 0xffffffff);
      if (-1 < (int)uVar4) {
        if (uVar4 == 0) {
          if (((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) && (*(int *)(param_1 + 0x2d0) < 0)) {
            _lws_log(2,"** error invalid sock but expected to send\n");
          }
          uVar6 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x30);
          if ((uVar6 == 0) &&
             (uVar4 = *(uint *)(*(long *)(param_1 + 0x248) + 0x18), uVar6 = (ulong)uVar4, uVar4 == 0
             )) {
                    /* try { // try from 010469a4 to 011469e7 has its CatchHandler @ 010469a4
                       catch() { ... } // from try @ 010469a4 with catch @ 010469a4
                       catch() { ... } // from try @ 01046a14 with catch @ 010469a4 */
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
                    /* try { // try from 010469e8 to 011469ff has its CatchHandler @ 01046b04 */
              if (*(long *)(lVar3 + 0x28) == local_48) {
                return 0xffffffff;
              }
              goto LAB_01046890;
            }
            goto LAB_0104690c;
          }
          uVar6 = 0;
          iVar2 = *(int *)(param_1 + 0x2e8);
        }
        else {
LAB_0104690c:
          uVar6 = (ulong)uVar4;
          iVar2 = *(int *)(param_1 + 0x2e8);
        }
        if (iVar2 == 0) {
                    /* try { // try from 01046a00 to 01146a13 has its CatchHandler @ 01046a98 */
          if (uVar6 == param_3) {
LAB_01046a90:
                    /* catch() { ... } // from try @ 01046a00 with catch @ 01046a98 */
            if (*(long *)(lVar3 + 0x28) == local_48) {
              return uVar6;
            }
            goto LAB_01046890;
          }
          __dest = *(void **)(param_1 + 0x288);
          __n = param_3 - uVar6;
                    /* try { // try from 01046a14 to 01146b1f has its CatchHandler @ 010469a4 */
          if ((__dest == (void *)0x0) || (*(uint *)(param_1 + 0x2e0) < __n)) {
            thunk_FUN_0104b1cc(__dest,0,"lws_free");
            *(int *)(param_1 + 0x2e0) = (int)__n;
            __dest = (void *)thunk_FUN_0104b1cc(0,__n,"truncated send alloc");
            *(void **)(param_1 + 0x288) = __dest;
            if (__dest == (void *)0x0) {
              _lws_log(1,"truncated send: unable to malloc %lu\n",__n);
              uVar6 = 0xffffffff;
              goto LAB_01046a90;
            }
          }
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          *(int *)(param_1 + 0x2e8) = (int)__n;
          memcpy(__dest,local_68 + uVar6,__n);
          lws_callback_on_writable(param_1);
          goto LAB_01046864;
        }
        iVar2 = iVar2 - (int)uVar6;
        *(int *)(param_1 + 0x2e8) = iVar2;
        *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + (int)uVar6;
                    /* catch() { ... } // from try @ 01046894 with catch @ 0104692c */
        if ((iVar2 != 0) || (uVar6 = param_3 & 0xffffffff, *(char *)(param_1 + 0x2ff) != '\v')) {
          lws_callback_on_writable(param_1);
          if (*(long *)(lVar3 + 0x28) == local_48) {
            return uVar6;
          }
          goto LAB_01046890;
        }
      }
    }
    else {
LAB_01046898:
                    /* try { // try from 010468a8 to 011469a3 has its CatchHandler @ 01046828 */
      if ((*(char **)(param_1 + 0x288) <= param_2) &&
         (param_2 <= *(char **)(param_1 + 0x288) + (ulong)*(uint *)(param_1 + 0x2e4) + (ulong)uVar4)
         ) goto LAB_010468ec;
      strncpy(acStack_5c,param_2,0x13);
      local_49 = 0;
      _lws_log(1,
               "****** %p: Sending new %lu (%s), pending truncated ...\n       It\'s illegal to do an lws_write outside of\n       the writable callback: fix your code\n"
               ,param_1,param_3,acStack_5c);
    }
                    /* catch() { ... } // from try @ 01046884 with catch @ 0104694c */
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return 0xffffffff;
    }
  }
LAB_01046890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

