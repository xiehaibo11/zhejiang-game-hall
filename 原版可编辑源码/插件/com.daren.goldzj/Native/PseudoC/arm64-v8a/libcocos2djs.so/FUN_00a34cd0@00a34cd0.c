
undefined8 FUN_00a34cd0(undefined8 *param_1,long param_2,size_t param_3)

{
  void *__s;
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  void *__dest;
  long lVar3;
  int iVar4;
  long local_38;
  
  iVar1 = *(int *)(param_2 + 0xd4);
  __s = (void *)(param_2 + 0xd8);
  iVar4 = (int)param_3;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00a34b6c with catch @ 00a34d2c
                       catch() { ... } // from try @ 00a34bf0 with catch @ 00a34d2c */
                    /* catch() { ... } // from try @ 00a34b40 with catch @ 00a34d30
                       catch() { ... } // from try @ 00a34ba8 with catch @ 00a34d30 */
    memset(__s,0,0x70);
    *(code **)(param_2 + 0x118) = FUN_00a34ab4;
    *(code **)(param_2 + 0x120) = FUN_00a34acc;
    __s1 = (char *)zlibVersion();
    iVar1 = strcmp(__s1,"1.2.0.4");
                    /* catch() { ... } // from try @ 00a34a24 with catch @ 00a34d58 */
                    /* catch() { ... } // from try @ 00a34a18 with catch @ 00a34d5c */
                    /* catch() { ... } // from try @ 00a349f8 with catch @ 00a34d60 */
    if (iVar1 < 0) {
      iVar1 = inflateInit2_(__s,0xfffffff1,"1.2.8",0x70);
                    /* try { // try from 00a34e3c to 00b34e47 has its CatchHandler @ 00a34fa0 */
      if (iVar1 != 0) goto LAB_00a34e40;
      iVar1 = 1;
    }
    else {
                    /* catch() { ... } // from try @ 00a34a30 with catch @ 00a34d70
                       catch() { ... } // from try @ 00a34c64 with catch @ 00a34d70 */
      iVar1 = inflateInit2_(__s,0x2f,"1.2.8",0x70);
      if (iVar1 != 0) {
LAB_00a34e40:
                    /* try { // try from 00a34e48 to 00b34e53 has its CatchHandler @ 00a34f9c */
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a23020(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
          return 0x3d;
        }
                    /* try { // try from 00a34e54 to 00b34f27 has its CatchHandler @ 00a34fb4 */
        FUN_00a23020(*param_1,"Error while processing content unencoding: %s");
        return 0x3d;
      }
      iVar1 = 4;
    }
    *(int *)(param_2 + 0xd4) = iVar1;
    if (iVar1 != 1) goto LAB_00a34d04;
LAB_00a34e94:
    iVar1 = FUN_00a34fdc(*(undefined8 *)(param_2 + 0x80),param_3,&local_38);
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a23020(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
                    /* try { // try from 00a34f28 to 00b3500b has its CatchHandler @ 00a34dc8 */
          FUN_00a23020(*param_1,"Error while processing content unencoding: %s");
        }
        inflateEnd(__s);
                    /* catch() { ... } // from try @ 00a34e48 with catch @ 00a34f9c */
                    /* catch() { ... } // from try @ 00a34e3c with catch @ 00a34fa0 */
                    /* catch() { ... } // from try @ 00a34e1c with catch @ 00a34fa4 */
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x3d;
      }
      *(int *)(param_2 + 0xe0) = iVar4;
      __dest = (void *)(*(code *)PTR_malloc_01d1b740)(param_3 & 0xffffffff);
      *(void **)(param_2 + 0xd8) = __dest;
      if (__dest == (void *)0x0) {
        inflateEnd(__s);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x1b;
      }
      memcpy(__dest,*(void **)(param_2 + 0x80),(ulong)*(uint *)(param_2 + 0xe0));
      *(undefined4 *)(param_2 + 0xd4) = 2;
      return 0;
    }
    *(undefined4 *)(param_2 + 0xd4) = 3;
    iVar4 = iVar4 - (int)local_38;
    *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0x80) + local_38;
    *(int *)(param_2 + 0xe0) = iVar4;
  }
  else {
    if (iVar1 == 1) goto LAB_00a34e94;
LAB_00a34d04:
    if (iVar1 == 2) {
      *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + iVar4;
      lVar3 = FUN_00a379b0(*(undefined8 *)(param_2 + 0xd8));
      *(long *)(param_2 + 0xd8) = lVar3;
      if (lVar3 == 0) {
        inflateEnd(__s);
        uVar2 = 0x1b;
LAB_00a34fc4:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return uVar2;
      }
      memcpy((void *)((lVar3 + (ulong)*(uint *)(param_2 + 0xe0)) - param_3),
             *(void **)(param_2 + 0x80),param_3);
      iVar1 = FUN_00a34fdc(*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0),&local_38
                          );
      if (iVar1 != 0) {
                    /* try { // try from 00a34dc8 to 00b34e1b has its CatchHandler @ 00a34dc8
                       catch() { ... } // from try @ 00a34dc8 with catch @ 00a34dc8
                       catch() { ... } // from try @ 00a34f28 with catch @ 00a34dc8 */
        if (iVar1 == 2) {
          return 0;
        }
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_2 + 0xd8));
        if (*(long *)(param_2 + 0x108) == 0) {
                    /* catch() { ... } // from try @ 00a34e54 with catch @ 00a34fb4 */
          FUN_00a23020(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_00a23020(*param_1,"Error while processing content unencoding: %s");
        }
        inflateEnd(__s);
        uVar2 = 0x3d;
        goto LAB_00a34fc4;
      }
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_2 + 0xd8));
      *(undefined4 *)(param_2 + 0xd4) = 3;
      lVar3 = *(long *)(param_2 + 0x80) + local_38 + param_3;
      param_3 = (size_t)(*(uint *)(param_2 + 0xe0) - (int)local_38);
      lVar3 = lVar3 - (ulong)*(uint *)(param_2 + 0xe0);
    }
    else {
      if (iVar1 == 4) {
        *(int *)(param_2 + 0xe0) = iVar4;
                    /* catch() { ... } // from try @ 00a34b0c with catch @ 00a34d1c */
        *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
        goto LAB_00a34e10;
      }
      lVar3 = *(long *)(param_2 + 0x80);
    }
    iVar4 = (int)param_3;
    *(int *)(param_2 + 0xe0) = iVar4;
    *(long *)(param_2 + 0xd8) = lVar3;
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_00a34e10:
                    /* try { // try from 00a34e1c to 00b34e33 has its CatchHandler @ 00a34fa4 */
  uVar2 = FUN_00a34ae0(param_1,param_2);
  return uVar2;
}

