
/* ccvaluevector_to_EffectPass(se::Object const*, cocos2d::Vector<cocos2d::renderer::Pass*>*) */

undefined8 ccvaluevector_to_EffectPass(Object *param_1,Vector *param_2)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  Object *this;
  ulong *puVar7;
  Pass *this_00;
  undefined4 unaff_w20;
  uint uVar8;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  uint unaff_w25;
  undefined4 unaff_w26;
  void *pvVar9;
  void *pvVar10;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ulong local_130;
  ulong local_128;
  char *local_120;
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  uint local_fc;
  Pass *local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  Value aVStack_90 [8];
  char local_88;
  Value aVStack_80 [8];
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  se::Object::getArrayLength(param_1,&local_fc);
  if (local_fc != 0) {
    uVar8 = 0;
    do {
      se::Value::Value(aVStack_80);
      uVar6 = se::Object::getArrayElement(param_1,uVar8,aVStack_80);
      if (local_78 == '\x05' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
        this = (Object *)se::Value::toObject(aVStack_80);
        se::Value::Value(aVStack_90);
        local_118 = 0;
        uStack_110 = 0;
        local_108 = (void *)0x0;
        uStack_b8 = 0;
        local_c0 = (void *)0x0;
        uStack_a8 = 0;
        local_b0 = (undefined8 *)0x0;
        local_a0 = 0x3f800000;
        uStack_e8 = 0;
        local_f0 = (void *)0x0;
        uStack_d8 = 0;
        local_e0 = (undefined8 *)0x0;
        local_d0 = 0x3f800000;
        uVar6 = se::Object::getProperty(this,"_properties",aVStack_90);
        if (local_88 == '\x05' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          seval_to_EffectProperty(aVStack_90,(unordered_map *)&local_c0);
        }
        uVar6 = se::Object::getProperty(this,"_defines",aVStack_90);
        if (local_88 == '\x05' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          seval_to_ccvaluemap(aVStack_90,(unordered_map *)&local_f0);
        }
        uVar6 = se::Object::getProperty(this,"_programName",aVStack_90);
        if ((local_88 == '\x04' && ((uVar6 ^ 0xffffffff) & 1) == 0) &&
           (puVar7 = (ulong *)se::Value::toString(aVStack_90), &local_118 != puVar7)) {
          uVar2 = puVar7[1];
          pbVar3 = (byte *)puVar7[2];
          if (((byte)*puVar7 & 1) == 0) {
            pbVar3 = (byte *)((long)puVar7 + 1);
            uVar2 = (ulong)(byte)((byte)*puVar7 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_118,(char *)pbVar3,uVar2);
        }
        this_00 = operator_new(0x108,(nothrow_t *)&std::nothrow);
        if (this_00 != (Pass *)0x0) {
          cocos2d::renderer::Pass::Pass
                    (this_00,(basic_string *)&local_118,(unordered_map *)&local_c0,
                     (unordered_map *)&local_f0);
        }
        local_130 = 0;
        local_128 = 0;
        local_120 = (char *)0x0;
        uVar6 = se::Object::getProperty(this,"_stage",aVStack_90);
        if ((local_88 == '\x04' && ((uVar6 ^ 0xffffffff) & 1) == 0) &&
           (puVar7 = (ulong *)se::Value::toString(aVStack_90), &local_130 != puVar7)) {
          uVar2 = puVar7[1];
          pbVar3 = (byte *)puVar7[2];
          if (((byte)*puVar7 & 1) == 0) {
            pbVar3 = (byte *)((long)puVar7 + 1);
            uVar2 = (ulong)(byte)((byte)*puVar7 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_130,(char *)pbVar3,uVar2);
        }
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0xf0) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_130) {
          pcVar1 = (char *)((ulong)&local_130 | 1);
          uVar2 = local_130 >> 1 & 0x7f;
          if ((local_130 & 1) != 0) {
            pcVar1 = local_120;
            uVar2 = local_128;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this_00 + 0xf0),pcVar1,uVar2);
        }
        uVar6 = se::Object::getProperty(this,"_cullMode",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          unaff_w26 = se::Value::toUint32(aVStack_90);
        }
        cocos2d::renderer::Pass::setCullMode(this_00,unaff_w26);
        uVar6 = se::Object::getProperty(this,"_blend",aVStack_90);
        if (local_88 == '\x03' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          unaff_w25 = se::Value::toBoolean(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendEq",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          unaff_w20 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendSrc",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          unaff_w24 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendDst",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          unaff_w23 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendAlphaEq",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_134 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendSrcAlpha",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_138 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendDstAlpha",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_13c = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_blendColor",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_140 = se::Value::toUint32(aVStack_90);
        }
        cocos2d::renderer::Pass::setBlend
                  (this_00,unaff_w25 & 1,unaff_w20,unaff_w24,unaff_w23,local_134,local_138,local_13c
                   ,local_140);
        uVar6 = se::Object::getProperty(this,"_depthTest",aVStack_90);
        if (local_88 == '\x03' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_144 = se::Value::toBoolean(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_depthWrite",aVStack_90);
        if (local_88 == '\x03' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_148 = se::Value::toBoolean(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_depthFunc",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_14c = se::Value::toUint32(aVStack_90);
        }
        cocos2d::renderer::Pass::setDepth(this_00,local_144 & 1,local_148 & 1,local_14c);
        uVar6 = se::Object::getProperty(this,"_stencilFuncFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_150 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilRefFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_154 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilMaskFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_158 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilFailOpFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_15c = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilZFailOpFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_160 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilZPassOpFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_164 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilWriteMaskFront",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_168 = se::Value::toUint32(aVStack_90);
        }
        cocos2d::renderer::Pass::setStencilFront
                  (this_00,local_150,local_154,local_158,local_15c,local_160,local_164,local_168);
        uVar6 = se::Object::getProperty(this,"_stencilFuncBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_16c = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilRefBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_170 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilMaskBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_174 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilFailOpBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_178 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilZFailOpBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_17c = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilZPassOpBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_180 = se::Value::toUint32(aVStack_90);
        }
        uVar6 = se::Object::getProperty(this,"_stencilWriteMaskBack",aVStack_90);
        if (local_88 == '\x02' && ((uVar6 ^ 0xffffffff) & 1) == 0) {
          local_184 = se::Value::toUint32(aVStack_90);
        }
        cocos2d::renderer::Pass::setStencilBack
                  (this_00,local_16c,local_170,local_174,local_178,local_17c,local_180,local_184);
        cocos2d::Ref::autorelease((Ref *)this_00);
        local_f8 = this_00;
        if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) {
          std::__ndk1::
          vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
          __push_back_slow_path<cocos2d::renderer::Pass*const&>
                    ((vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>
                      *)param_2,&local_f8);
        }
        else {
          **(undefined8 **)(param_2 + 8) = this_00;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
        }
        cocos2d::Ref::retain((Ref *)local_f8);
        pvVar10 = local_f0;
        puVar5 = local_e0;
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
          pvVar10 = local_f0;
          puVar5 = local_e0;
        }
        while (puVar5 != (void *)0x0) {
          pvVar9 = (void *)*puVar5;
          local_f0 = pvVar10;
          cocos2d::Value::~Value((Value *)(puVar5 + 5));
          if ((*(byte *)(puVar5 + 2) & 1) != 0) {
            operator_delete((void *)puVar5[4]);
          }
          operator_delete(puVar5);
          pvVar10 = local_f0;
          puVar5 = pvVar9;
        }
        local_f0 = (void *)0x0;
        pvVar9 = local_c0;
        puVar5 = local_b0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
          pvVar9 = local_c0;
          puVar5 = local_b0;
        }
        while (puVar5 != (void *)0x0) {
          pvVar10 = (void *)*puVar5;
          local_c0 = pvVar9;
          cocos2d::renderer::Technique::Parameter::~Parameter((Parameter *)(puVar5 + 3));
          operator_delete(puVar5);
          pvVar9 = local_c0;
          puVar5 = pvVar10;
        }
        local_c0 = (void *)0x0;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
        if ((local_118 & 1) != 0) {
          operator_delete(local_108);
        }
        se::Value::~Value(aVStack_90);
      }
      se::Value::~Value(aVStack_80);
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_fc);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

