
/* cocos2d::renderer::ForwardRenderer::render(cocos2d::renderer::Scene*, float) */

void __thiscall
cocos2d::renderer::ForwardRenderer::render(ForwardRenderer *this,Scene *param_1,float param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  View *pVVar3;
  ForwardRenderer *pFVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  **(undefined8 **)(this + 0xf0) = 0;
  BaseRenderer::reset((BaseRenderer *)this);
  pFVar4 = this + 0xe0;
  *(float *)pFVar4 = *(float *)pFVar4 + param_2;
  *(float *)(this + 0xe4) = param_2;
  uVar6 = BaseRenderer::cc_time;
  *(float *)(this + 0xe8) = *(float *)(this + 0xe8) + 1.0;
  DeviceGraphics::setUniformfv(*(DeviceGraphics **)(this + 0x10),uVar6,4,(float *)pFVar4,4);
                    /* try { // try from 009ca798 to 00aca7ab has its CatchHandler @ 009caa88 */
  updateLights(this,param_1);
  Scene::sortCameras(param_1);
  pfVar2 = (float *)Application::getViewSize(Application::_instance);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar8 = *(undefined8 **)param_1; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    pVVar3 = (View *)BaseRenderer::requestView((BaseRenderer *)this);
                    /* try { // try from 009ca7d0 to 00aca7d7 has its CatchHandler @ 009caa70 */
    Camera::extractView((Camera *)*puVar8,pVVar3,(int)*pfVar2,(int)pfVar2[1]);
  }
  puVar5 = *(ulong **)(this + 0x68);
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    uVar7 = 0;
    if (uVar6 != 0) goto LAB_009ca830;
    do {
      __android_log_print(5,"renderer"," (66): Failed to get data %zu, index not found.\n",uVar7);
      pVVar3 = (View *)0x0;
      while( true ) {
        BaseRenderer::render((BaseRenderer *)this,pVVar3,param_1);
        if (uVar6 - 1 == uVar7) goto LAB_009ca868;
        puVar5 = *(ulong **)(this + 0x68);
        uVar7 = uVar7 + 1;
        if (*puVar5 <= uVar7) break;
LAB_009ca830:
        pVVar3 = *(View **)(puVar5[8] + uVar7 * 8);
      }
    } while( true );
  }
LAB_009ca868:
                    /* try { // try from 009ca880 to 00aca887 has its CatchHandler @ 009caa60 */
  Scene::removeModels(param_1);
  return;
}

