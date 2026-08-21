
/* cocos2d::renderer::DeviceGraphics::setTexture(unsigned long, cocos2d::renderer::Texture*, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setTexture
          (DeviceGraphics *this,ulong param_1,Texture *param_2,int param_3)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009b3d40 with catch @ 009b3d8c */
                    /* try { // try from 009b3da0 to 00ab3def has its CatchHandler @ 009b3da0
                       catch() { ... } // from try @ 009b3da0 with catch @ 009b3da0
                       catch() { ... } // from try @ 009b3e9c with catch @ 009b3da0 */
  if (param_3 < *(int *)(this + 0x3c)) {
    State::setTexture(*(State **)(this + 0xb8),(long)param_3,param_2);
    local_3c = param_3;
    setUniform(this,param_1,&local_3c,4,1,1);
  }
  else {
                    /* try { // try from 009b3df0 to 00ab3e07 has its CatchHandler @ 009b3f4c */
    __android_log_print(5,"renderer",
                        " (342): Can not set texture %zu at stage %d, max texture exceed: %d\n",
                        param_1,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009b3e1c to 00ab3e2f has its CatchHandler @ 009b3f48 */
  __stack_chk_fail();
}

