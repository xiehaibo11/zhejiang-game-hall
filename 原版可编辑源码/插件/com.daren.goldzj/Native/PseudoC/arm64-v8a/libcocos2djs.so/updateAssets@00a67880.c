
/* cocos2d::extension::AssetsManagerEx::updateAssets(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit> > > const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::updateAssets(AssetsManagerEx *this,unordered_map *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  *this_00;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a678a8 to 00b678e3 has its CatchHandler @ 00a67a40 */
  if (this[0x260] == (AssetsManagerEx)0x0) {
                    /* catch() { ... } // from try @ 00a67670 with catch @ 00a679d4 */
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
                    /* catch() { ... } // from try @ 00a67618 with catch @ 00a679ec */
                    /* catch() { ... } // from try @ 00a6763c with catch @ 00a679f0
                       catch() { ... } // from try @ 00a677d8 with catch @ 00a679f0
                       catch() { ... } // from try @ 00a67830 with catch @ 00a679f0 */
    dispatchUpdateEvent(this,0,&local_60,&local_78,0,0);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (((*(int *)(this + 0x30) != 10) &&
           (uVar4 = Manifest::isLoaded(*(Manifest **)(this + 0xe0)), (uVar4 & 1) != 0)) &&
          (uVar4 = Manifest::isLoaded(*(Manifest **)(this + 0xf0)), (uVar4 & 1) != 0)) {
    this_00 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
               *)(this + 0x100);
                    /* try { // try from 00a678e4 to 00b67a97 has its CatchHandler @ 00a67548 */
    *(undefined4 *)(this + 0x30) = 10;
    if (*(long *)(this + 0x118) != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
      ::__deallocate_node(this_00,*(__hash_node_base **)(this + 0x110));
      lVar5 = *(long *)(this + 0x108);
      *(undefined8 *)(this + 0x110) = 0;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          *(undefined8 *)(*(long *)this_00 + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
      }
      *(undefined8 *)(this + 0x118) = 0;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      puVar3 = *(void **)(this + 0x1a8);
      while (puVar3 != (void *)0x0) {
        pvVar7 = (void *)*puVar3;
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        puVar3 = pvVar7;
      }
      lVar5 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a8) = 0;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
                    /* catch() { ... } // from try @ 00a67700 with catch @ 00a67964 */
          *(undefined8 *)(*(long *)(this + 0x198) + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 00a676f0 with catch @ 00a67974 */
        } while (lVar5 != lVar6);
      }
      *(undefined8 *)(this + 0x1b0) = 0;
    }
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x178) = 0;
                    /* catch() { ... } // from try @ 00a676d4 with catch @ 00a67984 */
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 400) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x1c8) = 0;
                    /* catch() { ... } // from try @ 00a676c4 with catch @ 00a67994 */
    *(undefined4 *)(this + 0x17c) = 0;
    *(int *)(this + 0x1c0) = iVar1;
    *(int *)(this + 0x1c4) = iVar1;
                    /* catch() { ... } // from try @ 00a676b0 with catch @ 00a679a4 */
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        onDownloadUnitsFinished(this);
      }
    }
    else {
      if (this_00 !=
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
           *)param_1) {
                    /* catch() { ... } // from try @ 00a676a4 with catch @ 00a679bc */
        *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 00a67690 with catch @ 00a679c4 */
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
        ::
        __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,void*>*>>
                  (this_00,*(undefined8 *)(param_1 + 0x10),0);
      }
                    /* catch() { ... } // from try @ 00a67668 with catch @ 00a679c8 */
      batchDownload(this);
                    /* catch() { ... } // from try @ 00a67648 with catch @ 00a679d0 */
    }
  }
                    /* catch() { ... } // from try @ 00a675d4 with catch @ 00a67a28 */
                    /* catch() { ... } // from try @ 00a675c8 with catch @ 00a67a2c */
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a675a8 with catch @ 00a67a30 */
                    /* catch() { ... } // from try @ 00a675e0 with catch @ 00a67a40
                       catch() { ... } // from try @ 00a67738 with catch @ 00a67a40
                       catch() { ... } // from try @ 00a678a8 with catch @ 00a67a40 */
  return;
}

