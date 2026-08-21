
/* cocos2d::Texture2D::convertI8ToAI88(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToAI88(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  ulong *puVar4;
  uchar *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (0 < param_2) {
                    /* try { // try from 00fe86d0 to 010e86d3 has its CatchHandler @ 00fe8744 */
                    /* try { // try from 00fe86d4 to 010e876f has its CatchHandler @ 00fe866c */
    if (((ulong)param_2 < 0x10) ||
       ((param_3 < param_1 + param_2 && (param_1 < param_3 + param_2 * 2)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2 & 0xfffffffffffffff0;
      puVar4 = (ulong *)(param_3 + 0x10);
      param_3 = param_3 + uVar1 * 2;
      puVar5 = param_1 + 8;
      uVar6 = uVar1;
      do {
        uVar7 = *(undefined8 *)(puVar5 + -8);
        uVar8 = *(undefined8 *)puVar5;
        uVar6 = uVar6 - 0x10;
        puVar5 = puVar5 + 0x10;
        puVar4[-1] = (ulong)(CONCAT16((char)((ulong)uVar7 >> 0x38),
                                      (uint6)CONCAT14((char)((ulong)uVar7 >> 0x30),
                                                      (uint)CONCAT12((char)((ulong)uVar7 >> 0x28),
                                                                     (ushort)(byte)((ulong)uVar7 >>
                                                                                   0x20)))) |
                            0xff00ff00ff00) | 0xff00000000000000;
        puVar4[-2] = (ulong)(CONCAT16((char)((ulong)uVar7 >> 0x18),
                                      (uint6)CONCAT14((char)((ulong)uVar7 >> 0x10),
                                                      (uint)(CONCAT12((char)((ulong)uVar7 >> 8),
                                                                      (short)uVar7) & 0xff00ff))) |
                            0xff00ff00ff00) | 0xff00000000000000;
        puVar4[1] = (ulong)(CONCAT16((char)((ulong)uVar8 >> 0x38),
                                     (uint6)CONCAT14((char)((ulong)uVar8 >> 0x30),
                                                     (uint)CONCAT12((char)((ulong)uVar8 >> 0x28),
                                                                    (ushort)(byte)((ulong)uVar8 >>
                                                                                  0x20)))) |
                           0xff00ff00ff00) | 0xff00000000000000;
        *puVar4 = (ulong)(CONCAT16((char)((ulong)uVar8 >> 0x18),
                                   (uint6)CONCAT14((char)((ulong)uVar8 >> 0x10),
                                                   (uint)(CONCAT12((char)((ulong)uVar8 >> 8),
                                                                   (short)uVar8) & 0xff00ff))) |
                         0xff00ff00ff00) | 0xff00000000000000;
        puVar4 = puVar4 + 4;
      } while (uVar6 != 0);
      if (uVar1 == param_2) {
        return;
      }
    }
    lVar3 = param_2 - uVar1;
    pbVar2 = param_1 + uVar1;
    do {
      lVar3 = lVar3 + -1;
      *(ushort *)param_3 = *pbVar2 | 0xff00;
      param_3 = (uchar *)((long)param_3 + 2);
      pbVar2 = pbVar2 + 1;
    } while (lVar3 != 0);
  }
  return;
}

