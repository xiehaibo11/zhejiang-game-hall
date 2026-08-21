
/* dtDecompressTileCacheLayer(dtTileCacheAlloc*, dtTileCacheCompressor*, unsigned char*, int,
   dtTileCacheLayer**) */

int dtDecompressTileCacheLayer
              (dtTileCacheAlloc *param_1,dtTileCacheCompressor *param_2,uchar *param_3,int param_4,
              dtTileCacheLayer **param_5)

{
  size_t __n;
  dtTileCacheLayer *pdVar1;
  long lVar2;
  int iVar3;
  dtTileCacheLayer *__s;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = -0x7ffffff8;
  if ((param_3 != (uchar *)0x0) && (param_5 != (dtTileCacheLayer **)0x0)) {
    *param_5 = (dtTileCacheLayer *)0x0;
    if (*(int *)param_3 == 0x44544c52) {
      iVar3 = -0x7ffffffe;
      if (*(int *)(param_3 + 4) == 1) {
        lVar4 = (ulong)param_3[0x31] * (ulong)param_3[0x30];
        __n = lVar4 * 4 + 0x68;
        __s = (dtTileCacheLayer *)(**(code **)(*(long *)param_1 + 0x18))(param_1,__n);
        if (__s == (dtTileCacheLayer *)0x0) {
          iVar3 = -0x7ffffffc;
        }
        else {
          memset(__s,0,__n);
          lVar10 = *(long *)(param_3 + 0x18);
          lVar9 = *(long *)(param_3 + 0x10);
          lVar6 = *(long *)(param_3 + 0x28);
          lVar5 = *(long *)(param_3 + 0x20);
          lVar8 = *(long *)(param_3 + 8);
          lVar7 = *(long *)param_3;
          pdVar1 = __s + 0x68;
          *(long *)(__s + 0x60) = *(long *)(param_3 + 0x30);
          *(long *)(__s + 0x48) = lVar10;
          *(long *)(__s + 0x40) = lVar9;
          *(long *)(__s + 0x58) = lVar6;
          *(long *)(__s + 0x50) = lVar5;
          *(long *)(__s + 0x38) = lVar8;
          *(long *)(__s + 0x30) = lVar7;
          local_6c = 0;
          iVar3 = (**(code **)(*(long *)param_2 + 0x20))
                            (param_2,param_3 + 0x38,param_4 + -0x38,pdVar1,lVar4 * 4,&local_6c);
          if (iVar3 < 0) {
            dtFree(__s);
          }
          else {
            *(dtTileCacheLayer **)(__s + 0x10) = pdVar1;
            *(dtTileCacheLayer **)(__s + 0x18) = pdVar1 + lVar4;
            *(dtTileCacheLayer **)__s = __s + 0x30;
            iVar3 = 0x40000000;
            *(dtTileCacheLayer **)(__s + 0x20) = pdVar1 + (uint)((int)lVar4 * 2);
            *(dtTileCacheLayer **)(__s + 0x28) = pdVar1 + (uint)((int)lVar4 * 3);
            *param_5 = __s;
          }
        }
      }
    }
    else {
      iVar3 = -0x7fffffff;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

