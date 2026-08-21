
/* cocos2d::renderer::DeviceGraphics::setUniformi(unsigned long, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformi(DeviceGraphics *this,ulong param_1,int param_2)

{
  long lVar1;
  int local_2c;
  long local_28;
  
                    /* try { // try from 009b3e30 to 00ab3e3f has its CatchHandler @ 009b3f1c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  setUniform(this,param_1,&local_2c,4,1,1);
                    /* try { // try from 009b3e54 to 00ab3e63 has its CatchHandler @ 009b3f30 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009b3e64 to 00ab3e6b has its CatchHandler @ 009b3f18 */
                    /* try { // try from 009b3e6c to 00ab3e9b has its CatchHandler @ 009b3f20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

