
/* seval_to_TextureOptions(se::Value const&, cocos2d::renderer::Texture::Options*) */

void seval_to_TextureOptions(Value *param_1,Options *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  Options OVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  Object *this;
  ulong uVar10;
  Object *pOVar11;
  Object *pOVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  uchar *local_90;
  ulong uStack_88;
  uint local_7c;
  Value aVStack_78 [8];
  byte local_70;
  Value aVStack_68 [8];
  char local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x4f8,"seval_to_TextureOptions");
    __android_log_print(6,"jswrapper","Convert parameter to TextureOption failed!");
    uVar13 = 0;
    goto LAB_008d8f8c;
  }
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_68);
  uVar10 = se::Object::getProperty(this,"images",aVStack_68);
  if (((uVar10 & 1) != 0) && (local_60 == '\x05')) {
    pOVar11 = (Object *)se::Value::toObject(aVStack_68);
    uVar10 = se::Object::isArray(pOVar11);
    if ((uVar10 & 1) != 0) {
      local_7c = 0;
      pOVar11 = (Object *)se::Value::toObject(aVStack_68);
      uVar10 = se::Object::getArrayLength(pOVar11,&local_7c);
      if ((uVar10 & 1) != 0) {
        se::Value::Value(aVStack_78);
        if (local_7c != 0) {
          uVar7 = 0;
          do {
            uVar10 = se::Object::getArrayElement(pOVar11,uVar7,aVStack_78);
            if ((uVar10 & 1) != 0) {
              if (local_70 == 5) {
                pOVar12 = (Object *)se::Value::toObject(aVStack_78);
                uVar10 = se::Object::isTypedArray(pOVar12);
                if ((uVar10 & 1) == 0) goto LAB_008d88ec;
                local_90 = (uchar *)0x0;
                uStack_88 = 0;
                pOVar12 = (Object *)se::Value::toObject(aVStack_78);
                se::Object::getTypedArrayData(pOVar12,&local_90,&uStack_88);
                puVar15 = *(undefined8 **)(param_2 + 8);
                if (puVar15 == *(undefined8 **)(param_2 + 0x10)) {
                  std::__ndk1::
                  vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                  ::__push_back_slow_path<cocos2d::renderer::Texture::Image_const&>
                            ((vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                              *)param_2,(Image *)&local_90);
                  goto LAB_008d893c;
                }
LAB_008d8904:
                puVar15[1] = uStack_88;
                *puVar15 = local_90;
                *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
              }
              else {
LAB_008d88ec:
                if (local_70 == 1) {
                  local_90 = (uchar *)0x0;
                  uStack_88 = 0;
                  puVar15 = *(undefined8 **)(param_2 + 8);
                  if (puVar15 < *(undefined8 **)(param_2 + 0x10)) goto LAB_008d8904;
                  std::__ndk1::
                  vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                  ::__push_back_slow_path<cocos2d::renderer::Texture::Image>
                            ((vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                              *)param_2,(Image *)&local_90);
                }
                else {
                  __android_log_print(6,"jswrapper",
                                      "Texture image isn\'t a typed array object or null!");
                }
              }
            }
LAB_008d893c:
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_7c);
        }
        se::Value::~Value(aVStack_78);
      }
    }
  }
  se::Value::Value(aVStack_78);
  uVar10 = se::Object::getProperty(this,"genMipmaps",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 2) {
      iVar9 = se::Value::toInt32(aVStack_78);
      bVar3 = iVar9 != 0;
    }
    else if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
    }
    else if (local_70 < 2) {
LAB_008d8a38:
      bVar3 = 0;
    }
    else if (local_70 == 5) {
      bVar3 = 1;
    }
    else {
      if (local_70 != 4) goto LAB_008d8a38;
      pbVar14 = (byte *)se::Value::toString(aVStack_78);
      uVar10 = (ulong)(*pbVar14 >> 1);
      if ((*pbVar14 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar14 + 8);
      }
      bVar3 = uVar10 != 0;
    }
    param_2[0x35] = (Options)(bVar3 & 1);
  }
  uVar10 = se::Object::getProperty(this,"width",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 3) {
      uVar5 = se::Value::toBoolean(aVStack_78);
      uVar5 = uVar5 & 1;
    }
    else if (local_70 == 2) {
      uVar5 = se::Value::toUint16(aVStack_78);
    }
    else {
      uVar5 = 0;
    }
    *(ushort *)(param_2 + 0x28) = uVar5;
  }
  uVar10 = se::Object::getProperty(this,"height",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 3) {
      uVar5 = se::Value::toBoolean(aVStack_78);
      uVar5 = uVar5 & 1;
    }
    else if (local_70 == 2) {
      uVar5 = se::Value::toUint16(aVStack_78);
    }
    else {
      uVar5 = 0;
    }
    *(ushort *)(param_2 + 0x2a) = uVar5;
  }
  uVar10 = se::Object::getProperty(this,"glInternalFormat",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 3) {
      uVar7 = se::Value::toBoolean(aVStack_78);
      uVar7 = uVar7 & 1;
    }
    else if (local_70 == 2) {
      uVar7 = se::Value::toUint32(aVStack_78);
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(param_2 + 0x1c) = uVar7;
  }
  uVar10 = se::Object::getProperty(this,"glFormat",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 3) {
      uVar7 = se::Value::toBoolean(aVStack_78);
      uVar7 = uVar7 & 1;
    }
    else if (local_70 == 2) {
      uVar7 = se::Value::toUint32(aVStack_78);
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(param_2 + 0x20) = uVar7;
  }
  uVar10 = se::Object::getProperty(this,"glType",aVStack_78);
  if ((uVar10 & 1) != 0) {
    if (local_70 == 3) {
      uVar7 = se::Value::toBoolean(aVStack_78);
      uVar7 = uVar7 & 1;
    }
    else if (local_70 == 2) {
      uVar7 = se::Value::toUint32(aVStack_78);
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(param_2 + 0x24) = uVar7;
  }
  uVar10 = se::Object::getProperty(this,"anisotropy",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      uVar7 = se::Value::toBoolean(aVStack_78);
      *(uint *)(param_2 + 0x18) = uVar7 & 1;
    }
    else if (local_70 == 2) {
      uVar8 = se::Value::toInt32(aVStack_78);
      *(undefined4 *)(param_2 + 0x18) = uVar8;
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
  }
  uVar10 = se::Object::getProperty(this,"minFilter",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x32] = (Options)(bVar3 & 1);
    }
    else if (local_70 == 2) {
      OVar4 = (Options)se::Value::toInt8(aVStack_78);
      param_2[0x32] = OVar4;
    }
    else {
      param_2[0x32] = (Options)0x0;
    }
  }
  uVar10 = se::Object::getProperty(this,"magFilter",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x33] = (Options)(bVar3 & 1);
    }
    else if (local_70 == 2) {
      OVar4 = (Options)se::Value::toInt8(aVStack_78);
      param_2[0x33] = OVar4;
    }
    else {
      param_2[0x33] = (Options)0x0;
    }
  }
  uVar10 = se::Object::getProperty(this,"mipFilter",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x34] = (Options)(bVar3 & 1);
    }
    else if (local_70 == 2) {
      OVar4 = (Options)se::Value::toInt8(aVStack_78);
      param_2[0x34] = OVar4;
    }
    else {
      param_2[0x34] = (Options)0x0;
    }
  }
  uVar10 = se::Object::getProperty(this,"wrapS",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      uVar5 = se::Value::toBoolean(aVStack_78);
      *(ushort *)(param_2 + 0x2e) = uVar5 & 1;
    }
    else if (local_70 == 2) {
      uVar6 = se::Value::toUint16(aVStack_78);
      *(undefined2 *)(param_2 + 0x2e) = uVar6;
    }
    else {
      *(undefined2 *)(param_2 + 0x2e) = 0;
    }
  }
  uVar10 = se::Object::getProperty(this,"wrapT",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 3) {
      uVar5 = se::Value::toBoolean(aVStack_78);
      *(ushort *)(param_2 + 0x30) = uVar5 & 1;
    }
    else if (local_70 == 2) {
      uVar6 = se::Value::toUint16(aVStack_78);
      *(undefined2 *)(param_2 + 0x30) = uVar6;
    }
    else {
      *(undefined2 *)(param_2 + 0x30) = 0;
    }
  }
  uVar10 = se::Object::getProperty(this,"flipY",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 2) {
      iVar9 = se::Value::toInt32(aVStack_78);
      bVar2 = iVar9 == 0;
LAB_008d8e3c:
      param_2[0x36] = (Options)!bVar2;
    }
    else if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x36] = (Options)(bVar3 & 1);
    }
    else {
      if (1 < local_70) {
        if (local_70 == 4) {
          pbVar14 = (byte *)se::Value::toString(aVStack_78);
          uVar10 = (ulong)(*pbVar14 >> 1);
          if ((*pbVar14 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar14 + 8);
          }
          bVar2 = uVar10 == 0;
          goto LAB_008d8e3c;
        }
        if (local_70 == 5) {
          param_2[0x36] = (Options)0x1;
          goto LAB_008d8e70;
        }
      }
      param_2[0x36] = (Options)0x0;
    }
  }
