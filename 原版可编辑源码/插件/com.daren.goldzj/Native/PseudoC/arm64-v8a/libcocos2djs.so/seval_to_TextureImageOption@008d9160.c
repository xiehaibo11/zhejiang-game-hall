
/* seval_to_TextureImageOption(se::Value const&, cocos2d::renderer::Texture::ImageOption*) */

void seval_to_TextureImageOption(Value *param_1,ImageOption *param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  Object *this;
  ulong uVar6;
  Object *pOVar7;
  byte *pbVar8;
  undefined8 uVar9;
  uchar *local_58;
  ulong uStack_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x5a1,"seval_to_TextureImageOption");
    __android_log_print(6,"jswrapper","Convert parameter to TextureImageOption failed!");
    uVar9 = 0;
    goto LAB_008d9490;
  }
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_48);
  uVar6 = se::Object::getProperty(this,"image",aVStack_48);
  if (((uVar6 & 1) != 0) && (local_40 == '\x05')) {
    pOVar7 = (Object *)se::Value::toObject(aVStack_48);
    uVar6 = se::Object::isTypedArray(pOVar7);
    if ((uVar6 & 1) != 0) {
      local_58 = (uchar *)0x0;
      uStack_50 = 0;
      pOVar7 = (Object *)se::Value::toObject(aVStack_48);
      se::Object::getTypedArrayData(pOVar7,&local_58,&uStack_50);
      *(ulong *)(param_2 + 8) = uStack_50;
      *(uchar **)param_2 = local_58;
    }
  }
  se::Value::Value((Value *)&local_58);
  uVar6 = se::Object::getProperty(this,"width",(Value *)&local_58);
  if ((uVar6 & 1) != 0) {
    if ((byte)uStack_50 == '\x03') {
      uVar3 = se::Value::toBoolean((Value *)&local_58);
      uVar3 = uVar3 & 1;
    }
    else if ((byte)uStack_50 == '\x02') {
      uVar3 = se::Value::toUint16((Value *)&local_58);
    }
    else {
      uVar3 = 0;
    }
    *(ushort *)(param_2 + 0x14) = uVar3;
  }
  uVar6 = se::Object::getProperty(this,"level",(Value *)&local_58);
  if ((uVar6 & 1) != 0) {
    if ((byte)uStack_50 == '\x03') {
      uVar4 = se::Value::toBoolean((Value *)&local_58);
      uVar4 = uVar4 & 1;
    }
    else if ((byte)uStack_50 == '\x02') {
      uVar4 = se::Value::toInt32((Value *)&local_58);
    }
    else {
      uVar4 = 0;
    }
    *(uint *)(param_2 + 0x10) = uVar4;
  }
  uVar6 = se::Object::getProperty(this,"height",(Value *)&local_58);
  if ((uVar6 & 1) != 0) {
    if ((byte)uStack_50 == '\x03') {
      uVar3 = se::Value::toBoolean((Value *)&local_58);
      uVar3 = uVar3 & 1;
    }
    else if ((byte)uStack_50 == '\x02') {
      uVar3 = se::Value::toUint16((Value *)&local_58);
    }
    else {
      uVar3 = 0;
    }
    *(ushort *)(param_2 + 0x16) = uVar3;
  }
  uVar6 = se::Object::getProperty(this,"flipY",(Value *)&local_58);
  if ((uVar6 & 1) != 0) {
    if ((byte)uStack_50 == 2) {
      iVar5 = se::Value::toInt32((Value *)&local_58);
      bVar2 = iVar5 != 0;
    }
    else if ((byte)uStack_50 == 3) {
      bVar2 = se::Value::toBoolean((Value *)&local_58);
    }
    else if ((byte)uStack_50 < 2) {
LAB_008d93c8:
      bVar2 = 0;
    }
    else if ((byte)uStack_50 == 5) {
      bVar2 = 1;
    }
    else {
      if ((byte)uStack_50 != 4) goto LAB_008d93c8;
      pbVar8 = (byte *)se::Value::toString((Value *)&local_58);
      uVar6 = (ulong)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      bVar2 = uVar6 != 0;
    }
    param_2[0x18] = (ImageOption)(bVar2 & 1);
  }
  uVar6 = se::Object::getProperty(this,"premultiplyAlpha",(Value *)&local_58);
  if ((uVar6 & 1) != 0) {
    if ((byte)uStack_50 == 2) {
      iVar5 = se::Value::toInt32((Value *)&local_58);
      bVar2 = iVar5 != 0;
    }
    else if ((byte)uStack_50 == 3) {
      bVar2 = se::Value::toBoolean((Value *)&local_58);
    }
    else if ((byte)uStack_50 < 2) {
LAB_008d9468:
      bVar2 = 0;
    }
    else if ((byte)uStack_50 == 5) {
      bVar2 = 1;
    }
    else {
      if ((byte)uStack_50 != 4) goto LAB_008d9468;
      pbVar8 = (byte *)se::Value::toString((Value *)&local_58);
      uVar6 = (ulong)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      bVar2 = uVar6 != 0;
    }
    param_2[0x19] = (ImageOption)(bVar2 & 1);
  }
  se::Value::~Value((Value *)&local_58);
  se::Value::~Value(aVStack_48);
  uVar9 = 1;
LAB_008d9490:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

