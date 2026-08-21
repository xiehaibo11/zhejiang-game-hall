
/* btRigidBody::getOrientation() const */

undefined4 __thiscall btRigidBody::getOrientation(btRigidBody *this)

{
  undefined4 local_20 [4];
  
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 8),(btQuaternion *)local_20);
  return local_20[0];
}

