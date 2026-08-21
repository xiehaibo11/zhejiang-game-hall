
/* v8::internal::String::ComputeAndSetHash() */

uint __thiscall v8::internal::String::ComputeAndSetHash(String *this)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar7 = *(ulong *)this;
  uVar5 = uVar7 & 0xffffffff00000000;
  uVar9 = *(ulong *)(*(long *)(uVar5 + 0x490) + 7);
  puVar6 = (uint *)(uVar7 - 1);
  if ((*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40) &&
     ((*(ushort *)((uVar5 | 7) + (ulong)*puVar6) & 7) == 3)) {
    uVar10 = uVar5 | *(uint *)(uVar7 + 0xb);
    lVar11 = (long)((ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21;
    puVar6 = (uint *)(uVar10 - 1);
  }
  else {
    lVar11 = 0;
    uVar10 = uVar7;
  }
  if (((*(ushort *)((uVar5 | 7) + (ulong)*puVar6) < 0x40) &&
      ((*(ushort *)((uVar5 | 7) + (ulong)*puVar6) & 7) == 1)) &&
     (((*(ushort *)((uVar5 | *puVar6) + 7) & 7) != 1 ||
      (*(int *)((uVar5 | *(uint *)(uVar10 + 0xf)) + 7) == 0)))) {
    uVar10 = uVar5 | *(uint *)(uVar10 + 0xb);
    puVar6 = (uint *)(uVar10 - 1);
  }
  if ((*(ushort *)((uVar5 | 7) + (ulong)*puVar6) < 0x40) &&
     ((*(ushort *)((uVar5 | 7) + (ulong)*puVar6) & 7) == 5)) {
    uVar10 = uVar5 | *(uint *)(uVar10 + 0xb);
    if (*(int *)(uVar7 + 7) == *(int *)(uVar10 + 7)) {
      *(undefined4 *)(uVar7 + 3) = *(undefined4 *)(uVar10 + 3);
      uVar2 = *(uint *)(*(long *)this + 3);
      goto LAB_01138664;
    }
    puVar6 = (uint *)(uVar10 - 1);
  }
  uVar8 = uVar5 | 7;
  iVar1 = *(int *)(uVar7 + 7);
  uVar7 = (ulong)iVar1;
  if ((*(byte *)(uVar8 + *puVar6) >> 3 & 1) == 0) {
    if (iVar1 < 0x4000) {
      if ((*(ushort *)(uVar8 + *puVar6) < 0x40) && ((*(ushort *)(uVar8 + *puVar6) & 7) == 1)) {
        uVar5 = uVar7 * 2;
        if (CARRY8(uVar7,uVar7)) {
          uVar5 = 0xffffffffffffffff;
        }
        puVar3 = operator_new__(uVar5);
        WriteToFlat<unsigned_short>(uVar10,puVar3,0,iVar1);
        uVar2 = StringHasher::HashSequentialString<unsigned_short>(puVar3,iVar1,uVar9);
LAB_011385cc:
        operator_delete__(puVar3);
      }
      else {
        puVar4 = (undefined8 *)(uVar10 + 0xb);
        if ((*(ushort *)((uVar5 | *puVar6) + 7) & 7) == 2) {
          puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))();
        }
        uVar2 = StringHasher::HashSequentialString<unsigned_short>
                          ((ushort *)((long)puVar4 + lVar11 * 2),iVar1,uVar9);
      }
    }
    else {
LAB_0113856c:
      uVar2 = iVar1 << 2 | 6;
    }
  }
  else {
    if (0x3fff < iVar1) goto LAB_0113856c;
    if ((*(ushort *)(uVar8 + *puVar6) < 0x40) && ((*(ushort *)(uVar8 + *puVar6) & 7) == 1)) {
      puVar3 = operator_new__(uVar7);
      WriteToFlat<unsigned_char>(uVar10,puVar3,0,iVar1);
      uVar2 = StringHasher::HashSequentialString<unsigned_char>((uchar *)puVar3,iVar1,uVar9);
      goto LAB_011385cc;
    }
    puVar4 = (undefined8 *)(uVar10 + 0xb);
    if ((*(ushort *)((uVar5 | *puVar6) + 7) & 7) == 2) {
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))();
    }
    uVar2 = StringHasher::HashSequentialString<unsigned_char>
                      ((uchar *)((long)puVar4 + lVar11),iVar1,uVar9);
  }
  *(uint *)(*(long *)this + 3) = uVar2;
LAB_01138664:
  return uVar2 >> 3;
}

