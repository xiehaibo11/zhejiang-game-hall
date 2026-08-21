
/* fairygui::HtmlObject::createSelect() */

void __thiscall fairygui::HtmlObject::createSelect(HtmlObject *this)

{
  Value *pVVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  Ref *this_00;
  GComboBox *this_01;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong *puVar10;
  basic_string *pbVar11;
  HtmlElement *pHVar12;
  Value *pVVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  Value local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar8 = (ulong)((byte)selectResource >> 1);
  if (((byte)selectResource & 1) != 0) {
    uVar8 = DAT_01782a58;
  }
  if (uVar8 == 0) {
    this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this_00 != (Ref *)0x0) {
      GComponent::GComponent((GComponent *)this_00);
      uVar8 = GObject::init((GObject *)this_00);
      if ((uVar8 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::autorelease(this_00);
      }
    }
  }
  else {
    this_00 = (Ref *)GObjectPool::getObject
                               ((GObjectPool *)objectPool,(basic_string *)&selectResource);
  }
  *(Ref **)(this + 0x18) = this_00;
  cocos2d::Ref::retain(this_00);
  pHVar12 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"width");
  iVar4 = HtmlElement::getInt(pHVar12,(basic_string *)&local_88,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x78));
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  pHVar12 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"height");
  iVar5 = HtmlElement::getInt(pHVar12,(basic_string *)&local_88,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x7c));
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  GObject::setSize(*(GObject **)(this + 0x18),(float)iVar4,(float)iVar5,false);
  if ((*(long *)(this + 0x18) != 0) &&
     (this_01 = (GComboBox *)
                __dynamic_cast(*(long *)(this + 0x18),&GObject::typeinfo,&GComboBox::typeinfo,0),
     this_01 != (GComboBox *)0x0)) {
    pHVar12 = *(HtmlElement **)(this + 8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_88,"items");
    plVar6 = (long *)HtmlElement::getArray(pHVar12,(basic_string *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    pHVar12 = *(HtmlElement **)(this + 8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_88,"values");
    plVar7 = (long *)HtmlElement::getArray(pHVar12,(basic_string *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    pbVar14 = *(byte **)(this_01 + 0x2b0);
    pbVar9 = *(byte **)(this_01 + 0x2b8);
    if (pbVar9 != pbVar14) {
      bVar2 = pbVar9[-0x18];
      pbVar15 = pbVar9 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
        if (pbVar14 == pbVar15) break;
        bVar2 = pbVar15[-0x18];
        pbVar9 = pbVar15;
        pbVar15 = pbVar15 + -0x18;
      }
    }
    pbVar15 = *(byte **)(this_01 + 0x2e0);
    pbVar9 = *(byte **)(this_01 + 0x2e8);
    *(byte **)(this_01 + 0x2b8) = pbVar14;
    if (pbVar9 != pbVar15) {
      bVar2 = pbVar9[-0x18];
      pbVar14 = pbVar9 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
        if (pbVar15 == pbVar14) break;
        bVar2 = pbVar14[-0x18];
        pbVar9 = pbVar14;
        pbVar14 = pbVar14 + -0x18;
      }
    }
    *(byte **)(this_01 + 0x2e8) = pbVar15;
    pVVar13 = (Value *)*plVar6;
    pVVar1 = (Value *)plVar6[1];
    if (pVVar13 != pVVar1) {
      do {
        cocos2d::Value::Value(local_70,pVVar13);
        cocos2d::Value::asString();
        puVar10 = *(ulong **)(this_01 + 0x2b8);
        if (puVar10 < *(ulong **)(this_01 + 0x2c0)) {
          puVar10[2] = (ulong)local_78;
          puVar10[1] = uStack_80;
          *puVar10 = local_88;
          uStack_80 = 0;
          local_78 = (void *)0x0;
          local_88 = 0;
          *(ulong **)(this_01 + 0x2b8) = puVar10 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(this_01 + 0x2b0),(basic_string *)&local_88);
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
        }
        cocos2d::Value::~Value(local_70);
        pVVar13 = pVVar13 + 0x10;
      } while (pVVar1 != pVVar13);
    }
    pVVar13 = (Value *)*plVar7;
    pVVar1 = (Value *)plVar7[1];
    if (pVVar13 != pVVar1) {
      do {
        cocos2d::Value::Value(local_70,pVVar13);
        cocos2d::Value::asString();
        puVar10 = *(ulong **)(this_01 + 0x2e8);
        if (puVar10 < *(ulong **)(this_01 + 0x2f0)) {
          puVar10[2] = (ulong)local_78;
          puVar10[1] = uStack_80;
          *puVar10 = local_88;
          uStack_80 = 0;
          local_78 = (void *)0x0;
          local_88 = 0;
          *(ulong **)(this_01 + 0x2e8) = puVar10 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(this_01 + 0x2e0),(basic_string *)&local_88);
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
        }
        cocos2d::Value::~Value(local_70);
        pVVar13 = pVVar13 + 0x10;
      } while (pVVar1 != pVVar13);
    }
    pbVar11 = *(basic_string **)(this + 8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_70,"value");
    HtmlElement::getString(pbVar11,(basic_string *)local_70);
    GComboBox::setValue(this_01,(basic_string *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    GComboBox::refresh(this_01);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

