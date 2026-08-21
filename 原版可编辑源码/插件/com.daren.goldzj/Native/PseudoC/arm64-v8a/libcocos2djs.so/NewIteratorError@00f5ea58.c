
/* v8::internal::ErrorUtils::NewIteratorError(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::ErrorUtils::NewIteratorError(Factory *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Factory *pFVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_4;
  
  local_40 = 0;
  local_28 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0xffffffff;
  local_4 = 0;
  uVar1 = FUN_00f5eb0c(param_1,param_2,&local_40,&local_4);
  uVar2 = 0x5f;
  switch(local_4) {
  case 0:
    pFVar3 = param_1 + 0xc18;
    uVar2 = 0x60;
    goto LAB_00f5eaf4;
  case 1:
    break;
  case 2:
    uVar2 = 0x61;
    break;
  case 3:
    uVar2 = 0x5c;
    break;
  case 4:
    uVar2 = 0x5d;
    break;
  default:
    uVar2 = 0x60;
  }
  pFVar3 = (Factory *)0x0;
LAB_00f5eaf4:
  Factory::NewTypeError(param_1,uVar2,uVar1,pFVar3,0);
  return;
}

