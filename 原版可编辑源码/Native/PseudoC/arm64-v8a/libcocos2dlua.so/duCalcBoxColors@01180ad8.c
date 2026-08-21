
/* duCalcBoxColors(unsigned int*, unsigned int, unsigned int) */

void duCalcBoxColors(uint *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar6;
  undefined1 auVar5 [16];
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  
  if (param_1 != (uint *)0x0) {
    uVar2 = CONCAT44(param_3,param_2) & 0xff000000ff;
    bVar8 = (byte)(uVar2 >> 0x20);
    uVar1 = CONCAT44(param_3,param_2) & 0xff000000ff000000;
    uVar7 = (undefined1)(uVar1 >> 0x38);
    uVar3 = (ulong)CONCAT14((char)(param_3 >> 8),param_2 >> 8) & 0xff000000ff;
    bVar9 = (byte)(uVar3 >> 0x20);
    uVar4 = CONCAT44(param_3 >> 0x10,param_2 >> 0x10) & 0xff000000ff;
    iVar6 = (int)(uVar4 >> 0x20);
    auVar5[10] = (undefined1)((uint)(iVar6 * 0xa500) >> 0x10);
    auVar5[0xe] = (undefined1)((uint)(byte)(uVar4 >> 0x20) * 0xd900 >> 0x10);
    auVar5._0_8_ = CONCAT17(uVar7,CONCAT16((char)((uint)(iVar6 * 0x8c00) >> 0x10),
                                           CONCAT15((char)((uint)bVar9 * 0x8c >> 8),
                                                    CONCAT14((char)((uint)bVar8 * 0x8c >> 8),
                                                             CONCAT13((char)(uVar1 >> 0x18),
                                                                      CONCAT12((char)((uint)((int)
                                                  uVar4 * 64000) >> 0x10),
                                                  CONCAT11((char)((uint)(byte)uVar3 * 0xfa >> 8),
                                                           (char)((uint)(byte)uVar2 * 0xfa >> 8)))))
                                                  )));
    auVar5[8] = (char)((uint)bVar8 * 0xa5 >> 8);
    auVar5[9] = (char)((uint)bVar9 * 0xa5 >> 8);
    auVar5[0xb] = uVar7;
    auVar5[0xc] = (char)((uint)bVar8 * 0xd9 >> 8);
    auVar5[0xd] = (char)((uint)bVar9 * 0xd9 >> 8);
    auVar5[0xf] = uVar7;
    *(long *)(param_1 + 2) = auVar5._8_8_;
    *(undefined8 *)param_1 = auVar5._0_8_;
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    *(long *)(param_1 + 4) = auVar5._0_8_;
  }
  return;
}

