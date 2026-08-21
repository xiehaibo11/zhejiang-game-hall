
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeBlendFunc(cocos2d::Node*, cocos2d::Node*,
   char const*, cocos2d::BlendFunc, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeBlendFunc
          (ParticleSystemQuadLoader *this,long *param_1,undefined8 param_2,char *param_3,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_5;
  iVar2 = strcmp(param_3,"blendFunc");
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x680))(param_1,&local_60);
  }
  else {
    NodeLoader::onHandlePropTypeBlendFunc(this,param_1,param_2,param_3,param_5,param_6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

