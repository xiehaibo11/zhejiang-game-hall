
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_71(void)

{
  _DAT_01787708 = 0x3f80000000000000;
  dragonBones::WorldClock::clock = &PTR__WorldClock_016d66f0;
  DAT_01787710 = 0;
  uRam0000000001787720 = 0;
  _DAT_01787718 = 0;
  uRam0000000001787730 = 0;
  _DAT_01787728 = 0;
  __cxa_atexit(dragonBones::WorldClock::~WorldClock,&dragonBones::WorldClock::clock,
               &PTR_LOOP_016979c0);
  return;
}

