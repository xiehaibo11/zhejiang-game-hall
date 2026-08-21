
void * FUN_00ab5eb0(undefined8 *param_1,char *param_2,char *param_3,uint *param_4)

{
  char *__s;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *__ptr;
  long lVar5;
  char *pcVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  undefined4 local_12c;
  char acStack_128 [200];
  
  lVar9 = tpidr_el0;
  lVar8 = *(long *)(lVar9 + 0x28);
  local_12c = 0;
  __ptr = (void *)FUN_00aa8a78(0x170,"fops_zip priv");
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00ab5f14 to 00bb5f17 has its CatchHandler @ 00ab5f40 */
    *(undefined ***)((long)__ptr + 8) = &PTR_FUN_01d1b7b0;
    if ((long)param_3 - (long)param_2 < 0xc0) {
      sVar11 = ((long)param_3 - (long)param_2 << 0x20) + -0x100000000 >> 0x20;
    }
    else {
      sVar11 = 0xbf;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab5f14 with catch @ 00ab5f40
                        */
    strncpy(acStack_128,param_2,sVar11);
    acStack_128[sVar11] = '\0';
    lVar5 = (*(code *)*param_1)(param_1,acStack_128,0,&local_12c);
    plVar10 = (long *)((long)__ptr + 0x30);
    *plVar10 = lVar5;
    if (lVar5 == 0) {
      _lws_log(1,"unable to open zip %s\n",acStack_128);
    }
    else {
      __s = param_3 + 1;
      if (*param_3 != '/') {
        __s = param_3;
      }
      sVar11 = strlen(__s);
      uVar3 = FUN_00ab5a70(__ptr,__s,sVar11);
      if (uVar3 == 0) {
        *(undefined4 *)((long)__ptr + 0x2c) = *(undefined4 *)((long)__ptr + 0x50);
        uVar1 = *param_4;
        *param_4 = uVar1 | 0xc000000;
        uVar2 = *(ushort *)((long)__ptr + 0x58);
        uVar3 = (uint)uVar2;
        *(uint *)((long)__ptr + 0x28) = uVar1 | 0xc000000;
        if (uVar2 == 0) {
          *(ulong *)((long)__ptr + 0x20) = (ulong)*(uint *)((long)__ptr + 0x48);
          lVar9 = *(long *)(lVar9 + 0x28);
          goto joined_r0x00ab6094;
        }
        if ((uVar2 == 8) && ((*param_4 >> 0x18 & 1) != 0)) {
          *(undefined4 *)((long)__ptr + 0xe0) = *(undefined4 *)((long)__ptr + 0x40);
          *(undefined4 *)((long)__ptr + 0xe4) = *(undefined4 *)((long)__ptr + 0x48);
          *(ulong *)((long)__ptr + 0x20) = (ulong)*(uint *)((long)__ptr + 0x44) + 0x12;
          uVar3 = *param_4;
          *param_4 = uVar3 | 0x2000000;
          *(uint *)((long)__ptr + 0x28) = uVar3 | 0x2000000;
          bVar7 = *(byte *)((long)__ptr + 0x16c) | 2;
LAB_00ab6084:
          *(byte *)((long)__ptr + 0x16c) = bVar7;
          lVar9 = *(long *)(lVar9 + 0x28);
          goto joined_r0x00ab6094;
        }
        if (uVar2 != 8) {
          pcVar6 = "zipped file %s compressed in unknown way (%d)\n";
          goto LAB_00ab5fb8;
        }
        *(ulong *)((long)__ptr + 0x20) = (ulong)*(uint *)((long)__ptr + 0x48);
        if ((*(byte *)((long)__ptr + 0x16c) & 1) != 0) {
          inflateEnd((long)__ptr + 0x60);
        }
        *(undefined4 *)((long)__ptr + 0x68) = 0;
        *(undefined8 *)((long)__ptr + 0xa8) = 0;
        *(undefined8 *)((long)__ptr + 0xb0) = 0;
        *(undefined8 *)((long)__ptr + 0xa0) = 0;
        *(undefined8 *)((long)__ptr + 0x60) = 0;
        iVar4 = inflateInit2_((long)__ptr + 0x60,0xfffffff1,"1.2.8",0x70);
        if (iVar4 == 0) {
          lVar5 = lws_vfs_file_seek_set
                            (*(undefined8 *)((long)__ptr + 0x30),*(undefined8 *)((long)__ptr + 0xd0)
                            );
          if (-1 < lVar5) {
            *(undefined8 *)((long)__ptr + 0xd8) = 0;
            bVar7 = *(byte *)((long)__ptr + 0x16c) | 1;
            goto LAB_00ab6084;
          }
        }
        else {
          _lws_log(1,"inflate init failed\n");
        }
        _lws_log(1,"inflate init failed\n");
      }
      else {
        pcVar6 = "unable to find record matching \'%s\' %d\n";
        param_2 = __s;
LAB_00ab5fb8:
        _lws_log(1,pcVar6,param_2,uVar3);
      }
      (**(code **)(*(long *)(*plVar10 + 8) + 8))(plVar10);
    }
    free(__ptr);
    __ptr = (void *)0x0;
  }
  lVar9 = *(long *)(lVar9 + 0x28);
joined_r0x00ab6094:
  if (lVar9 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
}

