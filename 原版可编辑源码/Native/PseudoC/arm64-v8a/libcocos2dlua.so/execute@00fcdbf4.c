
/* cocos2d::CustomCommand::execute() */

void __thiscall cocos2d::CustomCommand::execute(CustomCommand *this)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00fcdc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 0x30))();
    return;
  }
  return;
}

