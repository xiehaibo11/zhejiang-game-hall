
/* cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamedTweenDuration(char const*, float)
    */

void __thiscall
cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamedTweenDuration
          (CCBAnimationManager *this,char *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = getSequenceId(this,param_1);
  runAnimationsForSequenceIdTweenDuration(this,iVar1,param_2);
  return;
}

