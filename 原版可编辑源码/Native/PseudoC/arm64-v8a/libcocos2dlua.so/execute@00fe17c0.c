
/* cocos2d::PrimitiveCommand::execute() const */

void __thiscall cocos2d::PrimitiveCommand::execute(PrimitiveCommand *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  GL::bindTexture2D(*(uint *)(this + 0x1c));
  GL::blendFunc(*(uint *)(this + 0x28),*(uint *)(this + 0x2c));
                    /* try { // try from 00fe17e0 to 010e17e7 has its CatchHandler @ 00fe1868 */
                    /* try { // try from 00fe17e8 to 010e1883 has its CatchHandler @ 00fe17b0 */
  GLProgramState::apply(*(GLProgramState **)(this + 0x20),(Mat4 *)(this + 0x38));
  Primitive::draw(*(Primitive **)(this + 0x30));
  lVar2 = Director::getInstance();
  lVar3 = *(long *)(lVar2 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar3);
  lVar2 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3);
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3) =
       lVar2 + *(int *)(*(long *)(this + 0x30) + 0x3c);
  return;
}

