
/* WARNING: Type propagation algorithm not settling */
/* register_fairygui_manual(lua_State*) */

undefined8 register_fairygui_manual(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 5) goto LAB_008d7e7c;
  tolua_open(param_1);
  tolua_module(param_1,"fairygui",0);
  tolua_beginmodule(param_1,"fairygui");
  tolua_usertype(param_1,"fairygui.UIEventDispatcher");
  tolua_cclass(param_1,"UIEventDispatcher","fairygui.UIEventDispatcher",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"UIEventDispatcher");
  tolua_function(param_1,"isDispatchingEvent",FUN_008d81e8);
  tolua_function(param_1,"removeEventListeners",FUN_008d82cc);
  tolua_function(param_1,"dispatchEvent",FUN_008d8334);
  tolua_function(param_1,"bubbleEvent",FUN_008d85b4);
  tolua_function(param_1,"addEventListener",FUN_008d8834);
  tolua_function(param_1,"removeEventListener",FUN_008d8ad0);
  tolua_function(param_1,"hasEventListener",FUN_008d8c40);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui17UIEventDispatcherE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008cf044:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x1a - uVar5,uVar6,0,uVar6,0x1a,"fairygui.UIEventDispatcher")
    ;
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x1a) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008cf044;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.UIEventDispatcher",0x1b);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x34
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x1a;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"UIEventDispatcher");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008cf0cc:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x1a - uVar5,uVar6,0,uVar6,0x1a,"fairygui.UIEventDispatcher")
    ;
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x1a) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008cf0cc;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.UIEventDispatcher",0x1b);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x34
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x1a;
    }
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GObject");
  tolua_cclass(param_1,"GObject","fairygui.GObject","fairygui.UIEventDispatcher",0);
  tolua_beginmodule(param_1,"GObject");
  tolua_variable(param_1,"id",FUN_008d9034,0);
  tolua_variable(param_1,"name",FUN_008d907c,0);
  tolua_variable(param_1,"sourceSize",FUN_008d90c4,0);
  tolua_variable(param_1,"initSize",FUN_008d90fc,0);
  tolua_variable(param_1,"minSize",FUN_008d9134,0);
  tolua_variable(param_1,"maxSize",FUN_008d916c,0);
  tolua_function(param_1,"getXMin",FUN_008d91a4);
  tolua_function(param_1,"setXMin",FUN_008d921c);
  tolua_function(param_1,"getYMin",FUN_008d9298);
  tolua_function(param_1,"setYMin",FUN_008d9310);
  tolua_function(param_1,"isPivotAsAnchor",FUN_008d938c);
  tolua_function(param_1,"getProp",FUN_008d93fc);
  tolua_function(param_1,"setProp",FUN_008d94e0);
  tolua_function(param_1,"startDrag",FUN_008d95d4);
  tolua_function(param_1,"getPackageItem",FUN_008d96b4);
  tolua_function(param_1,"setGroup",FUN_008d9744);
  tolua_function(param_1,"isDraggable",FUN_008d980c);
  tolua_function(param_1,"relations",FUN_008d987c);
  tolua_function(param_1,"isTouchable",FUN_008d99b8);
  tolua_function(param_1,"setScale",FUN_008d9a28);
  tolua_function(param_1,"getWidth",FUN_008d9b2c);
  tolua_function(param_1,"getY",FUN_008d9ba0);
  tolua_function(param_1,"displayObject",FUN_008d9c14);
  tolua_function(param_1,"setData",FUN_008d9ca4);
  tolua_function(param_1,"getData",FUN_008d9d64);
  tolua_function(param_1,"setCustomData",FUN_008d9df4);
  tolua_function(param_1,"getCustomData",FUN_008d9eec);
  tolua_function(param_1,"getRotation",FUN_008d9f5c);
  tolua_function(param_1,"stopDrag",FUN_008d9fd0);
  tolua_function(param_1,"getSortingOrder",FUN_008da038);
  tolua_function(param_1,"isGrayed",FUN_008da0b0);
  tolua_function(param_1,"setWidth",FUN_008da120);
  tolua_function(param_1,"getScale",FUN_008da200);
  tolua_function(param_1,"getResourceURL",FUN_008da270);
  tolua_function(param_1,"isPixelSnapping",lua_fairygui_GObject_isPixelSnapping);
  tolua_function(param_1,"setTooltips",FUN_008da364);
  tolua_function(param_1,"localToGlobal",FUN_008da46c);
  tolua_function(param_1,"getScaleY",FUN_008da5a0);
  tolua_function(param_1,"getScaleX",FUN_008da614);
  tolua_function(param_1,"onStage",FUN_008da688);
  tolua_function(param_1,"getHeight",FUN_008da700);
  tolua_function(param_1,"getGear",FUN_008da774);
  tolua_function(param_1,"globalToLocal",FUN_008da880);
  tolua_function(param_1,"getGroup",FUN_008da9b4);
  tolua_function(param_1,"removeFromParent",FUN_008daa44);
  tolua_function(param_1,"constructFromResource",FUN_008daaac);
  tolua_function(param_1,"setSortingOrder",FUN_008dab1c);
  tolua_function(param_1,"setAlpha",FUN_008dabf0);
  tolua_function(param_1,"getSize",FUN_008dacc8);
  tolua_function(param_1,"getSkewY",FUN_008dad38);
  tolua_function(param_1,"setRotation",FUN_008dadb8);
  tolua_function(param_1,"addDisplayLock",FUN_008dae90);
  tolua_function(param_1,"setPixelSnapping",FUN_008daf08);
  tolua_function(param_1,"removeRelation",FUN_008dafdc);
  tolua_function(param_1,"setDraggable",FUN_008db110);
  tolua_function(param_1,"setIcon",FUN_008db1e4);
  tolua_function(param_1,"setScaleY",FUN_008db2f4);
  tolua_function(param_1,"setScaleX",FUN_008db3d0);
  tolua_function(param_1,"getSkewX",FUN_008db4ac);
  tolua_function(param_1,"releaseDisplayLock",FUN_008db52c);
  tolua_function(param_1,"setDragBounds",FUN_008db600);
  tolua_function(param_1,"makeFullScreen",FUN_008db6dc);
  tolua_function(param_1,"transformRect",FUN_008db744);
  tolua_function(param_1,"setTouchable",FUN_008db87c);
  tolua_function(param_1,"getAlpha",FUN_008db950);
  tolua_function(param_1,"setGrayed",FUN_008db9c4);
  tolua_function(param_1,"getText",FUN_008dba98);
  tolua_function(param_1,"setPosition",FUN_008dbb2c);
  tolua_function(param_1,"setX",FUN_008dbc30);
  tolua_function(param_1,"setY",FUN_008dbd08);
  tolua_function(param_1,"getPosition",FUN_008dbde0);
  tolua_function(param_1,"getParent",FUN_008dbe50);
  tolua_function(param_1,"setHeight",FUN_008dbee0);
  tolua_function(param_1,"getX",FUN_008dbfc0);
  tolua_function(param_1,"getRoot",FUN_008dc034);
  tolua_function(param_1,"treeNode",FUN_008dc0cc);
  tolua_function(param_1,"center",FUN_008dc15c);
  tolua_function(param_1,"getIcon",FUN_008dc244);
  tolua_function(param_1,"setVisible",FUN_008dc2d8);
  tolua_function(param_1,"setText",FUN_008dc3ac);
  tolua_function(param_1,"isVisible",FUN_008dc4bc);
  tolua_function(param_1,"hitTest",FUN_008dc52c);
  tolua_function(param_1,"getDragBounds",FUN_008dc688);
  tolua_function(param_1,"addRelation",FUN_008dc7c4);
  tolua_function(param_1,"setPivot",FUN_008dc9c0);
  tolua_function(param_1,"checkGearController",FUN_008dcb38);
  tolua_function(param_1,"getPivot",FUN_008dcc64);
  tolua_function(param_1,"setSkewX",FUN_008dccd4);
  tolua_function(param_1,"setSkewY",FUN_008dcdac);
  tolua_function(param_1,"setSize",FUN_008dce84);
  tolua_function(param_1,"getTooltips",FUN_008dcffc);
  tolua_function(param_1,"create",FUN_008dd080);
  tolua_function(param_1,"getDraggingObject",FUN_008dd154);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui7GObjectE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008cfb20:
    builtin_strncpy(pcVar7,"fairygui.GObject",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008cfb20;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GObject");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GObject");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008cfd40:
    builtin_strncpy(pcVar7,"fairygui.GObject",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008cfd40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GObject");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GImage");
  tolua_cclass(param_1,"GImage","fairygui.GImage","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GImage");
  tolua_function(param_1,"setColor",FUN_008dd2a0);
  tolua_function(param_1,"getColor",FUN_008dd37c);
  tolua_function(param_1,"getFlip",FUN_008dd430);
  tolua_function(param_1,"setFlip",FUN_008dd4a8);
  tolua_function(param_1,"create",FUN_008dd57c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui6GImageE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008cfd80:
    builtin_strncpy(pcVar7,"fairygui.GImage",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008cfd80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GImage");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GImage");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d0440:
    builtin_strncpy(pcVar7,"fairygui.GImage",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d0440;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GImage");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GComponent");
  tolua_cclass(param_1,"GComponent","fairygui.GComponent","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GComponent");
  tolua_function(param_1,"addChild",FUN_008dd650);
  tolua_function(param_1,"getHitArea",FUN_008dd74c);
                    /* try { // try from 008cfedc to 009cfedf has its CatchHandler @ 008cfef4 */
  tolua_function(param_1,"applyAllControllers",FUN_008dd7e4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008cfedc with catch @ 008cfef4
                        */
  tolua_function(param_1,"getOpaque",FUN_008dd84c);
  tolua_function(param_1,"setChildrenRenderOrder",FUN_008dd8bc);
                    /* try { // try from 008cff20 to 009cff23 has its CatchHandler @ 008cff40 */
  tolua_function(param_1,"setOpaque",FUN_008dd990);
  tolua_function(param_1,"getViewWidth",FUN_008dda64);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008cff20 with catch @ 008cff40
                        */
  tolua_function(param_1,"getTransitions",FUN_008ddadc);
  tolua_function(param_1,"getViewHeight",FUN_008ddb4c);
  tolua_function(param_1,"ensureBoundsCorrect",FUN_008ddbc4);
  tolua_function(param_1,"isAncestorOf",FUN_008ddc2c);
  tolua_function(param_1,"getChildren",FUN_008ddd04);
  tolua_function(param_1,"getMask",FUN_008ddd74);
  tolua_function(param_1,"adjustRadioGroupDepth",FUN_008dde0c);
  tolua_function(param_1,"getController",FUN_008ddf30);
  tolua_function(param_1,"setApexIndex",FUN_008de07c);
  tolua_function(param_1,"getTransition",FUN_008de150);
  tolua_function(param_1,"getFirstChildInView",FUN_008de29c);
  tolua_function(param_1,"isChildInView",FUN_008de31c);
  tolua_function(param_1,"setBoundsChangedFlag",FUN_008de3fc);
  tolua_function(param_1,"addChildAt",FUN_008de464);
                    /* try { // try from 008d0090 to 009d00c7 has its CatchHandler @ 008d0090
                       catch() { ... } // from try @ 008d0090 with catch @ 008d0090
                       catch() { ... } // from try @ 008d00d4 with catch @ 008d0090 */
  tolua_function(param_1,"removeChildren",FUN_008de5d4);
  tolua_function(param_1,"removeChildAt",FUN_008de6bc);
                    /* try { // try from 008d00c8 to 009d00d3 has its CatchHandler @ 008d0164 */
                    /* try { // try from 008d00d4 to 009d017f has its CatchHandler @ 008d0090 */
  tolua_function(param_1,"getChild",FUN_008de798);
  tolua_function(param_1,"addController",FUN_008de8e4);
  tolua_function(param_1,"childSortingOrderChanged",FUN_008de9ac);
  tolua_function(param_1,"applyController",FUN_008deb08);
  tolua_function(param_1,"getControllers",FUN_008debd0);
  tolua_function(param_1,"setMask",FUN_008dec40);
                    /* catch() { ... } // from try @ 008d00c8 with catch @ 008d0164 */
  tolua_function(param_1,"setChildIndex",FUN_008dedd0);
  tolua_function(param_1,"setViewWidth",FUN_008def04);
  tolua_function(param_1,"getChildById",FUN_008defdc);
  tolua_function(param_1,"getChildByPath",FUN_008df128);
  tolua_function(param_1,"getChildIndex",FUN_008df274);
  tolua_function(param_1,"getMargin",FUN_008df34c);
  tolua_function(param_1,"getControllerAt",FUN_008df470);
  tolua_function(param_1,"getChildAt",FUN_008df578);
  tolua_function(param_1,"getApexIndex",FUN_008df680);
  tolua_function(param_1,"setMargin",FUN_008df6f8);
  tolua_function(param_1,"getScrollPane",FUN_008df7cc);
  tolua_function(param_1,"getTransitionAt",FUN_008df85c);
  tolua_function(param_1,"getChildInGroup",FUN_008df964);
  tolua_function(param_1,"removeController",FUN_008dfb10);
  tolua_function(param_1,"getSnappingPosition",FUN_008dfbd8);
  tolua_function(param_1,"setChildIndexBefore",FUN_008dfccc);
  tolua_function(param_1,"setHitArea",FUN_008dfe10);
  tolua_function(param_1,"swapChildrenAt",FUN_008dfed8);
  tolua_function(param_1,"numChildren",FUN_008dffd4);
  tolua_function(param_1,"removeChild",FUN_008e004c);
  tolua_function(param_1,"swapChildren",FUN_008e0114);
  tolua_function(param_1,"childStateChanged",FUN_008e0238);
  tolua_function(param_1,"getChildrenRenderOrder",FUN_008e0300);
  tolua_function(param_1,"setViewHeight",FUN_008e0378);
  tolua_function(param_1,"create",FUN_008e0450);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10GComponentE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d0488:
    builtin_strncpy(pcVar7,"fairygui.GComponent",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d0488;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GComponent");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GComponent");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d06b4:
    builtin_strncpy(pcVar7,"fairygui.GComponent",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d06b4;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GComponent");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GScrollBar");
  tolua_cclass(param_1,"GScrollBar","fairygui.GScrollBar","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GScrollBar");
  tolua_function(param_1,"setScrollPane",FUN_008e0a00);
  tolua_function(param_1,"setDisplayPerc",FUN_008e0b34);
  tolua_function(param_1,"getMinSize",FUN_008e0c0c);
  tolua_function(param_1,"setScrollPerc",FUN_008e0c84);
  tolua_function(param_1,"create",FUN_008e0d5c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10GScrollBarE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d0700:
    builtin_strncpy(pcVar7,"fairygui.GScrollBar",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d0700;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GScrollBar");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GScrollBar");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d0dcc:
    builtin_strncpy(pcVar7,"fairygui.GScrollBar",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d0dcc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GScrollBar");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GList");
  tolua_cclass(param_1,"GList","fairygui.GList","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GList");
  tolua_variable(param_1,"itemRenderer",FUN_008e0e30,FUN_008e0e8c);
  tolua_variable(param_1,"itemProvider",FUN_008e0fc0,FUN_008e101c);
  tolua_variable(param_1,"scrollItemToViewOnClick",FUN_008e1150,FUN_008e1188);
  tolua_variable(param_1,"foldInvisibleItems",FUN_008e11f8,FUN_008e1230);
  tolua_function(param_1,"selectAll",FUN_008e12a0);
  tolua_function(param_1,"getColumnGap",FUN_008e1308);
  tolua_function(param_1,"getLineCount",FUN_008e1380);
  tolua_function(param_1,"setVirtualAndLoop",FUN_008e13f8);
  tolua_function(param_1,"setLayout",FUN_008e1460);
  tolua_function(param_1,"refreshVirtualList",FUN_008e1534);
  tolua_function(param_1,"removeSelection",FUN_008e159c);
  tolua_function(param_1,"setColumnGap",FUN_008e1670);
  tolua_function(param_1,"getColumnCount",FUN_008e1744);
  tolua_function(param_1,"setVirtual",FUN_008e17bc);
  tolua_function(param_1,"setNumItems",FUN_008e1824);
  tolua_function(param_1,"setVerticalAlign",FUN_008e18f8);
  tolua_function(param_1,"resizeToFit",FUN_008e19cc);
  tolua_function(param_1,"setSelectionController",FUN_008e1b00);
  tolua_function(param_1,"returnToPool",FUN_008e1bc8);
  tolua_function(param_1,"clearSelection",FUN_008e1c90);
  tolua_function(param_1,"getNumItems",FUN_008e1cf8);
  tolua_function(param_1,"setColumnCount",FUN_008e1d70);
  tolua_function(param_1,"removeChildToPoolAt",FUN_008e1e44);
  tolua_function(param_1,"addItemFromPool",FUN_008e1f18);
  tolua_function(param_1,"selectReverse",FUN_008e20b0);
  tolua_function(param_1,"setLineCount",FUN_008e2118);
  tolua_function(param_1,"setAutoResizeItem",FUN_008e21ec);
  tolua_function(param_1,"getVerticalAlign",FUN_008e22c0);
  tolua_function(param_1,"removeChildrenToPool",FUN_008e2338);
  tolua_function(param_1,"setAlign",FUN_008e2444);
  tolua_function(param_1,"isVirtual",FUN_008e2518);
  tolua_function(param_1,"getSelectedIndex",FUN_008e2588);
  tolua_function(param_1,"getSelection",FUN_008e2600);
  tolua_function(param_1,"itemIndexToChildIndex",FUN_008e26e4);
  tolua_function(param_1,"getItemPool",FUN_008e27c8);
  tolua_function(param_1,"getSelectionController",FUN_008e2904);
  tolua_function(param_1,"getLineGap",FUN_008e2994);
  tolua_function(param_1,"scrollToView",FUN_008e2a0c);
  tolua_function(param_1,"handleArrowKey",FUN_008e2bbc);
  tolua_function(param_1,"getAlign",FUN_008e2c90);
  tolua_function(param_1,"getFromPool",FUN_008e2d08);
  tolua_function(param_1,"getDefaultItem",FUN_008e2ea0);
  tolua_function(param_1,"getSelectionMode",FUN_008e2f28);
  tolua_function(param_1,"setDefaultItem",FUN_008e2fa0);
  tolua_function(param_1,"setSelectedIndex",FUN_008e30cc);
  tolua_function(param_1,"setSelectionMode",FUN_008e31a0);
  tolua_function(param_1,"addSelection",FUN_008e3270);
  tolua_function(param_1,"childIndexToItemIndex",FUN_008e3370);
  tolua_function(param_1,"getAutoResizeItem",FUN_008e3454);
  tolua_function(param_1,"setLineGap",FUN_008e34c4);
  tolua_function(param_1,"removeChildToPool",FUN_008e3598);
  tolua_function(param_1,"getLayout",FUN_008e3660);
  tolua_function(param_1,"create",FUN_008e36d8);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui5GListE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d0e18:
    builtin_strncpy(pcVar7,"fairygui.GList",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d0e18;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GList");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GList");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1148:
    builtin_strncpy(pcVar7,"fairygui.GList",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1148;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GList");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GComboBox");
  tolua_cclass(param_1,"GComboBox","fairygui.GComboBox","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GComboBox");
  tolua_function(param_1,"setValue",FUN_008e3cfc);
  tolua_function(param_1,"setSelectedIndex",FUN_008e3e04);
  tolua_function(param_1,"getItems",FUN_008e3ed8);
  tolua_function(param_1,"getSelectedIndex",FUN_008e3f48);
  tolua_function(param_1,"setTitle",FUN_008e3fc0);
  tolua_function(param_1,"refresh",FUN_008e40c8);
  tolua_function(param_1,"getValue",FUN_008e4130);
  tolua_function(param_1,"getIcons",FUN_008e41bc);
  tolua_function(param_1,"getTitle",FUN_008e422c);
  tolua_function(param_1,"getSelectionController",FUN_008e42b8);
  tolua_function(param_1,"getValues",FUN_008e4348);
  tolua_function(param_1,"setSelectionController",FUN_008e43b8);
  tolua_function(param_1,"setItems",FUN_008e4478);
  tolua_function(param_1,"setIcons",FUN_008e4640);
  tolua_function(param_1,"setValues",FUN_008e4808);
  tolua_function(param_1,"create",FUN_008e49d0);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui9GComboBoxE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1190:
    builtin_strncpy(pcVar7,"fairygui.GComboBox",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1190;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GComboBox");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GComboBox");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d14d8:
    builtin_strncpy(pcVar7,"fairygui.GComboBox",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d14d8;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GComboBox");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GButton");
  tolua_cclass(param_1,"GButton","fairygui.GButton","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GButton");
  tolua_function(param_1,"getRelatedController",FUN_008e4cdc);
  tolua_function(param_1,"setChangeStateOnClick",FUN_008e4d6c);
  tolua_function(param_1,"setSelectedTitle",FUN_008e4e3c);
  tolua_function(param_1,"setSelected",FUN_008e4f44);
  tolua_function(param_1,"setRelatedController",FUN_008e5018);
  tolua_function(param_1,"setTitle",FUN_008e50e0);
  tolua_function(param_1,"getTitleFontSize",FUN_008e51e8);
  tolua_function(param_1,"getSelectedIcon",FUN_008e5260);
  tolua_function(param_1,"isSelected",FUN_008e52e8);
  tolua_function(param_1,"getTitleColor",FUN_008e5358);
  tolua_function(param_1,"getSelectedTitle",FUN_008e540c);
  tolua_function(param_1,"getTitle",FUN_008e5494);
  tolua_function(param_1,"setSelectedIcon",FUN_008e551c);
  tolua_function(param_1,"isChangeStateOnClick",FUN_008e5624);
  tolua_function(param_1,"setTitleFontSize",FUN_008e5694);
  tolua_function(param_1,"setTitleColor",FUN_008e5768);
  tolua_function(param_1,"create",FUN_008e5844);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui7GButtonE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1520:
    builtin_strncpy(pcVar7,"fairygui.GButton",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1520;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GButton");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GButton");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1878:
    builtin_strncpy(pcVar7,"fairygui.GButton",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1878;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GButton");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GGroup");
  tolua_cclass(param_1,"GGroup","fairygui.GGroup","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GGroup");
  tolua_function(param_1,"getColumnGap",FUN_008e5918);
  tolua_function(param_1,"resizeChildren",FUN_008e5990);
  tolua_function(param_1,"setLayout",FUN_008e5a94);
  tolua_function(param_1,"setColumnGap",FUN_008e5b68);
  tolua_function(param_1,"setBoundsChangedFlag",FUN_008e5c3c);
  tolua_function(param_1,"moveChildren",FUN_008e5d24);
  tolua_function(param_1,"getLineGap",FUN_008e5e28);
  tolua_function(param_1,"setLineGap",FUN_008e5ea0);
  tolua_function(param_1,"getLayout",FUN_008e5f74);
  tolua_function(param_1,"isExcludeInvisibles",FUN_008e5fec);
  tolua_function(param_1,"setExcludeInvisibles",FUN_008e605c);
  tolua_function(param_1,"isAutoSizeDisabled",FUN_008e6130);
  tolua_function(param_1,"setAutoSizeDisabled",FUN_008e61a0);
  tolua_function(param_1,"getMainGridIndex",FUN_008e6274);
  tolua_function(param_1,"setMainGridIndex",FUN_008e62e4);
  tolua_function(param_1,"getMainGridMinSize",FUN_008e63b8);
  tolua_function(param_1,"setMainGridMinSize",FUN_008e6428);
  tolua_function(param_1,"create",FUN_008e64fc);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui6GGroupE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d18b8:
    builtin_strncpy(pcVar7,"fairygui.GGroup",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d18b8;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GGroup");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GGroup");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1b70:
    builtin_strncpy(pcVar7,"fairygui.GGroup",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1b70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GGroup");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GMovieClip");
  tolua_cclass(param_1,"GMovieClip","fairygui.GMovieClip","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GMovieClip");
  tolua_function(param_1,"getFrame",FUN_008e65d0);
  tolua_function(param_1,"setColor",FUN_008e6648);
  tolua_function(param_1,"getColor",FUN_008e6724);
  tolua_function(param_1,"getFlip",FUN_008e67e4);
  tolua_function(param_1,"setFlip",FUN_008e685c);
  tolua_function(param_1,"setPlaying",FUN_008e6930);
  tolua_function(param_1,"setPlaySettings",FUN_008e6a04);
  tolua_function(param_1,"isPlaying",FUN_008e6e68);
  tolua_function(param_1,"setFrame",FUN_008e6ed8);
  tolua_function(param_1,"reverse",FUN_008e6fac);
  tolua_function(param_1,"create",FUN_008e7014);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10GMovieClipE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1bb8:
    builtin_strncpy(pcVar7,"fairygui.GMovieClip",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1bb8;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GMovieClip");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GMovieClip");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1f34:
    builtin_strncpy(pcVar7,"fairygui.GMovieClip",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1f34;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GMovieClip");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GTextField");
  tolua_cclass(param_1,"GTextField","fairygui.GTextField","fairygui.GObject",0);
                    /* try { // try from 008d1cc8 to 009d1ccb has its CatchHandler @ 008d1cdc */
  tolua_beginmodule(param_1,"GTextField");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008d1cc8 with catch @ 008d1cdc
                        */
  tolua_function(param_1,"setAutoSize",FUN_008e71a0);
  tolua_function(param_1,"getFontSize",FUN_008e727c);
                    /* try { // try from 008d1d18 to 009d1d1b has its CatchHandler @ 008d1d34 */
  tolua_function(param_1,"setColor",FUN_008e7300);
  tolua_function(param_1,"setSingleLine",FUN_008e73dc);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008d1d18 with catch @ 008d1d34
                        */
                    /* catch() { ... } // from try @ 008d1d74 with catch @ 008d1d48 */
  tolua_function(param_1,"isUBBEnabled",FUN_008e74b8);
  tolua_function(param_1,"getColor",FUN_008e7528);
                    /* try { // try from 008d1d6c to 009d1d73 has its CatchHandler @ 008d1dc0 */
                    /* try { // try from 008d1d74 to 009d1ddb has its CatchHandler @ 008d1d48 */
  tolua_function(param_1,"setUBBEnabled",FUN_008e75e8);
  tolua_function(param_1,"getAutoSize",FUN_008e76c4);
  tolua_function(param_1,"setFontSize",FUN_008e7734);
                    /* catch() { ... } // from try @ 008d1d6c with catch @ 008d1dc0 */
  tolua_function(param_1,"applyTextFormat",FUN_008e780c);
  tolua_function(param_1,"getTextFormat",FUN_008e787c);
  tolua_function(param_1,"isSingleLine",FUN_008e79c8);
  tolua_function(param_1,"getTextSize",FUN_008e7a48);
  tolua_function(param_1,"getOutlineColor",FUN_008e7ac8);
  tolua_function(param_1,"setOutlineColor",FUN_008e7b88);
  tolua_function(param_1,"getTemplateVars",FUN_008e7c64);
  tolua_function(param_1,"setTemplateVars",FUN_008e7cd4);
  tolua_function(param_1,"setVar",FUN_008e7e5c);
  tolua_function(param_1,"flushVars",FUN_008e7fa4);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10GTextFieldE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d1f80:
    builtin_strncpy(pcVar7,"fairygui.GTextField",0x14);
                    /* try { // try from 008d1f9c to 009d1f9f has its CatchHandler @ 008d1fe4 */
    if (((byte)*pbVar4 & 1) == 0) {
                    /* try { // try from 008d1fa0 to 009d1fff has its CatchHandler @ 008d1f78 */
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d1f80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GTextField");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GTextField");
  local_40 = local_78;
                    /* catch() { ... } // from try @ 008d1f9c with catch @ 008d1fe4 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d25e4:
    builtin_strncpy(pcVar7,"fairygui.GTextField",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
                    /* try { // try from 008d2618 to 009d262b has its CatchHandler @ 008d27f0 */
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
                    /* catch() { ... } // from try @ 008d203c with catch @ 008d2010 */
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d25e4;
    }
                    /* try { // try from 008d2034 to 009d203b has its CatchHandler @ 008d2074 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GTextField");
  }
                    /* try { // try from 008d203c to 009d208f has its CatchHandler @ 008d2010 */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GRichTextField");
                    /* catch() { ... } // from try @ 008d2034 with catch @ 008d2074 */
  tolua_cclass(param_1,"GRichTextField","fairygui.GRichTextField","fairygui.GTextField",0);
                    /* catch() { ... } // from try @ 008d20e0 with catch @ 008d2090 */
  tolua_beginmodule(param_1,"GRichTextField");
  tolua_function(param_1,"getControl",FUN_008e800c);
                    /* try { // try from 008d20b4 to 009d20df has its CatchHandler @ 008d2118 */
  tolua_function(param_1,"getControls",FUN_008e8138);
                    /* try { // try from 008d20e0 to 009d2133 has its CatchHandler @ 008d2090 */
  tolua_function(param_1,"create",FUN_008e823c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui14GRichTextFieldE");
                    /* catch() { ... } // from try @ 008d20b4 with catch @ 008d2118 */
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d2158:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x17 - uVar5,uVar6,0,uVar6,0x17,"fairygui.GRichTextField");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x17) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d2158;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.GRichTextField",0x18);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x17;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GRichTextField");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d21e0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x17 - uVar5,uVar6,0,uVar6,0x17,"fairygui.GRichTextField");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x17) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d21e0;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.GRichTextField",0x18);
                    /* try { // try from 008d2674 to 009d26ab has its CatchHandler @ 008d281c */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x17;
    }
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GRoot");
  tolua_cclass(param_1,"GRoot","fairygui.GRoot","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GRoot");
  tolua_function(param_1,"closeAllWindows",FUN_008e83d8);
  tolua_function(param_1,"hideTooltips",FUN_008e8440);
  tolua_function(param_1,"hasAnyPopup",FUN_008e84a8);
  tolua_function(param_1,"getTopWindow",FUN_008e8520);
  tolua_function(param_1,"hidePopup",FUN_008e85b8);
  tolua_function(param_1,"closeAllExceptModals",FUN_008e8690);
                    /* try { // try from 008d22f8 to 009d2437 has its CatchHandler @ 008d22f8
                       catch() { ... } // from try @ 008d22f8 with catch @ 008d22f8
                       catch() { ... } // from try @ 008d2554 with catch @ 008d22f8
                       catch() { ... } // from try @ 008d27c4 with catch @ 008d22f8
                       catch() { ... } // from try @ 008d27e8 with catch @ 008d22f8 */
  tolua_function(param_1,"showPopup",FUN_008e86f8);
  tolua_function(param_1,"showTooltipsWin",FUN_008e88e0);
  tolua_function(param_1,"closeModalWait",FUN_008e89a8);
  tolua_function(param_1,"getInputProcessor",FUN_008e8a10);
  tolua_function(param_1,"getSoundVolumeScale",FUN_008e8b4c);
  tolua_function(param_1,"togglePopup",FUN_008e8bc4);
  tolua_function(param_1,"isSoundEnabled",FUN_008e8dac);
  tolua_function(param_1,"setSoundVolumeScale",FUN_008e8e20);
  tolua_function(param_1,"getTouchTarget",FUN_008e8ef8);
  tolua_function(param_1,"hideWindowImmediately",FUN_008e8f90);
  tolua_function(param_1,"getModalLayer",FUN_008e9058);
  tolua_function(param_1,"playSound",FUN_008e90f0);
  tolua_function(param_1,"getModalWaitingPane",FUN_008e927c);
                    /* try { // try from 008d2438 to 009d243f has its CatchHandler @ 008d27ec */
  tolua_function(param_1,"setSoundEnabled",FUN_008e9314);
  tolua_function(param_1,"bringToFront",FUN_008e93e8);
  tolua_function(param_1,"hasModalWindow",FUN_008e94b0);
  tolua_function(param_1,"showModalWait",FUN_008e9528);
  tolua_function(param_1,"isModalWaiting",FUN_008e9590);
  tolua_function(param_1,"getTouchPosition",FUN_008e9608);
  tolua_function(param_1,"getPoupPosition",FUN_008e96f0);
  tolua_function(param_1,"showWindow",FUN_008e9894);
  tolua_function(param_1,"showTooltips",FUN_008e995c);
  tolua_function(param_1,"hideWindow",FUN_008e9a64);
  tolua_function(param_1,"create",FUN_008e9b2c);
  tolua_function(param_1,"getInstance",FUN_008e9cd0);
                    /* try { // try from 008d254c to 009d2553 has its CatchHandler @ 008d27e8 */
  tolua_endmodule(param_1);
                    /* try { // try from 008d2554 to 009d25b7 has its CatchHandler @ 008d22f8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui5GRootE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d2690:
    builtin_strncpy(pcVar7,"fairygui.GRoot",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
                    /* try { // try from 008d26b4 to 009d26c3 has its CatchHandler @ 008d2804 */
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d2690;
    }
                    /* try { // try from 008d25b8 to 009d25bb has its CatchHandler @ 008d280c */
                    /* try { // try from 008d25c0 to 009d25d3 has its CatchHandler @ 008d2808 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GRoot");
                    /* try { // try from 008d25dc to 009d2613 has its CatchHandler @ 008d281c */
  }
                    /* try { // try from 008d26cc to 009d26db has its CatchHandler @ 008d27f4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GRoot");
                    /* try { // try from 008d26dc to 009d27c3 has its CatchHandler @ 008d2848 */
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d28a0:
    builtin_strncpy(pcVar7,"fairygui.GRoot",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d28a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GRoot");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GGraph");
  tolua_cclass(param_1,"GGraph","fairygui.GGraph","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GGraph");
  tolua_function(param_1,"drawEllipse",FUN_008e9d54);
                    /* try { // try from 008d27c4 to 009d27d7 has its CatchHandler @ 008d22f8 */
  tolua_function(param_1,"isEmpty",FUN_008e9ed0);
                    /* try { // try from 008d27d8 to 009d27df has its CatchHandler @ 008d27ec */
                    /* try { // try from 008d27e0 to 009d27e7 has its CatchHandler @ 008d27e8 */
                    /* catch() { ... } // from try @ 008d254c with catch @ 008d27e8
                       catch() { ... } // from try @ 008d27e0 with catch @ 008d27e8
                       try { // try from 008d27e8 to 009d287b has its CatchHandler @ 008d22f8 */
                    /* catch() { ... } // from try @ 008d2438 with catch @ 008d27ec
                       catch() { ... } // from try @ 008d27d8 with catch @ 008d27ec */
  tolua_function(param_1,"drawRect",FUN_008e9f48);
                    /* catch() { ... } // from try @ 008d2618 with catch @ 008d27f0 */
                    /* catch() { ... } // from try @ 008d26cc with catch @ 008d27f4 */
                    /* catch() { ... } // from try @ 008d26b4 with catch @ 008d2804 */
  tolua_function(param_1,"create",FUN_008ea0c4);
                    /* catch() { ... } // from try @ 008d25c0 with catch @ 008d2808 */
                    /* catch() { ... } // from try @ 008d25b8 with catch @ 008d280c */
  tolua_endmodule(param_1);
                    /* catch() { ... } // from try @ 008d25dc with catch @ 008d281c
                       catch() { ... } // from try @ 008d2674 with catch @ 008d281c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui6GGraphE");
  local_78[0] = local_60;
                    /* catch() { ... } // from try @ 008d26dc with catch @ 008d2848 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d28e8:
    builtin_strncpy(pcVar7,"fairygui.GGraph",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d28e8;
    }
                    /* try { // try from 008d287c to 009d2917 has its CatchHandler @ 008d287c
                       catch() { ... } // from try @ 008d287c with catch @ 008d287c
                       catch() { ... } // from try @ 008d2970 with catch @ 008d287c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GGraph");
  }
                    /* try { // try from 008d2918 to 009d296f has its CatchHandler @ 008d2970 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GGraph");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d2b84:
    builtin_strncpy(pcVar7,"fairygui.GGraph",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
                    /* catch() { ... } // from try @ 008d2918 with catch @ 008d2970
                       try { // try from 008d2970 to 009d298b has its CatchHandler @ 008d287c */
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d2b84;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GGraph");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.EventContext");
  tolua_cclass(param_1,"EventContext","fairygui.EventContext",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"EventContext");
  tolua_function(param_1,"preventDefault",FUN_008ea198);
  tolua_function(param_1,"isDefaultPrevented",FUN_008ea208);
  tolua_function(param_1,"getType",FUN_008ea278);
  tolua_function(param_1,"getSender",FUN_008ea2f0);
  tolua_function(param_1,"uncaptureTouch",FUN_008ea380);
  tolua_function(param_1,"getInput",FUN_008ea3e8);
  tolua_function(param_1,"captureTouch",FUN_008ea524);
  tolua_function(param_1,"stopPropagation",FUN_008ea594);
  tolua_function(param_1,"getData",FUN_008ea604);
  tolua_function(param_1,"getDataValue",FUN_008ea694);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui12EventContextE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d2bcc:
    builtin_strncpy(pcVar7,"fairygui.EventContext",0x16);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2a
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x15;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x14 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d2bcc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x16 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x15,"fairygui.EventContext");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"EventContext");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d2ee4:
    builtin_strncpy(pcVar7,"fairygui.EventContext",0x16);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2a
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x15;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x14 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d2ee4;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x16 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x15,"fairygui.EventContext");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.UIPackage");
  tolua_cclass(param_1,"UIPackage","fairygui.UIPackage",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"UIPackage");
  tolua_function(param_1,"getName",FUN_008ea704);
  tolua_function(param_1,"getId",FUN_008ea788);
  tolua_function(param_1,"getItemByName",FUN_008ea80c);
  tolua_function(param_1,"getItem",FUN_008ea958);
  tolua_function(param_1,"createObjectFromURL",FUN_008eaaa4);
  tolua_function(param_1,"removePackage",FUN_008eabd0);
  tolua_function(param_1,"getItemURL",FUN_008eacb8);
  tolua_function(param_1,"normalizeURL",FUN_008eae7c);
  tolua_function(param_1,"removeAllPackages",FUN_008eaff0);
  tolua_function(param_1,"createObject",FUN_008eb040);
  tolua_function(param_1,"getByName",FUN_008eb1cc);
  tolua_function(param_1,"addPackage",FUN_008eb2f8);
  tolua_function(param_1,"getById",FUN_008eb424);
  tolua_function(param_1,"getItemByURL",FUN_008eb550);
  tolua_function(param_1,"getEmptyTexture",FUN_008eb67c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui9UIPackageE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d2f2c:
    builtin_strncpy(pcVar7,"fairygui.UIPackage",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d2f2c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.UIPackage");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"UIPackage");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d322c:
    builtin_strncpy(pcVar7,"fairygui.UIPackage",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d322c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.UIPackage");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.Transition");
  tolua_cclass(param_1,"Transition","fairygui.Transition",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"Transition");
  tolua_function(param_1,"setValue",FUN_008eb700);
  tolua_function(param_1,"changePlayTimes",FUN_008eb8a8);
  tolua_function(param_1,"onOwnerRemovedFromStage",FUN_008eb97c);
  tolua_function(param_1,"setTarget",FUN_008eb9e4);
                    /* try { // try from 008d30b4 to 009d328f has its CatchHandler @ 008d30b4
                       catch() { ... } // from try @ 008d30b4 with catch @ 008d30b4
                       catch() { ... } // from try @ 008d3298 with catch @ 008d30b4
                       catch() { ... } // from try @ 008d32f8 with catch @ 008d30b4
                       catch() { ... } // from try @ 008d3360 with catch @ 008d30b4 */
  tolua_function(param_1,"clearHooks",FUN_008ebb34);
  tolua_function(param_1,"stop",FUN_008ebb9c);
  tolua_function(param_1,"getOwner",FUN_008ebcac);
  tolua_function(param_1,"setHook",FUN_008ebd3c);
  tolua_function(param_1,"setDuration",FUN_008ebf10);
  tolua_function(param_1,"isPlaying",FUN_008ec040);
  tolua_function(param_1,"setAutoPlay",FUN_008ec0b0);
  tolua_function(param_1,"updateFromRelations",FUN_008ec1d4);
  tolua_function(param_1,"playReverse",FUN_008ec330);
  tolua_function(param_1,"play",FUN_008ec5f8);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10TransitionE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d3274:
    builtin_strncpy(pcVar7,"fairygui.Transition",0x14);
                    /* try { // try from 008d3290 to 009d3297 has its CatchHandler @ 008d3404 */
    if (((byte)*pbVar4 & 1) == 0) {
                    /* try { // try from 008d3298 to 009d32ef has its CatchHandler @ 008d30b4 */
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3274;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.Transition");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Transition");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
                    /* try { // try from 008d32f0 to 009d32f7 has its CatchHandler @ 008d33e4 */
LAB_008d3574:
    builtin_strncpy(pcVar7,"fairygui.Transition",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
                    /* try { // try from 008d32f8 to 009d334b has its CatchHandler @ 008d30b4 */
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3574;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.Transition");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 008d334c to 009d335f has its CatchHandler @ 008d33e8 */
  tolua_usertype(param_1,"fairygui.InputEvent");
                    /* try { // try from 008d3360 to 009d341f has its CatchHandler @ 008d30b4 */
  tolua_cclass(param_1,"InputEvent","fairygui.InputEvent",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"InputEvent");
  tolua_function(param_1,"getTouchId",FUN_008ecea0);
  tolua_function(param_1,"getProcessor",FUN_008ecf18);
  tolua_function(param_1,"getButton",FUN_008ed054);
                    /* catch() { ... } // from try @ 008d32f0 with catch @ 008d33e4 */
                    /* catch() { ... } // from try @ 008d334c with catch @ 008d33e8 */
  tolua_function(param_1,"isDoubleClick",FUN_008ed0cc);
                    /* catch() { ... } // from try @ 008d3290 with catch @ 008d3404 */
  tolua_function(param_1,"getTouch",FUN_008ed14c);
  tolua_function(param_1,"isAltDown",FUN_008ed1dc);
  tolua_function(param_1,"getTarget",FUN_008ed250);
  tolua_function(param_1,"getX",FUN_008ed2e0);
  tolua_function(param_1,"getY",FUN_008ed358);
  tolua_function(param_1,"getMouseWheelDelta",FUN_008ed3d0);
  tolua_function(param_1,"isShiftDown",FUN_008ed448);
  tolua_function(param_1,"isCtrlDown",FUN_008ed4bc);
  tolua_function(param_1,"getKeyCode",FUN_008ed530);
  tolua_function(param_1,"getPosition",FUN_008ed5a8);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10InputEventE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d35c0:
                    /* try { // try from 008d35c0 to 009d367f has its CatchHandler @ 008d35c0
                       catch() { ... } // from try @ 008d35c0 with catch @ 008d35c0
                       catch() { ... } // from try @ 008d36f8 with catch @ 008d35c0 */
    builtin_strncpy(pcVar7,"fairygui.InputEvent",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d35c0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.InputEvent");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"InputEvent");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d3924:
    builtin_strncpy(pcVar7,"fairygui.InputEvent",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3924;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.InputEvent");
  }
  if (((ulong)local_78[0] & 1) != 0) {
                    /* try { // try from 008d3680 to 009d3693 has its CatchHandler @ 008d3784 */
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 008d3694 to 009d36a7 has its CatchHandler @ 008d3764 */
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GController");
  tolua_cclass(param_1,"GController","fairygui.GController","fairygui.UIEventDispatcher",0);
  tolua_beginmodule(param_1,"GController");
                    /* try { // try from 008d36f0 to 009d36f7 has its CatchHandler @ 008d3750 */
  tolua_function(param_1,"getPageIndexById",FUN_008ed618);
                    /* try { // try from 008d36f8 to 009d379f has its CatchHandler @ 008d35c0 */
  tolua_function(param_1,"setSelectedPage",FUN_008ed744);
  tolua_function(param_1,"getPrevisousIndex",FUN_008ed850);
  tolua_function(param_1,"setSelectedIndex",FUN_008ed8c8);
                    /* catch() { ... } // from try @ 008d36f0 with catch @ 008d3750 */
  tolua_function(param_1,"getPageId",FUN_008ed9d8);
                    /* catch() { ... } // from try @ 008d3694 with catch @ 008d3764 */
  tolua_function(param_1,"getSelectedPageId",FUN_008edad0);
  tolua_function(param_1,"setParent",FUN_008edb5c);
                    /* catch() { ... } // from try @ 008d3680 with catch @ 008d3784 */
  tolua_function(param_1,"runActions",FUN_008edc1c);
                    /* try { // try from 008d37a0 to 009d382f has its CatchHandler @ 008d37a0
                       catch() { ... } // from try @ 008d37a0 with catch @ 008d37a0
                       catch() { ... } // from try @ 008d3888 with catch @ 008d37a0 */
  tolua_function(param_1,"setOppositePageId",FUN_008edc84);
  tolua_function(param_1,"hasPage",FUN_008edd8c);
  tolua_function(param_1,"getPageNameById",FUN_008edeb8);
  tolua_function(param_1,"getPreviousPageId",FUN_008edff8);
  tolua_function(param_1,"getPageCount",FUN_008ee084);
  tolua_function(param_1,"getSelectedIndex",FUN_008ee0fc);
                    /* try { // try from 008d3830 to 009d3887 has its CatchHandler @ 008d3888 */
  tolua_function(param_1,"getPreviousPage",FUN_008ee174);
  tolua_function(param_1,"setSelectedPageId",FUN_008ee200);
  tolua_function(param_1,"getSelectedPage",FUN_008ee30c);
                    /* catch() { ... } // from try @ 008d3830 with catch @ 008d3888
                       try { // try from 008d3888 to 009d38a3 has its CatchHandler @ 008d37a0 */
  tolua_function(param_1,"getParent",FUN_008ee398);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui11GControllerE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d3970:
    builtin_strncpy(pcVar7,"fairygui.GController",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3970;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.GController");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GController");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
                    /* try { // try from 008d39e4 to 009d3a63 has its CatchHandler @ 008d39e4
                       catch() { ... } // from try @ 008d39e4 with catch @ 008d39e4
                       catch() { ... } // from try @ 008d3c78 with catch @ 008d39e4
                       catch() { ... } // from try @ 008d3f2c with catch @ 008d39e4
                       catch() { ... } // from try @ 008d3fe8 with catch @ 008d39e4
                       catch() { ... } // from try @ 008d4010 with catch @ 008d39e4 */
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d3e80:
    builtin_strncpy(pcVar7,"fairygui.GController",0x15);
                    /* try { // try from 008d3e9c to 009d3ecb has its CatchHandler @ 008d405c */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3e80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.GController");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.UIObjectFactory");
                    /* try { // try from 008d3a64 to 009d3a73 has its CatchHandler @ 008d4040 */
  tolua_cclass(param_1,"UIObjectFactory","fairygui.UIObjectFactory",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"UIObjectFactory");
                    /* try { // try from 008d3a8c to 009d3a9b has its CatchHandler @ 008d4030 */
                    /* try { // try from 008d3a9c to 009d3aa3 has its CatchHandler @ 008d402c */
  tolua_function(param_1,"newObject",FUN_008ee428);
                    /* try { // try from 008d3aa8 to 009d3aaf has its CatchHandler @ 008d4028 */
  tolua_function(param_1,"setPackageItemExtension",FUN_008ee558);
  tolua_function(param_1,"setLoaderExtension",FUN_008ee6e8);
  tolua_endmodule(param_1);
                    /* try { // try from 008d3ae8 to 009d3b27 has its CatchHandler @ 008d4054 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui15UIObjectFactoryE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
                    /* try { // try from 008d3b28 to 009d3b37 has its CatchHandler @ 008d401c */
LAB_008d3b44:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.UIObjectFactory");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d3b44;
    }
                    /* try { // try from 008d3ed4 to 009d3edf has its CatchHandler @ 008d4084 */
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.UIObjectFactory",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"UIObjectFactory");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
                    /* try { // try from 008d3bb0 to 009d3bb7 has its CatchHandler @ 008d4060 */
LAB_008d3bcc:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.UIObjectFactory");
  }
  else {
                    /* try { // try from 008d3bb8 to 009d3bc7 has its CatchHandler @ 008d4064 */
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d3bcc;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.UIObjectFactory",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
                    /* try { // try from 008d3f14 to 009d3f2b has its CatchHandler @ 008d4024 */
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.PopupMenu");
  tolua_cclass(param_1,"PopupMenu","fairygui.PopupMenu",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"PopupMenu");
  tolua_function(param_1,"setItemGrayed",FUN_008eea24);
                    /* try { // try from 008d3c70 to 009d3c77 has its CatchHandler @ 008d4020 */
                    /* try { // try from 008d3c78 to 009d3e9b has its CatchHandler @ 008d39e4 */
  tolua_function(param_1,"getItemName",FUN_008eeb50);
  tolua_function(param_1,"clearItems",FUN_008eec48);
  tolua_function(param_1,"getList",FUN_008eecb0);
  tolua_function(param_1,"removeItem",FUN_008eed40);
  tolua_function(param_1,"addItem",FUN_008eee6c);
  tolua_function(param_1,"addSeperator",FUN_008ef08c);
  tolua_function(param_1,"addItemAt",FUN_008ef0f4);
  tolua_function(param_1,"setItemText",FUN_008ef380);
  tolua_function(param_1,"setItemChecked",FUN_008ef4e0);
  tolua_function(param_1,"show",FUN_008ef60c);
  tolua_function(param_1,"getContentPane",FUN_008ef758);
  tolua_function(param_1,"getItemCount",FUN_008ef7e8);
  tolua_function(param_1,"setItemCheckable",FUN_008ef860);
  tolua_function(param_1,"isItemChecked",FUN_008ef98c);
  tolua_function(param_1,"setItemVisible",FUN_008efab8);
  tolua_function(param_1,"create",FUN_008efbe4);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui9PopupMenuE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d3f2c:
                    /* try { // try from 008d3f2c to 009d3f5b has its CatchHandler @ 008d39e4 */
    builtin_strncpy(pcVar7,"fairygui.PopupMenu",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d3f2c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.PopupMenu");
  }
                    /* try { // try from 008d3f5c to 009d3f67 has its CatchHandler @ 008d4054 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PopupMenu");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d4224:
                    /* catch() { ... } // from try @ 008d4254 with catch @ 008d4224 */
    builtin_strncpy(pcVar7,"fairygui.PopupMenu",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
                    /* try { // try from 008d424c to 009d4253 has its CatchHandler @ 008d4288 */
    }
    else {
                    /* try { // try from 008d4254 to 009d42a3 has its CatchHandler @ 008d4224 */
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d4224;
    }
                    /* try { // try from 008d3fd4 to 009d3fe7 has its CatchHandler @ 008d4018 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.PopupMenu");
  }
  if (((ulong)local_78[0] & 1) != 0) {
                    /* try { // try from 008d3fe8 to 009d3ff7 has its CatchHandler @ 008d39e4 */
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 008d3ff8 to 009d4007 has its CatchHandler @ 008d4014 */
    operator_delete(local_50);
  }
                    /* try { // try from 008d4008 to 009d400f has its CatchHandler @ 008d4010 */
                    /* catch() { ... } // from try @ 008d4008 with catch @ 008d4010
                       try { // try from 008d4010 to 009d40b7 has its CatchHandler @ 008d39e4 */
  tolua_usertype(param_1,"fairygui.GSlider");
                    /* catch() { ... } // from try @ 008d3ff8 with catch @ 008d4014 */
                    /* catch() { ... } // from try @ 008d3fd4 with catch @ 008d4018 */
                    /* catch() { ... } // from try @ 008d3b28 with catch @ 008d401c */
                    /* catch() { ... } // from try @ 008d3c70 with catch @ 008d4020 */
                    /* catch() { ... } // from try @ 008d3f14 with catch @ 008d4024 */
                    /* catch() { ... } // from try @ 008d3aa8 with catch @ 008d4028 */
                    /* catch() { ... } // from try @ 008d3a9c with catch @ 008d402c */
                    /* catch() { ... } // from try @ 008d3a8c with catch @ 008d4030 */
  tolua_cclass(param_1,"GSlider","fairygui.GSlider","fairygui.GComponent",0);
                    /* catch() { ... } // from try @ 008d3a64 with catch @ 008d4040 */
  tolua_beginmodule(param_1,"GSlider");
                    /* catch() { ... } // from try @ 008d3ae8 with catch @ 008d4054
                       catch() { ... } // from try @ 008d3f5c with catch @ 008d4054 */
                    /* catch() { ... } // from try @ 008d3e9c with catch @ 008d405c */
                    /* catch() { ... } // from try @ 008d3bb0 with catch @ 008d4060 */
  tolua_variable(param_1,"changeOnClick",FUN_008eff20,FUN_008eff58);
                    /* catch() { ... } // from try @ 008d3bb8 with catch @ 008d4064 */
  tolua_variable(param_1,"canDrag",FUN_008effa0,FUN_008effd8);
                    /* catch() { ... } // from try @ 008d3ed4 with catch @ 008d4084 */
  tolua_function(param_1,"getTitleType",FUN_008f0020);
  tolua_function(param_1,"setTitleType",FUN_008f0098);
  tolua_function(param_1,"getMin",FUN_008f016c);
  tolua_function(param_1,"setMin",FUN_008f01dc);
  tolua_function(param_1,"getMax",FUN_008f02b0);
  tolua_function(param_1,"setMax",FUN_008f0320);
  tolua_function(param_1,"getValue",FUN_008f03f4);
  tolua_function(param_1,"setValue",FUN_008f0464);
  tolua_function(param_1,"getWholeNumbers",FUN_008f0538);
  tolua_function(param_1,"setWholeNumbers",FUN_008f05a8);
  tolua_function(param_1,"create",FUN_008f067c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui7GSliderE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d426c:
    builtin_strncpy(pcVar7,"fairygui.GSlider",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
                    /* catch() { ... } // from try @ 008d424c with catch @ 008d4288 */
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d426c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GSlider");
  }
                    /* catch() { ... } // from try @ 008d42d4 with catch @ 008d42a4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GSlider");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
                    /* try { // try from 008d42cc to 009d42d3 has its CatchHandler @ 008d4310 */
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
                    /* try { // try from 008d42d4 to 009d432b has its CatchHandler @ 008d42a4 */
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d44a4:
    builtin_strncpy(pcVar7,"fairygui.GSlider",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d44a4;
    }
                    /* catch() { ... } // from try @ 008d42cc with catch @ 008d4310 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GSlider");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GTextInput");
  tolua_cclass(param_1,"GTextInput","fairygui.GTextInput","fairygui.GTextField",0);
  tolua_beginmodule(param_1,"GTextInput");
  tolua_function(param_1,"setKeyboardType",FUN_008f0750);
                    /* catch() { ... } // from try @ 008d43cc with catch @ 008d439c */
  tolua_function(param_1,"setPrompt",FUN_008f0824);
  tolua_function(param_1,"setMaxLength",FUN_008f092c);
                    /* try { // try from 008d43c4 to 009d43cb has its CatchHandler @ 008d43fc */
                    /* try { // try from 008d43cc to 009d4417 has its CatchHandler @ 008d439c */
  tolua_function(param_1,"setRestrict",FUN_008f0a00);
  tolua_function(param_1,"setPassword",FUN_008f0b08);
                    /* catch() { ... } // from try @ 008d43c4 with catch @ 008d43fc */
  tolua_function(param_1,"create",FUN_008f0bdc);
  tolua_endmodule(param_1);
                    /* catch() { ... } // from try @ 008d4448 with catch @ 008d4418 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10GTextInputE");
                    /* try { // try from 008d4440 to 009d4447 has its CatchHandler @ 008d4480 */
  local_78[0] = local_60;
                    /* try { // try from 008d4448 to 009d449b has its CatchHandler @ 008d4418 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d44e4:
    builtin_strncpy(pcVar7,"fairygui.GTextInput",0x14);
                    /* try { // try from 008d44fc to 009d4503 has its CatchHandler @ 008d451c */
    if (((byte)*pbVar4 & 1) == 0) {
                    /* try { // try from 008d4504 to 009d452f has its CatchHandler @ 008d44e0 */
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
                    /* try { // try from 008d44e0 to 009d44fb has its CatchHandler @ 008d44e0
                       catch() { ... } // from try @ 008d44e0 with catch @ 008d44e0
                       catch() { ... } // from try @ 008d4504 with catch @ 008d44e0 */
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d44e4;
    }
                    /* catch() { ... } // from try @ 008d4440 with catch @ 008d4480 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GTextInput");
  }
                    /* catch() { ... } // from try @ 008d44fc with catch @ 008d451c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GTextInput");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
                    /* try { // try from 008d4560 to 009d46e3 has its CatchHandler @ 008d4560
                       catch() { ... } // from try @ 008d4560 with catch @ 008d4560
                       catch() { ... } // from try @ 008d4818 with catch @ 008d4560
                       catch() { ... } // from try @ 008d4a6c with catch @ 008d4560
                       catch() { ... } // from try @ 008d4b20 with catch @ 008d4560
                       catch() { ... } // from try @ 008d4dc8 with catch @ 008d4560
                       catch() { ... } // from try @ 008d52d8 with catch @ 008d4560
                       catch() { ... } // from try @ 008d52ec with catch @ 008d4560 */
LAB_008d4908:
                    /* try { // try from 008d4908 to 009d490f has its CatchHandler @ 008d5334 */
    builtin_strncpy(pcVar7,"fairygui.GTextInput",0x14);
                    /* try { // try from 008d4918 to 009d4947 has its CatchHandler @ 008d5350 */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
                    /* try { // try from 008d4948 to 009d4963 has its CatchHandler @ 008d5338 */
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d4908;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.GTextInput");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.Window");
  tolua_cclass(param_1,"Window","fairygui.Window","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"Window");
  tolua_function(param_1,"getCloseButton",FUN_008f0cb0);
  tolua_function(param_1,"getContentPane",FUN_008f0d40);
  tolua_function(param_1,"show",FUN_008f0dd0);
  tolua_function(param_1,"isTop",FUN_008f0e38);
  tolua_function(param_1,"hideImmediately",FUN_008f0eb0);
  tolua_function(param_1,"toggleStatus",FUN_008f0f18);
  tolua_function(param_1,"hide",FUN_008f0f80);
  tolua_function(param_1,"getFrame",FUN_008f0fe8);
  tolua_function(param_1,"isShowing",FUN_008f1078);
                    /* try { // try from 008d46e4 to 009d46eb has its CatchHandler @ 008d5328 */
  tolua_function(param_1,"closeModalWait",FUN_008f10f0);
  tolua_function(param_1,"initWindow",FUN_008f11e4);
  tolua_function(param_1,"setContentArea",FUN_008f124c);
  tolua_function(param_1,"setDragArea",FUN_008f130c);
  tolua_function(param_1,"setContentPane",FUN_008f13d4);
  tolua_function(param_1,"isModal",FUN_008f149c);
  tolua_function(param_1,"isBringToFrontOnClick",FUN_008f150c);
  tolua_function(param_1,"getContentArea",FUN_008f157c);
  tolua_function(param_1,"setBringToFrontOnClick",FUN_008f160c);
  tolua_function(param_1,"setModal",FUN_008f16dc);
  tolua_function(param_1,"getModalWaitingPane",FUN_008f17ac);
  tolua_function(param_1,"getDragArea",FUN_008f183c);
  tolua_function(param_1,"bringToFront",FUN_008f18cc);
                    /* try { // try from 008d4810 to 009d4817 has its CatchHandler @ 008d5324 */
                    /* try { // try from 008d4818 to 009d48bb has its CatchHandler @ 008d4560 */
  tolua_function(param_1,"showModalWait",FUN_008f1934);
  tolua_function(param_1,"setCloseButton",FUN_008f1a1c);
  tolua_function(param_1,"addUISource",FUN_008f1ae4);
  tolua_function(param_1,"create",FUN_008f1bac);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui6WindowE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
                    /* try { // try from 008d48bc to 009d48cf has its CatchHandler @ 008d536c */
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d4954:
    builtin_strncpy(pcVar7,"fairygui.Window",0x10);
                    /* try { // try from 008d4964 to 009d496f has its CatchHandler @ 008d5330 */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d4954;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.Window");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Window");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d4dbc:
                    /* try { // try from 008d4dc0 to 009d4dc7 has its CatchHandler @ 008d533c */
    builtin_strncpy(pcVar7,"fairygui.Window",0x10);
                    /* try { // try from 008d4dc8 to 009d4e7f has its CatchHandler @ 008d4560 */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d4dbc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.Window");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GLoader");
  tolua_cclass(param_1,"GLoader","fairygui.GLoader","fairygui.GObject",0);
                    /* try { // try from 008d4a64 to 009d4a6b has its CatchHandler @ 008d539c */
  tolua_beginmodule(param_1,"GLoader");
                    /* try { // try from 008d4a6c to 009d4b17 has its CatchHandler @ 008d4560 */
  tolua_function(param_1,"getURL",FUN_008f1c80);
  tolua_function(param_1,"isPlaying",FUN_008f1d04);
  tolua_function(param_1,"setColor",FUN_008f1d74);
  tolua_function(param_1,"setAlign",FUN_008f1e50);
  tolua_function(param_1,"setPlaying",FUN_008f1f24);
  tolua_function(param_1,"getColor",FUN_008f1ff8);
  tolua_function(param_1,"setURL",FUN_008f20ac);
                    /* try { // try from 008d4b18 to 009d4b1f has its CatchHandler @ 008d5340 */
                    /* try { // try from 008d4b20 to 009d4c93 has its CatchHandler @ 008d4560 */
  tolua_function(param_1,"setFrame",FUN_008f21b4);
  tolua_function(param_1,"getFill",FUN_008f2288);
  tolua_function(param_1,"setAutoSize",FUN_008f2300);
  tolua_function(param_1,"getAutoSize",FUN_008f23d4);
  tolua_function(param_1,"getContentSize",FUN_008f2444);
  tolua_function(param_1,"setVerticalAlign",FUN_008f24bc);
  tolua_function(param_1,"getAlign",FUN_008f2590);
  tolua_function(param_1,"setFill",FUN_008f2608);
  tolua_function(param_1,"getVerticalAlign",FUN_008f26dc);
  tolua_function(param_1,"getFrame",FUN_008f2754);
  tolua_function(param_1,"isShrinkOnly",FUN_008f27cc);
  tolua_function(param_1,"setShrinkOnly",FUN_008f283c);
  tolua_function(param_1,"getFillMethod",FUN_008f2910);
  tolua_function(param_1,"setFillMethod",FUN_008f2988);
  tolua_function(param_1,"getFillOrigin",FUN_008f2a5c);
  tolua_function(param_1,"setFillOrigin",FUN_008f2ad4);
                    /* try { // try from 008d4c94 to 009d4c9b has its CatchHandler @ 008d5360 */
  tolua_function(param_1,"isFillClockwise",FUN_008f2ba8);
  tolua_function(param_1,"setFillClockwise",FUN_008f2c20);
  tolua_function(param_1,"getFillAmount",FUN_008f2cf4);
  tolua_function(param_1,"setFillAmount",FUN_008f2d6c);
  tolua_function(param_1,"getComponent",FUN_008f2e44);
  tolua_function(param_1,"create",FUN_008f2ed4);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui7GLoaderE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d4e04:
    builtin_strncpy(pcVar7,"fairygui.GLoader",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d4e04;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GLoader");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GLoader");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d5234:
    builtin_strncpy(pcVar7,"fairygui.GLoader",0x11);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x10;
                    /* try { // try from 008d5268 to 009d527b has its CatchHandler @ 008d52fc */
    }
  }
  else {
                    /* try { // try from 008d4e80 to 009d4e8f has its CatchHandler @ 008d53c4 */
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xf < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5234;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x11 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x10,"fairygui.GLoader");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GLoader3D");
                    /* try { // try from 008d4eec to 009d4eff has its CatchHandler @ 008d53bc */
  tolua_cclass(param_1,"GLoader3D","fairygui.GLoader3D","fairygui.GObject",0);
  tolua_beginmodule(param_1,"GLoader3D");
  tolua_function(param_1,"getURL",FUN_008f2fa8);
  tolua_function(param_1,"setURL",FUN_008f302c);
                    /* try { // try from 008d4f48 to 009d4f53 has its CatchHandler @ 008d53c0 */
  tolua_function(param_1,"getAlign",FUN_008f3134);
                    /* try { // try from 008d4f60 to 009d4f6f has its CatchHandler @ 008d5398 */
                    /* try { // try from 008d4f70 to 009d4f7b has its CatchHandler @ 008d5380 */
  tolua_function(param_1,"setAlign",FUN_008f31ac);
                    /* try { // try from 008d4f80 to 009d4f93 has its CatchHandler @ 008d537c */
  tolua_function(param_1,"getVerticalAlign",FUN_008f3280);
  tolua_function(param_1,"setVerticalAlign",FUN_008f32f8);
  tolua_function(param_1,"getAutoSize",FUN_008f33cc);
  tolua_function(param_1,"setAutoSize",FUN_008f343c);
                    /* try { // try from 008d4fdc to 009d4fe7 has its CatchHandler @ 008d53c0 */
  tolua_function(param_1,"getFill",FUN_008f3510);
                    /* try { // try from 008d4ff4 to 009d5003 has its CatchHandler @ 008d5368 */
  tolua_function(param_1,"setFill",FUN_008f3588);
                    /* try { // try from 008d5004 to 009d500f has its CatchHandler @ 008d5364 */
  tolua_function(param_1,"isShrinkOnly",FUN_008f365c);
                    /* try { // try from 008d502c to 009d5047 has its CatchHandler @ 008d53c0 */
  tolua_function(param_1,"setShrinkOnly",FUN_008f36cc);
  tolua_function(param_1,"getContent",FUN_008f37a0);
                    /* try { // try from 008d5054 to 009d5063 has its CatchHandler @ 008d5348 */
  tolua_function(param_1,"setContent",FUN_008f3830);
                    /* try { // try from 008d5064 to 009d506f has its CatchHandler @ 008d5344 */
  tolua_function(param_1,"getColor",FUN_008f38f8);
  tolua_function(param_1,"setColor",FUN_008f39ac);
  tolua_function(param_1,"isPlaying",FUN_008f3a88);
  tolua_function(param_1,"setPlaying",FUN_008f3af8);
  tolua_function(param_1,"getFrame",FUN_008f3bcc);
  tolua_function(param_1,"setFrame",FUN_008f3c44);
  tolua_function(param_1,"getAnimationName",FUN_008f3d18);
  tolua_function(param_1,"setAnimationName",FUN_008f3da0);
                    /* try { // try from 008d5128 to 009d512f has its CatchHandler @ 008d532c */
  tolua_function(param_1,"getSkinName",FUN_008f3ea8);
                    /* try { // try from 008d513c to 009d517f has its CatchHandler @ 008d534c */
  tolua_function(param_1,"setSkinName",FUN_008f3f30);
  tolua_function(param_1,"getLoop",FUN_008f4038);
  tolua_function(param_1,"setLoop",FUN_008f40a8);
  tolua_function(param_1,"create",FUN_008f417c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui9GLoader3DE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d5274:
    builtin_strncpy(pcVar7,"fairygui.GLoader3D",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5274;
    }
                    /* try { // try from 008d5218 to 009d522b has its CatchHandler @ 008d530c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GLoader3D");
  }
                    /* try { // try from 008d52a8 to 009d52b7 has its CatchHandler @ 008d52f8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GLoader3D");
                    /* try { // try from 008d52b8 to 009d52bf has its CatchHandler @ 008d52f4 */
                    /* try { // try from 008d52c0 to 009d52cf has its CatchHandler @ 008d52f0 */
                    /* try { // try from 008d52d0 to 009d52d7 has its CatchHandler @ 008d52ec */
  local_40 = local_78;
                    /* try { // try from 008d52d8 to 009d52db has its CatchHandler @ 008d4560 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
                    /* try { // try from 008d52dc to 009d52e3 has its CatchHandler @ 008d5328 */
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
                    /* try { // try from 008d52e4 to 009d52eb has its CatchHandler @ 008d5324 */
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
                    /* catch() { ... } // from try @ 008d52d0 with catch @ 008d52ec
                       try { // try from 008d52ec to 009d540f has its CatchHandler @ 008d4560 */
LAB_008d5450:
    builtin_strncpy(pcVar7,"fairygui.GLoader3D",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
                    /* catch() { ... } // from try @ 008d52c0 with catch @ 008d52f0 */
                    /* catch() { ... } // from try @ 008d52b8 with catch @ 008d52f4 */
                    /* catch() { ... } // from try @ 008d52a8 with catch @ 008d52f8 */
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
                    /* catch() { ... } // from try @ 008d5268 with catch @ 008d52fc */
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5450;
    }
                    /* catch() { ... } // from try @ 008d5218 with catch @ 008d530c */
                    /* catch() { ... } // from try @ 008d4810 with catch @ 008d5324
                       catch() { ... } // from try @ 008d52e4 with catch @ 008d5324 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GLoader3D");
                    /* catch() { ... } // from try @ 008d46e4 with catch @ 008d5328
                       catch() { ... } // from try @ 008d52dc with catch @ 008d5328 */
  }
                    /* catch() { ... } // from try @ 008d5128 with catch @ 008d532c */
  if (((ulong)local_78[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 008d4964 with catch @ 008d5330 */
                    /* catch() { ... } // from try @ 008d4908 with catch @ 008d5334 */
    operator_delete(local_68);
  }
                    /* catch() { ... } // from try @ 008d4948 with catch @ 008d5338 */
                    /* catch() { ... } // from try @ 008d4dc0 with catch @ 008d533c */
  if (((byte)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 008d4b18 with catch @ 008d5340 */
                    /* catch() { ... } // from try @ 008d5064 with catch @ 008d5344 */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 008d5054 with catch @ 008d5348 */
                    /* catch() { ... } // from try @ 008d513c with catch @ 008d534c */
                    /* catch() { ... } // from try @ 008d4918 with catch @ 008d5350 */
  tolua_usertype(param_1,"fairygui.GObjectPool");
                    /* catch() { ... } // from try @ 008d4c94 with catch @ 008d5360 */
                    /* catch() { ... } // from try @ 008d5004 with catch @ 008d5364 */
                    /* catch() { ... } // from try @ 008d4ff4 with catch @ 008d5368 */
                    /* catch() { ... } // from try @ 008d48bc with catch @ 008d536c */
                    /* catch() { ... } // from try @ 008d4f80 with catch @ 008d537c */
  tolua_cclass(param_1,"GObjectPool","fairygui.GObjectPool",&DAT_013c996e,0);
                    /* catch() { ... } // from try @ 008d4f70 with catch @ 008d5380 */
  tolua_beginmodule(param_1,"GObjectPool");
                    /* catch() { ... } // from try @ 008d4f60 with catch @ 008d5398 */
                    /* catch() { ... } // from try @ 008d4a64 with catch @ 008d539c */
  tolua_function(param_1,"getObject",FUN_008f4250);
  tolua_function(param_1,"returnObject",FUN_008f439c);
                    /* catch() { ... } // from try @ 008d4eec with catch @ 008d53bc */
                    /* catch() { ... } // from try @ 008d4f48 with catch @ 008d53c0
                       catch() { ... } // from try @ 008d4fdc with catch @ 008d53c0
                       catch() { ... } // from try @ 008d502c with catch @ 008d53c0 */
  tolua_endmodule(param_1);
                    /* catch() { ... } // from try @ 008d4e80 with catch @ 008d53c4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui11GObjectPoolE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d5498:
    builtin_strncpy(pcVar7,"fairygui.GObjectPool",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5498;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.GObjectPool");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GObjectPool");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d5b44:
    builtin_strncpy(pcVar7,"fairygui.GObjectPool",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5b44;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.GObjectPool");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.ScrollPane");
  tolua_cclass(param_1,"ScrollPane","fairygui.ScrollPane",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"ScrollPane");
  tolua_function(param_1,"setBouncebackEffect",FUN_008f4464);
  tolua_function(param_1,"getHzScrollBar",FUN_008f4534);
  tolua_function(param_1,"scrollToView",FUN_008f45c4);
  tolua_function(param_1,"getDecelerationRate",FUN_008f4914);
  tolua_function(param_1,"getPercX",FUN_008f4988);
  tolua_function(param_1,"getPosY",FUN_008f4a00);
  tolua_function(param_1,"getFooter",FUN_008f4a74);
  tolua_function(param_1,"setPosX",FUN_008f4b04);
  tolua_function(param_1,"getPosX",FUN_008f4c3c);
  tolua_function(param_1,"setPageY",FUN_008f4cb0);
  tolua_function(param_1,"scrollTop",FUN_008f4de8);
  tolua_function(param_1,"isSnapToItem",FUN_008f4ed0);
  tolua_function(param_1,"isTouchEffect",FUN_008f4f40);
  tolua_function(param_1,"setScrollStep",FUN_008f4fb0);
  tolua_function(param_1,"scrollBottom",FUN_008f5088);
  tolua_function(param_1,"isChildInView",FUN_008f5170);
  tolua_function(param_1,"isPageMode",FUN_008f5248);
  tolua_function(param_1,"setDecelerationRate",FUN_008f52b8);
  tolua_function(param_1,"getScrollingPosY",FUN_008f538c);
  tolua_function(param_1,"getScrollingPosX",FUN_008f5404);
  tolua_function(param_1,"getContentSize",FUN_008f547c);
  tolua_function(param_1,"isRightMost",FUN_008f54ec);
  tolua_function(param_1,"setPageController",FUN_008f5564);
  tolua_function(param_1,"lockHeader",FUN_008f5624);
  tolua_function(param_1,"lockFooter",FUN_008f56f8);
  tolua_function(param_1,"scrollDown",FUN_008f57cc);
  tolua_function(param_1,"setSnapToItem",FUN_008f5918);
  tolua_function(param_1,"getScrollStep",FUN_008f59e8);
  tolua_function(param_1,"getPageX",FUN_008f5a5c);
  tolua_function(param_1,"scrollLeft",FUN_008f5ad4);
  tolua_function(param_1,"getViewSize",FUN_008f5c20);
  tolua_function(param_1,"setInertiaDisabled",FUN_008f5c90);
  tolua_function(param_1,"getPageController",FUN_008f5d60);
  tolua_function(param_1,"setPageX",FUN_008f5df0);
  tolua_function(param_1,"scrollUp",FUN_008f5f28);
  tolua_function(param_1,"isMouseWheelEnabled",FUN_008f6074);
  tolua_function(param_1,"setPageMode",FUN_008f60e4);
  tolua_function(param_1,"setTouchEffect",FUN_008f61b4);
  tolua_function(param_1,"setMouseWheelEnabled",FUN_008f6284);
  tolua_function(param_1,"isInertiaDisabled",FUN_008f6354);
  tolua_function(param_1,"setPercX",FUN_008f63c4);
  tolua_function(param_1,"setPercY",FUN_008f64fc);
  tolua_function(param_1,"cancelDragging",FUN_008f6634);
  tolua_function(param_1,"getPercY",FUN_008f669c);
  tolua_function(param_1,"scrollRight",FUN_008f6714);
  tolua_function(param_1,"getHeader",FUN_008f6860);
  tolua_function(param_1,"getVtScrollBar",FUN_008f68f0);
  tolua_function(param_1,"getOwner",FUN_008f6980);
  tolua_function(param_1,"isBottomMost",FUN_008f6a10);
  tolua_function(param_1,"getPageY",FUN_008f6a88);
  tolua_function(param_1,"isBouncebackEffect",FUN_008f6b00);
  tolua_function(param_1,"setPosY",FUN_008f6b70);
  tolua_function(param_1,"getDraggingPane",FUN_008f6ca8);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10ScrollPaneE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d5b90:
    builtin_strncpy(pcVar7,"fairygui.ScrollPane",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d5b90;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.ScrollPane");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ScrollPane");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d61d4:
    builtin_strncpy(pcVar7,"fairygui.ScrollPane",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d61d4;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.ScrollPane");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  lua_register_fairygui_GProgressBar(param_1);
  tolua_usertype(param_1,"fairygui.DragDropManager");
  tolua_cclass(param_1,"DragDropManager","fairygui.DragDropManager",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"DragDropManager");
  tolua_function(param_1,"cancel",FUN_008f6d2c);
  tolua_function(param_1,"isDragging",FUN_008f6d94);
  tolua_function(param_1,"getAgent",FUN_008f6e10);
  tolua_function(param_1,"startDrag",FUN_008f6ea0);
  tolua_function(param_1,"getInstance",FUN_008f711c);
  tolua_function(param_1,"destroyInstance",FUN_008f7248);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui15DragDropManagerE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d5db4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.DragDropManager");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d5db4;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.DragDropManager",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"DragDropManager");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d5e3c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.DragDropManager");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d5e3c;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.DragDropManager",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
                    /* try { // try from 008d7f78 to 009d7f7f has its CatchHandler @ 008d7fe8 */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.UIConfig");
  tolua_cclass(param_1,"UIConfig","fairygui.UIConfig",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"UIConfig");
  tolua_variable(param_1,"defaultFont",0,FUN_008f72b8);
  tolua_variable(param_1,"buttonSound",0,FUN_008f72fc);
  tolua_variable(param_1,"buttonSoundVolumeScale",0,FUN_008f7340);
  tolua_variable(param_1,"defaultScrollStep",0,FUN_008f736c);
  tolua_variable(param_1,"defaultScrollDecelerationRate",0,FUN_008f7394);
  tolua_variable(param_1,"defaultScrollTouchEffect",0,FUN_008f73c0);
  tolua_variable(param_1,"defaultScrollBounceEffect",0,FUN_008f73f0);
  tolua_variable(param_1,"defaultScrollBarDisplay",0,FUN_008f7420);
  tolua_variable(param_1,"verticalScrollBar",0,FUN_008f7448);
  tolua_variable(param_1,"horizontalScrollBar",0,FUN_008f748c);
  tolua_variable(param_1,"touchDragSensitivity",0,FUN_008f74d0);
  tolua_variable(param_1,"clickDragSensitivity",0,FUN_008f74f8);
  tolua_variable(param_1,"touchScrollSensitivity",0,FUN_008f7520);
  tolua_variable(param_1,"defaultComboBoxVisibleItemCount",0,FUN_008f7548);
  tolua_variable(param_1,"globalModalWaiting",0,FUN_008f7570);
  tolua_variable(param_1,"modalLayerColor",0,FUN_008f75b4);
  tolua_variable(param_1,"tooltipsWin",0,FUN_008f762c);
  tolua_variable(param_1,"bringWindowToFrontOnClick",0,FUN_008f7670);
  tolua_variable(param_1,"windowModalWaiting",0,FUN_008f76a0);
  tolua_variable(param_1,"popupMenu",0,FUN_008f76e4);
  tolua_variable(param_1,"popupMenu_seperator",0,FUN_008f7728);
  tolua_variable(param_1,"onMusicCallback",0,FUN_008f776c);
  tolua_function(param_1,"registerFont",FUN_008f789c);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui8UIConfigE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d6280:
    builtin_strncpy(pcVar7,"fairygui.UIConfig",0x12);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x22
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x11;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x10 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d6280;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x12 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x11,"fairygui.UIConfig");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"UIConfig");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d64f0:
    builtin_strncpy(pcVar7,"fairygui.UIConfig",0x12);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x22
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x11;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x10 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d64f0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x12 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x11,"fairygui.UIConfig");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GLabel");
  tolua_cclass(param_1,"GLabel","fairygui.GLabel","fairygui.GComponent",0);
  tolua_beginmodule(param_1,"GLabel");
  tolua_function(param_1,"getTitle",FUN_008f7c58);
  tolua_function(param_1,"setTitle",FUN_008f7cec);
  tolua_function(param_1,"getTitleColor",FUN_008f7dfc);
  tolua_function(param_1,"setTitleColor",FUN_008f7eb0);
  tolua_function(param_1,"getTitleFontSize",FUN_008f7f8c);
  tolua_function(param_1,"setTitleFontSize",FUN_008f8004);
  tolua_function(param_1,"getTextField",FUN_008f80d8);
  tolua_function(param_1,"create",FUN_008f8170);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui6GLabelE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d6538:
    builtin_strncpy(pcVar7,"fairygui.GLabel",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d6538;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GLabel");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GLabel");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d6778:
    builtin_strncpy(pcVar7,"fairygui.GLabel",0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xf;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xe < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d6778;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x10 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0xf,"fairygui.GLabel");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.FUIInput");
  tolua_cclass(param_1,"FUIInput","fairygui.FUIInput","ccui.EditBox",0);
  tolua_beginmodule(param_1,"FUIInput");
  tolua_function(param_1,"getTextFormat",FUN_008f8244);
  tolua_function(param_1,"applyTextFormat",FUN_008f8380);
  tolua_function(param_1,"isSingleLine",FUN_008f83e8);
  tolua_function(param_1,"setSingleLine",FUN_008f8460);
  tolua_function(param_1,"isPassword",FUN_008f8534);
  tolua_function(param_1,"setPassword",FUN_008f85a4);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui8FUIInputE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d67c0:
    builtin_strncpy(pcVar7,"fairygui.FUIInput",0x12);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x22
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x11;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x10 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d67c0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x12 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x11,"fairygui.FUIInput");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"FUIInput");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d6d64:
    builtin_strncpy(pcVar7,"fairygui.FUIInput",0x12);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x22
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x11;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x10 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d6d64;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x12 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x11,"fairygui.FUIInput");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GBasicTextField");
  tolua_cclass(param_1,"GBasicTextField","fairygui.GBasicTextField","fairygui.GTextField",0);
  tolua_beginmodule(param_1,"GBasicTextField");
  tolua_function(param_1,"setUnderlineColor",FUN_008f8678);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui15GBasicTextFieldE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d6964:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.GBasicTextField");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d6964;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.GBasicTextField",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
                    /* try { // try from 008d7f80 to 009d802b has its CatchHandler @ 008d7c9c */
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GBasicTextField");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d69ec:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x18 - uVar5,uVar6,0,uVar6,0x18,"fairygui.GBasicTextField");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x18) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d69ec;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.GBasicTextField",0x19);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x30
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x18;
    }
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.InputProcessor");
  tolua_cclass(param_1,"InputProcessor","fairygui.InputProcessor",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"InputProcessor");
  tolua_function(param_1,"getRecentInput",FUN_008f8754);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui14InputProcessorE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d6af8:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x17 - uVar5,uVar6,0,uVar6,0x17,"fairygui.InputProcessor");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x17) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d6af8;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.InputProcessor",0x18);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x17;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"InputProcessor");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)*pbVar4 >> 1);
    uVar5 = 0x16;
