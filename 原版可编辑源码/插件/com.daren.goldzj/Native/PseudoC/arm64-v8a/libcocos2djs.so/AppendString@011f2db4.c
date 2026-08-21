
/* v8::internal::IncrementalStringBuilder::AppendString(v8::internal::Handle<v8::internal::String>)
    */

void __thiscall
v8::internal::IncrementalStringBuilder::AppendString(IncrementalStringBuilder *this,ulong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Factory *pFVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar3 = *param_2;
  if (*(int *)(this + 8) == 1) {
LAB_011f2e38:
    if ((*(int *)(uVar3 + 7) < 0x11) &&
       (*(int *)(uVar3 + 7) < *(int *)(this + 0x10) - *(int *)(this + 0x14))) {
      String::WriteToFlat<unsigned_char>
                (uVar3,**(long **)(this + 0x20) + (long)*(int *)(this + 0x14) + 0xb,0);
      iVar1 = *(int *)(this + 0x14) + *(int *)(*param_2 + 7);
      *(int *)(this + 0x14) = iVar1;
      if (iVar1 != *(int *)(this + 0x10)) {
        return;
      }
      Extend(this);
      return;
    }
  }
  else {
    uVar7 = uVar3;
    if (((*(ushort *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 7) & 7) != 1) ||
       (*(int *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xf)) + 7) == 0)) {
      while( true ) {
        uVar2 = *(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7);
        if ((uVar2 & 9) == 0) break;
        if ((uVar2 & 9) == 8) goto LAB_011f2e38;
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
      }
    }
  }
  puVar4 = (undefined8 *)
           SeqString::Truncate(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x14));
  **(undefined8 **)(this + 0x20) = *puVar4;
  *(undefined4 *)(this + 0x10) = 0x20;
  Extend(this);
  plVar6 = *(long **)(this + 0x18);
  if (*(int *)(*param_2 + 7) + *(int *)(*plVar6 + 7) < 0xffffff1) {
    pFVar5 = (Factory *)Factory::NewConsString(*(Factory **)this,plVar6,param_2);
    if (pFVar5 == (Factory *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    plVar6 = *(long **)(this + 0x18);
  }
  else {
    pFVar5 = *(Factory **)this + 200;
    this[0xc] = (IncrementalStringBuilder)0x1;
  }
  *plVar6 = *(long *)pFVar5;
  return;
}

