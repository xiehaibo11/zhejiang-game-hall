
undefined4
FUN_016f4a24(undefined8 param_1,long *param_2,
            vector<v8::internal::ElementsKind,std::__ndk1::allocator<v8::internal::ElementsKind>>
            *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  byte local_54 [4];
  ObjectRef aOStack_50 [16];
  
  puVar2 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  do {
    if (puVar2 == puVar4) {
      return 1;
    }
    v8::internal::compiler::ObjectRef::ObjectRef(aOStack_50,param_1,*puVar2,0);
    uVar10 = v8::internal::compiler::ObjectRef::IsMap(aOStack_50);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uVar10 = v8::internal::compiler::MapRef::supports_fast_array_resize((MapRef *)aOStack_50);
    if (((uVar10 & 1) == 0) ||
       ((cVar8 = v8::internal::compiler::MapRef::elements_kind((MapRef *)aOStack_50),
        cVar8 == '\x05' && ((param_4 & 1) == 0)))) {
      return 0;
    }
    uVar9 = v8::internal::compiler::MapRef::elements_kind((MapRef *)aOStack_50);
    local_54[0] = (byte)uVar9;
    lVar3 = *(long *)param_3;
    if (*(long *)(param_3 + 8) == lVar3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        bVar6 = *(byte *)(lVar3 + uVar10);
        if (bVar6 < 6) {
          uVar7 = 1 << (ulong)(bVar6 & 0x1f);
          if ((uVar7 & 3) == 0) {
            if ((uVar7 & 0xc) == 0) {
              if ((uVar9 & 0xfe) == 4) goto LAB_016f4b38;
            }
            else if ((uVar9 & 0xfe) == 2) {
LAB_016f4b38:
              bVar1 = local_54[0];
              if ((uVar9 & 0xff) <= (uint)bVar6) {
                bVar1 = bVar6;
              }
              *(byte *)(lVar3 + uVar10) = bVar1;
              break;
            }
          }
          else if ((uVar9 & 0xff) < 2) goto LAB_016f4b38;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(*(long *)(param_3 + 8) - lVar3));
    }
    pbVar5 = *(byte **)(param_3 + 8);
    if (uVar10 == (long)pbVar5 - *(long *)param_3) {
      if (*(byte **)(param_3 + 0x10) == pbVar5) {
        std::__ndk1::
        vector<v8::internal::ElementsKind,std::__ndk1::allocator<v8::internal::ElementsKind>>::
        __push_back_slow_path<v8::internal::ElementsKind_const&>(param_3,local_54);
      }
      else {
        *pbVar5 = local_54[0];
        *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

