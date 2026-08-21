
void FUN_00fd576c(long param_1)

{
                    /* catch() { ... } // from try @ 00fd5730 with catch @ 00fd576c */
  cocos2d::GLProgramCache::reloadDefaultGLProgramsRelativeToLights
            (*(GLProgramCache **)(param_1 + 8));
  return;
}

