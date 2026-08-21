
/* v8::internal::Map::GeneralizeFieldType(v8::internal::Representation,
   v8::internal::Handle<v8::internal::FieldType>, v8::internal::Representation,
   v8::internal::Handle<v8::internal::FieldType>, v8::internal::Isolate*) */

int * v8::internal::Map::GeneralizeFieldType
                (char param_1,int *param_2,char param_3,int *param_4,Isolate *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_48;
  
  iVar1 = *param_2;
  iVar2 = FieldType::None();
  if ((param_1 != '\x03') || (iVar1 != iVar2)) {
    iVar1 = *param_4;
    iVar2 = FieldType::None();
    if ((param_3 != '\x03') || (iVar1 != iVar2)) {
      local_48 = *(undefined8 *)param_2;
      uVar3 = FieldType::NowIs((FieldType *)&local_48,param_4);
      if ((uVar3 & 1) != 0) {
        return param_4;
      }
      local_48 = *(undefined8 *)param_4;
      uVar3 = FieldType::NowIs((FieldType *)&local_48,param_2);
      if ((uVar3 & 1) != 0) {
        return param_2;
      }
    }
  }
  piVar4 = (int *)FieldType::Any(param_5);
  return piVar4;
}

