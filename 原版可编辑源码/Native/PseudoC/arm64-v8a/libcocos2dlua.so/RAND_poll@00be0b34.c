
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_poll(void)

{
  stat *__buf;
  uint uVar1;
  __pid_t _Var2;
  uint uVar3;
  int __fd;
  int iVar4;
  __uid_t _Var5;
  ssize_t sVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  __dev_t local_208 [15];
  stat sStack_190;
  undefined1 auStack_88 [32];
  pollfd local_68;
  
  _Var2 = getpid();
  memset(local_208,0,0x180);
  uVar12 = 0;
  iVar11 = 0;
  do {
    __fd = open((&PTR_s__dev_urandom_016c6d78)[uVar12],0x900);
    if (-1 < __fd) {
      __buf = (stat *)((long)&sStack_190 + (uVar12 * 0x10 + -0xf) * 8);
      iVar4 = fstat(__fd,__buf);
      if (iVar4 == 0) {
        if (uVar12 != 0) {
          uVar8 = 0;
          plVar9 = (long *)((long)local_208 + 8);
          do {
            if ((*plVar9 == *(long *)((long)&sStack_190 + (uVar12 * 0x10 + -0xe) * 8)) &&
               (plVar9[-1] == __buf->st_dev)) goto LAB_00be0cb8;
            uVar8 = uVar8 + 1;
            plVar9 = plVar9 + 0x10;
          } while (uVar8 < uVar12);
        }
        uVar10 = 10000;
        do {
          while( true ) {
            local_68.events = 1;
            local_68.revents = 0;
            local_68.fd = __fd;
            iVar4 = poll(&local_68,1,uVar10 / 1000);
            if (-1 < iVar4) break;
            uVar10 = 0;
LAB_00be0c4c:
            uVar1 = 0;
            if (uVar10 != 10000) {
              uVar1 = uVar10;
            }
LAB_00be0c54:
            uVar10 = uVar1;
            piVar7 = (int *)__errno();
            if (*piVar7 == 4) goto LAB_00be0c64;
            if (((0x1f < iVar11) || (uVar10 == 0)) || (*piVar7 != 0xb)) goto LAB_00be0cb8;
          }
          if (((ulong)local_68 & 0x1000000000000) == 0) goto LAB_00be0c4c;
          sVar6 = read(__fd,auStack_88 + iVar11,(long)(0x20 - iVar11));
          uVar3 = (uint)sVar6;
          uVar1 = 0;
          if (uVar10 != 10000) {
            uVar1 = uVar10;
          }
          iVar11 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + iVar11;
          uVar10 = uVar1;
          if ((int)uVar3 < 1) goto LAB_00be0c54;
LAB_00be0c64:
        } while ((uVar10 != 0) && (iVar11 < 0x20));
      }
LAB_00be0cb8:
      close(__fd);
    }
    uVar12 = uVar12 + 1;
    if ((2 < uVar12) || (0x1f < iVar11)) {
      if (0 < iVar11) {
        RAND_add(auStack_88,0x20,(double)iVar11);
        OPENSSL_cleanse(auStack_88,(long)iVar11);
      }
      local_68 = (pollfd)(long)_Var2;
      RAND_add(&local_68,8,0.0);
      _Var5 = getuid();
      local_68.events = 0;
      local_68.revents = 0;
      local_68.fd = _Var5;
      RAND_add(&local_68,8,0.0);
      local_68 = (pollfd)time((time_t *)0x0);
      RAND_add(&local_68,8,0.0);
      return 1;
    }
  } while( true );
}

