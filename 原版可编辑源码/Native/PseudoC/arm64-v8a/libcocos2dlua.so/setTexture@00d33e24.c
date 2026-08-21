
/* cocos2d::Sprite3DMaterial::setTexture(cocos2d::Texture2D*, cocos2d::NTextureData::Usage) */

void __thiscall
cocos2d::Sprite3DMaterial::setTexture(Sprite3DMaterial *this,Texture2D *param_1,int param_3)

{
  undefined8 *puVar1;
  Technique *this_00;
  long *plVar2;
  GLProgramState *this_01;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 00d33e28 to 00e33e2f has its CatchHandler @ 00d33e68 */
                    /* try { // try from 00d33e30 to 00e33e83 has its CatchHandler @ 00d33df8 */
  this_00 = (Technique *)Material::getTechnique((Material *)this);
  plVar2 = (long *)Technique::getPasses(this_00);
  puVar1 = (undefined8 *)plVar2[1];
  if ((undefined8 *)*plVar2 != puVar1) {
    puVar3 = (undefined8 *)*plVar2;
    do {
      puVar4 = puVar3 + 1;
      this_01 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar3);
                    /* catch() { ... } // from try @ 00d33e28 with catch @ 00d33e68 */
      GLProgramState::setUniformTexture
                (this_01,(basic_string *)(&s_uniformSamplerName + (long)param_3 * 0x18),param_1);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
  }
  return;
}

