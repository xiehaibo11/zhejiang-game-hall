
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::base::OS::GetSharedLibraryAddresses() */

int __thiscall v8::base::OS::GetSharedLibraryAddresses(OS *this)

{
  ulong *puVar1;
  size_t __n;
  void *__src;
  ulong uVar2;
  int iVar3;
  FILE *__stream;
  char *__s;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  vector<v8::base::OS::SharedLibraryAddress,std::__ndk1::allocator<v8::base::OS::SharedLibraryAddress>>
  *in_x8;
  ulong uVar7;
  ulong local_d8;
  size_t sStack_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined1 auStack_88 [4];
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  long local_78;
  ulong local_70;
  ulong local_68;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  __stream = fopen("/proc/self/maps","r");
  iVar3 = 0;
  if (__stream != (FILE *)0x0) {
    __s = malloc(0x1001);
    iVar3 = fscanf(__stream,"%lx-%lx",&local_68,&local_70);
    if (iVar3 == 2) {
      do {
        iVar3 = fscanf(__stream," %c%c%c%c",local_7c,local_80,local_84,auStack_88);
        if ((iVar3 != 4) || (iVar3 = fscanf(__stream,"%lx",&local_78), iVar3 != 1)) break;
        if ((local_7c[0] == 'r') && ((local_80[0] != 'w' && (local_84[0] == 'x')))) {
          do {
            while (iVar3 = getc(__stream), 0x2e < iVar3) {
              if ((iVar3 == 0x5b) || (iVar3 == 0x2f)) {
                ungetc(iVar3,__stream);
                lVar4 = __fgets_chk(__s,0x1001,__stream,0x1001);
                if (lVar4 == 0) goto LAB_014782b8;
                lVar4 = __strlen_chk(__s,0x1001);
                __s[lVar4 + -1] = '\0';
                goto LAB_014780c4;
              }
            }
            if (iVar3 == -1) goto LAB_014782b8;
          } while (iVar3 != 10);
          FUN_014782ec(__s,0x1001);
LAB_014780c4:
          uVar5 = __strlen_chk(__s,0x1001);
          if ((uVar5 < 4) || (iVar3 = strncmp(__s + (uVar5 - 4),".apk",4), iVar3 != 0)) {
            local_68 = local_68 - local_78;
          }
          sStack_d0 = 0;
          local_c8 = (void *)0x0;
          local_d8 = 0;
          __n_00 = strlen(__s);
          if (0xffffffffffffffef < __n_00) goto LAB_014782e8;
          if (__n_00 < 0x17) {
            local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n_00 << 1));
            pvVar6 = (void *)((ulong)&local_d8 | 1);
            if (__n_00 != 0) goto LAB_01478164;
          }
          else {
            uVar5 = __n_00 + 0x10 & 0xfffffffffffffff0;
            pvVar6 = operator_new(uVar5);
            local_d8 = uVar5 | 1;
            sStack_d0 = __n_00;
            local_c8 = pvVar6;
LAB_01478164:
            memcpy(pvVar6,__s,__n_00);
          }
          uVar2 = local_68;
          uVar5 = local_70;
          __src = local_c8;
          __n = sStack_d0;
          *(undefined1 *)((long)pvVar6 + __n_00) = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = (void *)0x0;
          if ((local_d8 & 1) == 0) {
            uStack_b8 = sStack_d0;
            local_c0 = local_d8;
            local_b0 = local_c8;
          }
          else {
            if (0xffffffffffffffef < sStack_d0) {
LAB_014782e8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (sStack_d0 < 0x17) {
              local_c0 = (ulong)(byte)((int)sStack_d0 << 1);
              pvVar6 = (void *)((ulong)&local_c0 | 1);
              if (sStack_d0 != 0) goto LAB_014781fc;
            }
            else {
              uVar7 = sStack_d0 + 0x10 & 0xfffffffffffffff0;
              pvVar6 = operator_new(uVar7);
              local_c0 = uVar7 | 1;
              uStack_b8 = __n;
              local_b0 = pvVar6;
LAB_014781fc:
              memcpy(pvVar6,__src,__n);
            }
            *(undefined1 *)((long)pvVar6 + __n) = 0;
          }
          puVar1 = *(ulong **)(in_x8 + 8);
          local_a8 = uVar2;
          uStack_a0 = uVar5;
          local_98 = 0;
          if (puVar1 < *(ulong **)(in_x8 + 0x10)) {
            puVar1[2] = (ulong)local_b0;
            puVar1[1] = uStack_b8;
            *puVar1 = local_c0;
            uStack_b8 = 0;
            local_b0 = (void *)0x0;
            local_c0 = 0;
            puVar1[5] = 0;
            puVar1[4] = uVar5;
            puVar1[3] = uVar2;
            *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x30;
          }
          else {
            std::__ndk1::
            vector<v8::base::OS::SharedLibraryAddress,std::__ndk1::allocator<v8::base::OS::SharedLibraryAddress>>
            ::__push_back_slow_path<v8::base::OS::SharedLibraryAddress>
                      (in_x8,(SharedLibraryAddress *)&local_c0);
            if ((local_c0 & 1) != 0) {
              operator_delete(local_b0);
            }
          }
          if ((local_d8 & 1) != 0) {
            operator_delete(local_c8);
          }
        }
        else {
          do {
            iVar3 = getc(__stream);
            if (iVar3 == -1) goto LAB_014782b8;
          } while (iVar3 != 10);
        }
        iVar3 = fscanf(__stream,"%lx-%lx",&local_68,&local_70);
      } while (iVar3 == 2);
    }
LAB_014782b8:
    free(__s);
    iVar3 = fclose(__stream);
  }
  return iVar3;
}

