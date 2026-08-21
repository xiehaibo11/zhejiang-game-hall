
/* v8::internal::StringCharacterStream::HasMore() */

ulong __thiscall v8::internal::StringCharacterStream::HasMore(StringCharacterStream *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int local_18;
  bool local_14 [4];
  
  if (*(long *)(this + 0x120) != *(long *)(this + 0x128)) {
LAB_011357e0:
    return 1;
  }
  local_18 = 0;
  if (*(int *)(this + 0x108) == 0) {
    return 0;
  }
  local_14[0] = *(int *)(this + 0x10c) - *(int *)(this + 0x108) == 0x20;
  if ((local_14[0]) ||
     (uVar2 = ConsStringIterator::NextLeaf((ConsStringIterator *)this,local_14),
     local_14[0] != false)) {
    uVar2 = ConsStringIterator::Search((ConsStringIterator *)this,&local_18);
  }
  if ((int)uVar2 == 0) {
    *(undefined4 *)(this + 0x108) = 0;
    return uVar2;
  }
  iVar1 = *(int *)(uVar2 + 7);
  iVar4 = 0;
LAB_0113584c:
  switch(*(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) & 0xf) {
  case 0:
    lVar3 = uVar2 + (long)iVar4 * 2 + 0xb;
LAB_011358bc:
    this[0x118] = (StringCharacterStream)0x0;
    *(long *)(this + 0x120) = lVar3;
    *(long *)(this + 0x128) = lVar3 + (long)iVar1 * 2;
    return 1;
  case 1:
  case 9:
    goto LAB_011357e0;
  case 2:
    lVar3 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
    lVar3 = lVar3 + (long)iVar4 * 2;
    goto LAB_011358bc;
  case 3:
  case 0xb:
    iVar4 = iVar4 + (*(int *)(uVar2 + 0xf) >> 1);
    goto switchD_01135874_caseD_5;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 0xd:
    goto switchD_01135874_caseD_5;
  case 8:
    lVar3 = uVar2 + (long)iVar4 + 0xb;
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
    lVar3 = lVar3 + iVar4;
  }
  this[0x118] = (StringCharacterStream)0x1;
  *(long *)(this + 0x120) = lVar3;
  *(long *)(this + 0x128) = lVar3 + iVar1;
  return 1;
switchD_01135874_caseD_5:
  uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb);
  goto LAB_0113584c;
}

