
/* cocos2d::Sprite3D::setGLProgram(cocos2d::GLProgram*) */

void __thiscall cocos2d::Sprite3D::setGLProgram(Sprite3D *this,GLProgram *param_1)

{
  undefined8 uVar1;
  
  uVar1 = GLProgramState::create(param_1);
                    /* WARNING: Could not recover jumptable at 0x00d4044c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x310))(this,uVar1);
  return;
}

