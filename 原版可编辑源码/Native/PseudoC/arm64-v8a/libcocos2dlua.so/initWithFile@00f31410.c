
/* cocos2d::ParticleSystem::initWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::ParticleSystem::initWithFile(ParticleSystem *this,basic_string *param_1)

{
  ParticleSystem *pPVar1;
  undefined1 *__s;
  ulong __n;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  undefined1 *__dest;
  ulong uVar11;
  ulong local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  void *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar7 + 0x50))(&local_80,plVar7,param_1);
  pPVar1 = this + 0x310;
  if (((byte)this[0x310] & 1) == 0) {
    *(undefined2 *)pPVar1 = 0;
  }
  else {
    **(undefined1 **)(this + 800) = 0;
                    /* try { // try from 00f31474 to 0103147b has its CatchHandler @ 00f31814 */
    *(undefined8 *)(this + 0x318) = 0;
    if (((byte)this[0x310] & 1) != 0) {
                    /* try { // try from 00f31480 to 01031487 has its CatchHandler @ 00f3180c */
      operator_delete(*(void **)(this + 800));
      *(undefined8 *)(this + 0x310) = 0;
    }
  }
                    /* try { // try from 00f3148c to 01031493 has its CatchHandler @ 00f31804 */
  *(undefined8 **)(this + 800) = local_70;
  *(undefined8 *)(this + 0x318) = uStack_78;
  *(void **)pPVar1 = local_80;
  plVar7 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar7 + 0xc0))(&local_80,plVar7,pPVar1);
                    /* try { // try from 00f314b4 to 010314df has its CatchHandler @ 00f31824 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,param_1);
  uVar5 = local_a0;
  __s = (undefined1 *)((ulong)&local_a0 | 1);
  __n = local_a0 >> 1 & 0x7f;
  if ((local_a0 & 1) != 0) {
    __s = local_90;
    __n = uStack_98;
  }
                    /* try { // try from 00f314e4 to 010314f3 has its CatchHandler @ 00f317fc */
                    /* try { // try from 00f314f8 to 01031507 has its CatchHandler @ 00f317f4 */
  if (((__n == 0) || (pvVar8 = memchr(__s,0x2f,__n), pvVar8 == (void *)0x0)) ||
     (sVar9 = __n, (long)pvVar8 - (long)__s == -1)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,"");
                    /* try { // try from 00f31540 to 01031547 has its CatchHandler @ 00f317d8 */
    uVar6 = initWithDictionary(this,(unordered_map *)&local_80,(basic_string *)&local_b8);
    if ((local_b8 & 1) != 0) {
                    /* try { // try from 00f31554 to 0103155f has its CatchHandler @ 00f31834 */
      operator_delete(local_a8);
    }
    goto joined_r0x00f3155c;
  }
  do {
    if (sVar9 == 0) {
      sVar9 = 0xffffffffffffffff;
      break;
    }
    lVar3 = sVar9 - 1;
    sVar9 = sVar9 - 1;
  } while (__s[lVar3] != '/');
                    /* try { // try from 00f315e8 to 010315ef has its CatchHandler @ 00f317cc */
  if (sVar9 + 1 <= __n) {
    __n = sVar9 + 1;
  }
  uStack_b0 = 0;
  local_a8 = (undefined1 *)0x0;
                    /* try { // try from 00f315fc to 0103160b has its CatchHandler @ 00f31834 */
  local_b8 = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_b8 | 1);
    local_b8 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00f31650;
    *__dest = 0;
                    /* try { // try from 00f31624 to 0103162b has its CatchHandler @ 00f317c8 */
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00f31638 to 01031643 has its CatchHandler @ 00f31834 */
    __dest = operator_new(uVar11);
    local_b8 = uVar11 | 1;
    uStack_b0 = __n;
    local_a8 = __dest;
LAB_00f31650:
                    /* try { // try from 00f3165c to 01031663 has its CatchHandler @ 00f317c4 */
    memcpy(__dest,__s,__n);
    __dest[__n] = 0;
  }
  if ((uVar5 & 1) != 0) {
    *local_90 = 0;
                    /* try { // try from 00f31670 to 0103167b has its CatchHandler @ 00f31834 */
    uStack_98 = 0;
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  uStack_98 = uStack_b0;
  local_a0 = local_b8;
                    /* try { // try from 00f31694 to 0103169b has its CatchHandler @ 00f317c0 */
  local_90 = local_a8;
  uVar6 = initWithDictionary(this,(unordered_map *)&local_80,(basic_string *)&local_a0);
                    /* try { // try from 00f316a8 to 010316b3 has its CatchHandler @ 00f31834 */
joined_r0x00f3155c:
  pvVar8 = local_80;
  puVar4 = local_70;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
    pvVar8 = local_80;
    puVar4 = local_70;
  }
  while (puVar4 != (void *)0x0) {
    pvVar10 = (void *)*puVar4;
    local_80 = pvVar8;
                    /* try { // try from 00f3158c to 01031597 has its CatchHandler @ 00f31834 */
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
                    /* try { // try from 00f31578 to 0103157f has its CatchHandler @ 00f317d4 */
    operator_delete(puVar4);
    pvVar8 = local_80;
    puVar4 = pvVar10;
  }
  local_80 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
                    /* try { // try from 00f315b0 to 010315b7 has its CatchHandler @ 00f317d0 */
    operator_delete(pvVar8);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f315c4 to 010315cf has its CatchHandler @ 00f31834 */
  return uVar6 & 1;
}

