
undefined8 _vorbis_unpack_comment(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  size_t __nmemb;
  long lVar5;
  
  uVar2 = oggpack_read(param_2,0x20);
  if (-1 < (int)uVar2) {
    puVar3 = calloc((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20,1);
    param_1[3] = (long)puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar1 = oggpack_read(param_2,8);
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      }
      uVar2 = oggpack_read(param_2,0x20);
      *(uint *)(param_1 + 2) = uVar2;
      if (-1 < (int)uVar2) {
        __nmemb = (long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20;
        pvVar4 = calloc(__nmemb,8);
        *param_1 = (long)pvVar4;
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(param_1 + 2) = 0;
        }
        else {
          pvVar4 = calloc(__nmemb,4);
          param_1[1] = (long)pvVar4;
          if (pvVar4 != (void *)0x0) {
            if (0 < (int)uVar2) {
              lVar5 = 0;
              do {
                uVar2 = oggpack_read(param_2,0x20);
                if ((int)uVar2 < 0) goto LAB_00ebcb7c;
                *(uint *)(param_1[1] + lVar5 * 4) = uVar2;
                pvVar4 = calloc((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20,1);
                *(void **)(*param_1 + lVar5 * 8) = pvVar4;
                puVar3 = *(undefined1 **)(*param_1 + lVar5 * 8);
                if (puVar3 == (undefined1 *)0x0) goto LAB_00ebcb7c;
                for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                  uVar1 = oggpack_read(param_2,8);
                  *puVar3 = uVar1;
                  puVar3 = puVar3 + 1;
                }
                lVar5 = lVar5 + 1;
              } while (lVar5 < (int)param_1[2]);
            }
            lVar5 = oggpack_read(param_2,1);
            if (lVar5 == 1) {
              return 0;
            }
          }
        }
      }
    }
  }
LAB_00ebcb7c:
  vorbis_comment_clear(param_1);
  return 0xffffff7b;
}

