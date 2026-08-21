
/* btRigidBody::predictIntegratedTransform(float, btTransform&) */

void __thiscall
btRigidBody::predictIntegratedTransform(btRigidBody *this,float param_1,btTransform *param_2)

{
  btTransformUtil::integrateTransform
            ((btTransform *)(this + 8),(btVector3 *)(this + 0x154),(btVector3 *)(this + 0x164),
             param_1,param_2);
  return;
}

