
/* v8::internal::ValueDeserializer::ReadObjectInternal() */

Factory * __thiscall v8::internal::ValueDeserializer::ReadObjectInternal(ValueDeserializer *this)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  Isolate *pIVar4;
  Factory *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  double *pdVar10;
  double *__src;
  double dVar11;
  double dVar12;
  double *local_40;
  ulong uStack_38;
  
  pdVar1 = *(double **)(this + 0x18);
  __src = *(double **)(this + 0x10);
  do {
    pdVar10 = __src;
    if (pdVar1 <= pdVar10) {
      return (Factory *)0x0;
    }
    __src = (double *)((long)pdVar10 + 1);
    bVar2 = *(byte *)pdVar10;
    *(double **)(this + 0x10) = __src;
  } while (bVar2 == 0);
  switch(bVar2) {
  case 0x22:
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (pdVar1 <= __src) {
        return (Factory *)0x0;
      }
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
    } while ((char)bVar2 < '\0');
    if ((-1 < (int)uVar7) &&
       (uStack_38 = (ulong)uVar7, (long)uStack_38 <= (long)pdVar1 - (long)__src)) {
      *(byte **)(this + 0x10) = (byte *)((long)__src + uStack_38);
      local_40 = __src;
      pFVar5 = (Factory *)Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
      return pFVar5;
    }
    break;
  default:
    if (*(uint *)(this + 0x20) < 0xd) {
      *(double **)(this + 0x10) = pdVar10;
      goto switchD_011442e8_caseD_5c;
    }
    break;
  case 0x27:
    pFVar5 = (Factory *)ReadJSSet(this);
    return pFVar5;
  case 0x30:
    return (Factory *)(*(long *)this + 0xb0);
  case 0x3b:
    pFVar5 = (Factory *)ReadJSMap(this);
    return pFVar5;
  case 0x3f:
    while (__src < pdVar1) {
      bVar2 = *(byte *)__src;
      *(double **)(this + 0x10) = (double *)((long)__src + 1);
      __src = (double *)((long)__src + 1);
      if (-1 < (char)bVar2) {
        pFVar5 = (Factory *)ReadObject(this);
        return pFVar5;
      }
    }
    break;
  case 0x41:
    pFVar5 = (Factory *)ReadDenseJSArray(this);
    return pFVar5;
  case 0x42:
    bVar6 = false;
    goto LAB_011447ec;
  case 0x44:
    pFVar5 = (Factory *)ReadJSDate(this);
    return pFVar5;
  case 0x46:
    return (Factory *)(*(long *)this + 0xc0);
  case 0x49:
    uVar7 = 0;
    uVar8 = 0;
    while (__src < pdVar1) {
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
      if (-1 < (char)bVar2) {
        pFVar5 = (Factory *)Factory::NewNumberFromInt(*(Factory **)this,-(uVar7 & 1) ^ uVar7 >> 1);
        return pFVar5;
      }
    }
    break;
  case 0x4e:
    if (__src <= pdVar1 + -1) {
      dVar11 = *__src;
      *(byte **)(this + 0x10) = (byte *)((long)pdVar10 + 9);
      dVar12 = NAN;
      if (!NAN(dVar11)) {
        dVar12 = dVar11;
      }
      pFVar5 = (Factory *)
               Factory::NewNumber<(v8::internal::AllocationType)0>(*(Factory **)this,dVar12);
      return pFVar5;
    }
    break;
  case 0x52:
    pFVar5 = (Factory *)ReadJSRegExp(this);
    return pFVar5;
  case 0x53:
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (pdVar1 <= __src) {
        return (Factory *)0x0;
      }
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
    } while ((char)bVar2 < '\0');
    if ((-1 < (int)uVar7) &&
       (uStack_38 = (ulong)uVar7, (long)uStack_38 <= (long)pdVar1 - (long)__src)) {
      *(byte **)(this + 0x10) = (byte *)((long)__src + uStack_38);
      local_40 = __src;
      pFVar5 = (Factory *)Factory::NewStringFromUtf8(*(Factory **)this,&local_40,0);
      return pFVar5;
    }
    break;
  case 0x54:
    return (Factory *)(*(long *)this + 0xb8);
  case 0x55:
    uVar7 = 0;
    uVar8 = 0;
    while (__src < pdVar1) {
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
      if (-1 < (char)bVar2) {
        pFVar5 = (Factory *)Factory::NewNumberFromUint(*(Factory **)this,uVar7);
        return pFVar5;
      }
    }
    break;
  case 0x57:
    pFVar5 = (Factory *)ReadWasmModule(this);
    return pFVar5;
  case 0x5a:
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (pdVar1 <= __src) {
        return (Factory *)0x0;
      }
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
    } while ((char)bVar2 < '\0');
    iVar3 = BigInt::DigitsByteLengthForBitfield(uVar7);
    if ((long)iVar3 <= *(long *)(this + 0x18) - *(long *)(this + 0x10)) {
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + (long)iVar3;
      pFVar5 = (Factory *)BigInt::FromSerializedDigits(*(undefined8 *)this,uVar7);
      return pFVar5;
    }
    break;
  case 0x5c:
