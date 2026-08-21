
/* cocos2d::GLProgramStateCache::destroyInstance() */

void cocos2d::GLProgramStateCache::destroyInstance(void)

{
  GLProgramStateCache *pGVar1;
  
  pGVar1 = s_instance;
  if (s_instance != (GLProgramStateCache *)0x0) {
    ~GLProgramStateCache(s_instance);
    operator_delete(pGVar1);
  }
  s_instance = (GLProgramStateCache *)0x0;
  return;
}

