
/* cocos2d::StringUtils::StringUTF8::deleteChar(unsigned long) */

undefined8 __thiscall cocos2d::StringUtils::StringUTF8::deleteChar(StringUTF8 *this,ulong param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  pbVar4 = *(byte **)(this + 8);
  uVar5 = ((long)pbVar4 - *(long *)this >> 3) * -0x5555555555555555;
  if (uVar5 < param_1 || uVar5 - param_1 == 0) {
    return 0;
  }
  pbVar6 = (byte *)(*(long *)this + param_1 * 0x18);
  if (pbVar6 + 0x18 != pbVar4) {
    pbVar7 = pbVar6;
    do {
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + 0x10));
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          pbVar7[2] = 0;
          pbVar7[3] = 0;
          pbVar7[4] = 0;
          pbVar7[5] = 0;
          pbVar7[6] = 0;
          pbVar7[7] = 0;
        }
      }
      uVar8 = *(undefined8 *)(pbVar7 + 0x20);
      uVar3 = *(undefined8 *)(pbVar7 + 0x28);
      pbVar6 = pbVar7 + 0x18;
      pbVar7[0x20] = 0;
      pbVar7[0x21] = 0;
      pbVar7[0x22] = 0;
      pbVar7[0x23] = 0;
      pbVar7[0x24] = 0;
      pbVar7[0x25] = 0;
      pbVar7[0x26] = 0;
      pbVar7[0x27] = 0;
      pbVar7[0x28] = 0;
      pbVar7[0x29] = 0;
      pbVar7[0x2a] = 0;
      pbVar7[0x2b] = 0;
      pbVar7[0x2c] = 0;
      pbVar7[0x2d] = 0;
      pbVar7[0x2e] = 0;
      pbVar7[0x2f] = 0;
      *(undefined8 *)(pbVar7 + 8) = uVar8;
      *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + 0x18);
      *(undefined8 *)(pbVar7 + 0x10) = uVar3;
      pbVar7[0x18] = 0;
      pbVar7[0x19] = 0;
      pbVar7[0x1a] = 0;
      pbVar7[0x1b] = 0;
      pbVar7[0x1c] = 0;
      pbVar7[0x1d] = 0;
      pbVar7[0x1e] = 0;
      pbVar7[0x1f] = 0;
      pbVar7 = pbVar6;
    } while (pbVar4 + -0x18 != pbVar6);
    pbVar4 = *(byte **)(this + 8);
    if (pbVar4 == pbVar6) goto LAB_00fc71a8;
  }
  bVar1 = pbVar4[-0x18];
  pbVar7 = pbVar4 + -0x18;
  while( true ) {
    pbVar2 = pbVar7;
    if ((bVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + -8));
    }
    if (pbVar6 == pbVar2) break;
    bVar1 = pbVar2[-0x18];
    pbVar7 = pbVar2 + -0x18;
    pbVar4 = pbVar2;
  }
LAB_00fc71a8:
  *(byte **)(this + 8) = pbVar6;
  return 1;
}

