
void FUN_0099e454(lua_State *param_1)

{
  Ref *pRVar1;
  long lVar2;
  uint uVar3;
  Ref *this;
  TableView *this_00;
  __Dictionary *this_01;
  undefined8 uVar4;
  Ref *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  Size aSStack_60 [8];
  Size aSStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if (param_1 != (lua_State *)0x0) {
    uVar3 = lua_gettop();
    if ((uVar3 & 0xfffffffe) == 2) {
      this = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (this == (Ref *)0x0) {
        this_02 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::Ref(this);
        *(undefined ***)this = &PTR__LUA_TableViewDataSource_0169e3e0;
        *(undefined ***)(this + 0x28) = &PTR__LUA_TableViewDataSource_0169e418;
        this_02 = this;
      }
      cocos2d::Size::Size(aSStack_50);
      luaval_to_size(param_1,2,aSStack_50,"cc.TableView:create");
      if (uVar3 - 1 == 1) {
        pRVar1 = (Ref *)0x0;
        if (this_02 != (Ref *)0x0) {
          pRVar1 = this + 0x28;
        }
        cocos2d::Size::Size(aSStack_58,aSStack_50);
        this_00 = (TableView *)cocos2d::extension::TableView::create(pRVar1,aSStack_58);
      }
      else {
        uVar4 = tolua_tousertype(param_1,3,0);
        pRVar1 = (Ref *)0x0;
        if (this_02 != (Ref *)0x0) {
          pRVar1 = this + 0x28;
        }
        cocos2d::Size::Size(aSStack_60,aSStack_50);
        this_00 = (TableView *)cocos2d::extension::TableView::create(pRVar1,aSStack_60,uVar4);
      }
      if (this_00 != (TableView *)0x0) {
        cocos2d::extension::TableView::reloadData(this_00);
        this_01 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (this_01 != (__Dictionary *)0x0) {
          cocos2d::__Dictionary::__Dictionary(this_01);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_78,"TableViewDataSource");
        cocos2d::__Dictionary::setObject(this_01,this_02,(basic_string *)local_78);
        if (((byte)local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        (**(code **)(*(long *)this_00 + 0x300))(this_00,this_01);
        cocos2d::Ref::release((Ref *)this_01);
        cocos2d::Ref::release(this_02);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this_00 + 0xc),(int *)(this_00 + 0x10),this_00,"cc.TableView");
        uVar4 = 1;
        goto LAB_0099e630;
      }
    }
    else {
      luaL_error(param_1,
                 "\'create\' function of TableView wrong number of arguments: %d, was expecting %d\n"
                 ,uVar3 - 1,1);
    }
    uVar4 = 0;
  }
LAB_0099e630:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

