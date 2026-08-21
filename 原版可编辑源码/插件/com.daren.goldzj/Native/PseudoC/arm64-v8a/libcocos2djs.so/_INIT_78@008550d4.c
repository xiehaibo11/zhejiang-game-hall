
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_78(void)

{
  _DAT_01d3df30 = 0x3f80000000000000;
  dragonBones::WorldClock::clock = &PTR__WorldClock_01c906b0;
  DAT_01d3df38 = 0;
  uRam0000000001d3df58 = 0;
  _DAT_01d3df50 = 0;
  uRam0000000001d3df48 = 0;
  _DAT_01d3df40 = 0;
  __cxa_atexit(dragonBones::WorldClock::~WorldClock,&dragonBones::WorldClock::clock,
               &PTR_LOOP_01d1b000);
  return;
}

