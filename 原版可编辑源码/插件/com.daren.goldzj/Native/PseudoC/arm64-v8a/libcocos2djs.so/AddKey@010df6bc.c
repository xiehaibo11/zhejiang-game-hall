
/* v8::internal::KeyAccumulator::AddKey(v8::internal::Handle<v8::internal::Object>,
   v8::internal::AddKeyConversion) */

undefined8 __thiscall
v8::internal::KeyAccumulator::AddKey(KeyAccumulator *this,ulong *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Factory *pFVar6;
  ulong local_38;
  uint local_14;
  
  uVar1 = *(uint *)(this + 0x24);
  uVar5 = *param_2;
  if (uVar1 == 0x40) {
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40) {
      return 1;
    }
    if ((*(byte *)(uVar5 + 7) >> 4 & 1) == 0) {
      return 1;
    }
  }
  else if (((uVar5 & 1) == 0) ||
          (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40)) {
    if ((uVar1 >> 3 & 1) != 0) {
      return 1;
    }
  }
  else {
    if ((uVar1 >> 4 & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(uVar5 + 7) & 1) != 0) {
      return 1;
    }
  }
  uVar5 = IsShadowed(this,param_2);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if (*(long *)(this + 8) == 0) {
    lVar2 = OrderedHashSet::Allocate(*(undefined8 *)this,0x10,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    *(long *)(this + 8) = lVar2;
  }
  if (((param_3 == 1) && (uVar5 = *param_2, (uVar5 & 1) != 0)) &&
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
    uVar1 = *(uint *)(uVar5 + 3);
    local_38 = uVar5;
    if ((uVar1 & 0xc0000003) == 0) {
      local_14 = uVar1 >> 3 & 0xffffff;
    }
    else if (((uVar1 & 3) == 2) ||
            (uVar5 = String::SlowAsArrayIndex((String *)&local_38,&local_14), (uVar5 & 1) == 0))
    goto LAB_010df7e4;
    param_2 = (ulong *)Factory::NewNumberFromUint(*(Factory **)this,local_14);
  }
LAB_010df7e4:
  piVar3 = (int *)OrderedHashSet::Add(*(undefined8 *)this,*(undefined8 *)(this + 8),param_2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 != (int)**(long **)(this + 8)) {
      *(undefined4 *)(**(long **)(this + 8) + 7) = 0;
      *(int **)(this + 8) = piVar3;
    }
    return 1;
  }
  pFVar6 = *(Factory **)this;
  puVar4 = (undefined8 *)Factory::NewRangeError(pFVar6,0x134,0,0,0);
  Isolate::Throw((Isolate *)pFVar6,*puVar4,0);
  return 0;
}

