
/* v8::internal::FuncNameInferrer::MakeNameFromStack() */

long __thiscall v8::internal::FuncNameInferrer::MakeNameFromStack(FuncNameInferrer *this)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  Zone *this_00;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (*(long *)(this + 0x10) == *(long *)(this + 8)) {
    lVar6 = *(long *)(*(AstValueFactory **)this + 0x40);
  }
  else {
    lVar6 = AstValueFactory::NewConsString(*(AstValueFactory **)this);
    puVar3 = *(ulong **)(this + 0x10);
    if (*(ulong **)(this + 8) != puVar3) {
      puVar7 = *(ulong **)(this + 8);
      do {
        puVar1 = puVar7 + 1;
        if (((puVar1 == puVar3) || ((*puVar7 & 3) != 2)) || ((puVar7[1] & 3) != 2)) {
          lVar4 = *(long *)(lVar6 + 8);
          this_00 = *(Zone **)(*(long *)this + 0x448);
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            lVar8 = *(long *)(*(long *)(*(long *)this + 0x38) + 200);
            if (*(int *)(lVar8 + 0x10) != 0) {
              puVar2 = *(undefined8 **)(this_00 + 0x10);
              if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x10) {
                puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x10);
              }
              else {
                *(undefined8 **)(this_00 + 0x10) = puVar2 + 2;
              }
              uVar9 = *(undefined8 *)(lVar6 + 8);
              puVar2[1] = *(undefined8 *)(lVar6 + 0x10);
              *puVar2 = uVar9;
              *(long *)(lVar6 + 8) = lVar8;
              *(undefined8 **)(lVar6 + 0x10) = puVar2;
              lVar4 = lVar8;
            }
          }
          uVar5 = *puVar7;
          if (*(int *)((uVar5 & 0xfffffffffffffffc) + 0x10) != 0) {
            if (lVar4 != 0) {
              puVar2 = *(undefined8 **)(this_00 + 0x10);
              if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x10) {
                puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x10);
              }
              else {
                *(undefined8 **)(this_00 + 0x10) = puVar2 + 2;
              }
              uVar9 = *(undefined8 *)(lVar6 + 8);
              puVar2[1] = *(undefined8 *)(lVar6 + 0x10);
              *puVar2 = uVar9;
              *(undefined8 **)(lVar6 + 0x10) = puVar2;
            }
            *(ulong *)(lVar6 + 8) = uVar5 & 0xfffffffffffffffc;
          }
        }
        puVar3 = *(ulong **)(this + 0x10);
        puVar7 = puVar1;
      } while (puVar1 != puVar3);
    }
  }
  return lVar6;
}

