
/* dragonBones::Slot::~Slot() */

void __thiscall dragonBones::Slot::~Slot(Slot *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
                    /* try { // try from 00d810bc to 00e810c3 has its CatchHandler @ 00d81240 */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd810c0);
  (*pcVar1)();
}

