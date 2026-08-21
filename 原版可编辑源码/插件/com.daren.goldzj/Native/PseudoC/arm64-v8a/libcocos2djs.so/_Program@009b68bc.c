
/* cocos2d::renderer::Program::~Program() */

void __thiscall cocos2d::renderer::Program::~Program(Program *this)

{
  Program PVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* try { // try from 009b68cc to 00ab68d7 has its CatchHandler @ 009b6b30 */
                    /* try { // try from 009b68d8 to 00ab68e3 has its CatchHandler @ 009b6b2c */
  *(undefined ***)this = &PTR__Program_01c6ae68;
                    /* try { // try from 009b68e4 to 00ab6ab7 has its CatchHandler @ 009b6b44 */
  glDeleteProgram(*(undefined4 *)(this + 0xc));
  if (((byte)this[0x60] & 1) == 0) {
    PVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    PVar1 = this[0x48];
  }
  if (((byte)PVar1 & 1) == 0) {
    pbVar3 = *(byte **)(this + 0x30);
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    pbVar3 = *(byte **)(this + 0x30);
  }
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x18);
  }
  else {
    pbVar2 = *(byte **)(this + 0x38);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x38;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x28));
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar4 = *(byte **)(this + 0x30);
    }
    *(byte **)(this + 0x38) = pbVar3;
    operator_delete(pbVar4);
    pbVar3 = *(byte **)(this + 0x18);
  }
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x20);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x30;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar4 = *(byte **)(this + 0x18);
    }
    *(byte **)(this + 0x20) = pbVar3;
    operator_delete(pbVar4);
  }
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  return;
}

