
/* cocos2d::extension::AssetsManagerEx::~AssetsManagerEx() */

void __thiscall cocos2d::extension::AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  __shared_weak_count *p_Var1;
  AssetsManagerEx AVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  Ref *this_00;
  byte *pbVar9;
  Ref *pRVar10;
  AssetsManagerEx *pAVar11;
  byte *pbVar12;
  __shared_weak_count *this_01;
  void *pvVar13;
  byte *pbVar14;
  
                    /* try { // try from 00a64244 to 00b64297 has its CatchHandler @ 00a64244
                       catch() { ... } // from try @ 00a64244 with catch @ 00a64244
                       catch() { ... } // from try @ 00a6438c with catch @ 00a64244 */
  *(undefined ***)this = &PTR__AssetsManagerEx_01c6e700;
  pAVar11 = this + 0x38;
  lVar7 = *(long *)pAVar11;
  plVar6 = *(long **)(lVar7 + 0xb0);
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  if ((long *)(lVar7 + 0x90) == plVar6) {
                    /* try { // try from 00a64298 to 00b642a3 has its CatchHandler @ 00a643c8 */
    pcVar8 = *(code **)(*plVar6 + 0x20);
LAB_00a6429c:
    (*pcVar8)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x28);
    goto LAB_00a6429c;
  }
  lVar7 = *(long *)pAVar11;
                    /* try { // try from 00a642a4 to 00b642ab has its CatchHandler @ 00a643c4 */
  plVar6 = *(long **)(lVar7 + 0x50);
                    /* try { // try from 00a642ac to 00b6438b has its CatchHandler @ 00a643d0 */
  *(undefined8 *)(lVar7 + 0x50) = 0;
  if ((long *)(lVar7 + 0x30) == plVar6) {
    pcVar8 = *(code **)(*plVar6 + 0x20);
LAB_00a642d0:
    (*pcVar8)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x28);
    goto LAB_00a642d0;
  }
  lVar7 = *(long *)pAVar11;
  plVar6 = *(long **)(lVar7 + 0x80);
  *(undefined8 *)(lVar7 + 0x80) = 0;
  if ((long *)(lVar7 + 0x60) == plVar6) {
    pcVar8 = *(code **)(*plVar6 + 0x20);
LAB_00a64304:
    (*pcVar8)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x28);
    goto LAB_00a64304;
  }
  if (*(Ref **)(this + 0xe0) == (Ref *)0x0) {
    pRVar10 = (Ref *)0x0;
  }
  else {
    Ref::release(*(Ref **)(this + 0xe0));
    pRVar10 = *(Ref **)(this + 0xe0);
  }
  this_00 = *(Ref **)(this + 0xe8);
  if (this_00 == pRVar10) {
LAB_00a64344:
    pRVar10 = *(Ref **)(this + 0xf0);
  }
  else {
    pRVar10 = *(Ref **)(this + 0xf0);
    if ((this_00 != (Ref *)0x0) && (this_00 != pRVar10)) {
      Ref::release(this_00);
      goto LAB_00a64344;
    }
  }
  if (pRVar10 != (Ref *)0x0) {
    Ref::release(pRVar10);
  }
  pAVar11 = *(AssetsManagerEx **)(this + 0x250);
  if (this + 0x230 == pAVar11) {
    pcVar8 = *(code **)(*(long *)pAVar11 + 0x20);
LAB_00a64378:
    (*pcVar8)();
  }
  else if (pAVar11 != (AssetsManagerEx *)0x0) {
    pcVar8 = *(code **)(*(long *)pAVar11 + 0x28);
    goto LAB_00a64378;
  }
  pAVar11 = *(AssetsManagerEx **)(this + 0x220);
  if (this + 0x200 == pAVar11) {
    pcVar8 = *(code **)(*(long *)pAVar11 + 0x20);
LAB_00a643a4:
    (*pcVar8)();
  }
  else {
                    /* try { // try from 00a6438c to 00b643eb has its CatchHandler @ 00a64244 */
    if (pAVar11 != (AssetsManagerEx *)0x0) {
      pcVar8 = *(code **)(*(long *)pAVar11 + 0x28);
      goto LAB_00a643a4;
    }
  }
  pAVar11 = *(AssetsManagerEx **)(this + 0x1f0);
  if (this + 0x1d0 == pAVar11) {
                    /* catch() { ... } // from try @ 00a64298 with catch @ 00a643c8 */
    pcVar8 = *(code **)(*(long *)pAVar11 + 0x20);
LAB_00a643d0:
                    /* catch() { ... } // from try @ 00a642ac with catch @ 00a643d0 */
    (*pcVar8)();
  }
  else if (pAVar11 != (AssetsManagerEx *)0x0) {
    pcVar8 = *(code **)(*(long *)pAVar11 + 0x28);
                    /* catch() { ... } // from try @ 00a642a4 with catch @ 00a643c4 */
    goto LAB_00a643d0;
  }
  puVar5 = *(void **)(this + 0x1a8);
  while (puVar5 != (void *)0x0) {
    pvVar13 = (void *)*puVar5;
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
                    /* try { // try from 00a643ec to 00b64447 has its CatchHandler @ 00a643ec
                       catch() { ... } // from try @ 00a643ec with catch @ 00a643ec
                       catch() { ... } // from try @ 00a648fc with catch @ 00a643ec */
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    puVar5 = pvVar13;
  }
  pvVar13 = *(void **)(this + 0x198);
  *(undefined8 *)(this + 0x198) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  pbVar12 = *(byte **)(this + 0x150);
  if (pbVar12 != (byte *)0x0) {
    pbVar9 = *(byte **)(this + 0x158);
    pbVar14 = pbVar12;
    if (pbVar9 != pbVar12) {
      do {
        pbVar14 = pbVar9 + -0x18;
        if ((*pbVar14 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
        pbVar9 = pbVar14;
      } while (pbVar12 != pbVar14);
      pbVar14 = *(byte **)(this + 0x150);
                    /* try { // try from 00a64448 to 00b6445f has its CatchHandler @ 00a649fc */
    }
    *(byte **)(this + 0x158) = pbVar12;
    operator_delete(pbVar14);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                       *)(this + 0x128),*(__hash_node_base **)(this + 0x138));
  pvVar13 = *(void **)(this + 0x128);
                    /* try { // try from 00a64468 to 00b64473 has its CatchHandler @ 00a649f8 */
  *(undefined8 *)(this + 0x128) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
                    /* try { // try from 00a64474 to 00b6447f has its CatchHandler @ 00a649f4 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                       *)(this + 0x100),*(__hash_node_base **)(this + 0x110));
                    /* try { // try from 00a64480 to 00b64577 has its CatchHandler @ 00a64a0c */
  pvVar13 = *(void **)(this + 0x100);
  *(undefined8 *)(this + 0x100) = 0;
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  if (((byte)this[200] & 1) == 0) {
    if (((byte)this[0xb0] & 1) == 0) goto LAB_00a644a0;
LAB_00a644dc:
    operator_delete(*(void **)(this + 0xc0));
    if (((byte)this[0x98] & 1) != 0) goto LAB_00a644ec;
LAB_00a644a8:
    if (((byte)this[0x80] & 1) == 0) goto LAB_00a644b0;
LAB_00a644fc:
    operator_delete(*(void **)(this + 0x90));
    if (((byte)this[0x68] & 1) != 0) goto LAB_00a6450c;
LAB_00a644b8:
    if (((byte)this[0x50] & 1) == 0) goto LAB_00a644c0;
LAB_00a6451c:
    operator_delete(*(void **)(this + 0x60));
    this_01 = *(__shared_weak_count **)(this + 0x40);
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    if (((byte)this[0xb0] & 1) != 0) goto LAB_00a644dc;
LAB_00a644a0:
    if (((byte)this[0x98] & 1) == 0) goto LAB_00a644a8;
LAB_00a644ec:
    operator_delete(*(void **)(this + 0xa8));
    if (((byte)this[0x80] & 1) != 0) goto LAB_00a644fc;
LAB_00a644b0:
    if (((byte)this[0x68] & 1) == 0) goto LAB_00a644b8;
LAB_00a6450c:
    operator_delete(*(void **)(this + 0x78));
    if (((byte)this[0x50] & 1) != 0) goto LAB_00a6451c;
LAB_00a644c0:
    this_01 = *(__shared_weak_count **)(this + 0x40);
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
      AVar2 = this[0x10];
      goto joined_r0x00a64584;
    }
  }
  AVar2 = this[0x10];
joined_r0x00a64584:
  if (((byte)AVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  Ref::~Ref((Ref *)this);
  return;
}

