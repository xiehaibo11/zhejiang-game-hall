
/* cocos2d::GroupCommand::GroupCommand() */

void __thiscall cocos2d::GroupCommand::GroupCommand(GroupCommand *this)

{
  undefined4 uVar1;
  long lVar2;
  
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined4 *)(this + 8) = 4;
                    /* try { // try from 00fddb00 to 010ddb03 has its CatchHandler @ 00fddb6c */
  *(undefined ***)this = &PTR__GroupCommand_01723fe8;
                    /* try { // try from 00fddb04 to 010ddbaf has its CatchHandler @ 00fdd9a4 */
  lVar2 = Director::getInstance();
  uVar1 = GroupCommandManager::getGroupID
                    (*(GroupCommandManager **)
                      ((long)&__DT_SYMTAB[0xa30].st_size + *(long *)(lVar2 + 0x1b0)));
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

