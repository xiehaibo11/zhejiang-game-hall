
/* cocos2d::extension::Manifest::loadJson(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::loadJson(Manifest *this,basic_string *param_1)

{
  basic_string bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  clear(this);
  uStack_48 = 0;
  local_40 = (void *)0x0;
                    /* try { // try from 00a5513c to 00b55153 has its CatchHandler @ 00a552bc */
  local_50 = 0;
  uVar4 = (**(code **)(**(long **)(this + 0x10) + 0xf8))(*(long **)(this + 0x10),param_1);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 00a55168 to 00b5517b has its CatchHandler @ 00a552b8 */
    (**(code **)(**(long **)(this + 0x10) + 0x18))(&local_68,*(long **)(this + 0x10),param_1);
    uStack_48 = uStack_60;
    local_50 = local_68;
    uVar3 = local_50;
                    /* try { // try from 00a5517c to 00b5518b has its CatchHandler @ 00a5528c */
    local_50._0_1_ = SUB81(local_68,0);
    local_40 = local_58;
    uVar4 = (ulong)((byte)local_50._0_1_ >> 1);
    if ((local_68 & 1) != 0) {
      uVar4 = uStack_60;
    }
    bVar1 = local_50._0_1_;
    local_50 = uVar3;
    if (uVar4 != 0) {
      loadJsonFromString(this,(basic_string *)&local_50);
                    /* try { // try from 00a551a4 to 00b551ab has its CatchHandler @ 00a55270 */
      bVar1 = local_50._0_1_;
    }
    if (((byte)bVar1 & 1) != 0) {
                    /* try { // try from 00a551ac to 00b551bb has its CatchHandler @ 00a552a0 */
      operator_delete(local_40);
    }
  }
                    /* try { // try from 00a551bc to 00b551c3 has its CatchHandler @ 00a55288 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a551c4 to 00b551f3 has its CatchHandler @ 00a55290 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

