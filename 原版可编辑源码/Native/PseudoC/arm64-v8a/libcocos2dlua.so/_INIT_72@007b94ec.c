
void _INIT_72(void)

{
  DAT_01787770 = 0;
  DAT_01787778 = 0;
  dragonBones::BaseObject::_maxCountMap = &DAT_01787770;
  __cxa_atexit(FUN_00d817ec,&dragonBones::BaseObject::_maxCountMap,&PTR_LOOP_016979c0);
  DAT_01787788 = 0;
  DAT_01787790 = 0;
  dragonBones::BaseObject::_poolsMap = &DAT_01787788;
  __cxa_atexit(FUN_00d817f4,&dragonBones::BaseObject::_poolsMap,&PTR_LOOP_016979c0);
  return;
}

