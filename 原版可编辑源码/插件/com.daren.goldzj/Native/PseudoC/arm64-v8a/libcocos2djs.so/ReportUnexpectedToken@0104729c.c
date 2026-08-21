
/* v8::internal::JsonParser<unsigned short>::ReportUnexpectedToken(v8::internal::JsonToken) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::ReportUnexpectedToken
          (JsonParser<unsigned_short> *this,char param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *this_00;
  undefined8 uVar9;
  MessageLocation aMStack_70 [32];
  
  this_00 = *(Isolate **)this;
  if (((*(ulong *)(this_00 + 0x2bd8) & 1) != 0) &&
     ((int)*(ulong *)(this_00 + 0x2bd8) == *(int *)(this_00 + 0xa8))) {
    uVar7 = **(ulong **)(this + 0x20);
    uVar8 = uVar7 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) < 0x40) &&
       ((*(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) & 7) == 3)) {
      iVar6 = *(int *)(uVar7 + 0xf) >> 1;
    }
    else {
      iVar6 = 0;
    }
    uVar1 = (int)((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x40)) >> 1) - iVar6;
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this_00 + 0x95a0);
      if (puVar2 == *(ulong **)(this_00 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar7);
    }
    puVar3 = puVar2;
    if (param_2 == '\r') {
      puVar2 = (ulong *)0x0;
      uVar9 = 0x109;
    }
    else if (param_2 == '\x01') {
      puVar2 = (ulong *)0x0;
      uVar9 = 0x10c;
    }
    else if (param_2 == '\0') {
      uVar9 = 0x10b;
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar3 = (ulong *)Factory::LookupSingleCharacterStringFromCode
                                  ((Factory *)this_00,**(ushort **)(this + 0x30));
      uVar9 = 0x10a;
    }
    uVar4 = Factory::NewScript(this_00,*(undefined8 *)(this + 0x20));
    uVar7 = Isolate::NeedsSourcePositionsForProfiling(*(Isolate **)this);
    if ((uVar7 & 1) != 0) {
      Script::InitLineEnds(uVar4);
    }
    Debug::OnCompileError(*(Debug **)(*(long *)this + 0xb6c8),uVar4);
    MessageLocation::MessageLocation(aMStack_70,uVar4,uVar1,uVar1 + 1);
    puVar5 = (undefined8 *)Factory::NewSyntaxError((Factory *)this_00,uVar9,puVar3,puVar2,0);
    Isolate::Throw(*(Isolate **)this,*puVar5,aMStack_70);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x38);
  }
  return;
}

