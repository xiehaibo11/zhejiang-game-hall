
/* fairygui::UIObjectFactory::resolvePackageItemExtension(fairygui::PackageItem*) */

void fairygui::UIObjectFactory::resolvePackageItemExtension(PackageItem *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  PackageItem *pPVar6;
  basic_string *in_x2;
  basic_string *pbVar7;
  code *pcVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  PackageItem *local_50;
  long local_38;
  
                    /* try { // try from 00a9e2b0 to 00b9e32b has its CatchHandler @ 00a9e2b0
                       catch() { ... } // from try @ 00a9e2b0 with catch @ 00a9e2b0
                       catch() { ... } // from try @ 00a9e330 with catch @ 00a9e2b0
                       catch() { ... } // from try @ 00a9e380 with catch @ 00a9e2b0
                       catch() { ... } // from try @ 00a9e3bc with catch @ 00a9e2b0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::operator+
            ((__ndk1 *)UIPackage::URL_PREFIX,(basic_string *)(*(long *)(param_1 + 0x28) + 0x28),
             in_x2);
  pbVar7 = (basic_string *)(ulong)((byte)param_1[0x38] >> 1);
  pPVar6 = param_1 + 0x39;
  if (((byte)param_1[0x38] & 1) != 0) {
    pbVar7 = *(basic_string **)(param_1 + 0x40);
    pPVar6 = *(PackageItem **)(param_1 + 0x48);
  }
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,(char *)pPVar6,(ulong)pbVar7);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>>>
                      *)_packageItemExtensions,(basic_string *)&local_70);
                    /* try { // try from 00a9e32c to 00b9e32f has its CatchHandler @ 00a9e438 */
  if ((local_70 & 1) == 0) {
                    /* try { // try from 00a9e330 to 00b9e37b has its CatchHandler @ 00a9e2b0 */
    if ((local_90 & 1) == 0) goto LAB_00a9e338;
LAB_00a9e374:
    operator_delete(local_80);
                    /* try { // try from 00a9e37c to 00b9e37f has its CatchHandler @ 00a9e408 */
    if (lVar4 == 0) goto LAB_00a9e380;
LAB_00a9e33c:
    plVar5 = *(long **)(lVar4 + 0x50);
joined_r0x00a9e434:
    if (plVar5 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a9e32c with catch @ 00a9e438 */
      local_50 = (PackageItem *)0x0;
    }
    else if ((long *)(lVar4 + 0x30) == plVar5) {
      local_50 = (PackageItem *)&local_70;
                    /* try { // try from 00a9e454 to 00b9e4ab has its CatchHandler @ 00a9e454
                       catch() { ... } // from try @ 00a9e454 with catch @ 00a9e454
                       catch() { ... } // from try @ 00a9e4b4 with catch @ 00a9e454
                       catch() { ... } // from try @ 00a9e570 with catch @ 00a9e454
                       catch() { ... } // from try @ 00a9e590 with catch @ 00a9e454 */
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    }
    else {
      local_50 = (PackageItem *)(**(code **)(*plVar5 + 0x10))();
    }
    FUN_00a9e59c(&local_70,param_1 + 0xe0);
    pPVar6 = local_50;
    if ((PackageItem *)&local_70 != local_50) goto LAB_00a9e474;
LAB_00a9e4c4:
    pcVar8 = *(code **)(*(ulong *)pPVar6 + 0x20);
  }
  else {
    operator_delete(local_60);
    if ((local_90 & 1) != 0) goto LAB_00a9e374;
LAB_00a9e338:
    if (lVar4 != 0) goto LAB_00a9e33c;
LAB_00a9e380:
                    /* try { // try from 00a9e380 to 00b9e3ab has its CatchHandler @ 00a9e2b0 */
    std::__ndk1::operator+
              ((__ndk1 *)UIPackage::URL_PREFIX,(basic_string *)(*(long *)(param_1 + 0x28) + 0x40),
               pbVar7);
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_a8,"/",1);
                    /* try { // try from 00a9e3ac to 00b9e3bb has its CatchHandler @ 00a9e41c */
    local_80 = (void *)puVar3[2];
    uStack_88 = puVar3[1];
    local_90 = *puVar3;
                    /* try { // try from 00a9e3bc to 00b9e453 has its CatchHandler @ 00a9e2b0 */
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = (ulong)((byte)param_1[0x50] >> 1);
    pPVar6 = param_1 + 0x51;
    if (((byte)param_1[0x50] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x58);
      pPVar6 = *(PackageItem **)(param_1 + 0x60);
    }
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_90,(char *)pPVar6,uVar1);
    local_60 = (void *)puVar3[2];
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* catch() { ... } // from try @ 00a9e37c with catch @ 00a9e408 */
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>>>
                        *)_packageItemExtensions,(basic_string *)&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      if ((local_90 & 1) != 0) goto LAB_00a9e494;
LAB_00a9e424:
      if (((byte)local_a8[0] & 1) == 0) goto LAB_00a9e42c;
LAB_00a9e4a4:
      operator_delete(local_98);
                    /* try { // try from 00a9e4ac to 00b9e4b3 has its CatchHandler @ 00a9e67c */
      if (lVar4 == 0) goto LAB_00a9e4b0;
LAB_00a9e430:
      plVar5 = *(long **)(lVar4 + 0x50);
      goto joined_r0x00a9e434;
    }
                    /* catch() { ... } // from try @ 00a9e3ac with catch @ 00a9e41c */
    if ((local_90 & 1) == 0) goto LAB_00a9e424;
LAB_00a9e494:
    operator_delete(local_80);
    if (((byte)local_a8[0] & 1) != 0) goto LAB_00a9e4a4;
LAB_00a9e42c:
    if (lVar4 != 0) goto LAB_00a9e430;
LAB_00a9e4b0:
    pPVar6 = *(PackageItem **)(param_1 + 0x100);
                    /* try { // try from 00a9e4b4 to 00b9e567 has its CatchHandler @ 00a9e454 */
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (param_1 + 0xe0 == pPVar6) goto LAB_00a9e4c4;
LAB_00a9e474:
    if (pPVar6 == (PackageItem *)0x0) goto LAB_00a9e4d0;
    pcVar8 = *(code **)(*(ulong *)pPVar6 + 0x28);
  }
  (*pcVar8)();
LAB_00a9e4d0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

