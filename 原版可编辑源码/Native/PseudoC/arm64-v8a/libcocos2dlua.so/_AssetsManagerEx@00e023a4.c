
/* cocos2d::extension::AssetsManagerEx::~AssetsManagerEx() */

void __thiscall cocos2d::extension::AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  AssetsManagerEx AVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  Ref *this_00;
  void *pvVar8;
  byte *pbVar9;
  long lVar10;
  code *pcVar11;
  Ref *pRVar12;
  byte *pbVar13;
  AssetsManagerEx *pAVar14;
  byte *pbVar15;
  __shared_weak_count *this_01;
  
                    /* try { // try from 00e023a8 to 00f023af has its CatchHandler @ 00e024d8 */
                    /* try { // try from 00e023b4 to 00f023bf has its CatchHandler @ 00e024d4 */
                    /* try { // try from 00e023c0 to 00f023cb has its CatchHandler @ 00e024bc */
  *(undefined ***)this = &PTR__AssetsManagerEx_016e7f48;
                    /* try { // try from 00e023cc to 00f023df has its CatchHandler @ 00e024a4 */
  pAVar14 = this + 0x58;
  lVar10 = *(long *)pAVar14;
  plVar7 = *(long **)(lVar10 + 0xb0);
  *(undefined8 *)(lVar10 + 0xb0) = 0;
                    /* try { // try from 00e023e0 to 00f02547 has its CatchHandler @ 00e021bc */
  if ((long *)(lVar10 + 0x90) == plVar7) {
    pcVar11 = *(code **)(*plVar7 + 0x20);
LAB_00e023fc:
    (*pcVar11)();
  }
  else if (plVar7 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar7 + 0x28);
    goto LAB_00e023fc;
  }
  lVar10 = *(long *)pAVar14;
  plVar7 = *(long **)(lVar10 + 0x50);
  *(undefined8 *)(lVar10 + 0x50) = 0;
  if ((long *)(lVar10 + 0x30) == plVar7) {
    pcVar11 = *(code **)(*plVar7 + 0x20);
LAB_00e02430:
    (*pcVar11)();
  }
  else if (plVar7 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar7 + 0x28);
    goto LAB_00e02430;
  }
  lVar10 = *(long *)pAVar14;
  plVar7 = *(long **)(lVar10 + 0x80);
  *(undefined8 *)(lVar10 + 0x80) = 0;
  if ((long *)(lVar10 + 0x60) == plVar7) {
    pcVar11 = *(code **)(*plVar7 + 0x20);
LAB_00e02464:
    (*pcVar11)();
  }
  else if (plVar7 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar7 + 0x28);
    goto LAB_00e02464;
  }
                    /* catch() { ... } // from try @ 00e02394 with catch @ 00e0246c */
  if (*(Ref **)(this + 0x100) == (Ref *)0x0) {
    pRVar12 = (Ref *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00e0237c with catch @ 00e02470 */
    Ref::release(*(Ref **)(this + 0x100));
    pRVar12 = *(Ref **)(this + 0x100);
  }
                    /* catch() { ... } // from try @ 00e02350 with catch @ 00e02480 */
  this_00 = *(Ref **)(this + 0x108);
                    /* catch() { ... } // from try @ 00e02338 with catch @ 00e02484 */
                    /* catch() { ... } // from try @ 00e0230c with catch @ 00e02488 */
                    /* catch() { ... } // from try @ 00e022f4 with catch @ 00e02494 */
  if (((this_00 != pRVar12) && (this_00 != (Ref *)0x0)) && (this_00 != *(Ref **)(this + 0x110))) {
    Ref::release(this_00);
  }
                    /* catch() { ... } // from try @ 00e023cc with catch @ 00e024a4 */
  if (*(Ref **)(this + 0x110) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x110));
  }
  pAVar14 = *(AssetsManagerEx **)(this + 0x230);
  if (this + 0x210 == pAVar14) {
    pcVar11 = *(code **)(*(long *)pAVar14 + 0x20);
LAB_00e024d4:
                    /* catch() { ... } // from try @ 00e023b4 with catch @ 00e024d4 */
    (*pcVar11)();
  }
  else {
                    /* catch() { ... } // from try @ 00e023c0 with catch @ 00e024bc */
    if (pAVar14 != (AssetsManagerEx *)0x0) {
      pcVar11 = *(code **)(*(long *)pAVar14 + 0x28);
      goto LAB_00e024d4;
    }
  }
                    /* catch() { ... } // from try @ 00e023a8 with catch @ 00e024d8 */
  pAVar14 = *(AssetsManagerEx **)(this + 0x200);
                    /* catch() { ... } // from try @ 00e02364 with catch @ 00e024dc */
                    /* catch() { ... } // from try @ 00e02320 with catch @ 00e024e0 */
                    /* catch() { ... } // from try @ 00e022dc with catch @ 00e024e4 */
  if (this + 0x1e0 == pAVar14) {
    pcVar11 = *(code **)(*(long *)pAVar14 + 0x20);
LAB_00e02500:
    (*pcVar11)();
  }
  else if (pAVar14 != (AssetsManagerEx *)0x0) {
    pcVar11 = *(code **)(*(long *)pAVar14 + 0x28);
    goto LAB_00e02500;
  }
  puVar6 = *(void **)(this + 0x1b8);
  while (puVar6 != (void *)0x0) {
    pvVar8 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
                    /* catch() { ... } // from try @ 00e022b0 with catch @ 00e0252c */
                    /* catch() { ... } // from try @ 00e022a0 with catch @ 00e02530 */
      operator_delete((void *)puVar6[4]);
                    /* catch() { ... } // from try @ 00e0224c with catch @ 00e02534 */
    }
    operator_delete(puVar6);
    puVar6 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x1a8);
  *(undefined8 *)(this + 0x1a8) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pbVar15 = *(byte **)(this + 0x170);
  if (pbVar15 != (byte *)0x0) {
    pbVar13 = *(byte **)(this + 0x178);
    pbVar9 = pbVar15;
    if (pbVar13 != pbVar15) {
      bVar2 = pbVar13[-0x18];
      pbVar9 = pbVar13 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar13 + -8));
        }
        if (pbVar15 == pbVar9) break;
        bVar2 = pbVar9[-0x18];
        pbVar13 = pbVar9;
        pbVar9 = pbVar9 + -0x18;
      }
      pbVar9 = *(byte **)(this + 0x170);
    }
    *(byte **)(this + 0x178) = pbVar15;
    operator_delete(pbVar9);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                       *)(this + 0x148),*(__hash_node_base **)(this + 0x158));
  pvVar8 = *(void **)(this + 0x148);
  *(undefined8 *)(this + 0x148) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                       *)(this + 0x120),*(__hash_node_base **)(this + 0x130));
  pvVar8 = *(void **)(this + 0x120);
  *(undefined8 *)(this + 0x120) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if (((byte)this[0xe8] & 1) == 0) {
    if (((byte)this[0xd0] & 1) == 0) goto LAB_00e025e4;
LAB_00e02620:
    operator_delete(*(void **)(this + 0xe0));
    if (((byte)this[0xb8] & 1) != 0) goto LAB_00e02630;
LAB_00e025ec:
    if (((byte)this[0xa0] & 1) == 0) goto LAB_00e025f4;
LAB_00e02640:
    operator_delete(*(void **)(this + 0xb0));
    if (((byte)this[0x88] & 1) != 0) goto LAB_00e02650;
LAB_00e025fc:
    if (((byte)this[0x70] & 1) == 0) goto LAB_00e02604;
LAB_00e02660:
    operator_delete(*(void **)(this + 0x80));
    this_01 = *(__shared_weak_count **)(this + 0x60);
  }
  else {
    operator_delete(*(void **)(this + 0xf8));
    if (((byte)this[0xd0] & 1) != 0) goto LAB_00e02620;
LAB_00e025e4:
    if (((byte)this[0xb8] & 1) == 0) goto LAB_00e025ec;
LAB_00e02630:
    operator_delete(*(void **)(this + 200));
    if (((byte)this[0xa0] & 1) != 0) goto LAB_00e02640;
LAB_00e025f4:
    if (((byte)this[0x88] & 1) == 0) goto LAB_00e025fc;
LAB_00e02650:
    operator_delete(*(void **)(this + 0x98));
    if (((byte)this[0x70] & 1) != 0) goto LAB_00e02660;
LAB_00e02604:
    this_01 = *(__shared_weak_count **)(this + 0x60);
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
      AVar3 = this[0x28];
      goto joined_r0x00e026c8;
    }
  }
  AVar3 = this[0x28];
joined_r0x00e026c8:
  if (((byte)AVar3 & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  return;
}