LAB_008d8e70:
  uVar10 = se::Object::getProperty(this,"premultiplyAlpha",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 2) {
      iVar9 = se::Value::toInt32(aVStack_78);
      bVar2 = iVar9 == 0;
LAB_008d8ec0:
      param_2[0x37] = (Options)!bVar2;
    }
    else if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x37] = (Options)(bVar3 & 1);
    }
    else {
      if (1 < local_70) {
        if (local_70 == 4) {
          pbVar14 = (byte *)se::Value::toString(aVStack_78);
          uVar10 = (ulong)(*pbVar14 >> 1);
          if ((*pbVar14 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar14 + 8);
          }
          bVar2 = uVar10 == 0;
          goto LAB_008d8ec0;
        }
        if (local_70 == 5) {
          param_2[0x37] = (Options)0x1;
          goto LAB_008d8ef4;
        }
      }
      param_2[0x37] = (Options)0x0;
    }
  }
LAB_008d8ef4:
  uVar10 = se::Object::getProperty(this,"compressed",aVStack_78);
  if (((uVar10 & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 2) {
      iVar9 = se::Value::toInt32(aVStack_78);
      bVar2 = iVar9 == 0;
LAB_008d8f44:
      param_2[0x38] = (Options)!bVar2;
    }
    else if (local_70 == 3) {
      bVar3 = se::Value::toBoolean(aVStack_78);
      param_2[0x38] = (Options)(bVar3 & 1);
    }
    else {
      if (1 < local_70) {
        if (local_70 == 4) {
          pbVar14 = (byte *)se::Value::toString(aVStack_78);
          uVar10 = (ulong)(*pbVar14 >> 1);
          if ((*pbVar14 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar14 + 8);
          }
          bVar2 = uVar10 == 0;
          goto LAB_008d8f44;
        }
        if (local_70 == 5) {
          param_2[0x38] = (Options)0x1;
          goto LAB_008d8f78;
        }
      }
      param_2[0x38] = (Options)0x0;
    }
  }
LAB_008d8f78:
  se::Value::~Value(aVStack_78);
  se::Value::~Value(aVStack_68);
  uVar13 = 1;
LAB_008d8f8c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

