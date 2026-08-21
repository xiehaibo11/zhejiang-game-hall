
/* dragonBones::Animation::init(dragonBones::Armature*) */

void __thiscall dragonBones::Animation::init(Animation *this,Armature *param_1)

{
  AnimationConfig *pAVar1;
  
                    /* catch() { ... } // from try @ 00d71300 with catch @ 00d714b8 */
                    /* catch() { ... } // from try @ 00d712c8 with catch @ 00d714bc */
                    /* catch() { ... } // from try @ 00d712ac with catch @ 00d714c0 */
                    /* catch() { ... } // from try @ 00d71250 with catch @ 00d714c4 */
                    /* catch() { ... } // from try @ 00d710d4 with catch @ 00d714c8 */
  if (*(long *)(this + 0x68) == 0) {
                    /* catch() { ... } // from try @ 00d710bc with catch @ 00d714cc */
    *(Armature **)(this + 0x68) = param_1;
    pAVar1 = BaseObject::borrowObject<dragonBones::AnimationConfig>();
    *(AnimationConfig **)(this + 0x70) = pAVar1;
  }
                    /* catch() { ... } // from try @ 00d71060 with catch @ 00d714dc */
                    /* catch() { ... } // from try @ 00d71048 with catch @ 00d714e0 */
  return;
}

