
/* cocos2d::Material::parsePass(cocos2d::Technique*, cocos2d::Properties*) */

undefined8 __thiscall
cocos2d::Material::parsePass(Material *this,Technique *param_1,Properties *param_2)

{
  int iVar1;
  Pass *pPVar2;
  Properties *this_00;
  char *__s1;
  
  pPVar2 = (Pass *)Pass::create(param_1);
  Technique::addPass(param_1,pPVar2);
  this_00 = (Properties *)Properties::getNextNamespace(param_2);
  do {
    if (this_00 == (Properties *)0x0) {
      return 1;
    }
    __s1 = (char *)Properties::getNamespace(this_00);
    iVar1 = strcmp(__s1,"shader");
    if (iVar1 == 0) {
      parseShader(this,pPVar2,this_00);
    }
    else {
      iVar1 = strcmp(__s1,"renderState");
      if (iVar1 != 0) {
        return 0;
      }
      parseRenderState((Material *)0x0,(RenderState *)pPVar2,this_00);
    }
    this_00 = (Properties *)Properties::getNextNamespace(param_2);
  } while( true );
}

