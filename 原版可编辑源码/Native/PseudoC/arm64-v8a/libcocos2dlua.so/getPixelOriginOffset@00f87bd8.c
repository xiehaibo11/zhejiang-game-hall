
/* cocos2d::NinePatchImageParser::getPixelOriginOffset(cocos2d::NinePatchImageParser::Direction)
   const */

int __thiscall
cocos2d::NinePatchImageParser::getPixelOriginOffset(NinePatchImageParser *this,int param_2)

{
  int iVar1;
  
  iVar1 = ((int)*(float *)(this + 0x10) +
          *(int *)(*(long *)(this + 8) + 0x38) * (int)*(float *)(this + 0x14)) * 4;
  if ((param_2 != 0) && (this[0x20] != (NinePatchImageParser)0x0)) {
    iVar1 = iVar1 + (int)*(float *)(this + 0x1c) * 4 + -4;
  }
  return iVar1;
}

