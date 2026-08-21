
/* cocos2d::VolatileTextureMgr::setTexParameters(cocos2d::Texture2D*, cocos2d::Texture2D::_TexParams
   const&) */

void cocos2d::VolatileTextureMgr::setTexParameters(Texture2D *param_1,_TexParams *param_2)

{
  long lVar1;
  
                    /* try { // try from 00ff17c8 to 010f1807 has its CatchHandler @ 00ff17c8
                       catch() { ... } // from try @ 00ff17c8 with catch @ 00ff17c8
                       catch() { ... } // from try @ 00ff19bc with catch @ 00ff17c8 */
  lVar1 = findVolotileTexture(param_1);
  if (*(int *)param_2 != 0) {
    *(int *)(lVar1 + 0x4c) = *(int *)param_2;
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(lVar1 + 0x50) = *(int *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(lVar1 + 0x54) = *(int *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(int *)(lVar1 + 0x58) = *(int *)(param_2 + 0xc);
  }
  return;
}

