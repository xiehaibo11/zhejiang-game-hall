
/* cocos2d::LabelBMFont::getDescription() const */

void cocos2d::LabelBMFont::getDescription(void)

{
  uint uVar1;
  long in_x0;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)(in_x0 + 0x1a0);
  pbVar2 = (byte *)(**(code **)(**(long **)(in_x0 + 800) + 0x590))(*(long **)(in_x0 + 800));
  pbVar3 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar3 = pbVar2 + 1;
  }
  StringUtils::format("<LabelBMFont | Tag = %d, Label = \'%s\'>",(ulong)uVar1,pbVar3);
  return;
}

