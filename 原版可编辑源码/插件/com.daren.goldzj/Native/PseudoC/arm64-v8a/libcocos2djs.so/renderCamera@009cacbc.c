
/* cocos2d::renderer::ForwardRenderer::renderCamera(cocos2d::renderer::Camera*,
   cocos2d::renderer::Scene*) */

void __thiscall
cocos2d::renderer::ForwardRenderer::renderCamera
          (ForwardRenderer *this,Camera *param_1,Scene *param_2)

{
  float *pfVar1;
  View *pVVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  **(undefined8 **)(this + 0xf0) = 0;
  BaseRenderer::reset((BaseRenderer *)this);
  updateLights(this,param_2);
  pfVar1 = (float *)Application::getViewSize(Application::_instance);
  pVVar2 = (View *)BaseRenderer::requestView((BaseRenderer *)this);
  Camera::extractView(param_1,pVVar2,(int)*pfVar1,(int)pfVar1[1]);
                    /* try { // try from 009cad28 to 00acad3b has its CatchHandler @ 009cb01c */
  puVar3 = *(ulong **)(this + 0x68);
  uVar4 = *puVar3;
  if (uVar4 == 0) {
LAB_009cada4:
    Scene::removeModels(param_2);
    return;
  }
  uVar5 = 0;
  if (uVar4 != 0) goto LAB_009cad6c;
  do {
    __android_log_print(5,"renderer"," (66): Failed to get data %zu, index not found.\n",uVar5);
    pVVar2 = (View *)0x0;
    while( true ) {
      BaseRenderer::render((BaseRenderer *)this,pVVar2,param_2);
      if (uVar4 - 1 == uVar5) goto LAB_009cada4;
      puVar3 = *(ulong **)(this + 0x68);
      uVar5 = uVar5 + 1;
                    /* try { // try from 009cad60 to 00acad67 has its CatchHandler @ 009cb004 */
      if (*puVar3 <= uVar5) break;
LAB_009cad6c:
      pVVar2 = *(View **)(puVar3[8] + uVar5 * 8);
    }
  } while( true );
}

