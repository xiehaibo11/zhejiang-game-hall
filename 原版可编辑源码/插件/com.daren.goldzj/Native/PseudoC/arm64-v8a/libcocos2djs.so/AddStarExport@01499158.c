
/* v8::internal::SourceTextModuleDescriptor::AddStarExport(v8::internal::AstRawString const*,
   v8::internal::Scanner::Location, v8::internal::Scanner::Location, v8::internal::Zone*) */

void __thiscall
v8::internal::SourceTextModuleDescriptor::AddStarExport
          (SourceTextModuleDescriptor *this,AstRawString *param_1,undefined8 param_3,long param_4,
          Zone *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  Zone *this_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  AstRawString *local_50;
  ulong uStack_48;
  
  puVar3 = *(undefined8 **)(param_5 + 0x10);
  if ((ulong)(*(long *)(param_5 + 0x18) - (long)puVar3) < 0x28) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_5,0x28);
  }
  else {
    *(undefined8 **)(param_5 + 0x10) = puVar3 + 5;
  }
  *puVar3 = param_3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffff;
  uStack_48 = (ulong)*(uint *)(this + 0x18) | param_4 << 0x20;
  local_50 = param_1;
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
          ::
          __emplace_unique_key_args<v8::internal::AstRawString_const*,std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>
                    ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                      *)this,&local_50,(pair *)&local_50);
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(this + 0x28);
  if (puVar5 == *(undefined8 **)(this + 0x30)) {
    lVar2 = (long)puVar5 - *(long *)(this + 0x20) >> 3;
    uVar1 = lVar2 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x30) - *(long *)(this + 0x20);
    uVar7 = lVar4 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x38);
      uVar7 = uVar1 * 8;
      lVar4 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar4 + uVar7;
      }
      else {
        lVar4 = Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar5 = (undefined8 *)(lVar4 + lVar2 * 8);
    puVar6 = puVar5 + 1;
    *puVar5 = puVar3;
    puVar3 = *(undefined8 **)(this + 0x20);
    puVar8 = *(undefined8 **)(this + 0x28);
    while (puVar8 != puVar3) {
      puVar8 = puVar8 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar8;
    }
    *(undefined8 **)(this + 0x20) = puVar5;
    *(undefined8 **)(this + 0x28) = puVar6;
    *(ulong *)(this + 0x30) = lVar4 + uVar1 * 8;
  }
  else {
    *puVar5 = puVar3;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
  }
  return;
}

