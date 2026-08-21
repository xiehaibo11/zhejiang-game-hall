
undefined8 XXH32_update(long *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  ulong __n_00;
  uint uVar3;
  uint uVar5;
  undefined8 uVar4;
  uint uVar6;
  uint uVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = *(int *)((long)param_1 + 0x1c);
  __n = (size_t)param_3;
  *param_1 = *param_1 + __n;
  if (iVar9 + param_3 < 0x10) {
    memcpy((void *)((long)param_1 + (long)iVar9 + 0x20),param_2,__n);
    __n_00 = (ulong)(uint)(*(int *)((long)param_1 + 0x1c) + param_3);
  }
  else {
    puVar1 = (undefined8 *)((long)param_2 + __n);
    if (iVar9 != 0) {
      memcpy((void *)((long)param_1 + (long)iVar9 + 0x20),param_2,(long)(0x10 - iVar9));
      uVar3 = (int)*(undefined8 *)((long)param_1 + 0xc) + (int)param_1[4] * -0x7a143589;
      uVar5 = (int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) +
              (int)((ulong)param_1[4] >> 0x20) * -0x7a143589;
      uVar6 = (int)*(undefined8 *)((long)param_1 + 0x14) + (int)param_1[5] * -0x7a143589;
      uVar8 = (int)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20) +
              (int)((ulong)param_1[5] >> 0x20) * -0x7a143589;
      iVar9 = uVar3 * 0x2000;
      iVar10 = uVar5 * 0x2000;
      iVar11 = uVar6 * 0x2000;
      iVar12 = uVar8 * 0x2000;
      iVar9 = CONCAT13((char)((uint)iVar9 >> 0x18),
                       CONCAT12((char)((uint)iVar9 >> 0x10),
                                CONCAT11((byte)((uint)iVar9 >> 8) | (byte)(uVar3 >> 0x1b),
                                         (char)(uVar3 >> 0x13))));
      iVar11 = CONCAT13((char)((uint)iVar11 >> 0x18),
                        CONCAT12((char)((uint)iVar11 >> 0x10),
                                 CONCAT11((byte)((uint)iVar11 >> 8) | (byte)(uVar6 >> 0x1b),
                                          (char)(uVar6 >> 0x13))));
      param_2 = (undefined8 *)((long)param_2 + (0x10 - (long)*(int *)((long)param_1 + 0x1c)));
      *(ulong *)((long)param_1 + 0x14) =
           CONCAT44((int)(CONCAT17((char)((uint)iVar12 >> 0x18),
                                   CONCAT16((char)((uint)iVar12 >> 0x10),
                                            CONCAT15((byte)((uint)iVar12 >> 8) |
                                                     (byte)(uVar8 >> 0x1b),
                                                     CONCAT14((char)(uVar8 >> 0x13),iVar11)))) >>
                         0x20) * -0x61c8864f,iVar11 * -0x61c8864f);
      *(ulong *)((long)param_1 + 0xc) =
           CONCAT44((int)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                   CONCAT16((char)((uint)iVar10 >> 0x10),
                                            CONCAT15((byte)((uint)iVar10 >> 8) |
                                                     (byte)(uVar5 >> 0x1b),
                                                     CONCAT14((char)(uVar5 >> 0x13),iVar9)))) >>
                         0x20) * -0x61c8864f,iVar9 * -0x61c8864f);
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
    if (param_2 <= puVar1 + -2) {
      uVar7 = *(undefined8 *)((long)param_1 + 0x14);
      uVar4 = *(undefined8 *)((long)param_1 + 0xc);
      puVar2 = param_2;
      do {
        param_2 = puVar2 + 2;
        uVar3 = (int)uVar4 + (int)*puVar2 * -0x7a143589;
        uVar5 = (int)((ulong)uVar4 >> 0x20) + (int)((ulong)*puVar2 >> 0x20) * -0x7a143589;
        uVar6 = (int)uVar7 + (int)puVar2[1] * -0x7a143589;
        uVar8 = (int)((ulong)uVar7 >> 0x20) + (int)((ulong)puVar2[1] >> 0x20) * -0x7a143589;
        iVar9 = uVar3 * 0x2000;
        iVar10 = uVar5 * 0x2000;
        iVar11 = uVar6 * 0x2000;
        iVar12 = uVar8 * 0x2000;
        iVar9 = CONCAT13((char)((uint)iVar9 >> 0x18),
                         CONCAT12((char)((uint)iVar9 >> 0x10),
                                  CONCAT11((byte)((uint)iVar9 >> 8) | (byte)(uVar3 >> 0x1b),
                                           (char)(uVar3 >> 0x13))));
        iVar11 = CONCAT13((char)((uint)iVar11 >> 0x18),
                          CONCAT12((char)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)iVar11 >> 8) | (byte)(uVar6 >> 0x1b),
                                            (char)(uVar6 >> 0x13))));
        uVar4 = CONCAT44((int)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                        CONCAT16((char)((uint)iVar10 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar10 >> 8) |
                                                          (byte)(uVar5 >> 0x1b),
                                                          CONCAT14((char)(uVar5 >> 0x13),iVar9))))
                              >> 0x20) * -0x61c8864f,iVar9 * -0x61c8864f);
        uVar7 = CONCAT44((int)(CONCAT17((char)((uint)iVar12 >> 0x18),
                                        CONCAT16((char)((uint)iVar12 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar12 >> 8) |
                                                          (byte)(uVar8 >> 0x1b),
                                                          CONCAT14((char)(uVar8 >> 0x13),iVar11))))
                              >> 0x20) * -0x61c8864f,iVar11 * -0x61c8864f);
        puVar2 = param_2;
      } while (param_2 <= puVar1 + -2);
      *(undefined8 *)((long)param_1 + 0x14) = uVar7;
      *(undefined8 *)((long)param_1 + 0xc) = uVar4;
    }
    if (puVar1 <= param_2) {
      return 0;
    }
    __n_00 = (long)puVar1 - (long)param_2;
    memcpy(param_1 + 4,param_2,__n_00);
  }
  *(int *)((long)param_1 + 0x1c) = (int)__n_00;
  return 0;
}

