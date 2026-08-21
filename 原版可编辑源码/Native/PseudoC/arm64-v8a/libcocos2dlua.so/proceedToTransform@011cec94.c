
/* btRigidBody::proceedToTransform(btTransform const&) */

void btRigidBody::proceedToTransform(btTransform *param_1)

{
  btTransform *in_x1;
  
  setCenterOfMassTransform((btRigidBody *)param_1,in_x1);
  return;
}

