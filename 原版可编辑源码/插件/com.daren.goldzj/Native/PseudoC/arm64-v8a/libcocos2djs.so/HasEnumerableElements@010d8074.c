
/* v8::internal::JSObject::HasEnumerableElements() */

bool __thiscall v8::internal::JSObject::HasEnumerableElements(JSObject *this)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_18;
  
  uVar6 = *(ulong *)this;
  local_18 = uVar6 & 0xffffffff00000000;
  bVar3 = true;
  switch(*(byte *)((local_18 | 10) + (ulong)*(uint *)(uVar6 - 1)) >> 3) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
    if (*(short *)((local_18 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x423) {
      piVar5 = (int *)(uVar6 + 0xb);
    }
    else {
      piVar5 = (int *)((local_18 | *(uint *)(uVar6 + 7)) + 3);
    }
    iVar4 = *piVar5;
    goto LAB_010d8168;
  case 1:
  case 3:
  case 7:
  case 9:
  case 0xb:
    uVar8 = local_18 | *(uint *)(uVar6 + 7);
    puVar1 = (uint *)(uVar6 + 0xb);
    if (*(short *)((local_18 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
      puVar1 = (uint *)(uVar8 + 3);
    }
    if (1 < (int)*puVar1) {
      iVar4 = 0;
      uVar6 = 0;
      while ((uVar2 = *(uint *)(uVar8 + 7 + (long)iVar4), (uVar2 & 1) != 0 &&
             (uVar2 == *(uint *)(local_18 + 0xa8)))) {
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 4;
        if (*puVar1 >> 1 <= uVar6) {
          return false;
        }
      }
      return true;
    }
  case 0x1c:
switchD_010d80bc_caseD_1c:
    bVar3 = false;
    break;
  case 5:
    if (*(short *)((local_18 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x423) {
      piVar5 = (int *)(uVar6 + 0xb);
    }
    else {
      piVar5 = (int *)((local_18 | *(uint *)(uVar6 + 7)) + 3);
    }
    iVar4 = *piVar5 >> 1;
    if ((iVar4 != 0) && (1 < *piVar5)) {
      uVar8 = 0;
      lVar7 = 0;
      do {
        if (*(long *)((local_18 | *(uint *)(uVar6 + 7)) + (uVar8 & 0xfffffff8 | 7)) !=
            -0x8000000080001) {
          return true;
        }
        lVar7 = lVar7 + 1;
        uVar8 = uVar8 + 8;
      } while (lVar7 < iVar4);
      return false;
    }
    goto switchD_010d80bc_caseD_1c;
  case 0xc:
    local_18 = local_18 | *(uint *)(uVar6 + 7);
    iVar4 = Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
            NumberOfEnumerableProperties
                      ((Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                        *)&local_18);
    bVar3 = 0 < iVar4;
    break;
  case 0xd:
  case 0xe:
    break;
  case 0xf:
  case 0x10:
    if (0 < *(int *)((local_18 | *(uint *)(uVar6 + 0xb)) + 7)) {
      return true;
    }
    iVar4 = *(int *)((local_18 | *(uint *)(uVar6 + 7)) + 3);
LAB_010d8168:
    bVar3 = 1 < iVar4;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    bVar3 = *(long *)(uVar6 + 0x1f) != 0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return bVar3;
}

