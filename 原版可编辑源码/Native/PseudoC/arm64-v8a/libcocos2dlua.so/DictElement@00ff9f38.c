
/* cocos2d::DictElement::DictElement(char const*, cocos2d::Ref*) */

void __thiscall cocos2d::DictElement::DictElement(DictElement *this,char *param_1,Ref *param_2)

{
  char *pcVar1;
  size_t sVar2;
  
                    /* try { // try from 00ff9f40 to 010f9f5b has its CatchHandler @ 00ffa1a4 */
  *(undefined8 *)(this + 0x100) = 0;
  sVar2 = strlen(param_1);
  pcVar1 = param_1 + (sVar2 - 0x100);
  if (sVar2 < 0x101) {
    pcVar1 = param_1;
  }
                    /* try { // try from 00ff9f74 to 010f9f7f has its CatchHandler @ 00ffa170 */
  __strcpy_chk(this,pcVar1,0x100);
  *(Ref **)(this + 0x108) = param_2;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  return;
}

