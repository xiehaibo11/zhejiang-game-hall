
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::VolatileTextureMgr::findVolotileTexture(cocos2d::Texture2D*) */

VolatileTexture * cocos2d::VolatileTextureMgr::findVolotileTexture(Texture2D *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  VolatileTexture *pVVar3;
  
                    /* try { // try from 00ff15a0 to 010f1607 has its CatchHandler @ 00ff1648 */
  puVar2 = _DAT_01792910;
  if ((long **)_DAT_01792910 != &_textures) {
    do {
      pVVar3 = (VolatileTexture *)puVar2[2];
      if (*(Texture2D **)pVVar3 == param_1) {
        if (pVVar3 != (VolatileTexture *)0x0) {
          return pVVar3;
        }
        break;
      }
      puVar2 = (undefined8 *)puVar2[1];
    } while ((long **)puVar2 != &_textures);
  }
  pVVar3 = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (pVVar3 != (VolatileTexture *)0x0) {
    VolatileTexture::VolatileTexture(pVVar3,param_1);
  }
  plVar1 = operator_new(0x18);
  plVar1[1] = (long)&_textures;
  plVar1[2] = (long)pVVar3;
  *plVar1 = (long)_textures;
  *(long **)((long)_textures + 8) = plVar1;
                    /* try { // try from 00ff1620 to 010f1623 has its CatchHandler @ 00ff1634 */
  DAT_01792918 = DAT_01792918 + 1;
  _textures = plVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff1620 with catch @ 00ff1634
                        */
  return pVVar3;
}

