
/* void 
   v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::GlobalDictionary>(v8::internal::Isolate*,
   v8::internal::ReadOnlyRoots, v8::internal::Handle<v8::internal::GlobalDictionary>,
   v8::internal::PropertyAttributes) */

void v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::GlobalDictionary>
               (undefined8 param_1,long param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong local_68;
  
  uVar4 = *param_3;
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
    lVar8 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    iVar7 = 0x14;
    while( true ) {
      lVar8 = lVar8 + -1;
      lVar1 = (long)iVar7 + 7;
      if (*(uint *)(lVar1 + uVar4) != *(uint *)(param_2 + 0x20)) {
        local_68 = uVar4 & 0xffffffff00000000;
        uVar5 = local_68 | *(uint *)(lVar1 + uVar4);
        if ((*(int *)(uVar5 + 0xb) != *(int *)(param_2 + 0x28)) &&
           (((uVar2 = *(uint *)(uVar5 + 3), (uVar2 & 1) == 0 ||
             (uVar5 = local_68 | uVar2,
             *(short *)((local_68 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40)) ||
            ((*(byte *)(uVar5 + 7) & 1) == 0)))) {
          uVar3 = *(uint *)((local_68 | *(uint *)(uVar4 + lVar1)) + 7);
          uVar2 = (int)uVar3 >> 1;
          uVar6 = param_4;
          if (((((param_4 & 1) != 0) && ((uVar3 >> 1 & 1) != 0)) &&
              (uVar3 = *(uint *)((local_68 | 0xb) + (ulong)*(uint *)(uVar4 + lVar1)),
              (uVar3 & 1) != 0)) &&
             (uVar6 = param_4 & 0xfffffffe,
             *(short *)((local_68 | 7) + (ulong)*(uint *)((local_68 | uVar3) - 1)) != 0x52)) {
            uVar6 = param_4;
          }
          uVar3 = uVar2 & 0x38 | uVar6 << 3;
          uVar4 = local_68 | *(uint *)(uVar4 + lVar1);
          if ((uVar3 >> 3 & 1) != (*(byte *)(uVar4 + 7) & 0x10) >> 4) {
            local_68 = local_68 | *(uint *)(uVar4 + 0xf);
            DependentCode::DeoptimizeDependentCodeGroup(&local_68,param_1,2);
          }
          *(uint *)(uVar4 + 7) = (uVar3 | uVar2 & 0x7fffffc7) << 1;
        }
      }
      if (lVar8 == 0) break;
      uVar4 = *param_3;
      iVar7 = iVar7 + 4;
    }
  }
  return;
}

