
/* cocos2d::Sprite3DMaterialCache::destroyInstance() */

void cocos2d::Sprite3DMaterialCache::destroyInstance(void)

{
  Sprite3DMaterialCache *pSVar1;
  
  pSVar1 = _cacheInstance;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d33f20 with catch @ 00d340b4
                        */
  if (_cacheInstance != (Sprite3DMaterialCache *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d33ffc with catch @ 00d340b8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d33fa8 with catch @ 00d340bc
                        */
    ~Sprite3DMaterialCache(_cacheInstance);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d33f38 with catch @ 00d340c0
                        */
    operator_delete(pSVar1);
    _cacheInstance = (Sprite3DMaterialCache *)0x0;
  }
  return;
}

