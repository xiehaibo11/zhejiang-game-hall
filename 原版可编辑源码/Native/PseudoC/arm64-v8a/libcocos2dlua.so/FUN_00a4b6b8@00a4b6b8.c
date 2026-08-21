
undefined8 FUN_00a4b6b8(undefined8 *param_1,long param_2,size_t param_3)

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
    memset(__s,0,0x70);
    *(code **)(param_2 + 0x118) = FUN_00a4b49c;
    *(code **)(param_2 + 0x120) = FUN_00a4b4b4;
    __s1 = (char *)zlibVersion();
    iVar1 = strcmp(__s1,"1.2.0.4");
    if (iVar1 < 0) {
      iVar1 = inflateInit2_(__s,0xfffffff1,"1.2.8",0x70);
      if (iVar1 != 0) goto LAB_00a4b828;
      iVar1 = 1;
    }
    else {
      iVar1 = inflateInit2_(__s,0x2f,"1.2.8",0x70);
      if (iVar1 != 0) {
LAB_00a4b828:
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a38a08(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
          return 0x3d;
        }
        FUN_00a38a08(*param_1,"Error while processing content unencoding: %s");
        return 0x3d;
      }
      iVar1 = 4;
    }
    *(int *)(param_2 + 0xd4) = iVar1;
    if (iVar1 != 1) goto LAB_00a4b6ec;
LAB_00a4b87c:
    iVar1 = FUN_00a4b9c4(*(undefined8 *)(param_2 + 0x80),param_3,&local_38);
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00a4b790 with catch @ 00a4b890 */
      if (iVar1 != 2) {
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a38a08(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_00a38a08(*param_1,"Error while processing content unencoding: %s");
                    /* try { // try from 00a4b918 to 00b4b943 has its CatchHandler @ 00a4b9d8 */
        }
        inflateEnd(__s);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x3d;
      }
      *(int *)(param_2 + 0xe0) = iVar4;
                    /* try { // try from 00a4b8ac to 00b4b8fb has its CatchHandler @ 00a4b8ac
                       catch() { ... } // from try @ 00a4b8ac with catch @ 00a4b8ac
                       catch() { ... } // from try @ 00a4b944 with catch @ 00a4b8ac
                       catch() { ... } // from try @ 00a4b9c4 with catch @ 00a4b8ac */
      __dest = (void *)(*(code *)PTR_malloc_017699f8)(param_3 & 0xffffffff);
      *(void **)(param_2 + 0xd8) = __dest;
      if (__dest == (void *)0x0) {
        inflateEnd(__s);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x1b;
                    /* try { // try from 00a4b96c to 00b4b97f has its CatchHandler @ 00a4b9dc */
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
    if (iVar1 == 1) goto LAB_00a4b87c;
LAB_00a4b6ec:
    if (iVar1 == 2) {
      *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + iVar4;
      lVar3 = FUN_00a4e398(*(undefined8 *)(param_2 + 0xd8));
      *(long *)(param_2 + 0xd8) = lVar3;
      if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 00a4b7c4 with catch @ 00a4b85c */
                    /* catch() { ... } // from try @ 00a4b7dc with catch @ 00a4b860 */
        inflateEnd(__s);
        uVar2 = 0x1b;
LAB_00a4b9ac:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return uVar2;
      }
                    /* try { // try from 00a4b790 to 00b4b7c3 has its CatchHandler @ 00a4b890 */
      memcpy((void *)((lVar3 + (ulong)*(uint *)(param_2 + 0xe0)) - param_3),
             *(void **)(param_2 + 0x80),param_3);
      iVar1 = FUN_00a4b9c4(*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0),&local_38
                          );
      if (iVar1 != 0) {
        if (iVar1 == 2) {
          return 0;
        }
                    /* try { // try from 00a4b7c4 to 00b4b7d7 has its CatchHandler @ 00a4b85c */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_2 + 0xd8));
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a38a08(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
                    /* try { // try from 00a4b7dc to 00b4b80f has its CatchHandler @ 00a4b860 */
          FUN_00a38a08(*param_1,"Error while processing content unencoding: %s");
        }
        inflateEnd(__s);
        uVar2 = 0x3d;
        goto LAB_00a4b9ac;
      }
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_2 + 0xd8));
      *(undefined4 *)(param_2 + 0xd4) = 3;
                    /* try { // try from 00a4b944 to 00b4b96b has its CatchHandler @ 00a4b8ac */
      lVar3 = *(long *)(param_2 + 0x80) + local_38 + param_3;
      param_3 = (size_t)(*(uint *)(param_2 + 0xe0) - (int)local_38);
      lVar3 = lVar3 - (ulong)*(uint *)(param_2 + 0xe0);
    }
    else {
      if (iVar1 == 4) {
        *(int *)(param_2 + 0xe0) = iVar4;
        *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
        goto LAB_00a4b7f8;
      }
      lVar3 = *(long *)(param_2 + 0x80);
    }
    iVar4 = (int)param_3;
    *(int *)(param_2 + 0xe0) = iVar4;
    *(long *)(param_2 + 0xd8) = lVar3;
  }
  if (iVar4 == 0) {
                    /* try { // try from 00a4b9bc to 00b4b9c3 has its CatchHandler @ 00a4b9d8 */
    return 0;
  }
LAB_00a4b7f8:
                    /* try { // try from 00a4b810 to 00b4b8ab has its CatchHandler @ 00a4b510 */
  uVar2 = FUN_00a4b4c8(param_1,param_2);
  return uVar2;
}

