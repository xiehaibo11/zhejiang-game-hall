
/* btCollisionWorld::computeOverlappingPairs() */

void __thiscall btCollisionWorld::computeOverlappingPairs(btCollisionWorld *this)

{
  CProfileManager *this_00;
  
  CProfileManager::Start_Profile("calculateOverlappingPairs");
  this_00 = (CProfileManager *)
            (**(code **)(**(long **)(this + 0x60) + 0x40))
                      (*(long **)(this + 0x60),*(undefined8 *)(this + 0x28));
  CProfileManager::Stop_Profile(this_00);
  return;
}

