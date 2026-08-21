
/* v8::internal::ExternalizeStringExtension::Externalize(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void v8::internal::ExternalizeStringExtension::Externalize(FunctionCallbackInfo *param_1)

{
  uint uVar1;
  Value *this;
  void *pvVar2;
  ExternalOneByteStringResource *pEVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  Isolate *pIVar8;
  String *this_00;
  undefined8 local_38;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = **(ulong **)(param_1 + 8);
    if (((uVar7 & 3) == 1) &&
       (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar7 - 1)) < 0x40)) {
      if (*(int *)(param_1 + 0x10) < 2) {
        uVar1 = 1;
      }
      else {
        uVar7 = v8::Value::IsBoolean((Value *)(*(ulong **)(param_1 + 8) + -1));
        if ((uVar7 & 1) == 0) {
          lVar6 = *(long *)param_1;
          pcVar4 = "Second parameter to externalizeString() must be a boolean.";
          goto LAB_014ed888;
        }
        if (*(int *)(param_1 + 0x10) < 2) {
          lVar6 = *(long *)param_1;
          this = (Value *)(*(long *)(lVar6 + 8) + 0xa0);
        }
        else {
          lVar6 = *(long *)param_1;
          this = (Value *)(*(long *)(param_1 + 8) + -8);
        }
        uVar1 = v8::Value::BooleanValue(this,*(Isolate **)(lVar6 + 8));
        uVar1 = uVar1 ^ 1;
        if (*(int *)(param_1 + 0x10) < 1) {
          this_00 = (String *)(*(long *)(*(long *)param_1 + 8) + 0xa0);
          goto LAB_014ed900;
        }
      }
      this_00 = *(String **)(param_1 + 8);
LAB_014ed900:
      local_38 = *(undefined8 *)this_00;
      uVar7 = String::SupportsExternalization((String *)&local_38);
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)param_1;
        pcVar4 = "string does not support externalization.";
      }
      else {
        uVar5 = *(ulong *)this_00;
        uVar7 = (ulong)*(int *)(uVar5 + 7);
        if ((*(byte *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 8) == 0 ||
            ((uVar1 ^ 0xffffffff) & 1) != 0) {
          uVar5 = uVar7 * 2;
          if (CARRY8(uVar7,uVar7)) {
            uVar5 = 0xffffffffffffffff;
          }
          pvVar2 = operator_new__(uVar5);
          String::WriteToFlat<unsigned_short>
                    (*(long *)this_00,pvVar2,0,*(undefined4 *)(*(long *)this_00 + 7));
          pEVar3 = operator_new(0x18);
          *(long *)(pEVar3 + 0x10) = (long)*(int *)(*(long *)this_00 + 7);
          *(undefined ***)pEVar3 = &PTR__SimpleStringResource_01cc6b48;
          *(void **)(pEVar3 + 8) = pvVar2;
          uVar7 = v8::String::MakeExternal(this_00,(ExternalStringResource *)pEVar3);
        }
        else {
          pvVar2 = operator_new__(uVar7);
          String::WriteToFlat<unsigned_char>
                    (*(long *)this_00,pvVar2,0,*(undefined4 *)(*(long *)this_00 + 7));
          pEVar3 = operator_new(0x18);
          *(long *)(pEVar3 + 0x10) = (long)*(int *)(*(long *)this_00 + 7);
          *(undefined ***)pEVar3 = &PTR__SimpleStringResource_01cc6af8;
          *(void **)(pEVar3 + 8) = pvVar2;
          uVar7 = v8::String::MakeExternal(this_00,pEVar3);
        }
        if ((uVar7 & 1) != 0) {
          return;
        }
        (**(code **)(*(long *)pEVar3 + 8))(pEVar3);
        lVar6 = *(long *)param_1;
        pcVar4 = "externalizeString() failed.";
      }
      pIVar8 = *(Isolate **)(lVar6 + 8);
      lVar6 = v8::String::NewFromUtf8(pIVar8,pcVar4,0,0xffffffff);
      if (lVar6 == 0) {
        v8::V8::ToLocalEmpty();
      }
      v8::Isolate::ThrowException(pIVar8,lVar6);
      return;
    }
  }
  lVar6 = *(long *)param_1;
  pcVar4 = "First parameter to externalizeString() must be a string.";
LAB_014ed888:
  pIVar8 = *(Isolate **)(lVar6 + 8);
  lVar6 = v8::String::NewFromUtf8(pIVar8,pcVar4,0,0xffffffff);
  if (lVar6 == 0) {
    v8::V8::ToLocalEmpty();
  }
  v8::Isolate::ThrowException(pIVar8,lVar6);
  return;
}

