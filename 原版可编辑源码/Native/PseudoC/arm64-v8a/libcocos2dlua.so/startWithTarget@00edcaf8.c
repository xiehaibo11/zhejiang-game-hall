
/* cocos2d::Sequence::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Sequence::startWithTarget(Sequence *this,Node *param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00edcb00 to 00fdcb07 has its CatchHandler @ 00edcbe8 */
  if (param_1 == (Node *)0x0) {
    pcVar1 = "Sequence::startWithTarget error: target is nullptr!";
  }
  else {
                    /* try { // try from 00edcb08 to 00fdcc47 has its CatchHandler @ 00edc8e8 */
    if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x60) != 0)) {
      if (1.1920929e-07 < *(float *)(this + 0x4c)) {
        fVar3 = *(float *)(*(long *)(this + 0x58) + 0x4c);
        fVar2 = fVar3 / *(float *)(this + 0x4c);
        if (fVar3 <= 1.1920929e-07) {
          fVar2 = 0.0;
        }
        *(float *)(this + 0x68) = fVar2;
      }
      Action::startWithTarget((Action *)this,param_1);
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined2 *)(this + 0x54) = 1;
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
      return;
    }
    pcVar1 = "Sequence::startWithTarget error: _actions[0] or _actions[1] is nullptr!";
  }
  log(pcVar1);
  return;
}

