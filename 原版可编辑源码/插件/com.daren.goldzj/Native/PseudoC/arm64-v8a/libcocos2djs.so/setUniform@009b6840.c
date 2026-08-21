
/* cocos2d::renderer::Program::Uniform::setUniform(void const*,
   cocos2d::renderer::UniformElementType, unsigned long) const */

void __thiscall
cocos2d::renderer::Program::Uniform::setUniform
          (Uniform *this,undefined8 param_1,undefined4 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x20);
  iVar2 = iVar1;
                    /* try { // try from 009b6858 to 00ab68ab has its CatchHandler @ 009b6858
                       catch() { ... } // from try @ 009b6858 with catch @ 009b6858
                       catch() { ... } // from try @ 009b6ab8 with catch @ 009b6858 */
  if (param_4 <= (ulong)(long)iVar1 || (long)iVar1 < 1) {
    iVar2 = (int)param_4;
  }
  if (iVar1 == -1) {
    iVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x009b6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x30))(*(undefined4 *)(this + 0x24),iVar2,param_1,param_3);
  return;
}

