
/* cocosbuilder::NodeLoaderLibrary::destroyInstance() */

void cocosbuilder::NodeLoaderLibrary::destroyInstance(void)

{
  if (DAT_01787248 != (long *)0x0) {
    (**(code **)(*DAT_01787248 + 8))();
  }
  DAT_01787248 = (long *)0x0;
  return;
}

