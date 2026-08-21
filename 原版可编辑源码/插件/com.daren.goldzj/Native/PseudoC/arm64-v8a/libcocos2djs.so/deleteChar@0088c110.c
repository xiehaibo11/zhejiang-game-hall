
/* cocos2d::StringUtils::StringUTF8::deleteChar(unsigned long) */

undefined8 __thiscall cocos2d::StringUtils::StringUTF8::deleteChar(StringUTF8 *this,ulong param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pbVar1 = *(byte **)(this + 8);
  uVar2 = ((long)pbVar1 - *(long *)this >> 3) * -0x5555555555555555;
  if (uVar2 < param_1 || uVar2 - param_1 == 0) {
    return 0;
  }
  pbVar3 = (byte *)(*(long *)this + param_1 * 0x18);
  if (pbVar3 + 0x18 != pbVar1) {
    pbVar4 = pbVar3;
    do {
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x10));
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
        }
      }
      uVar6 = *(undefined8 *)(pbVar4 + 0x20);
      uVar5 = *(undefined8 *)(pbVar4 + 0x18);
      pbVar3 = pbVar4 + 0x18;
      pbVar4[0x18] = 0;
      pbVar4[0x19] = 0;
      pbVar4[0x1a] = 0;
      pbVar4[0x1b] = 0;
      pbVar4[0x1c] = 0;
      pbVar4[0x1d] = 0;
      pbVar4[0x1e] = 0;
      pbVar4[0x1f] = 0;
      pbVar4[0x20] = 0;
      pbVar4[0x21] = 0;
      pbVar4[0x22] = 0;
      pbVar4[0x23] = 0;
      pbVar4[0x24] = 0;
      pbVar4[0x25] = 0;
      pbVar4[0x26] = 0;
      pbVar4[0x27] = 0;
      *(undefined8 *)(pbVar4 + 0x10) = *(undefined8 *)(pbVar4 + 0x28);
      *(undefined8 *)(pbVar4 + 8) = uVar6;
      *(undefined8 *)pbVar4 = uVar5;
      pbVar4[0x28] = 0;
      pbVar4[0x29] = 0;
      pbVar4[0x2a] = 0;
      pbVar4[0x2b] = 0;
      pbVar4[0x2c] = 0;
      pbVar4[0x2d] = 0;
      pbVar4[0x2e] = 0;
      pbVar4[0x2f] = 0;
      pbVar4 = pbVar3;
    } while (pbVar1 + -0x18 != pbVar3);
    pbVar1 = *(byte **)(this + 8);
    if (pbVar1 == pbVar3) goto LAB_0088c1e0;
  }
  do {
    pbVar4 = pbVar1 + -0x18;
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + -8));
    }
    pbVar1 = pbVar4;
  } while (pbVar3 != pbVar4);
LAB_0088c1e0:
  *(byte **)(this + 8) = pbVar3;
  return 1;
}

