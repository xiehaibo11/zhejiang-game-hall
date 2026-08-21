
/* seval_to_EffectDefineTemplate(se::Value const&,
   std::__ndk1::vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >,
   std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > > >*)
    */

void seval_to_EffectDefineTemplate(Value *param_1,vector *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  Object *pOVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  uint local_94;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  long local_78;
  undefined4 local_70;
  Value aVStack_68 [8];
  char local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1[8] == (Value)0x5) {
    pOVar6 = (Object *)se::Value::toObject(param_1);
    uVar7 = se::Object::isArray(pOVar6);
    if ((uVar7 & 1) != 0) {
      pOVar6 = (Object *)se::Value::toObject(param_1);
      local_94 = 0;
      se::Object::getArrayLength(pOVar6,&local_94);
      if (local_94 != 0) {
        uVar10 = 0;
        do {
          se::Value::Value(aVStack_68);
          uStack_88 = 0;
          local_90 = (void *)0x0;
          local_78 = 0;
          local_80 = (undefined8 *)0x0;
          local_70 = 0x3f800000;
          uVar5 = se::Object::getArrayElement(pOVar6,uVar10,aVStack_68);
          pvVar4 = local_90;
          puVar1 = local_80;
          if ((local_60 == '\x05' && ((uVar5 ^ 0xffffffff) & 1) == 0) &&
             (uVar7 = seval_to_ccvaluemap(aVStack_68,(unordered_map *)&local_90), pvVar4 = local_90,
             puVar1 = local_80, (uVar7 & 1) != 0)) {
            puVar1 = *(undefined8 **)(param_2 + 8);
            if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
              local_90 = (void *)0x0;
              *puVar1 = pvVar4;
              puVar1[1] = uStack_88;
              uStack_88 = 0;
              puVar1[2] = local_80;
              puVar1[3] = local_78;
              *(undefined4 *)(puVar1 + 4) = local_70;
              if (local_78 != 0) {
                uVar9 = puVar1[1];
                uVar7 = local_80[1];
                if ((uVar9 - 1 & uVar9) == 0) {
                  uVar7 = uVar9 - 1 & uVar7;
                }
                else if (uVar9 <= uVar7) {
                  uVar2 = 0;
                  if (uVar9 != 0) {
                    uVar2 = uVar7 / uVar9;
                  }
                  uVar7 = uVar7 - uVar2 * uVar9;
                }
                *(undefined8 **)((long)pvVar4 + uVar7 * 8) = puVar1 + 2;
                local_80 = (undefined8 *)0x0;
                local_78 = 0;
              }
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x28;
              pvVar4 = local_90;
              puVar1 = local_80;
            }
            else {
              std::__ndk1::
              vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>
              ::
              __push_back_slow_path<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>
                        ((vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>
                          *)param_2,(unordered_map *)&local_90);
              pvVar4 = local_90;
              puVar1 = local_80;
            }
          }
          while (puVar1 != (void *)0x0) {
            pvVar11 = (void *)*puVar1;
            local_90 = pvVar4;
            cocos2d::Value::~Value((Value *)(puVar1 + 5));
            if ((*(byte *)(puVar1 + 2) & 1) != 0) {
              operator_delete((void *)puVar1[4]);
            }
            operator_delete(puVar1);
            pvVar4 = local_90;
            puVar1 = pvVar11;
          }
          local_90 = (void *)0x0;
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
          }
          se::Value::~Value(aVStack_68);
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_94);
      }
      uVar8 = 1;
      goto LAB_008db01c;
    }
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,0x6e3,"seval_to_EffectDefineTemplate");
  __android_log_print(6,"jswrapper","Convert parameter to EffectDefineTemplate failed!");
  uVar8 = 0;
LAB_008db01c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

