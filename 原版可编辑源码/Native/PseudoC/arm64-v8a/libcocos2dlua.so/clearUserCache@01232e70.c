
/* btPersistentManifold::clearUserCache(btManifoldPoint&) */

void __thiscall
btPersistentManifold::clearUserCache(btPersistentManifold *this,btManifoldPoint *param_1)

{
  if ((*(long *)(param_1 + 0x70) != 0) && (gContactDestroyedCallback != (code *)0x0)) {
    (*gContactDestroyedCallback)();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

