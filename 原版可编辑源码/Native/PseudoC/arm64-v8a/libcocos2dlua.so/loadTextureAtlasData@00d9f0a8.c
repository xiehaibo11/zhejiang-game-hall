
/* dragonBones::CCFactory::loadTextureAtlasData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

undefined8 __thiscall
dragonBones::CCFactory::loadTextureAtlasData
          (CCFactory *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  CCFactory *pCVar6;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
                    /* try { // try from 00d9f0a8 to 00e9f0af has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f0b0 to 00e9f0b7 has its CatchHandler @ 00d9f2b8 */
                    /* try { // try from 00d9f0b8 to 00e9f0bb has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f0bc to 00e9f0bf has its CatchHandler @ 00d9f2d4 */
                    /* try { // try from 00d9f0c0 to 00e9f0c7 has its CatchHandler @ 00d9f2b4 */
  lVar3 = tpidr_el0;
                    /* try { // try from 00d9f0c8 to 00e9f0cb has its CatchHandler @ 00d9f2dc */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d9f0cc to 00e9f0d3 has its CatchHandler @ 00d9f2b0 */
                    /* try { // try from 00d9f0d4 to 00e9f0d7 has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f0d8 to 00e9f0df has its CatchHandler @ 00d9f2ac */
                    /* try { // try from 00d9f0e0 to 00e9f0e7 has its CatchHandler @ 00d9f2a8 */
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
                    /* try { // try from 00d9f0e8 to 00e9f0ef has its CatchHandler @ 00d9f2a4 */
                    /* try { // try from 00d9f0f0 to 00e9f0f7 has its CatchHandler @ 00d9f2a0 */
  (**(code **)(*plVar4 + 0x50))(&local_60,plVar4,param_1);
                    /* try { // try from 00d9f0f8 to 00e9f0ff has its CatchHandler @ 00d9f29c */
  pCVar6 = this + 0x50;
                    /* try { // try from 00d9f100 to 00e9f10b has its CatchHandler @ 00d9f2dc */
  if (((byte)*pCVar6 & 1) == 0) {
    *(undefined2 *)pCVar6 = 0;
  }
  else {
                    /* try { // try from 00d9f10c to 00e9f113 has its CatchHandler @ 00d9f298 */
    **(undefined1 **)(this + 0x60) = 0;
                    /* try { // try from 00d9f114 to 00e9f117 has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f118 to 00e9f11b has its CatchHandler @ 00d9f294 */
    *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00d9f11c to 00e9f123 has its CatchHandler @ 00d9f290 */
    if (((byte)this[0x50] & 1) != 0) {
                    /* try { // try from 00d9f124 to 00e9f12b has its CatchHandler @ 00d9f2dc */
      operator_delete(*(void **)(this + 0x60));
      *(undefined8 *)(this + 0x50) = 0;
    }
  }
                    /* try { // try from 00d9f12c to 00e9f133 has its CatchHandler @ 00d9f28c */
                    /* try { // try from 00d9f134 to 00e9f13b has its CatchHandler @ 00d9f288 */
  *(char **)(this + 0x60) = local_50;
  *(ulong *)(this + 0x58) = uStack_58;
  *(ulong *)pCVar6 = CONCAT71(uStack_5f,local_60);
                    /* try { // try from 00d9f13c to 00e9f143 has its CatchHandler @ 00d9f284 */
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
                    /* try { // try from 00d9f144 to 00e9f14b has its CatchHandler @ 00d9f280 */
                    /* try { // try from 00d9f14c to 00e9f153 has its CatchHandler @ 00d9f27c */
                    /* try { // try from 00d9f154 to 00e9f157 has its CatchHandler @ 00d9f2dc */
  (**(code **)(*plVar4 + 0x18))(&local_60,plVar4,pCVar6);
                    /* try { // try from 00d9f158 to 00e9f15f has its CatchHandler @ 00d9f278 */
                    /* try { // try from 00d9f160 to 00e9f163 has its CatchHandler @ 00d9f2d4 */
                    /* try { // try from 00d9f164 to 00e9f16b has its CatchHandler @ 00d9f274 */
  uVar1 = (ulong)(local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
  }
                    /* try { // try from 00d9f16c to 00e9f173 has its CatchHandler @ 00d9f270 */
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
                    /* try { // try from 00d9f174 to 00e9f17b has its CatchHandler @ 00d9f26c */
                    /* try { // try from 00d9f17c to 00e9f183 has its CatchHandler @ 00d9f268 */
    pcVar2 = (char *)((ulong)&local_60 | 1);
                    /* try { // try from 00d9f184 to 00e9f18f has its CatchHandler @ 00d9f2dc */
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
                    /* try { // try from 00d9f190 to 00e9f197 has its CatchHandler @ 00d9f264 */
    uVar5 = BaseFactory::parseTextureAtlasData
                      ((BaseFactory *)this,pcVar2,(void *)0x0,param_2,param_3);
                    /* try { // try from 00d9f198 to 00e9f19f has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f1a0 to 00e9f1a7 has its CatchHandler @ 00d9f260 */
  }
                    /* try { // try from 00d9f1e4 to 00e9f1eb has its CatchHandler @ 00d9f24c */
  if ((local_60 & 1) != 0) {
                    /* try { // try from 00d9f1a8 to 00e9f1af has its CatchHandler @ 00d9f25c */
    operator_delete(local_50);
  }
                    /* try { // try from 00d9f1b0 to 00e9f1b7 has its CatchHandler @ 00d9f2d4 */
                    /* try { // try from 00d9f1b8 to 00e9f1c3 has its CatchHandler @ 00d9f2dc */
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00d9f1c4 to 00e9f1c7 has its CatchHandler @ 00d9f258 */
                    /* try { // try from 00d9f1c8 to 00e9f1cb has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f1cc to 00e9f1d3 has its CatchHandler @ 00d9f254 */
                    /* try { // try from 00d9f1d4 to 00e9f1db has its CatchHandler @ 00d9f2dc */
                    /* try { // try from 00d9f1dc to 00e9f1e3 has its CatchHandler @ 00d9f250 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d9f1ec to 00e9f1f3 has its CatchHandler @ 00d9f248 */
  __stack_chk_fail();
}

