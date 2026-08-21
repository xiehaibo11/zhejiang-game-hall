
/* cocostudio::ProjectNodeReader::purge() */

void cocostudio::ProjectNodeReader::purge(void)

{
  if (DAT_01786db8 != (long *)0x0) {
    (**(code **)(*DAT_01786db8 + 8))();
  }
  DAT_01786db8 = (long *)0x0;
  return;
}

