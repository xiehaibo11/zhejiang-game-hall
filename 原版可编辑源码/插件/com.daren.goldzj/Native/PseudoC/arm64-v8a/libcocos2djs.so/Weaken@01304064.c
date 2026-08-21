
/* v8::internal::compiler::Typer::Visitor::Weaken(v8::internal::compiler::Node*,
   v8::internal::compiler::Type, v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::Typer::Visitor::Weaken
          (Visitor *this,long param_1,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  Visitor *pVVar5;
  Visitor *pVVar6;
  Visitor *pVVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x150);
  local_50 = param_4;
  uVar2 = Type::Maybe((Type *)&local_50,uVar8);
  if ((uVar2 & 1) == 0) {
    return param_3;
  }
  local_58 = Type::Intersect(param_3,uVar8,**(undefined8 **)(*(long *)(this + 8) + 8));
  local_60 = Type::Intersect(local_50,uVar8,**(undefined8 **)(*(long *)(this + 8) + 8));
  pVVar5 = this + 0x20;
  pVVar6 = *(Visitor **)pVVar5;
  if (pVVar6 != (Visitor *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
    pVVar7 = pVVar5;
    do {
      if (*(uint *)(pVVar6 + 0x1c) >= uVar1) {
        pVVar7 = pVVar6;
      }
      pVVar6 = *(Visitor **)(pVVar6 + (ulong)(*(uint *)(pVVar6 + 0x1c) < uVar1) * 8);
    } while (pVVar6 != (Visitor *)0x0);
    if ((pVVar7 != pVVar5) && (*(uint *)(pVVar7 + 0x1c) <= uVar1)) goto LAB_0130415c;
  }
  lVar3 = Type::GetRange((Type *)&local_60);
  lVar4 = Type::GetRange((Type *)&local_58);
  if (lVar3 == 0) {
    return param_3;
  }
  if (lVar4 == 0) {
    return param_3;
  }
  local_44 = *(uint *)(param_1 + 0x14) & 0xffffff;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  __emplace_unique_key_args<unsigned_int,unsigned_int_const&>
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
              *)(this + 0x18),&local_44,&local_44);
LAB_0130415c:
  dVar9 = (double)Type::Min((Type *)&local_58);
  dVar10 = (double)Type::Min((Type *)&local_60);
  dVar12 = dVar9;
  if (dVar9 != dVar10) {
    dVar12 = -INFINITY;
    lVar3 = 0;
    do {
      dVar10 = *(double *)((long)&DAT_01a02038 + lVar3);
      if (dVar10 <= dVar9) {
        dVar12 = dVar10;
      }
    } while ((lVar3 != 0xa0) && (lVar3 = lVar3 + 8, dVar9 < dVar10));
  }
  dVar10 = (double)Type::Max((Type *)&local_58);
  dVar11 = (double)Type::Max((Type *)&local_60);
  dVar9 = dVar10;
  if (dVar10 != dVar11) {
    dVar9 = INFINITY;
    lVar3 = 0;
    do {
      dVar11 = *(double *)((long)&DAT_01a020e0 + lVar3);
      if (dVar10 <= dVar11) {
        dVar9 = dVar11;
      }
    } while ((lVar3 != 0xa0) && (lVar3 = lVar3 + 8, dVar11 < dVar10));
  }
  uVar8 = Type::Range(dVar12,dVar9,(Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
  uVar8 = Type::Union(param_3,uVar8,**(undefined8 **)(*(long *)(this + 8) + 8));
  return uVar8;
}

