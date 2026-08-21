
bool FUN_00f3cdac(Camera *param_1,Camera *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 00f3cb84 with catch @ 00f3cdb0 */
  iVar1 = cocos2d::Camera::getRenderOrder(param_1);
  iVar2 = cocos2d::Camera::getRenderOrder(param_2);
  return iVar1 < iVar2;
}

