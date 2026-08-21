
/* cocos2d::FontFreeType::FontFreeType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float,
   cocos2d::LabelLayoutInfo*) */

void __thiscall
cocos2d::FontFreeType::FontFreeType
          (FontFreeType *this,basic_string *param_1,float param_2,LabelLayoutInfo *param_3)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  basic_string *pbVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  __shared_weak_count *p_Var9;
  FontFreeType *pFVar10;
  undefined8 *puVar11;
  
  *(undefined ***)this = &PTR__FontFreeType_01c6c3a8;
  pFVar10 = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pFVar10 = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  Data::Data((Data *)(this + 0x40));
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0x48756e6963;
  if (DAT_01d389b8 == (__shared_weak_count *)0x0) {
    lVar6 = 0;
    uVar8 = 0;
  }
  else {
    lVar6 = std::__ndk1::__shared_weak_count::lock(DAT_01d389b8);
    uVar8 = 0;
    if (lVar6 != 0) {
      uVar8 = DAT_01d389b0;
    }
  }
  p_Var9 = *(__shared_weak_count **)(this + 0x10);
  *(undefined8 *)(this + 8) = uVar8;
  *(long *)(this + 0x10) = lVar6;
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var9 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      lVar6 = *(long *)pFVar10;
      goto joined_r0x009f3ab8;
    }
  }
  lVar6 = *(long *)pFVar10;
joined_r0x009f3ab8:
  if (lVar6 == 0) {
    puVar7 = operator_new(0x20);
    puVar7[2] = 0;
    *puVar7 = &PTR____shared_ptr_emplace_01c6c3d8;
    puVar7[1] = 0;
    puVar11 = puVar7 + 3;
    *puVar11 = 0;
    FT_Init_FreeType(puVar11);
    p_Var9 = *(__shared_weak_count **)(this + 0x10);
    *(undefined8 **)(this + 8) = puVar11;
    *(undefined8 **)(this + 0x10) = puVar7;
    if (p_Var9 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var9 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      }
    }
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar3,uVar2);
  }
  *(float *)(this + 0x20) = param_2;
  *(LabelLayoutInfo **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 100) = 0x48;
  return;
}

