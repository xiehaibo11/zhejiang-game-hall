
/* cocos2d::AudioMixer::AudioMixer(unsigned long, unsigned int, unsigned int) */

int __thiscall
cocos2d::AudioMixer::AudioMixer(AudioMixer *this,ulong param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (param_3 < 0x20) {
    uVar2 = ~(-1 << (ulong)(param_3 & 0x1f));
  }
  *(uint *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x578) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  *(undefined8 *)(this + 0x648) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined8 *)(this + 0x7e8) = 0;
  *(undefined8 *)(this + 0x7f0) = 0;
  *(undefined8 *)(this + 0x8b8) = 0;
  *(undefined8 *)(this + 0x8c0) = 0;
  *(undefined8 *)(this + 0x988) = 0;
  *(undefined8 *)(this + 0x990) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xb28) = 0;
                    /* try { // try from 00a7ae20 to 00b7ae27 has its CatchHandler @ 00a7ae30 */
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xbf8) = 0;
                    /* try { // try from 00a7ae28 to 00b7aecf has its CatchHandler @ 00a7ac38 */
  *(undefined8 *)(this + 0xc00) = 0;
                    /* catch() { ... } // from try @ 00a7ad74 with catch @ 00a7ae2c */
  *(undefined8 *)(this + 0xcc8) = 0;
                    /* catch() { ... } // from try @ 00a7ad00 with catch @ 00a7ae30
                       catch() { ... } // from try @ 00a7ae20 with catch @ 00a7ae30 */
  *(undefined8 *)(this + 0xcd0) = 0;
                    /* catch() { ... } // from try @ 00a7ad88 with catch @ 00a7ae34 */
  *(undefined8 *)(this + 0xd98) = 0;
                    /* catch() { ... } // from try @ 00a7ad5c with catch @ 00a7ae38 */
  *(undefined8 *)(this + 0xda0) = 0;
  *(undefined8 *)(this + 0xe68) = 0;
  *(undefined8 *)(this + 0xe70) = 0;
  *(undefined8 *)(this + 0xf38) = 0;
                    /* catch() { ... } // from try @ 00a7ad34 with catch @ 00a7ae48 */
  *(undefined8 *)(this + 0xf40) = 0;
  *(undefined8 *)(this + 0x1008) = 0;
  *(undefined8 *)(this + 0x1010) = 0;
  *(undefined8 *)(this + 0x10d8) = 0;
  *(undefined8 *)(this + 0x10e0) = 0;
  *(undefined8 *)(this + 0x11a8) = 0;
  *(undefined8 *)(this + 0x11b0) = 0;
  *(undefined8 *)(this + 0x1278) = 0;
                    /* catch() { ... } // from try @ 00a7ad8c with catch @ 00a7ae68 */
  *(undefined8 *)(this + 0x1280) = 0;
  *(undefined8 *)(this + 0x1348) = 0;
  *(undefined8 *)(this + 0x1350) = 0;
  *(undefined8 *)(this + 0x1418) = 0;
  *(undefined8 *)(this + 0x1420) = 0;
  *(undefined8 *)(this + 0x14e8) = 0;
                    /* catch() { ... } // from try @ 00a7ac94 with catch @ 00a7ae80
                       catch() { ... } // from try @ 00a7ad54 with catch @ 00a7ae80 */
  *(undefined8 *)(this + 0x14f0) = 0;
  *(undefined8 *)(this + 0x15b8) = 0;
  *(undefined8 *)(this + 0x15c0) = 0;
  *(undefined8 *)(this + 0x1690) = 0;
  *(undefined8 *)(this + 0x1688) = 0;
  *(undefined8 *)(this + 0x1758) = 0;
  *(undefined8 *)(this + 0x1760) = 0;
  *(undefined8 *)(this + 0x1828) = 0;
  *(undefined8 *)(this + 0x1830) = 0;
  *(undefined8 *)(this + 0x18f8) = 0;
  *(undefined8 *)(this + 0x1900) = 0;
  *(undefined8 *)(this + 0x19c8) = 0;
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = uVar2;
  *(undefined8 *)(this + 0x19d0) = 0;
  iVar1 = pthread_once(&sOnceControl,sInitRoutine);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x598) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7af68 with catch @ 00a7aef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7af98 with catch @ 00a7aef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7afc8 with catch @ 00a7aef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7aff0 with catch @ 00a7aef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b01c with catch @ 00a7aef8
                        */
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined8 *)(this + 0x738) = 0;
  *(undefined8 *)(this + 0x808) = 0;
  *(undefined8 *)(this + 0x8d8) = 0;
  *(undefined8 *)(this + 0x9a8) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xb48) = 0;
  *(undefined8 *)(this + 0xc18) = 0;
  *(undefined8 *)(this + 0xce8) = 0;
  *(undefined8 *)(this + 0xdb8) = 0;
  *(undefined8 *)(this + 0xe88) = 0;
  *(undefined8 *)(this + 0xf58) = 0;
  *(undefined8 *)(this + 0x1028) = 0;
  *(undefined8 *)(this + 0x10f8) = 0;
  *(undefined8 *)(this + 0x11c8) = 0;
  *(undefined8 *)(this + 0x1298) = 0;
  *(undefined8 *)(this + 0x1368) = 0;
  *(undefined8 *)(this + 0x1438) = 0;
  *(undefined8 *)(this + 0x1508) = 0;
  *(undefined8 *)(this + 0x15d8) = 0;
  *(undefined8 *)(this + 0x16a8) = 0;
  *(undefined8 *)(this + 0x1778) = 0;
  *(undefined8 *)(this + 0x1848) = 0;
  *(undefined8 *)(this + 0x1918) = 0;
  *(ulong *)(this + 0x28) = param_1;
  *(code **)(this + 0x30) = process__nop;
  *(undefined8 *)(this + 0x19e8) = 0;
                    /* try { // try from 00a7af60 to 00b7af67 has its CatchHandler @ 00a7b05c */
                    /* try { // try from 00a7af68 to 00b7af8b has its CatchHandler @ 00a7aef8 */
  return iVar1;
}

