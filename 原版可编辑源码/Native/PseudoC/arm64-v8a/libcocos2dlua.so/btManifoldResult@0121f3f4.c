
/* btManifoldResult::btManifoldResult(btCollisionObjectWrapper const*, btCollisionObjectWrapper
   const*) */

void __thiscall
btManifoldResult::btManifoldResult
          (btManifoldResult *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2)

{
  *(btCollisionObjectWrapper **)(this + 0x10) = param_1;
  *(btCollisionObjectWrapper **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__Result_017323d0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

