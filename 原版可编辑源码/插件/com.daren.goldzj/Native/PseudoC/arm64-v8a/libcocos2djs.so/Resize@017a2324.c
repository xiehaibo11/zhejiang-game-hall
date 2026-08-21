
/* v8::base::TemplateHashMapImpl<unsigned long, v8::internal::compiler::ObjectData*,
   v8::internal::compiler::AddressMatcher,
   v8::internal::ZoneAllocationPolicy>::Resize(v8::internal::ZoneAllocationPolicy) */

void __thiscall
v8::base::
TemplateHashMapImpl<unsigned_long,v8::internal::compiler::ObjectData*,v8::internal::compiler::AddressMatcher,v8::internal::ZoneAllocationPolicy>
::Resize(TemplateHashMapImpl<unsigned_long,v8::internal::compiler::ObjectData*,v8::internal::compiler::AddressMatcher,v8::internal::ZoneAllocationPolicy>
         *this,Zone *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  
  iVar11 = *(int *)(this + 0xc);
  plVar10 = *(long **)this;
  lVar8 = *(long *)(param_2 + 0x10);
  uVar3 = *(int *)(this + 8) << 1;
  uVar4 = (ulong)uVar3 * 0x18;
  if (uVar4 < (ulong)(*(long *)(param_2 + 0x18) - lVar8) ||
      uVar4 - (*(long *)(param_2 + 0x18) - lVar8) == 0) {
    *(ulong *)(param_2 + 0x10) = uVar4 + lVar8;
    *(long *)this = lVar8;
  }
  else {
    lVar8 = internal::Zone::NewExpand(param_2,uVar4);
    *(long *)this = lVar8;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(this + 8) = uVar3;
  if (uVar3 == 0) {
    uVar4 = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0x14) = 0;
    uVar4 = (ulong)*(uint *)(this + 8);
    if (1 < *(uint *)(this + 8)) {
      uVar6 = 1;
      lVar8 = 0x2c;
      do {
        uVar6 = uVar6 + 1;
        *(undefined1 *)(*(long *)this + lVar8) = 0;
        uVar4 = (ulong)*(uint *)(this + 8);
        lVar8 = lVar8 + 0x18;
      } while (uVar6 < uVar4);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar5 = (int)uVar4;
  cVar2 = *(char *)((long)plVar10 + 0x14);
  do {
    if (cVar2 != '\0') {
      uVar3 = *(uint *)(plVar10 + 2);
      lVar7 = *(long *)this;
      lVar8 = *plVar10;
      uVar4 = (ulong)(iVar5 - 1U & uVar3);
      plVar9 = (long *)(lVar7 + uVar4 * 0x18);
      if ((*(char *)((long)plVar9 + 0x14) != '\0') && (lVar8 != *(long *)(lVar7 + uVar4 * 0x18))) {
        do {
          uVar4 = (ulong)((int)uVar4 + 1U & iVar5 - 1U);
          if (*(char *)(lVar7 + uVar4 * 0x18 + 0x14) == '\0') break;
        } while (lVar8 != *(long *)(lVar7 + uVar4 * 0x18));
        plVar9 = (long *)(lVar7 + uVar4 * 0x18);
      }
      lVar7 = plVar10[1];
      *(uint *)(plVar9 + 2) = uVar3;
      *(undefined1 *)((long)plVar9 + 0x14) = 1;
      *plVar9 = lVar8;
      plVar9[1] = lVar7;
      uVar4 = (ulong)*(uint *)(this + 8);
      uVar1 = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0xc) = uVar1;
      if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
        Resize(this,param_2);
        uVar4 = (ulong)*(uint *)(this + 8);
        lVar8 = *(long *)this;
        uVar1 = *(uint *)(this + 8) - 1;
        uVar6 = (ulong)(uVar1 & uVar3);
        if (*(char *)(lVar8 + uVar6 * 0x18 + 0x14) != '\0') {
          do {
            if (*plVar10 == *(long *)(lVar8 + uVar6 * 0x18)) break;
            uVar6 = (ulong)((int)uVar6 + 1U & uVar1);
          } while (*(char *)(lVar8 + uVar6 * 0x18 + 0x14) != '\0');
        }
      }
      iVar11 = iVar11 + -1;
    }
    iVar5 = (int)uVar4;
    if (iVar11 == 0) {
      return;
    }
    cVar2 = *(char *)((long)plVar10 + 0x2c);
    plVar10 = plVar10 + 3;
  } while( true );
}

