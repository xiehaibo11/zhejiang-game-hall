
/* seval_to_Mat4(se::Value const&, cocos2d::Mat4*) */

void seval_to_Mat4(Value *param_1,Mat4 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Object *this;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  char *pcVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  uchar *local_d0;
  undefined8 local_c8;
  char *local_c0;
  ulong local_b8;
  ulong local_b0;
  char *local_a8;
  Value aVStack_a0 [8];
  char local_98;
  byte local_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 local_88;
  undefined1 uStack_81;
  char *local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar13 = se::Object::isTypedArray(this);
    if ((uVar13 & 1) == 0) {
      se::Value::Value(aVStack_a0);
      local_b0 = 0;
      local_a8 = (char *)0x0;
      local_b8 = 0x6d02;
      uVar13 = 0;
      pcVar16 = (char *)((ulong)&local_d0 | 1);
      uVar15 = extraout_x1;
      do {
        local_d0 = (uchar *)0x0;
        local_c8 = 0;
        local_c0 = (undefined1 *)0x0;
        if (uVar13 < 10) {
          FUN_008d57d4(local_e8,&local_b8,"0");
          std::__ndk1::to_string((__ndk1 *)(uVar13 & 0xffffffff),extraout_w1);
          uVar1 = (ulong)(local_90 >> 1);
          pcVar2 = (char *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            uVar1 = CONCAT17(uStack_81,local_88);
            pcVar2 = local_80;
          }
          puVar14 = (undefined8 *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_e8,pcVar2,uVar1);
          pcVar2 = (char *)puVar14[2];
          uVar3 = *(undefined1 *)puVar14;
          uStack_70 = (undefined7)((ulong)puVar14[1] >> 8);
          uStack_78 = (undefined7)*(undefined8 *)((long)puVar14 + 1);
          local_71 = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 1) >> 0x38);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          if (((ulong)local_d0 & 1) == 0) {
            local_d0 = (uchar *)((ulong)local_d0 & 0xffffffffffff0000);
          }
          else {
            *local_c0 = 0;
            local_c8 = 0;
            if (((ulong)local_d0 & 1) != 0) {
              operator_delete(local_c0);
              local_d0 = (uchar *)0x0;
            }
          }
          uVar15 = CONCAT71(uStack_70,local_71);
          local_d0 = (uchar *)CONCAT71(local_d0._1_7_,uVar3);
          uStack_70 = 0;
          *(undefined8 *)(pcVar16 + 7) = uVar15;
          *(ulong *)pcVar16 = CONCAT17(local_71,uStack_78);
          uStack_78 = 0;
          local_71 = 0;
          local_c0 = pcVar2;
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          std::__ndk1::to_string((__ndk1 *)(uVar13 & 0xffffffff),(uint)uVar15);
          uVar1 = local_b8 >> 1 & 0x7f;
          pcVar2 = (char *)((ulong)&local_b8 | 1);
          if ((local_b8 & 1) != 0) {
            uVar1 = local_b0;
            pcVar2 = local_a8;
          }
          puVar14 = (undefined8 *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_e8,0,pcVar2,uVar1);
          pcVar2 = (char *)puVar14[2];
          uVar15 = *(undefined8 *)((long)puVar14 + 1);
          uVar3 = *(undefined1 *)puVar14;
          local_88 = (undefined7)((ulong)puVar14[1] >> 8);
          local_90 = (byte)uVar15;
          uStack_8f = (undefined6)((ulong)uVar15 >> 8);
          uStack_89 = (undefined1)((ulong)uVar15 >> 0x38);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          if (((ulong)local_d0 & 1) == 0) {
            local_d0 = (uchar *)((ulong)local_d0 & 0xffffffffffff0000);
          }
          else {
            *local_c0 = 0;
            local_c8 = 0;
            if (((ulong)local_d0 & 1) != 0) {
              operator_delete(local_c0);
              local_d0 = (uchar *)0x0;
            }
          }
          uVar15 = CONCAT71(local_88,uStack_89);
          local_d0 = (uchar *)CONCAT71(local_d0._1_7_,uVar3);
          local_88 = 0;
          *(undefined8 *)(pcVar16 + 7) = uVar15;
          *(ulong *)pcVar16 = CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90));
          local_90 = 0;
          uStack_8f = 0;
          uStack_89 = 0;
          local_c0 = pcVar2;
        }
        if (((byte)local_e8[0] & 1) != 0) {
          operator_delete(local_d8);
        }
        pcVar2 = pcVar16;
        if (((ulong)local_d0 & 1) != 0) {
          pcVar2 = local_c0;
        }
        auVar18 = se::Object::getProperty(this,pcVar2,aVStack_a0);
        uVar15 = auVar18._8_8_;
        if ((auVar18._0_8_ & 1) == 0) {
LAB_008d5678:
          uVar12 = cocos2d::Mat4::IDENTITY._56_8_;
          uVar11 = cocos2d::Mat4::IDENTITY._48_8_;
          uVar10 = cocos2d::Mat4::IDENTITY._32_8_;
          uVar9 = cocos2d::Mat4::IDENTITY._24_8_;
          uVar8 = cocos2d::Mat4::IDENTITY._16_8_;
          uVar7 = cocos2d::Mat4::IDENTITY._8_8_;
          uVar6 = cocos2d::Mat4::IDENTITY._0_8_;
          bVar5 = true;
          *(undefined8 *)(param_2 + 0x28) = cocos2d::Mat4::IDENTITY._40_8_;
          *(undefined8 *)(param_2 + 0x20) = uVar10;
          *(undefined8 *)(param_2 + 0x38) = uVar12;
          *(undefined8 *)(param_2 + 0x30) = uVar11;
          *(undefined8 *)(param_2 + 8) = uVar7;
          *(undefined8 *)param_2 = uVar6;
          *(undefined8 *)(param_2 + 0x18) = uVar9;
          *(undefined8 *)(param_2 + 0x10) = uVar8;
        }
        else {
          if (local_98 != '\x02') {
            __android_log_print(6,"jswrapper",
                                "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp, 378): %u, not supported type in matrix\n"
                                ,uVar13 & 0xffffffff);
            uVar15 = extraout_x1_01;
            goto LAB_008d5678;
          }
          uVar17 = se::Value::toFloat(aVStack_a0);
          *(undefined4 *)(param_2 + uVar13 * 4) = uVar17;
          se::Value::setUndefined(aVStack_a0);
          bVar5 = false;
          uVar15 = extraout_x1_00;
        }
        if (((ulong)local_d0 & 1) != 0) {
          operator_delete(local_c0);
          uVar15 = extraout_x1_02;
        }
        if (bVar5) {
          bVar5 = true;
          goto joined_r0x008d56c4;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x10);
      bVar5 = false;
joined_r0x008d56c4:
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      se::Value::~Value(aVStack_a0);
      if (bVar5) {
        uVar15 = 0;
        goto LAB_008d56e8;
      }
    }
    else {
      uVar13 = se::Object::isTypedArray(this);
      if ((uVar13 & 1) == 0) {
        uVar15 = 0x15a;
        goto LAB_008d5424;
      }
      local_b8 = 0;
      local_d0 = (uchar *)0x0;
      se::Object::getTypedArrayData(this,&local_d0,&local_b8);
      memcpy(param_2,local_d0,local_b8);
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 0x154;
LAB_008d5424:
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,uVar15,"seval_to_Mat4");
    __android_log_print(6,"jswrapper","Convert parameter to Matrix4 failed!");
    uVar15 = 0;
  }
LAB_008d56e8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

