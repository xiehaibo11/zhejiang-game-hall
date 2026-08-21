
/* v8::base::TemplateHashMapImpl<int, v8::internal::compiler::BytecodeLiveness,
   v8::base::KeyEqualityMatcher<int>,
   v8::internal::ZoneAllocationPolicy>::Resize(v8::internal::ZoneAllocationPolicy) */

void __thiscall
v8::base::
TemplateHashMapImpl<int,v8::internal::compiler::BytecodeLiveness,v8::base::KeyEqualityMatcher<int>,v8::internal::ZoneAllocationPolicy>
::Resize(TemplateHashMapImpl<int,v8::internal::compiler::BytecodeLiveness,v8::base::KeyEqualityMatcher<int>,v8::internal::ZoneAllocationPolicy>
         *this,Zone *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  piVar10 = *(int **)this;
  lVar8 = *(long *)(param_2 + 0x10);
  iVar11 = *(int *)(this + 0xc);
  uVar4 = *(int *)(this + 8) << 1;
  uVar5 = (ulong)uVar4 * 0x20;
  if (uVar5 < (ulong)(*(long *)(param_2 + 0x18) - lVar8) ||
      uVar5 - (*(long *)(param_2 + 0x18) - lVar8) == 0) {
    *(ulong *)(param_2 + 0x10) = uVar5 + lVar8;
    *(long *)this = lVar8;
  }
  else {
    lVar8 = internal::Zone::NewExpand(param_2,uVar5);
    *(long *)this = lVar8;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(this + 8) = uVar4;
  if (uVar4 == 0) {
    uVar5 = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0x1c) = 0;
    uVar5 = (ulong)*(uint *)(this + 8);
    if (1 < *(uint *)(this + 8)) {
      uVar7 = 1;
      lVar8 = 0x3c;
      do {
        uVar7 = uVar7 + 1;
        *(undefined1 *)(*(long *)this + lVar8) = 0;
        uVar5 = (ulong)*(uint *)(this + 8);
        lVar8 = lVar8 + 0x20;
      } while (uVar7 < uVar5);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar6 = (int)uVar5;
  cVar3 = (char)piVar10[7];
  do {
    if (cVar3 != '\0') {
      uVar4 = piVar10[6];
      lVar8 = *(long *)this;
      uVar5 = (ulong)(iVar6 - 1U & uVar4);
      piVar9 = (int *)(lVar8 + uVar5 * 0x20);
      if ((char)piVar9[7] != '\0') {
        iVar2 = *(int *)(lVar8 + uVar5 * 0x20);
        while (*piVar10 != iVar2) {
          uVar5 = (ulong)((int)uVar5 + 1U & iVar6 - 1U);
          piVar9 = (int *)(lVar8 + uVar5 * 0x20);
          if ((char)piVar9[7] == '\0') break;
          iVar2 = *(int *)(lVar8 + uVar5 * 0x20);
        }
      }
      uVar13 = *(undefined8 *)(piVar10 + 4);
      uVar12 = *(undefined8 *)(piVar10 + 2);
      *piVar9 = *piVar10;
      piVar9[6] = uVar4;
      *(undefined1 *)(piVar9 + 7) = 1;
      *(undefined8 *)(piVar9 + 4) = uVar13;
      *(undefined8 *)(piVar9 + 2) = uVar12;
      uVar5 = (ulong)*(uint *)(this + 8);
      uVar1 = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0xc) = uVar1;
      if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
        Resize(this,param_2);
        uVar5 = (ulong)*(uint *)(this + 8);
        lVar8 = *(long *)this;
        uVar1 = *(uint *)(this + 8) - 1;
        uVar7 = (ulong)(uVar1 & uVar4);
        if (*(char *)(lVar8 + uVar7 * 0x20 + 0x1c) != '\0') {
          do {
            if (*piVar10 == *(int *)(lVar8 + uVar7 * 0x20)) break;
            uVar7 = (ulong)((int)uVar7 + 1U & uVar1);
          } while (*(char *)(lVar8 + uVar7 * 0x20 + 0x1c) != '\0');
        }
      }
      iVar11 = iVar11 + -1;
    }
    iVar6 = (int)uVar5;
    if (iVar11 == 0) {
      return;
    }
    cVar3 = (char)piVar10[0xf];
    piVar10 = piVar10 + 8;
  } while( true );
}

