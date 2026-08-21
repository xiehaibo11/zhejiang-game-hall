
/* js_register_spine_initSkeletonDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_register_spine_initSkeletonDataRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  int *piVar2;
  Data *pDVar3;
  uint uVar4;
  long lVar5;
  SkeletonDataMgr *this;
  Value *pVVar6;
  Data *__src;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  type *ptVar12;
  Value *pVVar13;
  Atlas *this_00;
  Cocos2dAtlasAttachmentLoader *this_01;
  char *pcVar14;
  int *piVar15;
  SkeletonData *pSVar16;
  Data *__dest;
  uchar *puVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  Isolate *pIVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  size_t sVar25;
  Value *local_1c0;
  Value *local_1b8;
  Value *local_1b0;
  HandleScope aHStack_1a8 [24];
  byte local_190 [16];
  void *local_180;
  Data aDStack_178 [20];
  float local_164;
  ulong local_160;
  undefined8 local_158;
  char *local_150;
  ulong local_148;
  ulong local_140;
  char *local_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  State aSStack_118 [40];
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  float local_c0;
  float local_a8;
  void *local_a0;
  long lStack_98;
  undefined8 *local_90;
  long local_88;
  undefined4 local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar22 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_1a8,pIVar22);
  local_1c0 = operator_new(0xa0);
  local_1b0 = local_1c0 + 0xa0;
  local_1b8 = local_1c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_1c0);
  pvVar10 = (void *)se::internal::getPrivate(pIVar22,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_118,pvVar10,(vector *)&local_1c0);
  plVar11 = (long *)se::State::args(aSStack_118);
  uVar19 = (ulong)(plVar11[1] - *plVar11) >> 4;
  if ((int)uVar19 == 5) {
    local_130 = 0;
    uStack_128 = 0;
    local_120 = (void *)0x0;
    uVar19 = seval_to_std_string((Value *)*plVar11,(basic_string *)&local_130);
    if ((uVar19 & 1) != 0) {
      if (spine::SkeletonDataMgr::_instance == (SkeletonDataMgr *)0x0) {
        spine::SkeletonDataMgr::_instance = operator_new(0x60);
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x30) = 0;
        *(undefined ***)spine::SkeletonDataMgr::_instance = &PTR__SkeletonDataMgr_01c8cea8;
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x48) = 0;
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x50) = 0;
        *(SkeletonDataMgr **)(spine::SkeletonDataMgr::_instance + 0x40) =
             spine::SkeletonDataMgr::_instance + 0x48;
      }
      this = spine::SkeletonDataMgr::_instance;
      uVar19 = spine::SkeletonDataMgr::hasSkeletonData
                         (spine::SkeletonDataMgr::_instance,(basic_string *)&local_130);
      if ((uVar19 & 1) != 0) {
        ptVar12 = (type *)spine::SkeletonDataMgr::retainByUUID(this,(basic_string *)&local_130);
        pVVar13 = (Value *)se::State::rval(aSStack_118);
        native_ptr_to_rooted_seval<spine::SkeletonData>(ptVar12,pVVar13,(bool *)0x0);
        bVar7 = true;
        goto joined_r0x00c0f4a0;
      }
      local_148 = 0;
      local_140 = 0;
      local_138 = (char *)0x0;
      uVar19 = seval_to_std_string((Value *)(*plVar11 + 0x10),(basic_string *)&local_148);
      if ((uVar19 & 1) != 0) {
        local_160 = 0;
        local_158 = 0;
        local_150 = (char *)0x0;
        uVar19 = seval_to_std_string((Value *)(*plVar11 + 0x20),(basic_string *)&local_160);
        if ((uVar19 & 1) != 0) {
          lStack_98 = 0;
          local_a0 = (void *)0x0;
          local_88 = 0;
          local_90 = (undefined8 *)0x0;
          local_80 = 0x3f800000;
          bVar7 = seval_to_Map_string_key<cocos2d::middleware::Texture2D*>
                            ((Value *)(*plVar11 + 0x30),(Map *)&local_a0);
          if (bVar7) {
            local_164 = 1.0;
            uVar19 = seval_to_float((Value *)(*plVar11 + 0x40),&local_164);
            if ((uVar19 & 1) != 0) {
              DAT_01d3be98 = &local_a0;
              spine::spAtlasPage_setCustomTextureLoader(FUN_00c10710);
              this_00 = spine::SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                                   ,0x6c);
              bVar7 = (local_160 & 1) != 0;
              pcVar18 = (char *)((ulong)&local_160 | 1);
              if (bVar7) {
                pcVar18 = local_150;
              }
              uVar4 = (uint)((byte)local_160._0_1_ >> 1);
              if (bVar7) {
                uVar4 = (uint)local_158;
              }
              spine::Atlas::Atlas(this_00,pcVar18,uVar4,"",(TextureLoader *)&DAT_01d3be90,true);
              DAT_01d3be98 = (void **)0x0;
              spine::spAtlasPage_setCustomTextureLoader((_func_Texture2D_ptr_char_ptr *)0x0);
              this_01 = spine::SpineObject::operator_new
                                  (0x10,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                                   ,0x71);
              spine::Cocos2dAtlasAttachmentLoader::Cocos2dAtlasAttachmentLoader(this_01,this_00);
              pcVar18 = (char *)((ulong)&local_148 | 1);
              uVar19 = local_148 >> 1 & 0x7f;
              if ((local_148 & 1) != 0) {
                pcVar18 = local_138;
                uVar19 = local_140;
              }
              if (uVar19 < 5) {
LAB_00c0f694:
                if (3 < uVar19) goto LAB_00c0f7ec;
              }
              else {
                pcVar1 = pcVar18 + uVar19;
                pcVar14 = pcVar1 + -5;
                lVar21 = (long)pcVar1 - (long)pcVar14;
                if (4 < lVar21) {
                  do {
                    if ((lVar21 - 4U == 0) ||
                       (pcVar14 = memchr(pcVar14,0x2e,lVar21 - 4U), pcVar14 == (char *)0x0)) break;
                    iVar9 = memcmp(pcVar14,".skel",5);
                    if (iVar9 == 0) {
                      if ((pcVar14 != pcVar1) && ((long)pcVar14 - (long)pcVar18 != -1))
                      goto LAB_00c0fa08;
                      break;
                    }
                    pcVar14 = pcVar14 + 1;
                    lVar21 = (long)pcVar1 - (long)pcVar14;
                  } while (4 < lVar21);
                  goto LAB_00c0f694;
                }
LAB_00c0f7ec:
                piVar2 = (int *)(pcVar18 + uVar19);
                piVar15 = piVar2 + -1;
                while( true ) {
                  if ((((long)piVar2 - (long)piVar15 < 4) ||
                      (sVar25 = ((long)piVar2 - (long)piVar15) - 3, sVar25 == 0)) ||
                     (piVar15 = memchr(piVar15,0x2e,sVar25), piVar15 == (int *)0x0))
                  goto LAB_00c0f894;
                  if (*piVar15 == 0x6e69622e) break;
                  piVar15 = (int *)((long)piVar15 + 1);
                }
                if ((piVar15 != piVar2) && ((long)piVar15 - (long)pcVar18 != -1)) goto LAB_00c0fa08;
              }
LAB_00c0f894:
              spine::SkeletonJson::SkeletonJson
                        ((SkeletonJson *)&local_f0,(AttachmentLoader *)this_01);
              pcVar18 = (char *)((ulong)&local_148 | 1);
              if ((local_148 & 1) != 0) {
                pcVar18 = local_138;
              }
              local_c0 = local_164;
              pSVar16 = (SkeletonData *)
                        spine::SkeletonJson::readSkeletonData((SkeletonJson *)&local_f0,pcVar18);
              spine::SkeletonJson::~SkeletonJson((SkeletonJson *)&local_f0);
              goto joined_r0x00c0fad0;
            }
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                                ,0x65,"js_register_spine_initSkeletonData");
            pcVar18 = "js_register_spine_initSkeletonData: Invalid scale!";
          }
          else {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                                ,0x61,"js_register_spine_initSkeletonData");
            pcVar18 = "js_register_spine_initSkeletonData: Invalid textures!";
          }
          __android_log_print(6,"jswrapper",pcVar18);
          bVar7 = false;
          puVar23 = local_90;
          goto joined_r0x00c0f7d0;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                            ,0x5d,"js_register_spine_initSkeletonData");
        __android_log_print(6,"jswrapper",
                            "js_register_spine_initSkeletonData: Invalid atlas content!");
        bVar7 = false;
        goto joined_r0x00c0fbb4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                          ,0x59,"js_register_spine_initSkeletonData");
      __android_log_print(6,"jswrapper","js_register_spine_initSkeletonData: Invalid json path!");
      bVar7 = false;
      goto joined_r0x00c0f6ec;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                        ,0x4d,"js_register_spine_initSkeletonData");
    __android_log_print(6,"jswrapper","js_register_spine_initSkeletonData: Invalid uuid content!");
    bVar7 = false;
    goto joined_r0x00c0f4a0;
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp, 70): wrong number of arguments: %d, was expecting %d\n"
                      ,uVar19,5);
  goto LAB_00c0f4a8;
LAB_00c0fa08:
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  uVar19 = (**(code **)(*plVar11 + 0xf8))(plVar11,&local_148);
  if ((uVar19 & 1) == 0) {
LAB_00c0fad4:
    if (this_00 != (Atlas *)0x0) {
      (**(code **)(*(long *)this_00 + 8))();
    }
    if (this_01 != (Cocos2dAtlasAttachmentLoader *)0x0) {
      (**(code **)(*(long *)this_01 + 8))(this_01);
    }
  }
  else {
    cocos2d::Data::Data(aDStack_178);
    (**(code **)(*plVar11 + 0x40))(local_190,plVar11,&local_148);
    local_f0 = (Data *)&PTR__ResizableBuffer_01c66e48;
    local_e8 = aDStack_178;
    (**(code **)(*plVar11 + 0x28))(plVar11,local_190,&local_f0);
    spine::SkeletonBinary::SkeletonBinary((SkeletonBinary *)&local_f0,(AttachmentLoader *)this_01);
    local_a8 = local_164;
    puVar17 = (uchar *)cocos2d::Data::getBytes(aDStack_178);
    iVar9 = cocos2d::Data::getSize(aDStack_178);
    pSVar16 = (SkeletonData *)
              spine::SkeletonBinary::readSkeletonData((SkeletonBinary *)&local_f0,puVar17,iVar9);
    spine::SkeletonBinary::~SkeletonBinary((SkeletonBinary *)&local_f0);
    if ((local_190[0] & 1) != 0) {
      operator_delete(local_180);
    }
    cocos2d::Data::~Data(aDStack_178);
joined_r0x00c0fad0:
    if (pSVar16 == (SkeletonData *)0x0) goto LAB_00c0fad4;
    local_f0 = (Data *)0x0;
    local_e8 = (Data *)0x0;
    local_e0 = (Data *)0x0;
    for (puVar23 = local_90; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
      uVar8 = cocos2d::middleware::Texture2D::getRealTextureIndex((Texture2D *)puVar23[5]);
      __src = local_f0;
      if (local_e8 < local_e0) {
        *(undefined4 *)local_e8 = uVar8;
        local_e8 = local_e8 + 4;
      }
      else {
        sVar25 = (long)local_e8 - (long)local_f0;
        uVar19 = ((long)sVar25 >> 2) + 1;
        if (uVar19 >> 0x3e != 0) {
LAB_00c0fbf8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)((long)local_e0 - (long)local_f0 >> 2) < 0x1fffffffffffffff) {
          uVar20 = (long)local_e0 - (long)local_f0 >> 1;
          if (uVar19 <= uVar20) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            if (uVar19 >> 0x3e != 0) goto LAB_00c0fbf8;
            goto LAB_00c0f960;
          }
          __dest = (Data *)0x0;
        }
        else {
          uVar19 = 0x3fffffffffffffff;
LAB_00c0f960:
          __dest = operator_new(uVar19 << 2);
        }
        pDVar3 = __dest + ((long)sVar25 >> 2) * 4;
        *(undefined4 *)pDVar3 = uVar8;
        if (0 < (long)sVar25) {
          memcpy(__dest,__src,sVar25);
        }
        local_f0 = __dest;
        local_e8 = pDVar3 + 4;
        local_e0 = __dest + uVar19 * 4;
        if (__src != (Data *)0x0) {
          operator_delete(__src);
        }
      }
    }
    spine::SkeletonDataMgr::setSkeletonData
              (this,(basic_string *)&local_130,pSVar16,this_00,(AttachmentLoader *)this_01,
               (vector *)&local_f0);
    pVVar13 = (Value *)se::State::rval(aSStack_118);
    native_ptr_to_rooted_seval<spine::SkeletonData>((type *)pSVar16,pVVar13,(bool *)0x0);
    if (local_f0 != (Data *)0x0) {
      local_e8 = local_f0;
      operator_delete(local_f0);
    }
  }
  bVar7 = true;
  puVar23 = local_90;
joined_r0x00c0f7d0:
  for (; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
    cocos2d::Ref::release((Ref *)puVar23[5]);
  }
  puVar23 = local_90;
  pvVar10 = local_a0;
  lVar21 = 0;
  if (local_88 != 0) {
    while (puVar23 != (void *)0x0) {
      pvVar10 = (void *)*puVar23;
      if ((*(byte *)(puVar23 + 2) & 1) != 0) {
        operator_delete((void *)puVar23[4]);
      }
      operator_delete(puVar23);
      puVar23 = pvVar10;
    }
    local_90 = (undefined8 *)0x0;
    if (lStack_98 != 0) {
      lVar21 = 0;
      do {
        *(undefined8 *)((long)local_a0 + lVar21 * 8) = 0;
        lVar21 = lVar21 + 1;
      } while (lStack_98 != lVar21);
    }
    local_88 = 0;
    pvVar10 = local_a0;
    puVar23 = local_90;
    lVar21 = local_88;
  }
  while (local_88 = lVar21, puVar23 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)*puVar23;
    local_a0 = pvVar10;
    if ((*(byte *)(puVar23 + 2) & 1) != 0) {
      operator_delete((void *)puVar23[4]);
    }
    operator_delete(puVar23);
    pvVar10 = local_a0;
    puVar23 = puVar24;
    lVar21 = local_88;
  }
  local_a0 = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
joined_r0x00c0fbb4:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
joined_r0x00c0f6ec:
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
joined_r0x00c0f4a0:
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (bVar7) goto LAB_00c0f4d4;
LAB_00c0f4a8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_register_spine_initSkeletonData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                      ,0xa0);
LAB_00c0f4d4:
  pVVar13 = (Value *)se::State::rval(aSStack_118);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_118);
  pVVar6 = local_1c0;
  pVVar13 = local_1b8;
  if (local_1c0 != (Value *)0x0) {
    while (pVVar13 != pVVar6) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_1b8 = pVVar6;
    operator_delete(local_1c0);
  }
  v8::HandleScope::~HandleScope(aHStack_1a8);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

