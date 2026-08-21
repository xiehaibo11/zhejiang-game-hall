
void FUN_00c11898(void)

{
  if (spine::SkeletonDataMgr::_instance != (long *)0x0) {
    (**(code **)(*spine::SkeletonDataMgr::_instance + 8))();
    spine::SkeletonDataMgr::_instance = (long *)0x0;
  }
  return;
}

