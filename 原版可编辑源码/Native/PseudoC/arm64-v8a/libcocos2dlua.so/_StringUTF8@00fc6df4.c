
/* cocos2d::StringUtils::StringUTF8::~StringUTF8() */

void __thiscall cocos2d::StringUtils::StringUTF8::~StringUTF8(StringUTF8 *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)this;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 8);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)this;
    }
    *(byte **)(this + 8) = pbVar4;
    operator_delete(pbVar2);
    return;
  }
  return;
}

