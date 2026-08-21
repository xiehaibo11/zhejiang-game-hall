
/* dtBuildTileCacheLayer(dtTileCacheCompressor*, dtTileCacheLayerHeader*, unsigned char const*,
   unsigned char const*, unsigned char const*, unsigned char**, int*) */

int dtBuildTileCacheLayer
              (dtTileCacheCompressor *param_1,dtTileCacheLayerHeader *param_2,uchar *param_3,
              uchar *param_4,uchar *param_5,uchar **param_6,int *param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *__s;
  void *__dest;
  size_t __n;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = -0x7ffffffc;
  __n = (ulong)(byte)param_2[0x31] * (ulong)(byte)param_2[0x30];
  iVar2 = (int)__n * 3;
  iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,iVar2);
  __s = (uchar *)dtAlloc(iVar3 + 0x38,0);
  if (__s != (uchar *)0x0) {
    memset(__s,0,(long)(iVar3 + 0x38));
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)(__s + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(__s + 0x18) = uVar10;
    *(undefined8 *)(__s + 0x10) = uVar9;
    *(undefined8 *)(__s + 0x28) = uVar6;
    *(undefined8 *)(__s + 0x20) = uVar5;
    *(undefined8 *)(__s + 8) = uVar8;
    *(undefined8 *)__s = uVar7;
    __dest = (void *)dtAlloc(iVar2,1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_3,__n);
      memcpy((void *)((long)__dest + __n),param_4,__n);
      memcpy((void *)((long)__dest + (ulong)(uint)((int)__n << 1)),param_5,__n);
      local_6c = 0;
      iVar4 = (**(code **)(*(long *)param_1 + 0x18))
                        (param_1,__dest,iVar2,__s + 0x38,iVar3,&local_6c);
      if (-1 < iVar4) {
        *param_6 = __s;
        *param_7 = local_6c + 0x38;
        dtFree(__dest);
        iVar4 = 0x40000000;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

