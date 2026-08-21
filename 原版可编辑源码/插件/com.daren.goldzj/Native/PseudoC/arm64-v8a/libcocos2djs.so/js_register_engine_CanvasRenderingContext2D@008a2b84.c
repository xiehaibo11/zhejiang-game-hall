
/* js_register_engine_CanvasRenderingContext2D(se::Object*) */

undefined8 js_register_engine_CanvasRenderingContext2D(Object *param_1)

{
  long lVar1;
  Class *this;
  Class *local_50;
  undefined8 uStack_48;
  char *local_40;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = operator_new(0x20);
  uStack_48 = 0x18;
  local_50 = (Class *)0x21;
  builtin_strncpy(local_40,"CanvasRenderingContext2D",0x19);
  this = (Class *)se::Class::create((basic_string *)&local_50,param_1,(Object *)0x0,
                                    js_engine_CanvasRenderingContext2D_constructorRegistry);
  if (((ulong)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  se::Class::defineFunction(this,"restore",js_engine_CanvasRenderingContext2D_restoreRegistry);
  se::Class::defineFunction(this,"moveTo",js_engine_CanvasRenderingContext2D_moveToRegistry);
  se::Class::defineFunction(this,"lineTo",js_engine_CanvasRenderingContext2D_lineToRegistry);
  se::Class::defineFunction
            (this,"setPremultiply",js_engine_CanvasRenderingContext2D_setPremultiplyRegistry);
  se::Class::defineFunction
            (this,"setTransform",js_engine_CanvasRenderingContext2D_setTransformRegistry);
  se::Class::defineFunction(this,"stroke",js_engine_CanvasRenderingContext2D_strokeRegistry);
  se::Class::defineFunction
            (this,"measureText",js_engine_CanvasRenderingContext2D_measureTextRegistry);
  se::Class::defineFunction(this,"fill",js_engine_CanvasRenderingContext2D_fillRegistry);
  se::Class::defineFunction
            (this,"_fillImageData",js_engine_CanvasRenderingContext2D__fillImageDataRegistry);
  se::Class::defineFunction(this,"scale",js_engine_CanvasRenderingContext2D_scaleRegistry);
  se::Class::defineFunction(this,"clearRect",js_engine_CanvasRenderingContext2D_clearRectRegistry);
  se::Class::defineFunction(this,"transform",js_engine_CanvasRenderingContext2D_transformRegistry);
  se::Class::defineFunction(this,"fillText",js_engine_CanvasRenderingContext2D_fillTextRegistry);
  se::Class::defineFunction(this,"strokeText",js_engine_CanvasRenderingContext2D_strokeTextRegistry)
  ;
  se::Class::defineFunction(this,"save",js_engine_CanvasRenderingContext2D_saveRegistry);
  se::Class::defineFunction(this,"fillRect",js_engine_CanvasRenderingContext2D_fillRectRegistry);
  se::Class::defineFunction(this,"rotate",js_engine_CanvasRenderingContext2D_rotateRegistry);
  se::Class::defineFunction(this,"beginPath",js_engine_CanvasRenderingContext2D_beginPathRegistry);
  se::Class::defineFunction(this,"rect",js_engine_CanvasRenderingContext2D_rectRegistry);
  se::Class::defineFunction(this,"translate",js_engine_CanvasRenderingContext2D_translateRegistry);
  se::Class::defineFunction
            (this,"createLinearGradient",
             js_engine_CanvasRenderingContext2D_createLinearGradientRegistry);
  se::Class::defineFunction(this,"closePath",js_engine_CanvasRenderingContext2D_closePathRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_CanvasRenderingContext2D_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x185b041;
  local_50 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_CanvasRenderingContext2D_proto = se::Class::getProto(this);
  __jsb_cocos2d_CanvasRenderingContext2D_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

