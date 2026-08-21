
undefined8 res_unpack(uint *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(param_2 + 0x30);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  uVar3 = oggpack_read(param_3,0x10);
  *param_1 = uVar3;
  if (uVar3 < 3) {
    uVar5 = oggpack_read(param_3,0x18);
    *(undefined8 *)(param_1 + 6) = uVar5;
    uVar5 = oggpack_read(param_3,0x18);
    *(undefined8 *)(param_1 + 8) = uVar5;
    iVar4 = oggpack_read(param_3,0x18);
    param_1[10] = iVar4 + 1;
    cVar1 = oggpack_read(param_3,6);
    *(char *)(param_1 + 0xb) = cVar1 + '\x01';
    bVar2 = oggpack_read(param_3,8);
    *(byte *)((long)param_1 + 0x2d) = bVar2;
    if ((int)(uint)bVar2 < *(int *)(lVar9 + 0x20)) {
      uVar8 = (ulong)(byte)param_1[0xb];
      pvVar6 = malloc(uVar8);
      *(void **)(param_1 + 2) = pvVar6;
      pvVar6 = malloc(uVar8 << 3);
      *(void **)(param_1 + 4) = pvVar6;
      if (uVar8 != 0) {
        uVar8 = 0;
        do {
          bVar2 = oggpack_read(param_3,3);
          lVar7 = oggpack_read(param_3,1);
          if (lVar7 != 0) {
            cVar1 = oggpack_read(param_3,5);
            bVar2 = bVar2 | cVar1 << 3;
          }
          *(byte *)(*(long *)(param_1 + 2) + uVar8) = bVar2;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (byte)param_1[0xb]);
        if ((byte)param_1[0xb] != 0) {
          lVar7 = 0;
          uVar8 = 0;
          do {
            uVar10 = 0;
            do {
              if ((1 << (ulong)((uint)uVar10 & 0x1f) &
                  (uint)*(byte *)(*(long *)(param_1 + 2) + uVar8)) == 0) {
                *(undefined1 *)(*(long *)(param_1 + 4) + lVar7 + uVar10) = 0xff;
              }
              else {
                bVar2 = oggpack_read(param_3,8);
                if (*(int *)(lVar9 + 0x20) <= (int)(uint)bVar2) goto LAB_00ebbc80;
                *(byte *)(*(long *)(param_1 + 4) + lVar7 + uVar10) = bVar2;
                if (*(byte *)((long)param_1 + 0x2e) <= uVar10) {
                  *(char *)((long)param_1 + 0x2e) = (char)uVar10 + '\x01';
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != 8);
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 8;
          } while (uVar8 < (byte)param_1[0xb]);
        }
      }
      uVar5 = oggpack_eop(param_3);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
  }
LAB_00ebbc80:
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    free(*(void **)(param_1 + 2));
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  return 1;
}

