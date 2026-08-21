
/* spine::Atlas::Atlas(char const*, int, char const*, spine::TextureLoader*, bool) */

void __thiscall
spine::Atlas::Atlas(Atlas *this,char *param_1,int param_2,char *param_3,TextureLoader *param_4,
                   bool param_5)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8e838;
  *(undefined8 *)(this + 0x40) = 0;
  *(TextureLoader **)(this + 0x48) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 8) = &PTR__Vector_01c8e800;
  *(undefined ***)this = &PTR__Atlas_01c8e698;
  load(this,param_1,param_2,param_3,param_5);
  return;
}

