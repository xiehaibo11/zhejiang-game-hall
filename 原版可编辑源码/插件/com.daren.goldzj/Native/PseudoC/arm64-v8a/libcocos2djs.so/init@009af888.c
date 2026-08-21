
/* cocos2d::LabelLayout::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float,
   cocos2d::LabelLayoutInfo*) */

void __thiscall
cocos2d::LabelLayout::init
          (LabelLayout *this,basic_string *param_1,basic_string *param_2,float param_3,float param_4
          ,LabelLayoutInfo *param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  basic_string *pbVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  __shared_weak_count *p_Var12;
  __shared_weak_count *p_Var13;
  ulong local_70;
  __shared_weak_count *local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_4 <= param_3) {
    param_4 = param_3;
  }
  this[0x79] = (LabelLayout)0x1;
  *(LabelLayoutInfo **)(this + 0x60) = param_5;
  *(float *)(this + 0x54) = param_4;
  pbVar7 = (basic_string *)TTFLabelAtlasCache::getInstance();
  TTFLabelAtlasCache::load(pbVar7,*(float *)(this + 0x54),(LabelLayoutInfo *)param_1);
  p_Var13 = local_68;
  uVar1 = local_70;
  local_70 = 0;
  local_68 = (__shared_weak_count *)0x0;
  p_Var12 = *(__shared_weak_count **)(this + 0x70);
  *(ulong *)(this + 0x68) = uVar1;
  *(__shared_weak_count **)(this + 0x70) = p_Var13;
  if (p_Var12 != (__shared_weak_count *)0x0) {
    p_Var13 = p_Var12 + 8;
    do {
      lVar10 = *(long *)p_Var13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
      if (bVar3) {
        *(long *)p_Var13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    }
  }
  p_Var13 = local_68;
  if (local_68 == (__shared_weak_count *)0x0) {
LAB_009af958:
    lVar10 = *(long *)(this + 0x68);
  }
  else {
    p_Var12 = local_68 + 8;
    do {
      lVar10 = *(long *)p_Var12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var12,0x10);
      if (bVar3) {
        *(long *)p_Var12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 != 0) goto LAB_009af958;
    (**(code **)(*(long *)local_68 + 0x10))(local_68);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
    lVar10 = *(long *)(this + 0x68);
  }
  if (lVar10 == 0) {
    uVar9 = 0;
    goto LAB_009afbb0;
  }
  *(float *)(this + 0x58) = param_3 / *(float *)(lVar10 + 0x18);
  puVar8 = operator_new(0x40);
  puVar8[2] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  *puVar8 = &PTR____shared_ptr_emplace_01c6ac48;
  puVar8[1] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  *(undefined4 *)(puVar8 + 7) = 0x3f800000;
  p_Var13 = *(__shared_weak_count **)(this + 0xa0);
  *(undefined8 **)(this + 0x98) = puVar8 + 3;
  *(undefined8 **)(this + 0xa0) = puVar8;
  if (p_Var13 != (__shared_weak_count *)0x0) {
    p_Var12 = p_Var13 + 8;
    do {
      lVar10 = *(long *)p_Var12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var12,0x10);
      if (bVar3) {
        *(long *)p_Var12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
    }
  }
  if (-1 < *(int *)(param_5 + 0x24)) {
    puVar8 = operator_new(0x40);
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[7] = 0;
    *puVar8 = &PTR____shared_ptr_emplace_01c6ac48;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 7) = 0x3f800000;
    p_Var13 = *(__shared_weak_count **)(this + 0xb0);
    *(undefined8 **)(this + 0xa8) = puVar8 + 3;
    *(undefined8 **)(this + 0xb0) = puVar8;
    if (p_Var13 != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 009af774 with catch @ 009afa28 */
      p_Var12 = p_Var13 + 8;
      do {
        lVar10 = *(long *)p_Var12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var12,0x10);
        if (bVar3) {
          *(long *)p_Var12 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
                    /* try { // try from 009afa44 to 00aafa6b has its CatchHandler @ 009afa44
                       catch() { ... } // from try @ 009afa44 with catch @ 009afa44
                       catch() { ... } // from try @ 009afae0 with catch @ 009afa44 */
        (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
      }
    }
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(this + 8)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2)
  {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar7 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 009afa6c to 00aafa7f has its CatchHandler @ 009afb24 */
    if (((byte)*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 8),(char *)pbVar7,uVar1);
  }
                    /* try { // try from 009afa84 to 00aafa93 has its CatchHandler @ 009afb20 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar7 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 009afa94 to 00aafab7 has its CatchHandler @ 009afb10 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pbVar7,uVar1);
  }
  *(float *)(this + 0x50) = param_3;
  pbVar7 = *(basic_string **)(param_2 + 0x10);
  local_70 = 0;
  local_68 = (__shared_weak_count *)0x0;
  local_60 = (void *)0x0;
                    /* try { // try from 009afac0 to 00aafadf has its CatchHandler @ 009afb28 */
  if (((byte)*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  p_Var13 = (__shared_weak_count *)strlen((char *)pbVar7);
  if ((__shared_weak_count *)0xffffffffffffffef < p_Var13) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009afae0 to 00aafb3b has its CatchHandler @ 009afa44 */
  if (p_Var13 < (__shared_weak_count *)0x17) {
    pvVar11 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)p_Var13 << 1));
    if (p_Var13 != (__shared_weak_count *)0x0) goto LAB_009afb1c;
  }
  else {
    pvVar11 = operator_new((ulong)(p_Var13 + 0x10) & 0xfffffffffffffff0);
    local_70 = (ulong)(p_Var13 + 0x10) & 0xfffffffffffffff0 | 1;
                    /* catch() { ... } // from try @ 009afa94 with catch @ 009afb10 */
    local_68 = p_Var13;
    local_60 = pvVar11;
LAB_009afb1c:
                    /* catch() { ... } // from try @ 009afa84 with catch @ 009afb20 */
                    /* catch() { ... } // from try @ 009afa6c with catch @ 009afb24 */
                    /* catch() { ... } // from try @ 009afac0 with catch @ 009afb28 */
    memcpy(pvVar11,pbVar7,(size_t)p_Var13);
  }
  *(__shared_weak_count *)((long)pvVar11 + (long)p_Var13) = (__shared_weak_count)0x0;
  StringUtils::UTF8ToUTF32((basic_string *)&local_70,(basic_string *)(this + 0x20));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  lVar10 = *(long *)(this + 0x80);
  lVar6 = *(long *)(this + 0x88);
  while (lVar5 = lVar6, lVar5 != lVar10) {
    pvVar11 = *(void **)(lVar5 + -0x20);
    lVar6 = lVar5 + -0x38;
    if (pvVar11 != (void *)0x0) {
      *(void **)(lVar5 + -0x18) = pvVar11;
      operator_delete(pvVar11);
    }
  }
  *(long *)(this + 0x88) = lVar10;
  updateContent(this);
  uVar9 = 1;
LAB_009afbb0:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

