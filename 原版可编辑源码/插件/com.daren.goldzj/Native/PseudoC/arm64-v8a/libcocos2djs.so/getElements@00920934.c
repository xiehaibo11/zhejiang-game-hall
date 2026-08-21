
/* cocos2d::renderer::Technique::Parameter::getElements(cocos2d::renderer::Technique::Parameter::Type)
    */

undefined8 cocos2d::renderer::Technique::Parameter::getElements(undefined1 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 5:
  case 0xd:
    goto switchD_0092095c_caseD_5;
  case 6:
    return 2;
  case 7:
    return 3;
  case 8:
    return 4;
  default:
    uVar1 = 0;
switchD_0092095c_caseD_5:
    return uVar1;
  case 0xe:
    return 2;
  case 0xf:
    return 3;
  case 0x10:
    return 4;
  case 0x12:
  case 100:
    return 4;
  case 0x16:
    return 9;
  case 0x1a:
    return 0x10;
  case 99:
    return 3;
  }
}

