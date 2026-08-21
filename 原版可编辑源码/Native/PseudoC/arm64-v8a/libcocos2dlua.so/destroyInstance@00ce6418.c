
/* BoneNodeReader::destroyInstance() */

void BoneNodeReader::destroyInstance(void)

{
  if (DAT_017870c0 != (long *)0x0) {
    (**(code **)(*DAT_017870c0 + 8))();
  }
  DAT_017870c0 = (long *)0x0;
  return;
}

