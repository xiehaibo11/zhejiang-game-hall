
/* void 
   universe::network::GuoPengFei::receiveMessageFromPack<universe::network::SRS::RespKey>(universe::network::SRS::RespKey&,
   universe::network::ZhouLuJun const*) */

void __thiscall
universe::network::GuoPengFei::receiveMessageFromPack<universe::network::SRS::RespKey>
          (GuoPengFei *this,RespKey *param_1,ZhouLuJun *param_2)

{
  long lVar1;
  char *pcVar2;
  OStream aOStack_68 [24];
  OStream aOStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,&DAT_012f907f,(ulong)*(uint *)(this + 0x45c));
  }
  pcVar2 = (char *)Translated::getInstance();
  Translated::log(pcVar2,"GuoPengFei: receiveMessageFromPack %d",(ulong)*(uint *)(this + 0x45c));
  OStream::OStream(aOStack_50,(char *)(param_2 + 0x30),*(ulong *)(param_2 + 0x20));
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,aOStack_50);
  OStream::OStream(aOStack_68,aOStack_50);
                    /* try { // try from 00a0ac34 to 00b0ada7 has its CatchHandler @ 00a0ac34
                       catch() { ... } // from try @ 00a0ac34 with catch @ 00a0ac34
                       catch() { ... } // from try @ 00a0ae28 with catch @ 00a0ac34 */
  OStream::~OStream(aOStack_68);
  OStream::fastSet(aOStack_50,(char *)0x0,0);
  OStream::~OStream(aOStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

