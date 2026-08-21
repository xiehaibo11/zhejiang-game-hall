
/* v8::internal::JSObject::GetFastElementsUsage() */

int __thiscall v8::internal::JSObject::GetFastElementsUsage(JSObject *this)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar6 = *(ulong *)this;
  uVar5 = uVar6 & 0xffffffff00000000;
  bVar2 = *(byte *)((uVar5 | 10) + (ulong)*(uint *)(uVar6 - 1)) >> 3;
  if (0x1c < bVar2) {
    return 0;
  }
  uVar4 = uVar5 | *(uint *)(uVar6 + 7);
  switch(bVar2) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x423) {
      iVar3 = *(int *)(uVar6 + 0xb);
    }
    else {
      iVar3 = *(int *)(uVar4 + 3);
    }
    return iVar3 >> 1;
  case 5:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xd:
    uVar4 = uVar5 | *(uint *)(uVar4 + 0xb);
  case 1:
  case 3:
  case 7:
  case 9:
  case 0xb:
  case 0xf:
    puVar1 = (uint *)(uVar6 + 0xb);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
      puVar1 = (uint *)(uVar4 + 3);
    }
    if ((int)*puVar1 < 2) {
      return 0;
    }
    iVar3 = 0;
    uVar6 = 0;
    iVar8 = 0;
    uVar9 = *(uint *)(uVar4 + 7);
    if ((uVar9 & 1) == 0) goto LAB_010d96bc;
    do {
      uVar9 = (uint)(uVar9 != *(uint *)(uVar5 + 0xa8));
      while( true ) {
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + uVar9;
        iVar3 = iVar3 + 4;
        if (*puVar1 >> 1 <= uVar6) {
          return iVar8;
        }
        uVar9 = *(uint *)((long)(uVar4 + 7) + (long)iVar3);
        if ((uVar9 & 1) != 0) break;
LAB_010d96bc:
        uVar9 = 1;
      }
    } while( true );
  }
  if (*(uint *)(uVar4 + 3) < 2) {
    return 0;
  }
  puVar1 = (uint *)(uVar6 + 0xb);
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
    puVar1 = (uint *)(uVar4 + 3);
  }
  if (1 < (int)*puVar1) {
    uVar6 = (ulong)(*puVar1 >> 1);
    uVar5 = uVar6;
    if (uVar6 < 2) {
      uVar5 = 1;
    }
    if (uVar5 < 2) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      uVar7 = uVar5 & 0x7ffffffe;
      uVar10 = 0;
      iVar8 = 0;
      iVar3 = 0;
      uVar11 = uVar7;
      do {
        uVar12 = uVar10 & 0xfffffff0;
        uVar10 = uVar10 + 0x10;
        if (*(long *)((uVar12 | 7) + uVar4) != -0x8000000080001) {
          iVar8 = iVar8 + 1;
        }
        if (*(long *)((uVar12 | 0xf) + uVar4) != -0x8000000080001) {
          iVar3 = iVar3 + 1;
        }
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
      iVar3 = iVar3 + iVar8;
      if (uVar5 == uVar7) {
        return iVar3;
      }
    }
    uVar5 = uVar7 << 3;
    do {
      uVar10 = uVar5 & 0xfffffff8;
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 8;
      if (*(long *)((uVar10 | 7) + uVar4) != -0x8000000080001) {
        iVar3 = iVar3 + 1;
      }
    } while (uVar7 < uVar6);
    return iVar3;
  }
  return 0;
}

