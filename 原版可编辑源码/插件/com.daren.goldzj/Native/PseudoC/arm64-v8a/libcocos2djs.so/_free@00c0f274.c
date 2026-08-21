
/* spine::Cocos2dExtension::_free(void*, char const*, int) */

void spine::Cocos2dExtension::_free(void *param_1,char *param_2,int param_3)

{
  (*DAT_01d3be88)(param_2);
  DefaultSpineExtension::_free(param_1,param_2,param_3);
  return;
}

