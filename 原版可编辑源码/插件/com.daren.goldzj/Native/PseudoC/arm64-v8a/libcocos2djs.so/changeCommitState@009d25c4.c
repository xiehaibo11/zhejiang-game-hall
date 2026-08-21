
/* cocos2d::renderer::ModelBatcher::changeCommitState(cocos2d::renderer::ModelBatcher::CommitState)
    */

void __thiscall cocos2d::renderer::ModelBatcher::changeCommitState(ModelBatcher *this,int param_2)

{
  int iVar1;
  Ref *this_00;
  
  iVar1 = *(int *)(this + 0x4c);
  if (iVar1 != param_2) {
                    /* try { // try from 009d25d4 to 00ad25e7 has its CatchHandler @ 009d3364 */
                    /* try { // try from 009d25e8 to 00ad32cf has its CatchHandler @ 009d2270 */
    if (iVar1 == 1) {
      flush(this);
      this_00 = *(Ref **)(this + 0x60);
    }
    else {
      if (iVar1 == 2) {
        flushIA(this);
      }
      this_00 = *(Ref **)(this + 0x60);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
      *(undefined8 *)(this + 0x60) = 0;
    }
    *(int *)(this + 0x4c) = param_2;
  }
  return;
}

