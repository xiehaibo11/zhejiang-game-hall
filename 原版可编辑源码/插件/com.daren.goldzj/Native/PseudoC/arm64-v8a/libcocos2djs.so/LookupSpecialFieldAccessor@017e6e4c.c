
/* v8::internal::compiler::AccessInfoFactory::LookupSpecialFieldAccessor(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>) const */

void v8::internal::compiler::AccessInfoFactory::LookupSpecialFieldAccessor
               (PropertyAccessInfo *param_1,undefined8 *param_2,long *param_3,ulong *param_4)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_50 [4];
  undefined8 local_18;
  
  if (*(ushort *)(*param_3 + 7) < 0x40) {
    puVar1 = (ulong *)(*(long *)*param_2 + 0x7b8);
    if ((puVar1 == param_4) || ((uVar5 = *param_4, param_4 != (ulong *)0x0 && (uVar5 == *puVar1))))
    {
      uVar6 = param_2[3];
LAB_017e6ea8:
      PropertyAccessInfo::StringLength(param_1,uVar6,param_3);
      return;
    }
    uVar7 = uVar5 & 0xffffffff00000000 | 7;
    if ((((*(ushort *)(uVar7 + *(uint *)(uVar5 - 1)) < 0x20) &&
         (*(ushort *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) < 0x20))
        || (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x40)) ||
       (*(short *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) == 0x40)) {
      uVar6 = param_2[3];
    }
    else {
      uVar5 = String::SlowEquals(*(long *)*param_2,param_4,puVar1);
      uVar6 = param_2[3];
      if ((uVar5 & 1) != 0) goto LAB_017e6ea8;
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    param_1[0x68] = (PropertyAccessInfo)0x0;
  }
  else {
    local_18 = 0;
    uVar5 = Accessors::IsJSObjectFieldAccessor(*(undefined8 *)*param_2,param_3,param_4,&local_18);
    if ((uVar5 & 1) != 0) {
      if (*(short *)(*param_3 + 7) == 0x423) {
        bVar2 = *(byte *)(*param_3 + 10);
        if ((bVar2 & 0xf0) == 0x20) {
          uVar6 = 1;
          puVar4 = (undefined8 *)(param_2[2] + 0x1b8);
        }
        else if (bVar2 < 0x30) {
          puVar4 = (undefined8 *)(param_2[2] + 0x1b0);
          uVar6 = 1;
        }
        else {
          puVar4 = (undefined8 *)(param_2[2] + 0x1c0);
          uVar6 = 4;
        }
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0xc7f7fff;
        uVar6 = 4;
      }
      local_50[3] = param_2[3];
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      PropertyAccessInfo::DataField
                (param_1,local_50[3],param_3,local_50,local_18,uVar6,uVar3,param_3,0,0,0);
      return;
    }
    uVar6 = param_2[3];
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    param_1[0x68] = (PropertyAccessInfo)0x0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 1;
  return;
}

