
/* cocos2d::fclose_mem_func(void*, void*) */

undefined8 cocos2d::fclose_mem_func(void *param_1,void *param_2)

{
  free(param_2);
  return 0;
}

