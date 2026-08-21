
void TIFFCleanup(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  char *__s2;
  uint uVar7;
  ulong uVar8;
  
  if (*(int *)((long)param_1 + 0xc) != 0) {
    TIFFFlush(param_1);
  }
  (**(code **)((long)param_1 + 0x338))(param_1);
  TIFFFreeDirectory(param_1);
  __ptr = *(undefined8 **)((long)param_1 + 0x28);
  if (__ptr != (undefined8 *)0x0) goto LAB_0110f1b8;
  while (__ptr = *(undefined8 **)((long)param_1 + 0x420), __ptr != (undefined8 *)0x0) {
    *(undefined8 *)((long)param_1 + 0x420) = *__ptr;
    _TIFFfree((void *)__ptr[2]);
LAB_0110f1b8:
    _TIFFfree(__ptr);
  }
  if ((*(void **)((long)param_1 + 0x368) != (void *)0x0) &&
     ((*(byte *)((long)param_1 + 0x11) >> 1 & 1) != 0)) {
    _TIFFfree(*(void **)((long)param_1 + 0x368));
  }
  if ((*(byte *)((long)param_1 + 0x11) >> 3 & 1) != 0) {
    (**(code **)((long)param_1 + 0x3b0))
              (*(undefined8 *)((long)param_1 + 0x3b8),*(undefined8 *)((long)param_1 + 0x398),
               *(undefined8 *)((long)param_1 + 0x3a0));
  }
  lVar3 = *(long *)((long)param_1 + 0x3f0);
  if ((lVar3 != 0) && (uVar8 = *(ulong *)((long)param_1 + 0x3f8), uVar8 != 0)) {
    uVar4 = 0;
    uVar7 = 1;
    while( true ) {
      pvVar6 = *(void **)(lVar3 + uVar4 * 8);
      if (*(short *)((long)pvVar6 + 0x18) == 0x41) {
        __s2 = *(char **)((long)pvVar6 + 0x20);
        iVar2 = strncmp("Tag ",__s2,4);
        if (iVar2 == 0) {
          _TIFFfree(__s2);
          _TIFFfree(pvVar6);
          uVar8 = *(ulong *)((long)param_1 + 0x3f8);
        }
      }
      uVar4 = (ulong)uVar7;
      if (uVar8 <= uVar4) break;
      lVar3 = *(long *)((long)param_1 + 0x3f0);
      uVar7 = uVar7 + 1;
    }
    _TIFFfree(*(void **)((long)param_1 + 0x3f0));
  }
  uVar8 = *(ulong *)((long)param_1 + 0x430);
  if (uVar8 != 0) {
    pvVar6 = *(void **)((long)param_1 + 0x428);
    uVar4 = 0;
    uVar5 = 1;
    do {
      if (*(int *)((long)pvVar6 + uVar4 * 0x18 + 4) != 0) {
        _TIFFfree(*(void **)((long)pvVar6 + uVar4 * 0x18 + 0x10));
        uVar8 = *(ulong *)((long)param_1 + 0x430);
        pvVar6 = *(void **)((long)param_1 + 0x428);
      }
      bVar1 = uVar5 < uVar8;
      uVar4 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
    _TIFFfree(pvVar6);
  }
  _TIFFfree(param_1);
  return;
}

