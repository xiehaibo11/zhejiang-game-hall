
/* cocos2d::MeshCommand::batchDraw() */

void __thiscall cocos2d::MeshCommand::batchDraw(MeshCommand *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 00fe0928 to 010e093f has its CatchHandler @ 00fe099c */
                    /* try { // try from 00fe0940 to 010e09bf has its CatchHandler @ 00fe08cc */
  if (*(long *)(this + 0x98) == 0) {
    GLProgramState::applyGLProgram(*(GLProgramState **)(this + 0xa0),(Mat4 *)(this + 0x58));
    GL::bindTexture2D(*(uint *)(this + 0xb0));
    RenderState::StateBlock::bind(*(StateBlock **)(this + 0xa8));
    glDrawElements(*(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x50),
                   *(undefined4 *)(this + 0x48),0);
    lVar3 = Director::getInstance();
    lVar4 = *(long *)(lVar3 + 0x1b0);
    plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
    lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
    *plVar1 = *plVar1 + 1;
                    /* catch() { ... } // from try @ 00fe0a68 with catch @ 00fe0a04 */
    *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + *(long *)(this + 0x50);
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x98) + 0x90);
    puVar5 = *(undefined8 **)(lVar3 + 0x78);
    puVar2 = *(undefined8 **)(lVar3 + 0x80);
    if (puVar5 != puVar2) {
      do {
        Pass::bind((Pass *)*puVar5,(Mat4 *)(this + 0x58));
        glDrawElements(*(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x50),
                       *(undefined4 *)(this + 0x48),0);
        lVar3 = Director::getInstance();
        lVar4 = *(long *)(lVar3 + 0x1b0);
        plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
        lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
        *plVar1 = *plVar1 + 1;
                    /* catch() { ... } // from try @ 00fe0900 with catch @ 00fe0994 */
                    /* catch() { ... } // from try @ 00fe0928 with catch @ 00fe099c */
        *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + *(long *)(this + 0x50);
        puVar6 = puVar5 + 1;
        Pass::unbind((Pass *)*puVar5);
        puVar5 = puVar6;
      } while (puVar2 != puVar6);
    }
  }
  return;
}

