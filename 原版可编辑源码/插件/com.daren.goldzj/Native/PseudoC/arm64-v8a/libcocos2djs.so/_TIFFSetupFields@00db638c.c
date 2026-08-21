
void _TIFFSetupFields(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *__ptr;
  char *__s2;
  uint uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0x3f0);
  if ((lVar3 != 0) && (uVar6 = *(ulong *)(param_1 + 0x3f8), uVar6 != 0)) {
    uVar4 = 0;
    plVar1 = (long *)(param_1 + 0x3f0);
    uVar5 = 1;
    while( true ) {
      __ptr = *(void **)(lVar3 + uVar4 * 8);
      if (*(short *)((long)__ptr + 0x18) == 0x41) {
        __s2 = *(char **)((long)__ptr + 0x20);
        iVar2 = strncmp("Tag ",__s2,4);
        if (iVar2 == 0) {
          _TIFFfree(__s2);
          _TIFFfree(__ptr);
          uVar6 = *(ulong *)(param_1 + 0x3f8);
        }
      }
      uVar4 = (ulong)uVar5;
      if (uVar6 <= uVar4) break;
      lVar3 = *plVar1;
      uVar5 = uVar5 + 1;
    }
    _TIFFfree((void *)*plVar1);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  iVar2 = _TIFFMergeFields(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8));
  if (iVar2 != 0) {
    return;
  }
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"_TIFFSetupFields","Setting up field info failed");
  return;
}

