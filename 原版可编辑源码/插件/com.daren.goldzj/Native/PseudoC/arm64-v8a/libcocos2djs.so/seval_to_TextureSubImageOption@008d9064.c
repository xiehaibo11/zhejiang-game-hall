
/* seval_to_TextureSubImageOption(se::Value const&, cocos2d::renderer::Texture::SubImageOption*) */

void seval_to_TextureSubImageOption(Value *param_1,SubImageOption *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Value VVar4;
  long lVar5;
  Object *this;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_38;
  uchar *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  VVar4 = param_1[8];
  if (VVar4 != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x587,"seval_to_TextureSubImageOption");
    __android_log_print(6,"jswrapper","Convert parameter to TextureSubImageOption failed!");
  }
  else {
    this = (Object *)se::Value::toObject(param_1);
    local_38 = 0;
    local_30 = (uchar *)0x0;
    se::Object::getTypedArrayData(this,&local_30,&local_38);
    uVar1 = *(undefined4 *)(local_30 + 0x10);
    iVar2 = *(int *)(local_30 + 0x14);
    iVar3 = *(int *)(local_30 + 0x18);
    uVar7 = *(undefined8 *)(local_30 + 8);
    uVar6 = *(undefined8 *)local_30;
    *(undefined4 *)param_2 = 0;
    param_2[0x18] = SUB41(uVar1,0);
    *(ulong *)(param_2 + 4) =
         CONCAT26((short)((ulong)uVar7 >> 0x20),
                  CONCAT24((short)uVar7,CONCAT22((short)((ulong)uVar6 >> 0x20),(short)uVar6)));
    param_2[0x19] = (SubImageOption)(iVar2 != 0);
    param_2[0x1a] = (SubImageOption)(iVar3 != 0);
    uVar1 = *(undefined4 *)(local_30 + 0x1c);
    *(uchar **)(param_2 + 0x10) = local_30 + 0x20;
    *(undefined4 *)param_2 = uVar1;
  }
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(VVar4 == (Value)0x5);
}

