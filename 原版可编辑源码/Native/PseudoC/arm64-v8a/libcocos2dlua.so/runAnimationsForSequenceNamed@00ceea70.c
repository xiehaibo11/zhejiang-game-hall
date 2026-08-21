
/* cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamed(char const*) */

void __thiscall
cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamed
          (CCBAnimationManager *this,char *param_1)

{
  int iVar1;
  
  iVar1 = getSequenceId(this,param_1);
  runAnimationsForSequenceIdTweenDuration(this,iVar1,0.0);
  return;
}

