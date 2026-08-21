
/* btPersistentManifold::addManifoldPoint(btManifoldPoint const&, bool) */

uint btPersistentManifold::addManifoldPoint(btManifoldPoint *param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x318);
  if (uVar1 == 4) {
    uVar1 = sortCachedPoints((btPersistentManifold *)param_1,(btManifoldPoint *)(ulong)param_2);
    if ((*(long *)(param_1 + (long)(int)uVar1 * 0xc0 + 0x78) != 0) &&
       (gContactDestroyedCallback != (code *)0x0)) {
      (*gContactDestroyedCallback)();
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0xc0 + 0x78) = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x318) = uVar1 + 1;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  memcpy(param_1 + (ulong)uVar1 * 0xc0 + 8,(btManifoldPoint *)(ulong)param_2,0xbc);
  return uVar1;
}