switchD_011442e8_caseD_5c:
    pFVar5 = (Factory *)ReadHostObject(this);
    return pFVar5;
  case 0x5e:
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (pdVar1 <= __src) {
        return (Factory *)0x0;
      }
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
    } while ((char)bVar2 < '\0');
    uVar9 = **(ulong **)(this + 0x30);
    if (uVar7 < (uint)(*(int *)(uVar9 + 3) >> 1)) {
      uVar8 = *(uint *)(uVar9 + (long)(int)(uVar7 << 2) + 7);
      pIVar4 = *(Isolate **)this;
      if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(pIVar4 + 0xa8))) {
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar8;
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pFVar5 = *(Factory **)(pIVar4 + 0x95a0);
          if (pFVar5 == *(Factory **)(pIVar4 + 0x95a8)) {
            pFVar5 = (Factory *)HandleScope::Extend(pIVar4);
          }
          *(Factory **)(pIVar4 + 0x95a0) = pFVar5 + 8;
          *(ulong *)pFVar5 = uVar9;
          return pFVar5;
        }
        pFVar5 = (Factory *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
        return pFVar5;
      }
    }
    break;
  case 0x5f:
    return (Factory *)(*(long *)this + 0xa0);
  case 0x61:
    pFVar5 = (Factory *)ReadSparseJSArray(this);
    return pFVar5;
  case 99:
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (pdVar1 <= __src) {
        return (Factory *)0x0;
      }
      bVar2 = *(byte *)__src;
      if (uVar8 < 0x20) {
        uVar7 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
        uVar8 = uVar8 + 7;
      }
      __src = (double *)((long)__src + 1);
      *(double **)(this + 0x10) = __src;
    } while ((char)bVar2 < '\0');
    if (((uVar7 & 0x80000001) == 0) && ((long)(ulong)uVar7 <= (long)pdVar1 - (long)__src)) {
      *(byte **)(this + 0x10) = (byte *)((long)__src + (ulong)uVar7);
      if (uVar7 == 0) {
        return *(Factory **)this + 200;
      }
      pFVar5 = (Factory *)Factory::NewRawTwoByteString(*(Factory **)this,uVar7 >> 1,0);
      if (pFVar5 != (Factory *)0x0) {
        memcpy((void *)(*(long *)pFVar5 + 0xb),__src,(long)(int)uVar7);
        return pFVar5;
      }
      return (Factory *)0x0;
    }
    break;
  case 0x6d:
    pFVar5 = (Factory *)ReadWasmMemory(this);
    return pFVar5;
  case 0x6e:
  case 0x73:
  case 0x78:
  case 0x79:
  case 0x7a:
    pFVar5 = (Factory *)ReadJSPrimitiveWrapper(this);
    return pFVar5;
  case 0x6f:
    pFVar5 = (Factory *)ReadJSObject(this);
    return pFVar5;
  case 0x72:
    pFVar5 = (Factory *)ReadJSError(this);
    return pFVar5;
  case 0x74:
    pFVar5 = (Factory *)ReadTransferredJSArrayBuffer(this);
    return pFVar5;
  case 0x75:
    bVar6 = true;
LAB_011447ec:
    pFVar5 = (Factory *)ReadJSArrayBuffer(this,bVar6);
    return pFVar5;
  case 0x77:
    pFVar5 = (Factory *)ReadWasmModuleTransfer(this);
    return pFVar5;
  }
  return (Factory *)0x0;
}

