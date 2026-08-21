
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::VolatileTextureMgr::removeTexture(cocos2d::Texture2D*) */

void cocos2d::VolatileTextureMgr::removeTexture(Texture2D *param_1)

{
  long lVar1;
  VolatileTexture *pVVar2;
  undefined8 *puVar3;
  VolatileTexture *local_30;
  long local_28;
  
                    /* try { // try from 00ff1808 to 010f181f has its CatchHandler @ 00ff1a3c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ff1824 to 010f1833 has its CatchHandler @ 00ff1a38 */
  puVar3 = _DAT_01792910;
                    /* try { // try from 00ff1834 to 010f1843 has its CatchHandler @ 00ff1a20 */
  if (_DAT_01792910 != &_textures) {
    do {
      local_30 = (VolatileTexture *)puVar3[2];
      if (*(Texture2D **)local_30 == param_1) {
                    /* try { // try from 00ff1860 to 010f186f has its CatchHandler @ 00ff1a1c */
        std::__ndk1::
        list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>::remove
                  ((list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                    *)&_textures,&local_30);
        pVVar2 = local_30;
                    /* try { // try from 00ff1870 to 010f187f has its CatchHandler @ 00ff1a18 */
        if (local_30 != (VolatileTexture *)0x0) {
          VolatileTexture::~VolatileTexture(local_30);
          operator_delete(pVVar2);
        }
        break;
      }
      puVar3 = (undefined8 *)puVar3[1];
    } while (puVar3 != &_textures);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00ff1894 to 010f19b7 has its CatchHandler @ 00ff1a44 */
  return;
}