LAB_008d6b80:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(pbVar4,uVar5,0x17 - uVar5,uVar6,0,uVar6,0x17,"fairygui.InputProcessor");
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (uVar5 < 0x17) {
      uVar6 = *(ulong *)(lVar3 + 0x30);
      goto LAB_008d6b80;
    }
    builtin_strncpy(*(char **)(lVar3 + 0x38),"fairygui.InputProcessor",0x18);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2e
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x17;
    }
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.HtmlObject");
  tolua_cclass(param_1,"HtmlObject","fairygui.HtmlObject",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"HtmlObject");
  tolua_variable(param_1,"buttonResource",FUN_008f8880,FUN_008f88b8);
  tolua_variable(param_1,"inputResource",FUN_008f892c,FUN_008f8964);
  tolua_variable(param_1,"selectResource",FUN_008f89d8,FUN_008f8a10);
  tolua_variable(param_1,"usePool",FUN_008f8a84,FUN_008f8aa8);
  tolua_function(param_1,"getUI",FUN_008f8adc);
  tolua_function(param_1,"getElementAttrs",FUN_008f8b6c);
  tolua_function(param_1,"clearStaticPools",FUN_008f8be0);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10HtmlObjectE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d6e6c:
    builtin_strncpy(pcVar7,"fairygui.HtmlObject",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d6e6c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.HtmlObject");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"HtmlObject");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7164:
    builtin_strncpy(pcVar7,"fairygui.HtmlObject",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7164;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.HtmlObject");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.PackageItem");
  tolua_cclass(param_1,"PackageItem","fairygui.PackageItem",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"PackageItem");
  tolua_variable(param_1,"owner",FUN_008f8c6c,0);
  tolua_variable(param_1,"type",FUN_008f8cc4,0);
  tolua_variable(param_1,"objectType",FUN_008f8cfc,0);
  tolua_variable(param_1,"id",FUN_008f8d34,0);
  tolua_variable(param_1,"name",FUN_008f8d80,0);
  tolua_variable(param_1,"width",FUN_008f8dcc,0);
  tolua_variable(param_1,"height",FUN_008f8e04,0);
  tolua_variable(param_1,"file",FUN_008f8e3c,0);
  tolua_variable(param_1,"spriteFrame",FUN_008f8e88,0);
  tolua_function(param_1,"load",FUN_008f8ee0);
  tolua_function(param_1,"getBranch",FUN_008f8f48);
  tolua_function(param_1,"getHighResolution",FUN_008f8fe0);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui11PackageItemE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d71b0:
    builtin_strncpy(pcVar7,"fairygui.PackageItem",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d71b0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.PackageItem");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PackageItem");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d74bc:
    builtin_strncpy(pcVar7,"fairygui.PackageItem",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d74bc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"fairygui.PackageItem");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GTree");
  tolua_cclass(param_1,"GTree","fairygui.GTree","fairygui.GList",0);
  tolua_beginmodule(param_1,"GTree");
  tolua_variable(param_1,"treeNodeRender",0,FUN_008f9078);
  tolua_variable(param_1,"treeNodeWillExpand",0,FUN_008f91ac);
  tolua_function(param_1,"getIndent",FUN_008f92e0);
  tolua_function(param_1,"setIndent",FUN_008f9350);
  tolua_function(param_1,"getClickToExpand",FUN_008f93c4);
  tolua_function(param_1,"setClickToExpand",FUN_008f9434);
  tolua_function(param_1,"getRootNode",FUN_008f94a8);
  tolua_function(param_1,"getSelectedNode",FUN_008f9538);
  tolua_function(param_1,"getSelectedNodes",FUN_008f95d0);
  tolua_function(param_1,"selectNode",FUN_008f9738);
  tolua_function(param_1,"unselectNode",FUN_008f9828);
  tolua_function(param_1,"expandAll",FUN_008f98dc);
  tolua_function(param_1,"collapseAll",FUN_008f9990);
  tolua_function(param_1,"create",FUN_008f9a44);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui5GTreeE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7508:
    builtin_strncpy(pcVar7,"fairygui.GTree",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7508;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GTree");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GTree");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7940:
    builtin_strncpy(pcVar7,"fairygui.GTree",0xf);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0xe;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7940;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0xf - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),0
               ,*(ulong *)(lVar3 + 0x30),0xe,"fairygui.GTree");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.GTreeNode");
  tolua_cclass(param_1,"GTreeNode","fairygui.GTreeNode",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"GTreeNode");
  tolua_function(param_1,"create",FUN_008f9ff0);
  tolua_function(param_1,"getParent",FUN_008fa14c);
  tolua_function(param_1,"getTree",FUN_008fa1dc);
  tolua_function(param_1,"getCell",FUN_008fa26c);
  tolua_function(param_1,"getData",FUN_008fa2fc);
  tolua_function(param_1,"setData",FUN_008fa36c);
  tolua_function(param_1,"isExpanded",FUN_008fa448);
  tolua_function(param_1,"setExpaned",FUN_008fa4b8);
  tolua_function(param_1,"isFolder",FUN_008fa538);
  tolua_function(param_1,"getText",FUN_008fa5a8);
  tolua_function(param_1,"setText",FUN_008fa634);
  tolua_function(param_1,"getIcon",FUN_008fa720);
  tolua_function(param_1,"setIcon",FUN_008fa7ac);
  tolua_function(param_1,"addChild",FUN_008fa898);
  tolua_function(param_1,"addChildAt",FUN_008fa97c);
  tolua_function(param_1,"removeChild",FUN_008faa7c);
  tolua_function(param_1,"removeChildAt",FUN_008fab30);
  tolua_function(param_1,"removeChildren",FUN_008fabac);
  tolua_function(param_1,"getChildAt",FUN_008fac58);
  tolua_function(param_1,"getPrevSibling",FUN_008fad04);
  tolua_function(param_1,"getNextSibling",FUN_008fad9c);
  tolua_function(param_1,"getChildIndex",FUN_008fae34);
  tolua_function(param_1,"setChildIndex",FUN_008faef8);
  tolua_function(param_1,"setChildIndexBefore",FUN_008fafc8);
  tolua_function(param_1,"swapChildren",FUN_008fb0a8);
  tolua_function(param_1,"swapChildrenAt",FUN_008fb1a8);
  tolua_function(param_1,"numChildren",FUN_008fb240);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui9GTreeNodeE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7988:
    builtin_strncpy(pcVar7,"fairygui.GTreeNode",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7988;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GTreeNode");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GTreeNode");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7d54:
    builtin_strncpy(pcVar7,"fairygui.GTreeNode",0x13);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x12;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x11 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7d54;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x13 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x12,"fairygui.GTreeNode");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_usertype(param_1,"fairygui.TextFormat");
  tolua_cclass(param_1,"TextFormat","fairygui.TextFormat",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"TextFormat");
  tolua_variable(param_1,"face",0,FUN_008fb2b8);
  tolua_variable(param_1,"fontSize",0,FUN_008fb310);
  tolua_variable(param_1,"color",0,FUN_008fb354);
  tolua_variable(param_1,&DAT_012b0371,0,FUN_008fb398);
  tolua_variable(param_1,"italics",0,FUN_008fb3e0);
  tolua_variable(param_1,"underline",0,FUN_008fb428);
  tolua_variable(param_1,"lineSpacing",0,FUN_008fb470);
  tolua_variable(param_1,"letterSpacing",0,FUN_008fb4b0);
  tolua_variable(param_1,"align",0,FUN_008fb4f0);
  tolua_variable(param_1,"verticalAlign",0,FUN_008fb530);
  tolua_variable(param_1,"outlineColor",0,FUN_008fb570);
  tolua_variable(param_1,"outlineSize",0,FUN_008fb5b4);
  tolua_variable(param_1,"shadowColor",0,FUN_008fb5f4);
  tolua_variable(param_1,"shadowOffset",0,FUN_008fb638);
  tolua_variable(param_1,"shadowBlurRadius",0,FUN_008fb67c);
  tolua_variable(param_1,"glowColor",0,FUN_008fb6bc);
  tolua_function(param_1,"setFormat",FUN_008fb700);
  tolua_function(param_1,"enableEffect",FUN_008fb7b4);
                    /* try { // try from 008d7c9c to 009d7e2f has its CatchHandler @ 008d7c9c
                       catch() { ... } // from try @ 008d7c9c with catch @ 008d7c9c
                       catch() { ... } // from try @ 008d7e58 with catch @ 008d7c9c
                       catch() { ... } // from try @ 008d7ed0 with catch @ 008d7c9c
                       catch() { ... } // from try @ 008d7f80 with catch @ 008d7c9c */
  tolua_function(param_1,"disableEffect",FUN_008fb830);
  tolua_function(param_1,"hasEffect",FUN_008fb8ac);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N8fairygui10TextFormatE");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b0591,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7d9c:
    builtin_strncpy(pcVar7,"fairygui.TextFormat",0x14);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7d9c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.TextFormat");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"TextFormat");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b0591,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar7 = (char *)(lVar3 + 0x29);
LAB_008d7eb4:
    builtin_strncpy(pcVar7,"fairygui.TextFormat",0x14);
                    /* try { // try from 008d7ec8 to 009d7ecf has its CatchHandler @ 008d7fec */
                    /* try { // try from 008d7ed0 to 009d7f77 has its CatchHandler @ 008d7c9c */
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x13;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x12 < uVar5) {
      pcVar7 = *(char **)(lVar3 + 0x38);
      goto LAB_008d7eb4;
    }
                    /* try { // try from 008d7e30 to 009d7e57 has its CatchHandler @ 008d8008 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x14 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x13,"fairygui.TextFormat");
  }
                    /* try { // try from 008d7e58 to 009d7ec7 has its CatchHandler @ 008d7c9c */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_endmodule(param_1);
LAB_008d7e7c:
  lua_settop(param_1,0xfffffffe);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

