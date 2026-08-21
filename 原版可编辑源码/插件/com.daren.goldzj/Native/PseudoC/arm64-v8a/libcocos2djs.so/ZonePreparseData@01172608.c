
/* v8::internal::ZonePreparseData::ZonePreparseData(v8::internal::Zone*,
   v8::internal::Vector<unsigned char>*, int) */

void __thiscall
v8::internal::ZonePreparseData::ZonePreparseData
          (ZonePreparseData *this,Zone *param_1,Vector *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  puVar6 = *(undefined1 **)param_2;
  uVar4 = *(ulong *)(param_2 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_1;
  if (uVar4 != 0) {
    if (uVar4 >> 0x1f != 0) goto LAB_0117270c;
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    uVar3 = uVar4 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < uVar3) {
      puVar1 = (undefined1 *)Zone::NewExpand(param_1,uVar3);
    }
    else {
      *(undefined1 **)(param_1 + 0x10) = puVar1 + uVar3;
    }
    *(undefined1 **)this = puVar1;
    *(undefined1 **)(this + 8) = puVar1;
    *(undefined1 **)(this + 0x10) = puVar1 + uVar4;
    do {
      uVar4 = uVar4 - 1;
      *puVar1 = *puVar6;
      puVar1 = (undefined1 *)(*(long *)(this + 8) + 1);
      *(undefined1 **)(this + 8) = puVar1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_1;
  if (param_3 != 0) {
    if ((uint)param_3 >> 0x1c != 0) {
LAB_0117270c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    lVar5 = (long)param_3;
    uVar4 = lVar5 * 8;
    if (uVar4 < (ulong)(*(long *)(param_1 + 0x18) - (long)puVar2) ||
        uVar4 - (*(long *)(param_1 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2 + lVar5;
    }
    else {
      puVar2 = (undefined8 *)Zone::NewExpand(param_1,uVar4);
    }
    *(undefined8 **)(this + 0x20) = puVar2;
    *(undefined8 **)(this + 0x28) = puVar2;
    *(undefined8 **)(this + 0x30) = puVar2 + lVar5;
    do {
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x28) + 8);
      *(undefined8 **)(this + 0x28) = puVar2;
    } while (lVar5 != 0);
  }
  return;
}

