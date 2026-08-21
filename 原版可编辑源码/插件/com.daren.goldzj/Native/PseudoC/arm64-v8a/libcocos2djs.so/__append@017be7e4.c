
/* std::__ndk1::vector<unsigned char, v8::internal::ZoneAllocator<unsigned char>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::__append
          (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *this,ulong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  Zone *this_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  puVar10 = *(undefined1 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar10)) {
    do {
      *puVar10 = 0;
      param_1 = param_1 - 1;
      puVar10 = (undefined1 *)(*(long *)(this + 8) + 1);
      *(undefined1 **)(this + 8) = puVar10;
    } while (param_1 != 0);
    return;
  }
  lVar6 = *(long *)this;
  puVar1 = puVar10 + (param_1 - lVar6);
  if ((ulong)puVar1 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(long *)(this + 0x10) - lVar6;
  puVar8 = (undefined1 *)(uVar5 * 2);
  if (puVar1 <= puVar8) {
    puVar1 = puVar8;
  }
  if (0x3ffffffe < uVar5) {
    puVar1 = (undefined1 *)0x7fffffff;
  }
  if (puVar1 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar5 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
    lVar4 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar4) < uVar5) {
      lVar4 = v8::internal::Zone::NewExpand(this_00,uVar5);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
    }
  }
  puVar10 = puVar10 + (lVar4 - lVar6);
  memset(puVar10,0,param_1);
  puVar8 = puVar10;
  if (1 < param_1) {
    uVar7 = param_1 & 0xfffffffffffffffe;
    puVar8 = puVar10 + uVar7;
    uVar5 = uVar7;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
    bVar3 = uVar7 == param_1;
    param_1 = param_1 - uVar7;
    if (bVar3) goto LAB_017be8e4;
  }
  do {
    param_1 = param_1 - 1;
    puVar8 = puVar8 + 1;
  } while (param_1 != 0);
LAB_017be8e4:
  puVar2 = *(undefined1 **)this;
  puVar9 = *(undefined1 **)(this + 8);
  while (puVar9 != puVar2) {
    puVar9 = puVar9 + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar9;
  }
  *(undefined1 **)this = puVar10;
  *(undefined1 **)(this + 8) = puVar8;
  *(undefined1 **)(this + 0x10) = puVar1 + lVar4;
  return;
}

