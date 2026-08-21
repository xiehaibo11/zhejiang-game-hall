
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_151(void)

{
  DAT_01795b80 = operator_new(0x10);
  gettimeofday(DAT_01795b80,(__timezone_ptr_t)0x0);
  __cxa_atexit(btClock::~btClock,&DAT_01795b80,&PTR_LOOP_016979c0);
  CProfileManager::Root = "Root";
  DAT_01795b98 = 0;
  _DAT_01795b90 = 0;
  DAT_01795ba0 = 0;
  DAT_01795bb0 = 0;
  _DAT_01795ba8 = 0;
  uRam0000000001795bc0 = 0;
  _DAT_01795bb8 = 0;
  CProfileNode::Reset((CProfileNode *)&CProfileManager::Root);
  __cxa_atexit(CProfileNode::~CProfileNode,&CProfileManager::Root,&PTR_LOOP_016979c0);
  return;
}

