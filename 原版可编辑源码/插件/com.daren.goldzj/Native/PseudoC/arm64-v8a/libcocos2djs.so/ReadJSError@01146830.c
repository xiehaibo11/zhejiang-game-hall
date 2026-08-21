
/* v8::internal::ValueDeserializer::ReadJSError() */

long __thiscall v8::internal::ValueDeserializer::ReadJSError(ValueDeserializer *this)

{
  byte bVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  Isolate *pIVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  
  pIVar2 = *(Isolate **)this;
  pIVar4 = pIVar2 + 0xa0;
  uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x35f);
  pIVar5 = pIVar4;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar11;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar11);
  }
LAB_0114691c:
  pbVar10 = *(byte **)(this + 0x10);
  uVar8 = 0;
  uVar12 = 0;
  do {
    if (*(byte **)(this + 0x18) <= pbVar10) {
      return 0;
    }
    bVar1 = *pbVar10;
    if (uVar12 < 8) {
      uVar8 = uVar8 | (bVar1 & 0x7f) << (ulong)(uVar12 & 0x1f);
      uVar12 = uVar12 + 7;
    }
    pbVar10 = pbVar10 + 1;
    *(byte **)(this + 0x10) = pbVar10;
  } while ((char)bVar1 < '\0');
  switch(uVar8 & 0xff) {
  case 0x2e:
    lVar6 = ErrorUtils::Construct(*(undefined8 *)this,puVar3,puVar3,pIVar4,2,0,2);
    if (lVar6 == 0) {
      return 0;
    }
    lVar7 = Object::SetProperty(*(long *)this,lVar6,*(long *)this + 0xbe8,pIVar5,0,1);
    if (lVar7 != 0) {
      return lVar6;
    }
    return 0;
  default:
    goto LAB_01146ad4;
  case 0x45:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x367);
    break;
  case 0x46:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x39b);
    break;
  case 0x52:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x397);
    break;
  case 0x53:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x3ab);
    break;
  case 0x54:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x3af);
    break;
  case 0x55:
    pIVar2 = *(Isolate **)this;
    uVar11 = *(ulong *)(pIVar2 + 0x2bc8) & 0xffffffff00000000;
    puVar9 = (uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar2 + 0x2bc8) - 1)) +
                                         0x13)) + 0x3b3);
    break;
  case 0x6d:
    pIVar4 = (Isolate *)ReadString(this);
    pIVar2 = pIVar4;
    goto joined_r0x01146a78;
  case 0x73:
    pIVar5 = (Isolate *)ReadString(this);
    pIVar2 = pIVar5;
joined_r0x01146a78:
    if (pIVar2 == (Isolate *)0x0) {
LAB_01146ad4:
      return 0;
    }
    goto LAB_0114691c;
  }
  uVar12 = *puVar9;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar11 | uVar12;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar11 | uVar12);
  }
  goto LAB_0114691c;
}

