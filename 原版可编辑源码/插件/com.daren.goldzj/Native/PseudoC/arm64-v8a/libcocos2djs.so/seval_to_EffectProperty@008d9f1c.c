
/* seval_to_EffectProperty(se::Value const&, std::__ndk1::unordered_map<unsigned long,
   cocos2d::renderer::Technique::Parameter, std::__ndk1::hash<unsigned long>,
   std::__ndk1::equal_to<unsigned long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long
   const, cocos2d::renderer::Technique::Parameter> > >*) */

void seval_to_EffectProperty(Value *param_1,unordered_map *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  Object *this;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  void *pvVar11;
  ulong local_c8;
  byte *local_c0;
  byte *local_b8;
  undefined8 local_b0;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_a8 [8];
  Parameter aPStack_a0 [72];
  Value aVStack_58 [8];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((byte)param_1[8] < 2) {
    if (*(long *)(param_2 + 0x18) != 0) {
      puVar3 = *(void **)(param_2 + 0x10);
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        cocos2d::renderer::Technique::Parameter::~Parameter((Parameter *)(puVar3 + 3));
        operator_delete(puVar3);
        puVar3 = pvVar11;
      }
      lVar8 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0x10) = 0;
      if (lVar8 != 0) {
        lVar9 = 0;
        do {
          *(undefined8 *)(*(long *)param_2 + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  else {
    if (param_1[8] != (Value)0x5) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                          ,0x6ca,"seval_to_EffectProperty");
      __android_log_print(6,"jswrapper","Convert parameter to EffectProperty failed!");
      uVar6 = 0;
      goto LAB_008da110;
    }
    this = (Object *)se::Value::toObject(param_1);
    local_c0 = (byte *)0x0;
    local_b8 = (byte *)0x0;
    local_b0 = 0;
    se::Object::getAllKeys(this,(vector *)&local_c0);
    pbVar4 = local_b8;
    pbVar7 = local_c0;
    for (pbVar10 = local_c0; local_c0 = pbVar7, pbVar10 != pbVar4; pbVar10 = pbVar10 + 0x18) {
      se::Value::Value(aVStack_58);
      if ((*pbVar10 & 1) == 0) {
        pbVar7 = pbVar10 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar10 + 0x10);
      }
      uVar5 = se::Object::getProperty(this,(char *)pbVar7,aVStack_58);
      if (local_50 == '\x05' && ((uVar5 ^ 0xffffffff) & 1) == 0) {
        cocos2d::renderer::Technique::Parameter::Parameter(aPStack_a0);
        seval_to_TechniqueParameter(aVStack_58,aPStack_a0);
        uVar1 = *(ulong *)(pbVar10 + 8);
        pbVar7 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar7 = pbVar10 + 1;
          uVar1 = (ulong)(*pbVar10 >> 1);
        }
        local_c8 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                             (a_Stack_a8,pbVar7,uVar1);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
        ::
        __emplace_unique_key_args<unsigned_long,unsigned_long&,cocos2d::renderer::Technique::Parameter&>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
                    *)param_2,&local_c8,&local_c8,aPStack_a0);
        cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_a0);
      }
      se::Value::~Value(aVStack_58);
      pbVar7 = local_c0;
    }
    pbVar10 = local_b8;
    if (pbVar7 != (byte *)0x0) {
      while (pbVar4 = pbVar10, pbVar4 != pbVar7) {
        pbVar10 = pbVar4 + -0x18;
        if ((*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
      }
      local_b8 = pbVar7;
      operator_delete(local_c0);
    }
  }
  uVar6 = 1;
LAB_008da110:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

