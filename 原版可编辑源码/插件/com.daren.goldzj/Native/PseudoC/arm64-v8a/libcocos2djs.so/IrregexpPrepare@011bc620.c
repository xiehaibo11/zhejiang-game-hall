
/* v8::internal::RegExp::IrregexpPrepare(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>) */

uint v8::internal::RegExp::IrregexpPrepare(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong local_48;
  
  uVar7 = *param_3;
  do {
    uVar2 = *(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7);
    if ((uVar2 & 9) == 0) {
      bVar8 = false;
LAB_011bc684:
      local_48 = *param_2;
      iVar4 = JSRegExp::Code((JSRegExp *)&local_48,bVar8);
      local_48 = *param_2;
      uVar7 = JSRegExp::Bytecode((JSRegExp *)&local_48,bVar8);
      local_48 = *param_2;
      uVar6 = JSRegExp::MarkedForTierUp((JSRegExp *)&local_48);
      if (((uVar7 & 1) == 0) || ((uVar6 & 1) == 0)) {
        bVar3 = false;
      }
      else {
        sVar1 = *(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1));
        bVar3 = sVar1 == 0x85;
        if ((FLAG_trace_regexp_tier_up != '\0') && (sVar1 == 0x85)) {
          PrintF("JSRegExp object %p needs tier-up compilation\n",*param_2);
        }
      }
      if (((iVar4 == -2) || (bVar3)) &&
         (uVar7 = RegExpImpl::CompileIrregexp(param_1,param_2,param_3,bVar8), (uVar7 & 1) == 0)) {
        return 0xffffffff;
      }
      local_48 = *param_2;
      uVar6 = local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xb);
      uVar7 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_48);
      if ((uVar7 & 1) == 0) {
        uVar5 = *(int *)(uVar6 + 0x27) + 2U & 0xfffffffe;
      }
      else {
        uVar5 = (*(int *)(uVar6 + 0x27) + 2U & 0xfffffffe) + (*(int *)(uVar6 + 0x23) >> 1);
      }
      return uVar5;
    }
    if ((uVar2 & 9) == 8) {
      bVar8 = true;
      goto LAB_011bc684;
    }
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
  } while( true );
}

