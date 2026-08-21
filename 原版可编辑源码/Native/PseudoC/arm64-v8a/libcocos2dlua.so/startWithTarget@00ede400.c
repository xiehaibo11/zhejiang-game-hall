
/* cocos2d::Spawn::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Spawn::startWithTarget(Spawn *this,Node *param_1)

{
  char *pcVar1;
  
  if (param_1 == (Node *)0x0) {
    pcVar1 = "Spawn::startWithTarget error: target is nullptr!";
  }
  else {
    if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x60) != 0)) {
      Action::startWithTarget((Action *)this,param_1);
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined2 *)(this + 0x54) = 1;
      (**(code **)(**(long **)(this + 0x58) + 0x30))(*(long **)(this + 0x58),param_1);
                    /* WARNING: Could not recover jumptable at 0x00ede468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x60) + 0x30))(*(long **)(this + 0x60),param_1);
      return;
    }
    pcVar1 = "Spawn::startWithTarget error: _one or _two is nullptr!";
  }
  log(pcVar1);
  return;
}

