
/* cocos2d::Grid3D::beforeBlit() */

void __thiscall cocos2d::Grid3D::beforeBlit(Grid3D *this)

{
  long lVar1;
  char cVar2;
  char local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f07ec4 with catch @ 00f07e6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00f080ac with catch @ 00f07e6c
                        */
  if (this[0x90] != (Grid3D)0x0) {
    cVar2 = glIsEnabled(0xb71);
    this[0x91] = (Grid3D)(cVar2 != '\0');
    glGetBooleanv(0xb72,local_2c);
    this[0x92] = (Grid3D)(local_2c[0] != '\0');
    glEnable(0xb71);
                    /* try { // try from 00f07ebc to 01007ec3 has its CatchHandler @ 00f081c8 */
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
                    /* try { // try from 00f07ec4 to 01008027 has its CatchHandler @ 00f07e6c */
    glDepthMask(1);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

