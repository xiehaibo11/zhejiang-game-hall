
/* cocosbuilder::CCBReader::~CCBReader() */

void __thiscall cocosbuilder::CCBReader::~CCBReader(CCBReader *this)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  Value *pVVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  Value *this_00;
  undefined8 *puVar9;
  byte *pbVar10;
  __shared_weak_count *p_Var11;
  Value *pVVar12;
  undefined8 *puVar13;
  
  *(undefined ***)this = &PTR__CCBReader_016cfbf0;
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x78));
    *(undefined8 *)(this + 0x78) = 0;
  }
  cocos2d::Ref::release(*(Ref **)(this + 0xa0));
  pbVar10 = *(byte **)(this + 0xc0);
  pbVar7 = *(byte **)(this + 200);
  if (pbVar7 != pbVar10) {
    bVar2 = pbVar7[-0x18];
    pbVar6 = pbVar7 + -0x18;
    while( true ) {
      if ((bVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar7 + -8));
      }
      if (pbVar10 == pbVar6) break;
      bVar2 = pbVar6[-0x18];
      pbVar7 = pbVar6;
      pbVar6 = pbVar6 + -0x18;
    }
  }
  pbVar7 = *(byte **)(this + 0x120);
  pbVar6 = *(byte **)(this + 0x128);
  *(byte **)(this + 200) = pbVar10;
  if (pbVar6 != pbVar7) {
    bVar2 = pbVar6[-0x18];
    pbVar10 = pbVar6 + -0x18;
    while( true ) {
      if ((bVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -8));
      }
      if (pbVar7 == pbVar10) break;
      bVar2 = pbVar10[-0x18];
      pbVar6 = pbVar10;
      pbVar10 = pbVar10 + -0x18;
    }
  }
  pbVar10 = *(byte **)(this + 0x48);
  pbVar6 = *(byte **)(this + 0x50);
  *(byte **)(this + 0x128) = pbVar7;
  if (pbVar6 != pbVar10) {
    bVar2 = pbVar6[-0x18];
    pbVar7 = pbVar6 + -0x18;
    while( true ) {
      if ((bVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -8));
      }
      if (pbVar10 == pbVar7) break;
      bVar2 = pbVar7[-0x18];
      pbVar6 = pbVar7;
      pbVar7 = pbVar7 + -0x18;
    }
  }
  *(byte **)(this + 0x50) = pbVar10;
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x80) = 0;
  if (((byte)this[0x168] & 1) != 0) {
    operator_delete(*(void **)(this + 0x178));
  }
  pVVar12 = *(Value **)(this + 0x150);
  if (pVVar12 != (Value *)0x0) {
    this_00 = *(Value **)(this + 0x158);
    pVVar5 = pVVar12;
    if (this_00 != pVVar12) {
      do {
        this_00 = this_00 + -0x10;
        cocos2d::Value::~Value(this_00);
      } while (pVVar12 != this_00);
      pVVar5 = *(Value **)(this + 0x150);
    }
    *(Value **)(this + 0x158) = pVVar12;
    operator_delete(pVVar5);
  }
  puVar9 = *(undefined8 **)(this + 0x138);
  puVar13 = *(undefined8 **)(this + 0x140);
  if (puVar9 != puVar13) {
    do {
      cocos2d::Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar13 != puVar9);
    puVar9 = *(undefined8 **)(this + 0x138);
  }
  *(undefined8 **)(this + 0x140) = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x140) = puVar9;
    operator_delete(puVar9);
  }
  pbVar10 = *(byte **)(this + 0x120);
  if (pbVar10 != (byte *)0x0) {
    pbVar7 = *(byte **)(this + 0x128);
    pbVar6 = pbVar10;
    if (pbVar7 != pbVar10) {
      bVar2 = pbVar7[-0x18];
      pbVar6 = pbVar7 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + -8));
        }
        if (pbVar10 == pbVar6) break;
        bVar2 = pbVar6[-0x18];
        pbVar7 = pbVar6;
        pbVar6 = pbVar6 + -0x18;
      }
      pbVar6 = *(byte **)(this + 0x120);
    }
    *(byte **)(this + 0x128) = pbVar10;
    operator_delete(pbVar6);
  }
  puVar9 = *(undefined8 **)(this + 0x108);
  puVar13 = *(undefined8 **)(this + 0x110);
  if (puVar9 != puVar13) {
    do {
      cocos2d::Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar13 != puVar9);
    puVar9 = *(undefined8 **)(this + 0x108);
  }
  *(undefined8 **)(this + 0x110) = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x110) = puVar9;
    operator_delete(puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0xf0);
  puVar13 = *(undefined8 **)(this + 0xf8);
  if (puVar9 != puVar13) {
    do {
      cocos2d::Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar13 != puVar9);
    puVar9 = *(undefined8 **)(this + 0xf0);
  }
  *(undefined8 **)(this + 0xf8) = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xf8) = puVar9;
    operator_delete(puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0xd8);
  puVar13 = *(undefined8 **)(this + 0xe0);
  if (puVar9 != puVar13) {
    do {
      cocos2d::Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar13 != puVar9);
    puVar9 = *(undefined8 **)(this + 0xd8);
  }
  *(undefined8 **)(this + 0xe0) = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xe0) = puVar9;
    operator_delete(puVar9);
  }
  pbVar10 = *(byte **)(this + 0xc0);
  if (pbVar10 != (byte *)0x0) {
    pbVar7 = *(byte **)(this + 200);
    pbVar6 = pbVar10;
    if (pbVar7 != pbVar10) {
      bVar2 = pbVar7[-0x18];
      pbVar6 = pbVar7 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + -8));
        }
        if (pbVar10 == pbVar6) break;
        bVar2 = pbVar6[-0x18];
        pbVar7 = pbVar6;
        pbVar6 = pbVar6 + -0x18;
      }
      pbVar6 = *(byte **)(this + 0xc0);
    }
    *(byte **)(this + 200) = pbVar10;
    operator_delete(pbVar6);
  }
  p_Var11 = *(__shared_weak_count **)(this + 0x90);
  if (p_Var11 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var11 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x60),*(__tree_node **)(this + 0x68));
  pbVar10 = *(byte **)(this + 0x48);
  if (pbVar10 != (byte *)0x0) {
    pbVar7 = *(byte **)(this + 0x50);
    pbVar6 = pbVar10;
    if (pbVar7 != pbVar10) {
      bVar2 = pbVar7[-0x18];
      pbVar6 = pbVar7 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + -8));
        }
        if (pbVar10 == pbVar6) break;
        bVar2 = pbVar6[-0x18];
        pbVar7 = pbVar6;
        pbVar6 = pbVar6 + -0x18;
      }
      pbVar6 = *(byte **)(this + 0x48);
    }
    *(byte **)(this + 0x50) = pbVar10;
    operator_delete(pbVar6);
  }
  p_Var11 = *(__shared_weak_count **)(this + 0x30);
  if (p_Var11 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var11 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

