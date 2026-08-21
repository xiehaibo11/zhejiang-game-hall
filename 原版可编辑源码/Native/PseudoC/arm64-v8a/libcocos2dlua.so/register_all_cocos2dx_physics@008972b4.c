
/* register_all_cocos2dx_physics(lua_State*) */

undefined8 register_all_cocos2dx_physics(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_physics_PhysicsBody(param_1);
  lua_register_cocos2dx_physics_PhysicsWorld(param_1);
  lua_register_cocos2dx_physics_PhysicsJoint(param_1);
  lua_register_cocos2dx_physics_PhysicsJointLimit(param_1);
  lua_register_cocos2dx_physics_PhysicsJointFixed(param_1);
  lua_register_cocos2dx_physics_EventListenerPhysicsContact(param_1);
  lua_register_cocos2dx_physics_EventListenerPhysicsContactWithGroup(param_1);
  lua_register_cocos2dx_physics_PhysicsShape(param_1);
  lua_register_cocos2dx_physics_PhysicsShapePolygon(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeBox(param_1);
  lua_register_cocos2dx_physics_PhysicsJointMotor(param_1);
  lua_register_cocos2dx_physics_PhysicsJointRatchet(param_1);
  lua_register_cocos2dx_physics_PhysicsJointDistance(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeCircle(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeEdgePolygon(param_1);
  lua_register_cocos2dx_physics_PhysicsJointPin(param_1);
  lua_register_cocos2dx_physics_PhysicsContactPreSolve(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeEdgeChain(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeEdgeSegment(param_1);
  lua_register_cocos2dx_physics_PhysicsJointGear(param_1);
  lua_register_cocos2dx_physics_PhysicsContact(param_1);
  lua_register_cocos2dx_physics_EventListenerPhysicsContactWithBodies(param_1);
  lua_register_cocos2dx_physics_PhysicsJointRotarySpring(param_1);
  lua_register_cocos2dx_physics_PhysicsContactPostSolve(param_1);
  lua_register_cocos2dx_physics_PhysicsJointGroove(param_1);
  lua_register_cocos2dx_physics_PhysicsShapeEdgeBox(param_1);
  lua_register_cocos2dx_physics_PhysicsJointRotaryLimit(param_1);
  lua_register_cocos2dx_physics_PhysicsJointSpring(param_1);
  lua_register_cocos2dx_physics_EventListenerPhysicsContactWithShapes(param_1);
  tolua_endmodule(param_1);
  return 1;
}

