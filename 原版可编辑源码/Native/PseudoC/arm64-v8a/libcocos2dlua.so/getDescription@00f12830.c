
/* cocos2d::LabelTTF::getDescription() const */

void cocos2d::LabelTTF::getDescription(void)

{
  long in_x0;
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  float fVar4;
  
  pbVar1 = (byte *)(**(code **)(**(long **)(in_x0 + 0x308) + 0x568))();
  pbVar3 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar3 = pbVar1 + 1;
  }
  fVar4 = (float)(**(code **)(**(long **)(in_x0 + 0x308) + 0x578))(*(long **)(in_x0 + 0x308));
  pbVar2 = (byte *)(**(code **)(**(long **)(in_x0 + 0x308) + 0x590))();
  pbVar1 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar1 = pbVar2 + 1;
  }
  StringUtils::format("<LabelTTF | FontName = %s, FontSize = %f, Label = \'%s\'>",(double)fVar4,
                      pbVar3,pbVar1);
  return;
}

