
/* cocos2d::extension::Manifest::loadJsonFromString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::extension::Manifest::loadJsonFromString(Manifest *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  basic_string *__n;
  long lVar5;
  void *__dest;
  basic_string *local_60;
  basic_string *local_58;
  void *local_50;
  long local_48;
  
                    /* try { // try from 00a553fc to 00b55413 has its CatchHandler @ 00a5557c */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar4 = *param_1;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) goto LAB_00a55504;
  local_60 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a55428 to 00b5543b has its CatchHandler @ 00a55578 */
  if (((byte)bVar4 & 1) == 0) {
    local_60 = param_1 + 1;
  }
  local_58 = local_60;
                    /* try { // try from 00a5543c to 00b5544b has its CatchHandler @ 00a5554c */
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)(this + 0x128),(GenericStringStream *)&local_60);
  if (*(int *)(this + 0x180) == 0) goto LAB_00a55504;
  local_60 = (basic_string *)0x0;
  local_58 = (basic_string *)0x0;
  local_50 = (void *)0x0;
  bVar4 = *param_1;
                    /* try { // try from 00a55464 to 00b5546b has its CatchHandler @ 00a55530 */
                    /* try { // try from 00a5546c to 00b5547b has its CatchHandler @ 00a55560 */
  uVar1 = 0;
  if (*(long *)(this + 0x188) != 0) {
    uVar1 = *(long *)(this + 0x188) - 1;
  }
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 00a5547c to 00b55483 has its CatchHandler @ 00a55548 */
  __n = (basic_string *)(uVar2 - uVar1);
  if (uVar2 < uVar1) {
                    /* catch() { ... } // from try @ 00a55464 with catch @ 00a55530 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
                    /* try { // try from 00a55484 to 00b554b3 has its CatchHandler @ 00a55550 */
  pbVar3 = param_1 + 1;
  if (((byte)bVar4 & 1) != 0) {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
  }
  if ((basic_string *)0x9 < __n) {
    __n = (basic_string *)0xa;
  }
  if ((basic_string *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < (basic_string *)0x17) {
                    /* try { // try from 00a554b4 to 00b555cb has its CatchHandler @ 00a553ac */
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = (basic_string *)(ulong)(byte)((int)__n << 1);
    if (__n != (basic_string *)0x0) goto LAB_00a554e0;
  }
  else {
    __dest = operator_new(0x10);
    local_60 = (basic_string *)0x11;
    local_58 = __n;
    local_50 = __dest;
LAB_00a554e0:
    memcpy(__dest,pbVar3 + uVar1,(size_t)__n);
  }
  *(basic_string *)((long)__dest + (long)__n) = (basic_string)0x0;
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00a55504:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

