
/* dragonBones::CCFactory::buildArmatureDisplay(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long dragonBones::CCFactory::buildArmatureDisplay
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,
               basic_string *param_4)

{
  long *plVar1;
  WorldClock *this;
  long lVar2;
  
                    /* try { // try from 00d9f1f4 to 00e9f1fb has its CatchHandler @ 00d9f244 */
                    /* try { // try from 00d9f1fc to 00e9f203 has its CatchHandler @ 00d9f240 */
                    /* try { // try from 00d9f204 to 00e9f20b has its CatchHandler @ 00d9f2d4 */
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0xa0))();
                    /* try { // try from 00d9f20c to 00e9f213 has its CatchHandler @ 00d9f2dc */
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00d9f214 to 00e9f21b has its CatchHandler @ 00d9f23c */
    this = (WorldClock *)DragonBones::getClock(*(DragonBones **)(param_1 + 0x40));
                    /* try { // try from 00d9f21c to 00e9f223 has its CatchHandler @ 00d9f238 */
                    /* try { // try from 00d9f224 to 00e9f227 has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f228 to 00e9f22f has its CatchHandler @ 00d9f234 */
    WorldClock::add(this,(IAnimatable *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
    lVar2 = plVar1[0x17];
  }
                    /* try { // try from 00d9f230 to 00e9f3cf has its CatchHandler @ 00d9d944 */
                    /* catch() { ... } // from try @ 00d9f228 with catch @ 00d9f234 */
                    /* catch() { ... } // from try @ 00d9f21c with catch @ 00d9f238 */
  return lVar2;
}

