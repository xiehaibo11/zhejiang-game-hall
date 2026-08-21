
/* cocosbuilder::CCBReader::createSceneWithNodeGraphFromFile(char const*, cocos2d::Ref*,
   cocos2d::Size const&) */

long * __thiscall
cocosbuilder::CCBReader::createSceneWithNodeGraphFromFile
          (CCBReader *this,char *param_1,Ref *param_2,Size *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = readNodeGraphFromFile(this,param_1,param_2,param_3);
  plVar2 = (long *)cocos2d::Scene::create();
  (**(code **)(*plVar2 + 0x208))(plVar2,uVar1);
  return plVar2;
}

