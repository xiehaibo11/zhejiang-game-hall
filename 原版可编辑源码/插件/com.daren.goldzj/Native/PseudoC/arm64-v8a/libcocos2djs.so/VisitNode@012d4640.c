
/* WARNING: Removing unreachable block (ram,0x012d5718) */
/* WARNING: Removing unreachable block (ram,0x012d68e4) */
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::RepresentationSelector::VisitNode(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void v8::internal::compiler::RepresentationSelector::VisitNode
               (RepresentationSelector *param_1,Node *param_2,ulong param_3,
               SimplifiedLowering *param_4)

{
  byte bVar1;
  short sVar2;
  Type TVar3;
  undefined2 uVar4;
  undefined3 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  Operator *pOVar12;
  RepresentationChanger *pRVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  MachineOperatorBuilder *this;
  MachineGraph *pMVar18;
  Type *pTVar19;
  Node *pNVar20;
  Type *pTVar21;
  Type TVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  Node *pNVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  Type TVar32;
  int iVar33;
  Type TVar34;
  Zone *pZVar35;
  Type TVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  int iVar39;
  long lVar40;
  RepresentationSelector *pRVar41;
  double dVar42;
  double dVar43;
  undefined2 uStack_b8c;
  Type TStack_b8a;
  undefined2 uStack_b88;
  Type TStack_b86;
  undefined2 uStack_b84;
  Type TStack_b82;
  undefined2 uStack_b80;
  Type TStack_b7e;
  undefined2 uStack_b7c;
  Type TStack_b7a;
  undefined2 uStack_b78;
  Type TStack_b76;
  undefined2 uStack_b74;
  Type TStack_b72;
  undefined2 uStack_b70;
  Type TStack_b6e;
  undefined2 uStack_b6c;
  Type TStack_b6a;
  undefined2 uStack_b68;
  Type TStack_b66;
  undefined2 uStack_b64;
  Type TStack_b62;
  undefined2 uStack_b60;
  Type TStack_b5e;
  undefined2 uStack_b5c;
  Type TStack_b5a;
  undefined2 uStack_b58;
  Type TStack_b56;
  undefined2 uStack_b54;
  Type TStack_b52;
  undefined2 uStack_b50;
  Type TStack_b4e;
  undefined2 uStack_b4c;
  Type TStack_b4a;
  undefined2 uStack_b48;
  Type TStack_b46;
  undefined2 uStack_b44;
  Type TStack_b42;
  undefined2 uStack_b40;
  Type TStack_b3e;
  undefined2 uStack_b3c;
  Type TStack_b3a;
  undefined2 uStack_b38;
  Type TStack_b36;
  undefined2 uStack_b34;
  Type TStack_b32;
  undefined2 uStack_b30;
  Type TStack_b2e;
  undefined2 uStack_b2c;
  Type TStack_b2a;
  undefined2 uStack_b28;
  Type TStack_b26;
  undefined2 uStack_b24;
  Type TStack_b22;
  undefined2 uStack_b20;
  Type TStack_b1e;
  undefined2 uStack_b1c;
  Type TStack_b1a;
  undefined2 uStack_b18;
  undefined1 uStack_b16;
  undefined2 uStack_b14;
  Type TStack_b12;
  undefined2 uStack_b10;
  undefined1 uStack_b0e;
  undefined2 uStack_b0c;
  Type TStack_b0a;
  undefined2 uStack_b08;
  Type TStack_b06;
  undefined2 uStack_b04;
  Type TStack_b02;
  undefined2 uStack_b00;
  Type TStack_afe;
  undefined2 uStack_afc;
  Type TStack_afa;
  undefined2 uStack_af8;
  Type TStack_af6;
  undefined2 uStack_af4;
  Type TStack_af2;
  undefined2 uStack_af0;
  Type TStack_aee;
  undefined2 uStack_aec;
  Type TStack_aea;
  undefined2 uStack_ae8;
  Type TStack_ae6;
  undefined2 uStack_ae4;
  Type TStack_ae2;
  undefined2 uStack_ae0;
  Type TStack_ade;
  undefined2 uStack_adc;
  Type TStack_ada;
  undefined2 uStack_ad8;
  Type TStack_ad6;
  undefined2 uStack_ad4;
  Type TStack_ad2;
  undefined2 uStack_ad0;
  Type TStack_ace;
  undefined2 uStack_acc;
  Type TStack_aca;
  undefined2 uStack_ac8;
  Type TStack_ac6;
  undefined2 uStack_ac4;
  Type TStack_ac2;
  undefined2 uStack_ac0;
  Type TStack_abe;
  undefined2 uStack_abc;
  Type TStack_aba;
  undefined2 uStack_ab8;
  Type TStack_ab6;
  undefined2 uStack_ab4;
  Type TStack_ab2;
  undefined2 uStack_ab0;
  Type TStack_aae;
  undefined2 uStack_aac;
  Type TStack_aaa;
  undefined2 uStack_aa8;
  Type TStack_aa6;
  undefined2 uStack_aa4;
  Type TStack_aa2;
  undefined2 uStack_aa0;
  Type TStack_a9e;
  undefined2 uStack_a9c;
  Type TStack_a9a;
  undefined2 uStack_a98;
  Type TStack_a96;
  undefined2 uStack_a94;
  Type TStack_a92;
  undefined2 uStack_a90;
  Type TStack_a8e;
  undefined2 uStack_a8c;
  Type TStack_a8a;
  undefined2 uStack_a88;
  Type TStack_a86;
  undefined2 uStack_a84;
  Type TStack_a82;
  undefined2 uStack_a80;
  Type TStack_a7e;
  undefined2 uStack_a7c;
  Type TStack_a7a;
  undefined2 uStack_a78;
  Type TStack_a76;
  undefined2 uStack_a74;
  Type TStack_a72;
  undefined2 uStack_a70;
  Type TStack_a6e;
  undefined2 uStack_a6c;
  Type TStack_a6a;
  undefined2 uStack_a68;
  Type TStack_a66;
  undefined2 uStack_a64;
  Type TStack_a62;
  undefined2 uStack_a60;
  Type TStack_a5e;
  undefined2 uStack_a5c;
  Type TStack_a5a;
  undefined2 uStack_a58;
  Type TStack_a56;
  undefined2 uStack_a54;
  Type TStack_a52;
  undefined2 uStack_a50;
  Type TStack_a4e;
  undefined2 uStack_a4c;
  Type TStack_a4a;
  undefined2 uStack_a48;
  Type TStack_a46;
  undefined2 uStack_a44;
  Type TStack_a42;
  undefined2 uStack_a40;
  Type TStack_a3e;
  undefined2 uStack_a3c;
  Type TStack_a3a;
  undefined2 uStack_a38;
  Type TStack_a36;
  undefined2 uStack_a34;
  Type TStack_a32;
  undefined2 uStack_a30;
  Type TStack_a2e;
  undefined2 uStack_a2c;
  Type TStack_a2a;
  undefined2 uStack_a28;
  Type TStack_a26;
  undefined2 uStack_a24;
  Type TStack_a22;
  undefined2 uStack_a20;
  Type TStack_a1e;
  undefined2 uStack_a1c;
  Type TStack_a1a;
  undefined2 uStack_a18;
  Type TStack_a16;
  undefined2 uStack_a14;
  Type TStack_a12;
  undefined2 uStack_a10;
  Type TStack_a0e;
  undefined2 uStack_a0c;
  Type TStack_a0a;
  undefined2 uStack_a08;
  Type TStack_a06;
  undefined2 uStack_a04;
  Type TStack_a02;
  undefined2 uStack_a00;
  Type TStack_9fe;
  undefined2 uStack_9fc;
  Type TStack_9fa;
  undefined2 uStack_9f8;
  undefined1 uStack_9f6;
  undefined2 uStack_9f4;
  Type TStack_9f2;
  undefined2 uStack_9f0;
  Type TStack_9ee;
  undefined2 uStack_9ec;
  Type TStack_9ea;
  undefined2 uStack_9e8;
  undefined1 uStack_9e6;
  undefined2 uStack_9e4;
  Type TStack_9e2;
  undefined2 uStack_9e0;
  Type TStack_9de;
  undefined2 uStack_9dc;
  Type TStack_9da;
  undefined2 uStack_9d8;
  Type TStack_9d6;
  undefined2 uStack_9d4;
  Type TStack_9d2;
  undefined2 uStack_9d0;
  Type TStack_9ce;
  undefined2 uStack_9cc;
  Type TStack_9ca;
  undefined2 uStack_9c8;
  Type TStack_9c6;
  undefined2 uStack_9c4;
  Type TStack_9c2;
  undefined2 uStack_9c0;
  Type TStack_9be;
  undefined2 uStack_9bc;
  Type TStack_9ba;
  undefined2 uStack_9b8;
  Type TStack_9b6;
  undefined2 uStack_9b4;
  Type TStack_9b2;
  undefined2 uStack_9b0;
  Type TStack_9ae;
  undefined2 uStack_9ac;
  Type TStack_9aa;
  undefined2 uStack_9a8;
  Type TStack_9a6;
  undefined2 uStack_9a4;
  Type TStack_9a2;
  undefined2 uStack_9a0;
  Type TStack_99e;
  undefined2 uStack_99c;
  Type TStack_99a;
  undefined2 uStack_998;
  Type TStack_996;
  undefined2 uStack_994;
  Type TStack_992;
  undefined2 uStack_990;
  Type TStack_98e;
  undefined2 uStack_98c;
  Type TStack_98a;
  undefined2 uStack_988;
  Type TStack_986;
  undefined2 uStack_984;
  Type TStack_982;
  undefined2 uStack_980;
  Type TStack_97e;
  undefined2 uStack_97c;
  Type TStack_97a;
  undefined2 uStack_978;
  Type TStack_976;
  undefined2 uStack_974;
  Type TStack_972;
  undefined2 uStack_970;
  Type TStack_96e;
  undefined2 uStack_96c;
  Type TStack_96a;
  undefined2 uStack_968;
  Type TStack_966;
  undefined2 uStack_964;
  Type TStack_962;
  undefined2 uStack_960;
  Type TStack_95e;
  undefined2 uStack_95c;
  Type TStack_95a;
  undefined2 uStack_958;
  Type TStack_956;
  undefined2 uStack_954;
  Type TStack_952;
  undefined2 uStack_950;
  Type TStack_94e;
  undefined2 uStack_94c;
  Type TStack_94a;
  undefined2 uStack_948;
  Type TStack_946;
  undefined2 uStack_944;
  Type TStack_942;
  undefined2 uStack_940;
  Type TStack_93e;
  undefined2 uStack_93c;
  Type TStack_93a;
  undefined2 uStack_938;
  Type TStack_936;
  undefined2 uStack_934;
  Type TStack_932;
  undefined2 uStack_930;
  Type TStack_92e;
  undefined2 uStack_92c;
  Type TStack_92a;
  undefined2 uStack_928;
  Type TStack_926;
  undefined2 uStack_924;
  Type TStack_922;
  undefined2 uStack_920;
  Type TStack_91e;
  undefined2 uStack_91c;
  Type TStack_91a;
  undefined2 uStack_918;
  Type TStack_916;
  undefined2 uStack_914;
  Type TStack_912;
  undefined2 uStack_910;
  Type TStack_90e;
  undefined2 uStack_90c;
  Type TStack_90a;
  undefined2 uStack_908;
  Type TStack_906;
  undefined2 uStack_904;
  Type TStack_902;
  undefined2 uStack_900;
  Type TStack_8fe;
  undefined2 uStack_8fc;
  Type TStack_8fa;
  undefined2 uStack_8f8;
  Type TStack_8f6;
  undefined2 uStack_8f4;
  Type TStack_8f2;
  undefined2 uStack_8f0;
  Type TStack_8ee;
  undefined2 uStack_8ec;
  Type TStack_8ea;
  undefined2 uStack_8e8;
  Type TStack_8e6;
  undefined2 uStack_8e4;
  Type TStack_8e2;
  undefined2 uStack_8e0;
  Type TStack_8de;
  undefined2 uStack_8dc;
  Type TStack_8da;
  undefined2 uStack_8d8;
  Type TStack_8d6;
  undefined2 uStack_8d4;
  Type TStack_8d2;
  undefined2 uStack_8d0;
  Type TStack_8ce;
  undefined2 uStack_8cc;
  Type TStack_8ca;
  undefined2 uStack_8c8;
  Type TStack_8c6;
  undefined2 uStack_8c4;
  Type TStack_8c2;
  undefined2 uStack_8c0;
  Type TStack_8be;
  undefined2 uStack_8bc;
  Type TStack_8ba;
  undefined2 uStack_8b8;
  Type TStack_8b6;
  undefined2 uStack_8b4;
  Type TStack_8b2;
  undefined2 uStack_8b0;
  Type TStack_8ae;
  undefined2 uStack_8ac;
  Type TStack_8aa;
  undefined2 uStack_8a8;
  Type TStack_8a6;
  undefined2 uStack_8a4;
  Type TStack_8a2;
  undefined2 uStack_8a0;
  Type TStack_89e;
  undefined2 uStack_89c;
  Type TStack_89a;
  undefined2 uStack_898;
  Type TStack_896;
  undefined2 uStack_894;
  Type TStack_892;
  undefined2 uStack_890;
  Type TStack_88e;
  undefined2 uStack_88c;
  Type TStack_88a;
  undefined2 uStack_888;
  Type TStack_886;
  undefined2 uStack_884;
  Type TStack_882;
  undefined2 uStack_880;
  Type TStack_87e;
  undefined2 uStack_87c;
  Type TStack_87a;
  undefined2 uStack_878;
  Type TStack_876;
  undefined2 uStack_874;
  Type TStack_872;
  undefined2 uStack_870;
  Type TStack_86e;
  undefined2 uStack_86c;
  Type TStack_86a;
  undefined2 uStack_868;
  Type TStack_866;
  undefined2 uStack_864;
  Type TStack_862;
  undefined2 uStack_860;
  Type TStack_85e;
  undefined2 uStack_85c;
  Type TStack_85a;
  undefined2 uStack_858;
  Type TStack_856;
  undefined2 uStack_854;
  Type TStack_852;
  undefined2 uStack_850;
  Type TStack_84e;
  undefined2 uStack_84c;
  Type TStack_84a;
  undefined2 uStack_848;
  Type TStack_846;
  undefined2 uStack_844;
  Type TStack_842;
  undefined2 uStack_840;
  Type TStack_83e;
  undefined2 uStack_83c;
  Type TStack_83a;
  undefined2 uStack_838;
  Type TStack_836;
  undefined2 uStack_834;
  Type TStack_832;
  undefined2 uStack_830;
  Type TStack_82e;
  undefined2 uStack_82c;
  Type TStack_82a;
  undefined2 uStack_828;
  Type TStack_826;
  undefined2 uStack_824;
  Type TStack_822;
  undefined2 uStack_820;
  Type TStack_81e;
  undefined2 uStack_81c;
  Type TStack_81a;
  undefined2 uStack_818;
  Type TStack_816;
  undefined2 uStack_814;
  Type TStack_812;
  undefined2 uStack_810;
  Type TStack_80e;
  undefined2 uStack_80c;
  Type TStack_80a;
  undefined2 uStack_808;
  Type TStack_806;
  undefined2 uStack_804;
  Type TStack_802;
  undefined2 uStack_800;
  Type TStack_7fe;
  undefined2 uStack_7fc;
  Type TStack_7fa;
  undefined2 uStack_7f8;
  Type TStack_7f6;
  undefined2 uStack_7f4;
  Type TStack_7f2;
  undefined2 uStack_7f0;
  Type TStack_7ee;
  undefined2 uStack_7ec;
  Type TStack_7ea;
  undefined2 uStack_7e8;
  Type TStack_7e6;
  undefined2 uStack_7e4;
  Type TStack_7e2;
  undefined2 uStack_7e0;
  Type TStack_7de;
  undefined2 uStack_7dc;
  Type TStack_7da;
  undefined2 uStack_7d8;
  Type TStack_7d6;
  undefined2 uStack_7d4;
  Type TStack_7d2;
  undefined2 uStack_7d0;
  Type TStack_7ce;
  undefined2 uStack_7cc;
  Type TStack_7ca;
  undefined2 uStack_7c8;
  Type TStack_7c6;
  undefined2 uStack_7c4;
  Type TStack_7c2;
  undefined2 uStack_7c0;
  Type TStack_7be;
  undefined2 uStack_7bc;
  Type TStack_7ba;
  undefined2 uStack_7b8;
  Type TStack_7b6;
  undefined2 uStack_7b4;
  Type TStack_7b2;
  undefined2 uStack_7b0;
  Type TStack_7ae;
  undefined2 uStack_7ac;
  Type TStack_7aa;
  undefined2 uStack_7a8;
  Type TStack_7a6;
  undefined2 uStack_7a4;
  Type TStack_7a2;
  undefined2 uStack_7a0;
  Type TStack_79e;
  undefined2 uStack_79c;
  Type TStack_79a;
  undefined2 uStack_798;
  Type TStack_796;
  undefined2 uStack_794;
  Type TStack_792;
  undefined2 uStack_790;
  Type TStack_78e;
  undefined2 uStack_78c;
  Type TStack_78a;
  undefined2 uStack_788;
  Type TStack_786;
  undefined2 uStack_784;
  Type TStack_782;
  undefined2 uStack_780;
  Type TStack_77e;
  undefined2 uStack_77c;
  Type TStack_77a;
  undefined2 uStack_778;
  Type TStack_776;
  undefined2 uStack_774;
  Type TStack_772;
  undefined2 uStack_770;
  Type TStack_76e;
  undefined2 uStack_76c;
  Type TStack_76a;
  undefined2 uStack_768;
  Type TStack_766;
  undefined2 uStack_764;
  Type TStack_762;
  undefined2 uStack_760;
  Type TStack_75e;
  undefined2 uStack_75c;
  Type TStack_75a;
  undefined2 uStack_758;
  Type TStack_756;
  undefined2 uStack_754;
  Type TStack_752;
  undefined2 uStack_750;
  Type TStack_74e;
  undefined2 uStack_74c;
  Type TStack_74a;
  undefined2 uStack_748;
  Type TStack_746;
  undefined2 uStack_744;
  Type TStack_742;
  undefined2 uStack_740;
  Type TStack_73e;
  undefined2 uStack_73c;
  Type TStack_73a;
  undefined2 uStack_738;
  Type TStack_736;
  undefined2 uStack_734;
  Type TStack_732;
  undefined2 uStack_730;
  Type TStack_72e;
  undefined2 uStack_72c;
  Type TStack_72a;
  undefined2 uStack_728;
  Type TStack_726;
  undefined2 uStack_724;
  Type TStack_722;
  undefined2 uStack_720;
  Type TStack_71e;
  undefined2 uStack_71c;
  Type TStack_71a;
  undefined2 uStack_718;
  Type TStack_716;
  undefined2 uStack_714;
  Type TStack_712;
  undefined2 uStack_710;
  Type TStack_70e;
  undefined2 uStack_70c;
  Type TStack_70a;
  undefined2 uStack_708;
  Type TStack_706;
  undefined2 uStack_704;
  Type TStack_702;
  undefined2 uStack_700;
  Type TStack_6fe;
  undefined2 uStack_6fc;
  Type TStack_6fa;
  undefined2 uStack_6f8;
  Type TStack_6f6;
  undefined2 uStack_6f4;
  Type TStack_6f2;
  undefined2 uStack_6f0;
  Type TStack_6ee;
  undefined2 uStack_6ec;
  Type TStack_6ea;
  undefined2 uStack_6e8;
  Type TStack_6e6;
  undefined2 uStack_6e4;
  Type TStack_6e2;
  undefined2 uStack_6e0;
  Type TStack_6de;
  undefined2 uStack_6dc;
  Type TStack_6da;
  undefined2 uStack_6d8;
  Type TStack_6d6;
  undefined2 uStack_6d4;
  Type TStack_6d2;
  undefined2 uStack_6d0;
  Type TStack_6ce;
  undefined2 uStack_6cc;
  Type TStack_6ca;
  undefined2 uStack_6c8;
  Type TStack_6c6;
  undefined2 uStack_6c4;
  Type TStack_6c2;
  undefined2 uStack_6c0;
  Type TStack_6be;
  undefined2 uStack_6bc;
  Type TStack_6ba;
  undefined2 uStack_6b8;
  Type TStack_6b6;
  undefined2 uStack_6b4;
  Type TStack_6b2;
  undefined2 uStack_6b0;
  Type TStack_6ae;
  undefined2 uStack_6ac;
  Type TStack_6aa;
  undefined2 uStack_6a8;
  Type TStack_6a6;
  undefined2 uStack_6a4;
  Type TStack_6a2;
  undefined2 uStack_6a0;
  Type TStack_69e;
  undefined2 uStack_69c;
  Type TStack_69a;
  undefined2 uStack_698;
  Type TStack_696;
  undefined2 uStack_694;
  Type TStack_692;
  undefined2 uStack_690;
  Type TStack_68e;
  undefined2 uStack_68c;
  Type TStack_68a;
  undefined2 uStack_688;
  Type TStack_686;
  undefined2 uStack_684;
  Type TStack_682;
  undefined2 uStack_680;
  Type TStack_67e;
  undefined2 uStack_67c;
  Type TStack_67a;
  undefined2 uStack_678;
  Type TStack_676;
  undefined2 uStack_674;
  Type TStack_672;
  undefined2 uStack_670;
  Type TStack_66e;
  undefined2 uStack_66c;
  Type TStack_66a;
  undefined2 uStack_668;
  Type TStack_666;
  undefined2 uStack_664;
  Type TStack_662;
  long lStack_660;
  undefined2 uStack_658;
  Type TStack_656;
  undefined2 uStack_654;
  Type TStack_652;
  undefined2 uStack_650;
  Type TStack_64e;
  undefined2 uStack_64c;
  Type TStack_64a;
  undefined2 uStack_648;
  Type TStack_646;
  undefined2 uStack_644;
  Type TStack_642;
  undefined2 uStack_640;
  Type TStack_63e;
  undefined2 uStack_63c;
  Type TStack_63a;
  undefined2 uStack_638;
  Type TStack_636;
  undefined2 uStack_634;
  Type TStack_632;
  undefined2 uStack_630;
  Type TStack_62e;
  undefined2 uStack_62c;
  Type TStack_62a;
  undefined2 uStack_628;
  Type TStack_626;
  undefined2 uStack_624;
  Type TStack_622;
  undefined2 uStack_620;
  Type TStack_61e;
  undefined2 uStack_61c;
  Type TStack_61a;
  undefined2 uStack_618;
  Type TStack_616;
  undefined2 uStack_614;
  Type TStack_612;
  undefined2 uStack_610;
  Type TStack_60e;
  undefined2 uStack_60c;
  Type TStack_60a;
  undefined2 uStack_608;
  Type TStack_606;
  undefined2 uStack_604;
  Type TStack_602;
  undefined2 uStack_600;
  Type TStack_5fe;
  undefined2 uStack_5fc;
  Type TStack_5fa;
  undefined2 uStack_5f8;
  Type TStack_5f6;
  undefined2 uStack_5f4;
  Type TStack_5f2;
  undefined2 uStack_5f0;
  Type TStack_5ee;
  undefined2 uStack_5ec;
  Type TStack_5ea;
  undefined2 uStack_5e8;
  Type TStack_5e6;
  undefined2 uStack_5e4;
  Type TStack_5e2;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined2 uStack_5d0;
  Type TStack_5ce;
  undefined2 uStack_5cc;
  Type TStack_5ca;
  undefined2 uStack_5c8;
  Type TStack_5c6;
  undefined2 uStack_5c4;
  Type TStack_5c2;
  undefined2 uStack_5c0;
  Type TStack_5be;
  undefined2 uStack_5bc;
  Type TStack_5ba;
  undefined2 uStack_5b8;
  Type TStack_5b6;
  undefined2 uStack_5b4;
  Type TStack_5b2;
  undefined2 uStack_5b0;
  Type TStack_5ae;
  undefined2 uStack_5ac;
  Type TStack_5aa;
  undefined1 auStack_5a8 [4];
  undefined8 uStack_5a4;
  undefined1 uStack_59c;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined1 auStack_588 [4];
  undefined8 uStack_584;
  undefined1 uStack_57c;
  undefined8 uStack_578;
  undefined4 uStack_570;
  char acStack_568 [3];
  Type TStack_565;
  ulong uStack_564;
  undefined1 uStack_55c;
  Type TStack_559;
  undefined8 uStack_558;
  undefined4 uStack_550;
  char acStack_548 [3];
  Type TStack_545;
  ulong uStack_544;
  undefined1 uStack_53c;
  Type TStack_539;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined3 uStack_528;
  undefined5 uStack_525;
  undefined3 uStack_520;
  undefined4 uStack_51d;
  undefined4 uStack_519;
  Type aTStack_510 [4];
  undefined8 uStack_50c;
  undefined1 uStack_504;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  Type aTStack_4f0 [4];
  undefined8 uStack_4ec;
  undefined1 uStack_4e4;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined3 uStack_4d0;
  undefined5 uStack_4cd;
  undefined3 uStack_4c8;
  undefined4 uStack_4c5;
  undefined4 uStack_4c1;
  undefined3 uStack_4b8;
  undefined5 uStack_4b5;
  undefined3 uStack_4b0;
  undefined4 uStack_4ad;
  undefined4 uStack_4a9;
  Type aTStack_4a0 [4];
  undefined8 uStack_49c;
  undefined1 uStack_494;
  undefined8 uStack_490;
  undefined4 uStack_488;
  Type aTStack_480 [4];
  undefined8 uStack_47c;
  undefined1 uStack_474;
  undefined8 uStack_470;
  undefined4 uStack_468;
  Type TStack_460;
  Type TStack_45f;
  Type TStack_45e;
  Type TStack_45d;
  int iStack_45c;
  int iStack_458;
  undefined1 uStack_454;
  undefined2 uStack_453;
  Type TStack_451;
  undefined5 uStack_450;
  undefined3 uStack_44b;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  Type aTStack_420 [4];
  undefined8 uStack_41c;
  undefined1 uStack_414;
  undefined8 uStack_410;
  undefined4 uStack_408;
  Type aTStack_400 [4];
  undefined8 uStack_3fc;
  undefined1 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined3 uStack_3e0;
  undefined5 uStack_3dd;
  undefined3 uStack_3d8;
  undefined4 uStack_3d5;
  undefined4 uStack_3d1;
  undefined3 uStack_3c8;
  undefined5 uStack_3c5;
  undefined3 uStack_3c0;
  undefined4 uStack_3bd;
  undefined4 uStack_3b9;
  Type aTStack_3b0 [4];
  undefined8 uStack_3ac;
  undefined1 uStack_3a4;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  Type aTStack_390 [4];
  undefined8 uStack_38c;
  undefined1 uStack_384;
  undefined8 uStack_380;
  undefined4 uStack_378;
  Type aTStack_370 [4];
  undefined8 uStack_36c;
  undefined1 uStack_364;
  undefined8 uStack_360;
  undefined4 uStack_358;
  Type aTStack_350 [4];
  undefined8 uStack_34c;
  undefined1 uStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  Type aTStack_330 [4];
  undefined8 uStack_32c;
  undefined1 uStack_324;
  undefined8 uStack_320;
  undefined4 uStack_318;
  Type aTStack_310 [4];
  undefined8 uStack_30c;
  undefined1 uStack_304;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined1 auStack_2f0 [4];
  undefined8 uStack_2ec;
  undefined1 uStack_2e4;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [4];
  undefined8 uStack_2cc;
  undefined1 uStack_2c4;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  Type aTStack_2b0 [4];
  undefined8 uStack_2ac;
  undefined1 uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  Type aTStack_290 [4];
  undefined8 uStack_28c;
  undefined1 uStack_284;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined1 auStack_270 [4];
  undefined8 uStack_26c;
  undefined1 uStack_264;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [4];
  undefined8 uStack_24c;
  undefined1 uStack_244;
  undefined8 uStack_240;
  undefined4 uStack_238;
  Type aTStack_230 [4];
  undefined8 uStack_22c;
  undefined1 uStack_224;
  undefined8 uStack_220;
  undefined4 uStack_218;
  Type aTStack_210 [4];
  undefined8 uStack_20c;
  undefined1 uStack_204;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  Type aTStack_1f0 [4];
  undefined8 uStack_1ec;
  undefined1 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  Type aTStack_1d0 [4];
  undefined8 uStack_1cc;
  undefined1 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  Type aTStack_1b0 [4];
  undefined8 uStack_1ac;
  undefined1 uStack_1a4;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  Type aTStack_190 [4];
  undefined8 uStack_18c;
  undefined1 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  Type aTStack_170 [4];
  undefined8 uStack_16c;
  undefined1 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  Type aTStack_150 [4];
  undefined8 uStack_14c;
  undefined1 uStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  Type aTStack_130 [4];
  undefined8 uStack_12c;
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  Type aTStack_110 [4];
  ulong uStack_10c;
  undefined1 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_ec;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_cc;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  Type TStack_b0;
  Type TStack_af;
  Type TStack_ae;
  Type TStack_ad;
  int iStack_ac;
  int iStack_a8;
  undefined1 uStack_a4;
  undefined2 uStack_a3;
  Type TStack_a1;
  char cStack_a0;
  undefined1 uStack_9f;
  byte bStack_9e;
  undefined5 uStack_9d;
  undefined4 uStack_98;
  long local_88;
  
  lVar23 = tpidr_el0;
  local_88 = *(long *)(lVar23 + 0x28);
  TickCounter::DoTick(*(TickCounter **)(param_1 + 0x1b0));
  pOVar12 = *(Operator **)param_2;
  if (((0 < *(int *)(pOVar12 + 0x14)) && ((param_3 & 0xff) == 0)) &&
     (((byte)pOVar12[0x12] & 0x7c) == 0x7c)) {
    VisitUnused(param_1,param_2);
    lVar23 = *(long *)(lVar23 + 0x28);
    goto LAB_012e0134;
  }
  pRVar41 = param_1 + 0x78;
  if (*(int *)pRVar41 == 2) {
    InsertUnreachableIfNecessary(param_1,param_2);
    pOVar12 = *(Operator **)param_2;
  }
  iVar33 = iStack_45c;
  TVar3 = TStack_45e;
  TVar32 = TStack_45f;
  iVar39 = (int)(param_3 >> 0x20);
  uVar4 = uStack_453;
  uVar5 = uStack_44b;
  switch((ulong)*(ushort *)(pOVar12 + 0x10)) {
  case 0:
    goto code_r0x012dba0c;
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x24:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x2d:
  case 0x33:
  case 0x37:
  case 0x3b:
  case 0x120:
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2c6:
  case 0x2c7:
  case 0x2cb:
  case 0x2cc:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d4:
  case 0x2d5:
  case 0x2d6:
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
  case 0x2db:
  case 0x2dc:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e0:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
  case 0x2e8:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
  case 0x2f0:
  case 0x2f1:
  case 0x2f2:
  case 0x2f3:
  case 0x2f4:
  case 0x2f5:
  case 0x2f6:
  case 0x2f7:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x304:
  case 0x305:
  case 0x306:
  case 0x307:
  case 0x308:
  case 0x309:
  case 0x30a:
  case 0x30b:
  case 0x30c:
  case 0x30d:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x315:
  case 0x316:
  case 0x317:
  case 0x318:
  case 0x319:
  case 0x31a:
  case 0x31b:
  case 0x31c:
  case 0x31d:
    VisitInputs(param_1,param_2);
    goto code_r0x012d4734;
  case 2:
    TStack_45f = SUB21(uStack_5b4,0);
    TStack_45e = SUB21((ushort)uStack_5b4 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_5b2;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5b8;
      TStack_451 = TStack_5b6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_5b2;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5b8;
      TStack_451 = TStack_5b6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    uVar9 = NodeProperties::PastEffectIndex(param_2);
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    lVar24 = -0x60;
    uStack_b8 = 0xffffffff;
    goto code_r0x012db748;
  case 3:
    TStack_45f = SUB21(uStack_5bc,0);
    TStack_45e = SUB21((ushort)uStack_5bc >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_5ba;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5c0;
      TStack_451 = TStack_5be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_5ba;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5c0;
      TStack_451 = TStack_5be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    uVar9 = NodeProperties::PastEffectIndex(param_2);
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0xffffffff;
    lVar24 = -0x80;
code_r0x012db748:
    EnqueueInput(param_1,param_2,uVar9,&stack0xffffffffffffff90 + lVar24);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Representation inference: unsupported opcode %i (%s), node #%i\n.",
             (ulong)*(ushort *)(pOVar12 + 0x10),*(undefined8 *)(pOVar12 + 8),
             (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff));
  case 0x10:
    VisitReturn(param_1,param_2);
code_r0x012d4734:
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012df91c:
      *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 8;
      break;
    }
    goto code_r0x012d474c;
  case 0x17:
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto joined_r0x012db9a4;
    lVar24 = lVar24 + uVar30 * 0x28;
    uVar27 = 4;
    goto code_r0x012dba40;
  case 0x18:
  case 0x1b:
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012db6b8:
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 5;
      goto code_r0x012dba40;
    }
    goto joined_r0x012db9a4;
  case 0x1c:
    dVar42 = *(double *)(pOVar12 + 0x30);
    if (((dVar42 <= 1073741823.0) && (-1073741824.0 <= dVar42)) && (dVar42 != -0.0)) {
      uVar10 = (uint)dVar42;
      if (dVar42 == (double)(int)uVar10) {
        iVar33 = *(int *)(param_1 + 0x78);
        if (iVar33 == 1) {
          *(undefined1 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
               6;
code_r0x012dee1c:
          iVar33 = *(int *)pRVar41;
        }
        else if (iVar33 == 0) {
          *(undefined8 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10)
               = 0xffffffff;
          goto code_r0x012dee1c;
        }
        if (iVar33 != 2) break;
        pMVar18 = *(MachineGraph **)param_4;
        uVar30 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar10 << 1;
        goto code_r0x012dee30;
      }
    }
    goto code_r0x012dba0c;
  case 0x1d:
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 5;
code_r0x012db910:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012db910;
    }
    if (iVar33 != 2) break;
    pMVar18 = *(MachineGraph **)param_4;
    uVar30 = *(ulong *)(*(long *)param_2 + 0x30);
code_r0x012dee30:
    pNVar20 = (Node *)MachineGraph::IntPtrConstant(pMVar18,uVar30);
    goto code_r0x012e0120;
  case 0x1e:
  case 0x119:
    goto code_r0x012d9db4;
  case 0x22:
    VisitSelect(param_1,param_2,param_3,param_4);
    break;
  case 0x23:
    VisitPhi(param_1,param_2,param_3,param_4);
    break;
  case 0x28:
  case 0x122:
    VisitInputs(param_1,param_2);
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
    goto code_r0x012db22c;
  case 0x29:
    VisitFrameState(param_1,param_2);
    break;
  case 0x2a:
    VisitStateValues(param_1,param_2);
    break;
  case 0x2e:
    VisitObjectState(param_1,param_2);
    break;
  case 0x2f:
    goto code_r0x012db22c;
  case 0x31:
    VisitCall((Node *)param_1,(SimplifiedLowering *)param_2);
    break;
  case 0x32:
    TStack_b0 = SUB21(uStack_5ac,0);
    TStack_af = SUB21((ushort)uStack_5ac >> 8,0);
    TStack_ae = TStack_5aa;
    uStack_5d8._0_3_ = CONCAT12(TStack_5ae,uStack_5b0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x0;
      TStack_45d = TStack_5aa;
      iStack_45c = 0;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5b0;
      TStack_451 = TStack_5ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x0;
      TStack_45d = TStack_5aa;
      iStack_45c = 0;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5b0;
      TStack_451 = TStack_5ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
code_r0x012dba0c:
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012dba34:
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 8;
code_r0x012dba40:
      *(undefined1 *)(lVar24 + 1) = uVar27;
      break;
    }
joined_r0x012db9a4:
    if (iVar33 != 0) break;
    lVar24 = lVar24 + uVar30 * 0x28;
    goto code_r0x012d4758;
  case 0x39:
    goto code_r0x012d8ef4;
  case 0x3a:
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(param_2 + 8);
    }
    cVar6 = GetOutputInfoForPhi(param_1,param_2,lVar24,param_3);
    if (*(int *)(param_1 + 0x78) == 2) {
      TStack_565 = TStack_45e;
      uStack_55c = 0;
      TStack_559 = TStack_ae;
      uStack_558 = 0;
      uStack_550 = 0xffffffff;
      acStack_568[0] = cVar6;
      uStack_564 = param_3;
      ConvertInput(param_1,param_2,0,acStack_568,lVar24);
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      TStack_545 = TStack_45e;
      uStack_53c = 0;
      TStack_539 = TStack_ae;
      uStack_538 = 0;
      uStack_530 = 0xffffffff;
      acStack_548[0] = cVar6;
      uStack_544 = param_3;
      EnqueueInput(param_1,param_2,0,acStack_548);
    }
    goto code_r0x012db988;
  case 0x3c:
    TStack_45f = SUB21(uStack_b78,0);
    TStack_45e = SUB21((ushort)uStack_b78 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x0;
      TStack_45d = TStack_b76;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b7c;
      TStack_451 = TStack_b7a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x0;
      TStack_45d = TStack_b76;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b7c;
      TStack_451 = TStack_b7a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    goto code_r0x012dede4;
  case 0x3e:
    TStack_b0 = SUB21(uStack_b80,0);
    TStack_af = SUB21((ushort)uStack_b80 >> 8,0);
    TStack_ae = TStack_b7e;
    uStack_5d8._0_3_ = CONCAT12(TStack_b82,uStack_b84);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x0;
      uStack_453 = uStack_b84;
      TStack_451 = TStack_b82;
      goto code_r0x012db840;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x0;
      uStack_453 = uStack_b84;
      TStack_451 = TStack_b82;
      goto code_r0x012d8884;
    }
    goto code_r0x012db848;
  case 0x6f:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar26 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar26 + 8) + 8);
    }
    if (((uStack_5d8 != 0xc07) &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc07), (uVar30 & 1) == 0)) ||
       ((uStack_5e0 != 0xc07 &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc07), (uVar30 & 1) == 0)))) {
      if (((uStack_5d8 != 0x1c07) &&
          (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x1c07), (uVar30 & 1) == 0)) ||
         ((uStack_5e0 != 0x1c07 &&
          (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x1c07), (uVar30 & 1) == 0)))) {
code_r0x012d7fcc:
        if (((uStack_5d8 != 0xc4b) &&
            (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) == 0)) ||
           ((uStack_5e0 != 0xc4b &&
            (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc4b), (uVar30 & 1) == 0)))) {
          if (((uStack_5d8 != 0x1c4b) &&
              (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x1c4b), (uVar30 & 1) == 0)) ||
             ((uStack_5e0 != 0x1c4b &&
              (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x1c4b), (uVar30 & 1) == 0)))) {
code_r0x012d80b8:
            TStack_45f = SUB21(uStack_5f4,0);
            TStack_45e = SUB21((ushort)uStack_5f4 >> 8,0);
            TStack_ad = TStack_5f2;
            uStack_a3 = uStack_5f8;
            TStack_a1 = TStack_5f6;
            TStack_af = TStack_45f;
            TStack_ae = TStack_45e;
            goto code_r0x012da238;
          }
          uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x148);
          pNVar26 = pNVar20;
          if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
            pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
          }
          uVar38 = *(undefined8 *)(*(long *)pNVar26 + 8);
          TStack_460 = SUB81(uVar38,0);
          TStack_45f = SUB81((ulong)uVar38 >> 8,0);
          TStack_45e = SUB81((ulong)uVar38 >> 0x10,0);
          TStack_45d = SUB81((ulong)uVar38 >> 0x18,0);
          iStack_45c = (int)((ulong)uVar38 >> 0x20);
          uVar30 = Type::Maybe(&TStack_460,uVar25);
          if ((uVar30 & 1) != 0) {
            if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
              pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
            }
            uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
            TStack_b0 = SUB81(uVar38,0);
            TStack_af = SUB81((ulong)uVar38 >> 8,0);
            TStack_ae = SUB81((ulong)uVar38 >> 0x10,0);
            TStack_ad = SUB81((ulong)uVar38 >> 0x18,0);
            iStack_ac = (int)((ulong)uVar38 >> 0x20);
            uVar30 = Type::Maybe(&TStack_b0,uVar25);
            if ((uVar30 & 1) != 0) goto code_r0x012d80b8;
          }
        }
        TStack_45f = SUB21(uStack_5ec,0);
        TStack_45e = SUB21((ushort)uStack_5ec >> 8,0);
        TStack_ad = TStack_5ea;
        uStack_a3 = uStack_5f0;
        TStack_a1 = TStack_5ee;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
code_r0x012dd094:
        uStack_9d = 0;
        bStack_9e = 0;
        uStack_9f = 0;
        cStack_a0 = '\0';
        uStack_a4 = 0;
        iStack_a8 = 0;
        iStack_ac = 2;
        TStack_b0 = (Type)0x4;
        uStack_448 = 0xffffffff;
        uStack_44b = 0;
        uStack_450 = 0;
        uStack_454 = 0;
        iStack_458 = 0;
        iStack_45c = 2;
        TStack_460 = (Type)0x4;
        uStack_98 = 0xffffffff;
        TStack_45f = TStack_af;
        TStack_45e = TStack_ae;
        TStack_45d = TStack_ad;
        uStack_453 = uStack_a3;
        TStack_451 = TStack_a1;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
        iVar33 = *(int *)(param_1 + 0x78);
        goto joined_r0x012d4c20;
      }
      uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x148);
      pNVar26 = pNVar20;
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      uVar38 = *(undefined8 *)(*(long *)pNVar26 + 8);
      TStack_460 = SUB81(uVar38,0);
      TStack_45f = SUB81((ulong)uVar38 >> 8,0);
      TStack_45e = SUB81((ulong)uVar38 >> 0x10,0);
      TStack_45d = SUB81((ulong)uVar38 >> 0x18,0);
      iStack_45c = (int)((ulong)uVar38 >> 0x20);
      uVar30 = Type::Maybe(&TStack_460,uVar25);
      if ((uVar30 & 1) != 0) {
        pNVar26 = pNVar20;
        if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
          pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        uVar38 = *(undefined8 *)(*(long *)(pNVar26 + 8) + 8);
        TStack_b0 = SUB81(uVar38,0);
        TStack_af = SUB81((ulong)uVar38 >> 8,0);
        TStack_ae = SUB81((ulong)uVar38 >> 0x10,0);
        TStack_ad = SUB81((ulong)uVar38 >> 0x18,0);
        iStack_ac = (int)((ulong)uVar38 >> 0x20);
        uVar30 = Type::Maybe(&TStack_b0,uVar25);
        if ((uVar30 & 1) != 0) goto code_r0x012d7fcc;
      }
    }
    TStack_45f = SUB21(uStack_5e4,0);
    TStack_45e = SUB21((ushort)uStack_5e4 >> 8,0);
    TStack_ad = TStack_5e2;
    uStack_a3 = uStack_5e8;
    TStack_a1 = TStack_5e6;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    goto code_r0x012d9368;
  case 0x70:
  case 0x71:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    }
    if (((uStack_5d8 != 0xc07) &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc07), (uVar30 & 1) == 0)) ||
       ((uStack_5e0 != 0xc07 &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc07), (uVar30 & 1) == 0)))) {
      if (((uStack_5d8 == 0xc4b) ||
          (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) != 0)) &&
         ((uStack_5e0 == 0xc4b ||
          (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc4b), (uVar30 & 1) != 0)))) {
        TStack_45f = SUB21(uStack_604,0);
        TStack_45e = SUB21((ushort)uStack_604 >> 8,0);
        TStack_ad = TStack_602;
        uStack_a3 = uStack_608;
        TStack_a1 = TStack_606;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
        goto code_r0x012dd094;
      }
      TStack_45f = SUB21(uStack_60c,0);
      TStack_45e = SUB21((ushort)uStack_60c >> 8,0);
      TStack_ad = TStack_60a;
      uStack_a3 = uStack_610;
      TStack_a1 = TStack_60e;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
code_r0x012da238:
      uStack_9d = 0;
      bStack_9e = 0;
      uStack_9f = 0;
      cStack_a0 = '\0';
      uStack_a4 = 0;
      iStack_a8 = 0;
      iStack_ac = 4;
      TStack_b0 = (Type)0xc;
      uStack_448 = 0xffffffff;
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      iStack_458 = 0;
      iStack_45c = 4;
      TStack_460 = (Type)0xc;
      uStack_98 = 0xffffffff;
      TStack_45f = TStack_af;
      TStack_45e = TStack_ae;
      TStack_45d = TStack_ad;
      uStack_453 = uStack_a3;
      TStack_451 = TStack_a1;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
      iVar33 = *(int *)(param_1 + 0x78);
      goto joined_r0x012d4fac;
    }
    TStack_45f = SUB21(uStack_5fc,0);
    TStack_45e = SUB21((ushort)uStack_5fc >> 8,0);
    TStack_ad = TStack_5fa;
    uStack_a3 = uStack_600;
    TStack_a1 = TStack_5fe;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
code_r0x012d9368:
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    uStack_a4 = 0;
    iStack_a8 = 0;
    iStack_ac = 2;
    TStack_b0 = (Type)0x4;
    uStack_448 = 0xffffffff;
    uStack_44b = 0;
    uStack_450 = 0;
    uStack_454 = 0;
    iStack_458 = 0;
    iStack_45c = 2;
    TStack_460 = (Type)0x4;
    uStack_98 = 0xffffffff;
    TStack_45f = TStack_af;
    TStack_45e = TStack_ae;
    TStack_45d = TStack_ad;
    uStack_453 = uStack_a3;
    TStack_451 = TStack_a1;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
code_r0x012db890:
      pOVar12 = (Operator *)
                RepresentationChanger::Uint32OperatorFor
                          (*(RepresentationChanger **)(param_1 + 0x80),
                           *(undefined2 *)(*(long *)param_2 + 0x10));
code_r0x012d48c0:
      NodeProperties::ChangeOp(param_2,pOVar12);
    }
    break;
  case 0x72:
  case 0x73:
  case 0x74:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar26 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar26 + 8) + 8);
    }
    if (((uStack_5d8 != 0xc07) &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc07), (uVar30 & 1) == 0)) ||
       ((uStack_5e0 != 0xc07 &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc07), (uVar30 & 1) == 0)))) {
      if (((uStack_5d8 != 0xc4b) &&
          (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) == 0)) ||
         ((uStack_5e0 != 0xc4b &&
          (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc4b), (uVar30 & 1) == 0)))) {
        uVar30 = NumberOperationHintOf(*(Operator **)param_2);
        uVar27 = 4;
        switch(uVar30 & 0xff) {
        case 0:
        case 2:
          if (*(int *)pRVar41 == 1) {
            lVar24 = *(long *)(param_1 + 0x18) +
                     ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28;
            uVar27 = 1;
            goto code_r0x012dba40;
          }
          if (*(int *)pRVar41 == 0) {
            if (2 < ((uint)uVar30 & 0xff)) goto code_r0x012e13f4;
            TStack_460 = (Type)0x4;
            TStack_b0 = (Type)0x4;
            TStack_45f = SUB21(uStack_624,0);
            TStack_45e = SUB21((ushort)uStack_624 >> 8,0);
            TStack_45d = TStack_622;
            iStack_45c = 5;
            iStack_458 = 0;
            uStack_454 = (undefined1)(0x20101 >> (ulong)((uint)((uVar30 & 0xff) << 3) & 0x1f));
            uStack_453 = uStack_628;
            TStack_451 = TStack_626;
            uStack_450 = 0;
            uStack_44b = 0;
            uStack_448 = 0xffffffff;
            TStack_ad = TStack_622;
            iStack_ac = 5;
            iStack_a8 = 0;
            uStack_a3 = uStack_628;
            TStack_a1 = TStack_626;
            cStack_a0 = '\0';
            uStack_9f = 0;
            bStack_9e = 0;
            uStack_9d = 0;
            uStack_98 = 0xffffffff;
            pTVar19 = &TStack_460;
            pTVar21 = &TStack_b0;
            cVar6 = '\x01';
            TStack_af = TStack_45f;
            TStack_ae = TStack_45e;
            uStack_a4 = uStack_454;
            goto code_r0x012d6d90;
          }
          if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
            pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
          }
          if ((*(byte *)(*(long *)(param_1 + 0x18) +
                         ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 1) - 6 < 3)
             && (*(byte *)(*(long *)(param_1 + 0x18) +
                           ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 + 1)
                 - 6 < 3)) {
            TStack_460 = (Type)0x6;
            TStack_b0 = (Type)0x6;
            TStack_45f = SUB21(uStack_62c,0);
            TStack_45e = SUB21((ushort)uStack_62c >> 8,0);
            TStack_45d = TStack_62a;
            iStack_45c = 5;
            iStack_458 = 0;
            uStack_454 = 1;
            uStack_453 = uStack_630;
            TStack_451 = TStack_62e;
            uStack_450 = 0;
            uStack_44b = 0;
            uStack_448 = 0xffffffff;
            TStack_ad = TStack_62a;
            iStack_ac = 5;
            iStack_a8 = 0;
            uStack_a4 = 1;
            uStack_a3 = uStack_630;
            TStack_a1 = TStack_62e;
            cStack_a0 = '\0';
            uStack_9f = 0;
            bStack_9e = 0;
            uStack_9d = 0;
            uStack_98 = 0xffffffff;
            TStack_af = TStack_45f;
            TStack_ae = TStack_45e;
            VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
            pOVar12 = (Operator *)
                      RepresentationChanger::TaggedSignedOperatorFor
                                (*(RepresentationChanger **)(param_1 + 0x80),
                                 *(undefined2 *)(*(long *)param_2 + 0x10));
            goto code_r0x012dfd40;
          }
          if (2 < ((uint)uVar30 & 0xff)) goto code_r0x012e13f4;
          TStack_460 = (Type)0x4;
          TStack_b0 = (Type)0x4;
          TStack_45f = SUB21(uStack_634,0);
          TStack_45e = SUB21((ushort)uStack_634 >> 8,0);
          TStack_45d = TStack_632;
          iStack_45c = 5;
          iStack_458 = 0;
          uStack_454 = (undefined1)(0x20101 >> (ulong)((uint)((uVar30 & 0xff) << 3) & 0x1f));
          uStack_453 = uStack_638;
          TStack_451 = TStack_636;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          TStack_ad = TStack_632;
          iStack_ac = 5;
          iStack_a8 = 0;
          uStack_a3 = uStack_638;
          TStack_a1 = TStack_636;
          cStack_a0 = '\0';
          uStack_9f = 0;
          bStack_9e = 0;
          uStack_9d = 0;
          uStack_98 = 0xffffffff;
          TStack_af = TStack_45f;
          TStack_ae = TStack_45e;
          uStack_a4 = uStack_454;
          VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
          goto code_r0x012df4d0;
        default:
          goto code_r0x012e13f4;
        case 3:
          goto code_r0x012dd7c0;
        case 4:
          goto code_r0x012dd7bc;
        }
      }
      TStack_460 = (Type)0x4;
      TStack_b0 = (Type)0x4;
      TStack_45f = SUB21(uStack_61c,0);
      TStack_45e = SUB21((ushort)uStack_61c >> 8,0);
      TStack_45d = TStack_61a;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_620;
      TStack_451 = TStack_61e;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_ad = TStack_61a;
      uStack_448 = 0xffffffff;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a3 = uStack_620;
      TStack_a1 = TStack_61e;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
code_r0x012df4d0:
      pOVar12 = (Operator *)
                RepresentationChanger::Int32OperatorFor
                          (*(RepresentationChanger **)(param_1 + 0x80),
                           *(undefined2 *)(*(long *)param_2 + 0x10));
      goto code_r0x012dfd40;
    }
    TStack_460 = (Type)0x4;
    TStack_b0 = (Type)0x4;
    TStack_45f = SUB21(uStack_614,0);
    TStack_45e = SUB21((ushort)uStack_614 >> 8,0);
    TStack_45d = TStack_612;
    iStack_45c = 2;
    iStack_458 = 0;
    uStack_454 = 0;
    uStack_453 = uStack_618;
    TStack_451 = TStack_616;
    uStack_450 = 0;
    uStack_44b = 0;
    TStack_ad = TStack_612;
    uStack_448 = 0xffffffff;
    iStack_ac = 2;
    iStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a3 = uStack_618;
    TStack_a1 = TStack_616;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
      pOVar12 = (Operator *)
                RepresentationChanger::Uint32OperatorFor
                          (*(RepresentationChanger **)(param_1 + 0x80),
                           *(undefined2 *)(*(long *)param_2 + 0x10));
      goto code_r0x012dfd40;
    }
    break;
  case 0x75:
    TStack_460 = (Type)0x8;
    TStack_b0 = (Type)0x8;
    TStack_45f = SUB21(uStack_794,0);
    TStack_45e = SUB21((ushort)uStack_794 >> 8,0);
    TStack_45d = TStack_792;
    iStack_45c = 5;
    iStack_458 = 1;
    TStack_451 = TStack_796;
    uStack_454 = 0;
    uStack_453 = uStack_798;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    TStack_ad = TStack_792;
    iStack_ac = 5;
    iStack_a8 = 1;
    uStack_a4 = 0;
    uStack_a3 = uStack_798;
    TStack_a1 = TStack_796;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
      pOVar12 = (Operator *)
                MachineOperatorBuilder::Word32Equal
                          (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
      goto code_r0x012d48c0;
    }
    break;
  case 0x76:
    if ((param_3 & 0xff) == 0) goto code_r0x012d8ef4;
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x1c5f) {
code_r0x012d8e0c:
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(pNVar20 + 8) + 8);
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 == 0x1c5f) || (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), (uVar30 & 1) != 0)) {
        TStack_460 = (Type)0xc;
        TStack_b0 = (Type)0xc;
        TStack_45f = SUB21(uStack_7a4,0);
        TStack_45e = SUB21((ushort)uStack_7a4 >> 8,0);
        TStack_45d = TStack_7a2;
        iStack_45c = 4;
        iStack_458 = 1;
        TStack_451 = TStack_7a6;
        uStack_454 = 0;
        uStack_453 = uStack_7a8;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_ad = TStack_7a2;
        iStack_ac = 4;
        iStack_a8 = 1;
        uStack_a4 = 0;
        uStack_a3 = uStack_7a8;
        TStack_a1 = TStack_7a6;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
        if (*(int *)(param_1 + 0x78) == 2) {
          pOVar12 = (Operator *)
                    SimplifiedOperatorBuilder::NumberSameValue
                              (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
          goto code_r0x012d48c0;
        }
        break;
      }
    }
    else {
      uVar30 = Type::SlowIs(&TStack_460,0x1c5f);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012d8e0c;
      }
    }
    TStack_45f = SUB21(uStack_7ac,0);
    TStack_45e = SUB21((ushort)uStack_7ac >> 8,0);
    TStack_ad = TStack_7aa;
    uStack_a3 = uStack_7b0;
    TStack_a1 = TStack_7ae;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    goto code_r0x012d6d84;
  case 0x77:
    TStack_45f = SUB21(uStack_79c,0);
    TStack_45e = SUB21((ushort)uStack_79c >> 8,0);
    TStack_45d = TStack_79a;
    TStack_451 = TStack_79e;
    uStack_b48 = uStack_79c;
    uStack_b4c = uStack_7a0;
    goto code_r0x012d6d50;
  case 0x79:
  case 0x7a:
  case 0x7b:
    TStack_45f = SUB21(uStack_81c,0);
    TStack_45e = SUB21((ushort)uStack_81c >> 8,0);
    TStack_45d = TStack_81a;
    TStack_451 = TStack_81e;
    uStack_b48 = uStack_81c;
    uStack_b4c = uStack_820;
    goto code_r0x012d6d50;
  case 0x7c:
  case 0x7d:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 != *(long *)(*(long *)(param_1 + 0x138) + 0x198)) {
      uVar30 = Type::SlowIs(&TStack_460);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012d4e08;
      }
code_r0x012d90c4:
      if (*(char *)(*(long *)(*(long *)param_1 + 0x10) + 0x10) == '\x05') {
        uVar10 = *(uint *)(param_2 + 0x14);
        lVar24 = *(long *)(*(long *)(param_1 + 0x138) + 400);
        pNVar26 = pNVar20;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar40 = *(long *)(*(long *)pNVar26 + 8);
        TStack_460 = SUB81(lVar40,0);
        TStack_45f = SUB81((ulong)lVar40 >> 8,0);
        TStack_45e = SUB81((ulong)lVar40 >> 0x10,0);
        TStack_45d = SUB81((ulong)lVar40 >> 0x18,0);
        iStack_45c = (int)((ulong)lVar40 >> 0x20);
        if (lVar40 != lVar24) {
          uVar30 = Type::SlowIs(&TStack_460,lVar24);
          if ((uVar30 & 1) == 0) goto code_r0x012df53c;
          uVar10 = *(uint *)(param_2 + 0x14);
        }
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar40 = *(long *)(*(long *)(pNVar20 + 8) + 8);
        TStack_b0 = SUB81(lVar40,0);
        TStack_af = SUB81((ulong)lVar40 >> 8,0);
        TStack_ae = SUB81((ulong)lVar40 >> 0x10,0);
        TStack_ad = SUB81((ulong)lVar40 >> 0x18,0);
        iStack_ac = (int)((ulong)lVar40 >> 0x20);
        if (((lVar40 == lVar24) || (uVar30 = Type::SlowIs(&TStack_b0,lVar24), (uVar30 & 1) != 0)) &&
           ((uStack_5d8 = *(ulong *)(param_2 + 8),
            uStack_5d8 == *(ulong *)(*(long *)(param_1 + 0x138) + 400) ||
            (uVar30 = Type::SlowIs((Type *)&uStack_5d8), (uVar30 & 1) != 0)))) {
          TStack_460 = (Type)0x5;
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          TStack_b0 = (Type)0x5;
          iStack_ac = 5;
          iStack_a8 = 1;
          uStack_a4 = 0;
          cStack_a0 = '\0';
          uStack_9f = 0;
          bStack_9e = 0;
          uStack_9d = 0;
          uStack_98 = 0xffffffff;
          VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,5,0xffffffff);
          if (*(int *)(param_1 + 0x78) == 2) {
            pOVar12 = (Operator *)
                      RepresentationChanger::Int64OperatorFor
                                (*(RepresentationChanger **)(param_1 + 0x80),
                                 *(undefined2 *)(*(long *)param_2 + 0x10));
            goto code_r0x012dfd40;
          }
          break;
        }
      }
      goto code_r0x012df53c;
    }
code_r0x012d4e08:
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(param_1 + 0x18);
    lVar40 = *(long *)(lVar24 + ((ulong)*(uint *)(*(long *)(pNVar26 + 8) + 0x14) & 0xffffff) * 0x28
                      + 0x18);
    if (lVar40 == 0) {
      lVar40 = *(long *)(*(long *)(pNVar26 + 8) + 8);
    }
    TStack_b0 = SUB81(lVar40,0);
    TStack_af = SUB81((ulong)lVar40 >> 8,0);
    TStack_ae = SUB81((ulong)lVar40 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar40 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar40 >> 0x20);
    if (lVar40 != *(long *)(*(long *)(param_1 + 0x138) + 0x198)) {
      uVar30 = Type::SlowIs(&TStack_b0);
      if ((uVar30 & 1) == 0) goto code_r0x012d90c4;
      uVar10 = *(uint *)(param_2 + 0x14);
      lVar24 = *(long *)(param_1 + 0x18);
    }
    uStack_5d8 = *(ulong *)(lVar24 + (ulong)(uVar10 & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(param_2 + 8);
    }
    if ((uStack_5d8 != 1099) && (uVar30 = Type::SlowIs((Type *)&uStack_5d8,1099), (uVar30 & 1) == 0)
       ) {
      uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                              ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
      if (uStack_5e0 == 0) {
        uStack_5e0 = *(ulong *)(param_2 + 8);
      }
      if (((uStack_5e0 != 0x407) &&
          (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x407), (uVar30 & 1) == 0)) &&
         (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) == 0))
      goto code_r0x012d90c4;
    }
code_r0x012df474:
    TStack_460 = (Type)0x4;
    iStack_45c = 2;
    iStack_458 = 0;
    uStack_454 = 0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    TStack_b0 = (Type)0x4;
    iStack_ac = 2;
    iStack_a8 = 0;
    uStack_a4 = 0;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) goto code_r0x012df4d0;
    break;
  case 0x7e:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 != 0x44f) && (uVar30 = Type::SlowIs(&TStack_460,0x44f), (uVar30 & 1) == 0))
    goto code_r0x012df53c;
    uVar10 = *(uint *)(param_2 + 0x14);
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(param_1 + 0x18);
    lVar40 = *(long *)(lVar24 + ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28
                      + 0x18);
    if (lVar40 == 0) {
      lVar40 = *(long *)(*(long *)(pNVar20 + 8) + 8);
    }
    TStack_b0 = SUB81(lVar40,0);
    TStack_af = SUB81((ulong)lVar40 >> 8,0);
    TStack_ae = SUB81((ulong)lVar40 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar40 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar40 >> 0x20);
    if (lVar40 != 0x44f) {
      uVar30 = Type::SlowIs(&TStack_b0,0x44f);
      if ((uVar30 & 1) == 0) goto code_r0x012df53c;
      uVar10 = *(uint *)(param_2 + 0x14);
      lVar24 = *(long *)(param_1 + 0x18);
    }
    uStack_5d8 = *(ulong *)(lVar24 + (ulong)(uVar10 & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(param_2 + 8);
    }
    if ((uStack_5d8 == 1099) || (uVar30 = Type::SlowIs((Type *)&uStack_5d8,1099), (uVar30 & 1) != 0)
       ) goto code_r0x012df474;
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(param_2 + 8);
    }
    if ((uStack_5e0 == 0x407) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x407), (uVar30 & 1) != 0)) goto code_r0x012df474;
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
    if ((uVar30 & 1) != 0) {
      lStack_660 = *(long *)(*(long *)(param_1 + 0x18) +
                             ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
      if (lStack_660 == 0) {
        lStack_660 = *(long *)(param_2 + 8);
      }
      if ((lStack_660 == *(long *)(*(long *)(param_1 + 0x138) + 0x1a0)) ||
         (uVar30 = Type::SlowIs((Type *)&lStack_660), (uVar30 & 1) != 0)) goto code_r0x012df474;
    }
    goto code_r0x012df53c;
  case 0x7f:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x407) {
code_r0x012d8b9c:
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                         ((ulong)*(uint *)(*(long *)(pNVar26 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18)
      ;
      if (lVar24 == 0) {
        lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
      }
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 == 0x407) || (uVar30 = Type::SlowIs(&TStack_b0,0x407), (uVar30 & 1) != 0)) {
        uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
        if ((uVar30 & 1) == 0) {
          uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                                  ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
          if (uStack_5d8 == 0) {
            uStack_5d8 = *(ulong *)(param_2 + 8);
          }
          if ((uStack_5d8 != 0x407) &&
             (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x407), (uVar30 & 1) == 0))
          goto code_r0x012d9f6c;
        }
code_r0x012d8c80:
        uStack_9d = 0;
        bStack_9e = 0;
        uStack_9f = 0;
        cStack_a0 = '\0';
        uStack_a4 = 0;
        iStack_a8 = 0;
        iStack_ac = 2;
        TStack_b0 = (Type)0x4;
        uStack_448 = 0xffffffff;
        uStack_44b = 0;
        uStack_450 = 0;
        uStack_454 = 0;
        iStack_458 = 0;
        iStack_45c = 2;
        TStack_460 = (Type)0x4;
        uStack_98 = 0xffffffff;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
        if (*(int *)(param_1 + 0x78) == 2) {
          pNVar20 = (Node *)SimplifiedLowering::Uint32Div(param_4,param_2);
          goto code_r0x012e0120;
        }
        break;
      }
    }
    else {
      uVar30 = Type::SlowIs(&TStack_460,0x407);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012d8b9c;
      }
    }
code_r0x012d9f6c:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 != 1099) {
      uVar30 = Type::SlowIs(&TStack_460,1099);
      if ((uVar30 & 1) == 0) goto code_r0x012df53c;
      uVar10 = *(uint *)(param_2 + 0x14);
    }
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)(pNVar20 + 8) + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 1099) || (uVar30 = Type::SlowIs(&TStack_b0,1099), (uVar30 & 1) != 0)) {
      uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
      if ((uVar30 & 1) == 0) {
        uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                                ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
        if (uStack_5d8 == 0) {
          uStack_5d8 = *(ulong *)(param_2 + 8);
        }
        if ((uStack_5d8 != 1099) &&
           (uVar30 = Type::SlowIs((Type *)&uStack_5d8,1099), (uVar30 & 1) == 0))
        goto code_r0x012df53c;
      }
      iStack_45c = 2;
      iStack_458 = 0;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      goto code_r0x012da0b0;
    }
code_r0x012df53c:
    uStack_44b = 0;
    uStack_450 = 0;
    iStack_458 = 1;
    iStack_45c = 4;
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    uStack_a4 = 0;
    iStack_a8 = 1;
    iStack_ac = 4;
    TStack_b0 = (Type)0xc;
    uStack_448 = 0xffffffff;
    uStack_454 = 0;
    TStack_460 = (Type)0xc;
    pTVar21 = &TStack_460;
    uVar25 = 0xffffffff;
    pTVar19 = &TStack_b0;
    uStack_98 = 0xffffffff;
code_r0x012df540:
    VisitBinop(param_1,param_2,pTVar21,pTVar19,0xc,uVar25);
    if (*(int *)(param_1 + 0x78) == 2) {
code_r0x012df550:
      pOVar12 = (Operator *)
                RepresentationChanger::Float64OperatorFor
                          (*(RepresentationChanger **)(param_1 + 0x80),
                           *(undefined2 *)(*(long *)param_2 + 0x10));
code_r0x012dfd40:
      ChangeToPureOp(param_1,param_2,pOVar12);
    }
    break;
  case 0x80:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    }
    if (((uStack_5d8 == 0x1c07) ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x1c07), (uVar30 & 1) != 0)) &&
       ((uStack_5e0 == 0x1c07 ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x1c07), (uVar30 & 1) != 0)))) {
      uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
      if ((uVar30 & 1) == 0) {
        lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                           ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
        if (lVar24 == 0) {
          lVar24 = *(long *)(param_2 + 8);
        }
        TStack_460 = SUB81(lVar24,0);
        TStack_45f = SUB81((ulong)lVar24 >> 8,0);
        TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_45c = (int)((ulong)lVar24 >> 0x20);
        if ((lVar24 != 0x407) && (uVar30 = Type::SlowIs(&TStack_460,0x407), (uVar30 & 1) == 0))
        goto code_r0x012d9840;
      }
      TStack_460 = (Type)0x4;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_b0 = (Type)0x4;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
      pNVar20 = (Node *)SimplifiedLowering::Uint32Mod(param_4,param_2);
      goto code_r0x012e0120;
    }
code_r0x012d9840:
    if (((uStack_5d8 != 0x1c4b) &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x1c4b), (uVar30 & 1) == 0)) ||
       ((uStack_5e0 != 0x1c4b &&
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x1c4b), (uVar30 & 1) == 0))))
    goto code_r0x012dcd94;
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
    if ((uVar30 & 1) != 0) {
code_r0x012d98dc:
      TStack_460 = (Type)0x4;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_b0 = (Type)0x4;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
      pNVar20 = (Node *)SimplifiedLowering::Int32Mod(param_4,param_2);
      goto code_r0x012e0120;
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(param_2 + 8);
    }
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 1099) || (uVar30 = Type::SlowIs(&TStack_460,1099), (uVar30 & 1) != 0))
    goto code_r0x012d98dc;
    if (iVar39 == 0) {
      lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                         ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x18);
      if (lVar24 == 0) {
        lVar24 = *(long *)(param_2 + 8);
      }
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 == 0xc4b) || (uVar30 = Type::SlowIs(&TStack_b0,0xc4b), (uVar30 & 1) != 0))
      goto code_r0x012d98dc;
    }
code_r0x012dcd94:
    aTStack_110[0] = (Type)0xc;
    aTStack_130[0] = (Type)0xc;
    uStack_12c = 4;
    uStack_10c = param_3 & 0xffffffff00000000 | 4;
    pTVar21 = aTStack_110;
    pTVar19 = aTStack_130;
    uVar25 = 0xffffffff;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_f8 = 0xffffffff;
    uStack_118 = 0xffffffff;
    goto code_r0x012df540;
  case 0x81:
  case 0x82:
  case 0x83:
    TStack_460 = (Type)0x4;
    iStack_45c = 2;
    iStack_458 = 0;
    uStack_454 = 0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    TStack_b0 = (Type)0x4;
    iStack_ac = 2;
    iStack_a8 = 0;
    uStack_a4 = 0;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
    iVar33 = *(int *)(param_1 + 0x78);
joined_r0x012d4c20:
    if (iVar33 != 2) break;
    pOVar12 = (Operator *)
              RepresentationChanger::Int32OperatorFor
                        (*(RepresentationChanger **)(param_1 + 0x80),
                         *(undefined2 *)(*(long *)param_2 + 0x10));
    goto code_r0x012d48c0;
  case 0x84:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    pTVar21 = aTStack_150;
    uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
    pTVar19 = aTStack_170;
    uVar25 = 0xffffffff;
    aTStack_150[0] = (Type)0x4;
    uStack_14c = 2;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_138 = 0xffffffff;
    aTStack_170[0] = (Type)0x4;
    uStack_16c = 2;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_158 = 0xffffffff;
    goto code_r0x012df800;
  case 0x85:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
    pTVar21 = aTStack_1d0;
    pTVar19 = aTStack_1f0;
    uVar25 = 0xffffffff;
    aTStack_1d0[0] = (Type)0x4;
    uStack_1cc = 2;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0xffffffff;
    aTStack_1f0[0] = (Type)0x4;
    uStack_1ec = 2;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0xffffffff;
    goto code_r0x012df740;
  case 0x86:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uVar30 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    auStack_250[0] = 4;
    uStack_24c = 2;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_238 = 0xffffffff;
    auStack_270[0] = 4;
    uStack_26c = 2;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_258 = 0xffffffff;
    VisitBinop(param_1,param_2,auStack_250,auStack_270,4,0xffffffff);
    iVar33 = *(int *)(param_1 + 0x78);
    goto joined_r0x012dfd20;
  case 0x87:
  case 0x8b:
    TStack_460 = (Type)0xc;
    TStack_b0 = (Type)0xc;
    TStack_45f = SUB21(uStack_6ec,0);
    TStack_45e = SUB21((ushort)uStack_6ec >> 8,0);
    TStack_45d = TStack_6ea;
    iStack_45c = 4;
    iStack_458 = 1;
    TStack_451 = TStack_6ee;
    uStack_454 = 0;
    uStack_453 = uStack_6f0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    TStack_ad = TStack_6ea;
    iStack_ac = 4;
    iStack_a8 = 1;
    uStack_a4 = 0;
    uStack_a3 = uStack_6f0;
    TStack_a1 = TStack_6ee;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,0xc,0xffffffff);
    iVar33 = *(int *)(param_1 + 0x78);
joined_r0x012d4fac:
    if (iVar33 == 2) goto code_r0x012d48b0;
    break;
  case 0x88:
    auStack_2d0[0] = 4;
    uStack_2cc = 2;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0xffffffff;
    auStack_2f0[0] = 4;
    uStack_2ec = 2;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0xffffffff;
    VisitBinop(param_1,param_2,auStack_2d0,auStack_2f0,4,0xffffffff);
    iVar33 = *(int *)(param_1 + 0x78);
    goto joined_r0x012db88c;
  case 0x89:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    }
    if (((uStack_5d8 == 0x407) ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x407), (uVar30 & 1) != 0)) &&
       ((uStack_5e0 == 0x407 ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x407), (uVar30 & 1) != 0))))
    goto code_r0x012dd584;
    if ((uStack_5d8 == 0xc07) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc07), (uVar30 & 1) != 0)) {
      if (uStack_5e0 != 0xc07) {
        uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc07);
        if ((iVar39 == 0) && ((uVar30 & 1) != 0)) goto code_r0x012dd584;
        goto code_r0x012dd5f0;
      }
      if (iVar39 != 0) goto code_r0x012dd5f0;
code_r0x012dd584:
      TStack_460 = (Type)0x4;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_b0 = (Type)0x4;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
      uVar25 = MachineOperatorBuilder::Uint32LessThan
                         (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
code_r0x012e0750:
      uVar38 = 4;
    }
    else {
code_r0x012dd5f0:
      if (((uStack_5d8 == 1099) ||
          (uVar30 = Type::SlowIs((Type *)&uStack_5d8,1099), (uVar30 & 1) != 0)) &&
         ((uStack_5e0 == 1099 ||
          (uVar30 = Type::SlowIs((Type *)&uStack_5e0,1099), (uVar30 & 1) != 0))))
      goto code_r0x012e06e0;
      if ((uStack_5d8 == 0xc4b) ||
         (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) != 0)) {
        if (uStack_5e0 == 0xc4b) {
          if (iVar39 == 0) {
code_r0x012e06e0:
            TStack_460 = (Type)0x4;
            TStack_b0 = (Type)0x4;
            iStack_45c = 2;
            iStack_458 = 0;
            uStack_454 = 0;
            uStack_450 = 0;
            uStack_44b = 0;
            uStack_448 = 0xffffffff;
            iStack_ac = 2;
            iStack_a8 = 0;
            uStack_a4 = 0;
            cStack_a0 = '\0';
            uStack_9f = 0;
            bStack_9e = 0;
            uStack_9d = 0;
            uStack_98 = 0xffffffff;
            VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
            if (*(int *)(param_1 + 0x78) != 2) break;
            uVar25 = MachineOperatorBuilder::Int32LessThan
                               (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
            goto code_r0x012e0750;
          }
        }
        else {
          uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc4b);
          if ((iVar39 == 0) && ((uVar30 & 1) != 0)) goto code_r0x012e06e0;
        }
      }
      if (*(char *)(*(long *)(*(long *)param_1 + 0x10) + 0x10) == '\x05') {
        uVar30 = *(ulong *)(*(long *)(param_1 + 0x138) + 400);
        if (uStack_5d8 != uVar30) {
          uVar30 = Type::SlowIs((Type *)&uStack_5d8);
          if ((uVar30 & 1) == 0) goto code_r0x012e083c;
          uVar30 = *(ulong *)(*(long *)(param_1 + 0x138) + 400);
        }
        if ((uStack_5e0 == uVar30) ||
           (uVar30 = Type::SlowIs((Type *)&uStack_5e0), (uVar30 & 1) != 0)) {
          TStack_460 = (Type)0x5;
          TStack_b0 = (Type)0x5;
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          iStack_ac = 5;
          iStack_a8 = 1;
          uStack_a4 = 0;
          cStack_a0 = '\0';
          uStack_9f = 0;
          bStack_9e = 0;
          uStack_9d = 0;
          uStack_98 = 0xffffffff;
          VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,5,0xffffffff);
          if (*(int *)(param_1 + 0x78) != 2) break;
          uVar25 = MachineOperatorBuilder::Int64LessThan
                             (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
          uVar38 = 5;
          goto code_r0x012e0758;
        }
      }
code_r0x012e083c:
      TStack_460 = (Type)0xc;
      TStack_b0 = (Type)0xc;
      TStack_45f = SUB21(uStack_6dc,0);
      TStack_45e = SUB21((ushort)uStack_6dc >> 8,0);
      TStack_45d = TStack_6da;
      iStack_45c = 4;
      uStack_454 = 0;
      uStack_453 = uStack_6e0;
      TStack_451 = TStack_6de;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_ad = TStack_6da;
      uStack_448 = 0xffffffff;
      uStack_a4 = 0;
      uStack_a3 = uStack_6e0;
      TStack_a1 = TStack_6de;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      iStack_458 = iVar39;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      iStack_ac = iStack_45c;
      iStack_a8 = iVar39;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,0xc,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
      uVar30 = 0xc5f;
      if (iVar39 != 0) {
        uVar30 = 0x45f;
      }
      if (((uStack_5d8 != uVar30) && (uVar30 = Type::SlowIs((Type *)&uStack_5d8), (uVar30 & 1) == 0)
          ) || ((uStack_5e0 != 0xc5f &&
                (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc5f), (uVar30 & 1) == 0))))
      goto code_r0x012d48b0;
      uVar25 = MachineOperatorBuilder::Float64LessThan
                         (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
      uVar38 = 0xc;
    }
code_r0x012e0758:
    SimplifiedLowering::DoMax(param_4,param_2,uVar25,uVar38);
    break;
  case 0x8a:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5e0 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5e0 == 0) {
      uStack_5e0 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    }
    if (((uStack_5d8 == 0x407) ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x407), (uVar30 & 1) != 0)) &&
       ((uStack_5e0 == 0x407 ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5e0,0x407), (uVar30 & 1) != 0))))
    goto code_r0x012dd674;
    if ((uStack_5d8 == 0xc07) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc07), (uVar30 & 1) != 0)) {
      if (uStack_5e0 != 0xc07) {
        uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc07);
        if ((iVar39 == 0) && ((uVar30 & 1) != 0)) goto code_r0x012dd674;
        goto code_r0x012dd6e0;
      }
      if (iVar39 != 0) goto code_r0x012dd6e0;
code_r0x012dd674:
      TStack_460 = (Type)0x4;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_b0 = (Type)0x4;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
      if (*(int *)(param_1 + 0x78) != 2) break;
      uVar25 = MachineOperatorBuilder::Uint32LessThan
                         (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
code_r0x012e09c4:
      uVar38 = 4;
code_r0x012e09cc:
      SimplifiedLowering::DoMin(param_4,param_2,uVar25,uVar38);
      break;
    }
code_r0x012dd6e0:
    if (((uStack_5d8 == 1099) ||
        (uVar30 = Type::SlowIs((Type *)&uStack_5d8,1099), (uVar30 & 1) != 0)) &&
       ((uStack_5e0 == 1099 || (uVar30 = Type::SlowIs((Type *)&uStack_5e0,1099), (uVar30 & 1) != 0))
       )) goto code_r0x012e0954;
    if ((uStack_5d8 == 0xc4b) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) != 0)) {
      if (uStack_5e0 == 0xc4b) {
        if (iVar39 == 0) {
code_r0x012e0954:
          TStack_460 = (Type)0x4;
          TStack_b0 = (Type)0x4;
          iStack_45c = 2;
          iStack_458 = 0;
          uStack_454 = 0;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          iStack_ac = 2;
          iStack_a8 = 0;
          uStack_a4 = 0;
          cStack_a0 = '\0';
          uStack_9f = 0;
          bStack_9e = 0;
          uStack_9d = 0;
          uStack_98 = 0xffffffff;
          VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
          if (*(int *)(param_1 + 0x78) != 2) break;
          uVar25 = MachineOperatorBuilder::Int32LessThan
                             (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
          goto code_r0x012e09c4;
        }
      }
      else {
        uVar30 = Type::SlowIs((Type *)&uStack_5e0,0xc4b);
        if ((iVar39 == 0) && ((uVar30 & 1) != 0)) goto code_r0x012e0954;
      }
    }
    if (*(char *)(*(long *)(*(long *)param_1 + 0x10) + 0x10) == '\x05') {
      uVar30 = *(ulong *)(*(long *)(param_1 + 0x138) + 400);
      if (uStack_5d8 != uVar30) {
        uVar30 = Type::SlowIs((Type *)&uStack_5d8);
        if ((uVar30 & 1) == 0) goto code_r0x012e0ab0;
        uVar30 = *(ulong *)(*(long *)(param_1 + 0x138) + 400);
      }
      if ((uStack_5e0 == uVar30) || (uVar30 = Type::SlowIs((Type *)&uStack_5e0), (uVar30 & 1) != 0))
      {
        TStack_460 = (Type)0x5;
        TStack_b0 = (Type)0x5;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        iStack_ac = 5;
        iStack_a8 = 1;
        uStack_a4 = 0;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,5,0xffffffff);
        if (*(int *)(param_1 + 0x78) != 2) break;
        uVar25 = MachineOperatorBuilder::Int64LessThan
                           (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
        uVar38 = 5;
        goto code_r0x012e09cc;
      }
    }
code_r0x012e0ab0:
    TStack_460 = (Type)0xc;
    TStack_b0 = (Type)0xc;
    TStack_45f = SUB21(uStack_6e4,0);
    TStack_45e = SUB21((ushort)uStack_6e4 >> 8,0);
    TStack_45d = TStack_6e2;
    iStack_45c = 4;
    uStack_454 = 0;
    uStack_453 = uStack_6e8;
    TStack_451 = TStack_6e6;
    uStack_450 = 0;
    uStack_44b = 0;
    TStack_ad = TStack_6e2;
    uStack_448 = 0xffffffff;
    uStack_a4 = 0;
    uStack_a3 = uStack_6e8;
    TStack_a1 = TStack_6e6;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    iStack_458 = iVar39;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    iStack_ac = iStack_45c;
    iStack_a8 = iVar39;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,0xc,0xffffffff);
    if (*(int *)(param_1 + 0x78) != 2) break;
    if ((uStack_5d8 == 0xc5f) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc5f), (uVar30 & 1) != 0)) {
      uVar30 = 0xc5f;
      if (iVar39 != 0) {
        uVar30 = 0x45f;
      }
      if ((uStack_5e0 == uVar30) || (uVar30 = Type::SlowIs((Type *)&uStack_5e0), (uVar30 & 1) != 0))
      {
        uVar25 = MachineOperatorBuilder::Float64LessThanOrEqual
                           (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
        uVar38 = 0xc;
        goto code_r0x012e09cc;
      }
    }
    goto code_r0x012d48b0;
  case 0x8e:
  case 0x8f:
    VisitSpeculativeAdditiveOp(param_1,param_2,param_3,param_4);
    break;
  case 0x90:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x44f) {
code_r0x012d68b0:
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 != 0x44f) && (uVar30 = Type::SlowIs(&TStack_b0,0x44f), (uVar30 & 1) == 0))
      goto code_r0x012dbf18;
      lVar24 = *(long *)(param_2 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 != 1099) && (uVar30 = Type::SlowIs(&TStack_460,1099), (uVar30 & 1) == 0)) {
        lVar24 = *(long *)(param_2 + 8);
        TStack_b0 = SUB81(lVar24,0);
        TStack_af = SUB81((ulong)lVar24 >> 8,0);
        TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_ac = (int)((ulong)lVar24 >> 0x20);
        if (((lVar24 != 0x407) && (uVar30 = Type::SlowIs(&TStack_b0,0x407), (uVar30 & 1) == 0)) &&
           ((uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) == 0 ||
            ((uStack_5d8 = *(ulong *)(param_2 + 8),
             uStack_5d8 != *(ulong *)(*(long *)(param_1 + 0x138) + 0x1a0) &&
             (uVar30 = Type::SlowIs((Type *)&uStack_5d8), (uVar30 & 1) == 0))))))
        goto code_r0x012dbf18;
      }
      goto code_r0x012df474;
    }
    uVar30 = Type::SlowIs(&TStack_460,0x44f);
    if ((uVar30 & 1) != 0) {
      uVar10 = *(uint *)(param_2 + 0x14);
      goto code_r0x012d68b0;
    }
code_r0x012dbf18:
    bVar7 = NumberOperationHintOf(*(Operator **)param_2);
    uVar11 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar11 & 0xf000000;
    pNVar26 = pNVar20;
    if (uVar10 == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    pNVar26 = pNVar20;
    if (uVar10 == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar40 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)(pNVar26 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar40 == 0) {
      lVar40 = *(long *)(*(long *)(pNVar26 + 8) + 8);
    }
    pNVar26 = pNVar20;
    if (uVar10 == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar31 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar31,0);
    TStack_45f = SUB81((ulong)lVar31 >> 8,0);
    TStack_45e = SUB81((ulong)lVar31 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar31 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar31 >> 0x20);
    if (lVar31 == 1099) {
code_r0x012dbfe8:
      if ((~uVar11 & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar31 = *(long *)(*(long *)(pNVar20 + 8) + 8);
      TStack_b0 = SUB81(lVar31,0);
      TStack_af = SUB81((ulong)lVar31 >> 8,0);
      TStack_ae = SUB81((ulong)lVar31 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar31 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar31 >> 0x20);
      if (lVar31 == 1099) {
        uVar30 = 1;
      }
      else {
        uVar30 = Type::SlowIs(&TStack_b0,1099);
      }
    }
    else {
      uVar30 = Type::SlowIs(&TStack_460,1099);
      if ((uVar30 & 1) != 0) {
        uVar11 = *(uint *)(param_2 + 0x14);
        goto code_r0x012dbfe8;
      }
      uVar30 = 0;
    }
    if (((bVar7 & 0xfd) == 0) && ((uVar30 & 1) != 0)) {
      TStack_45f = SUB21(uStack_644,0);
      TStack_45e = SUB21((ushort)uStack_644 >> 8,0);
      TStack_ad = TStack_642;
      iStack_ac = 2;
      iStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a3 = uStack_648;
      TStack_a1 = TStack_646;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      goto code_r0x012e15e4;
    }
    uVar25 = 0x100000005;
    if ((bVar7 & 0xfd) != 0) {
      TStack_45f = SUB21(uStack_654,0);
      TStack_45e = SUB21((ushort)uStack_654 >> 8,0);
      TStack_ad = TStack_652;
      uStack_a3 = uStack_658;
      TStack_686 = TStack_656;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      goto code_r0x012e1480;
    }
    uVar27 = 1;
    switch(bVar7) {
    case 0:
    case 1:
      break;
    case 2:
      uVar27 = 2;
      break;
    case 3:
      uVar27 = 4;
      goto code_r0x012e1560;
    case 4:
      uVar27 = 5;
code_r0x012e1560:
      uVar25 = 2;
      break;
    default:
code_r0x012e13f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    TStack_45f = SUB21(uStack_64c,0);
    TStack_45e = SUB21((ushort)uStack_64c >> 8,0);
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    TStack_ad = TStack_64a;
    uStack_a3 = uStack_650;
    TStack_a1 = TStack_64e;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    iStack_ac = iStack_45c;
    iStack_a8 = iStack_458;
    uStack_a4 = uVar27;
code_r0x012e15e4:
    uStack_98 = 0xffffffff;
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    TStack_b0 = (Type)0x4;
    uStack_448 = 0xffffffff;
    uStack_44b = 0;
    uStack_450 = 0;
    TStack_460 = (Type)0x4;
    TStack_45f = TStack_af;
    TStack_45e = TStack_ae;
    TStack_45d = TStack_ad;
    iStack_45c = iStack_ac;
    iStack_458 = iStack_a8;
    uStack_454 = uStack_a4;
    uStack_453 = uStack_a3;
    TStack_451 = TStack_a1;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,1099);
    if (*(int *)(param_1 + 0x78) == 2) {
      LowerToCheckedInt32Mul(param_1,param_2,param_3,lVar24,lVar40);
    }
    break;
  case 0x91:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x407) {
code_r0x012d7598:
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if (((lVar24 != 0x407) && (uVar30 = Type::SlowIs(&TStack_b0,0x407), (uVar30 & 1) == 0)) ||
         (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) == 0))
      goto code_r0x012d9380;
      goto code_r0x012d8c80;
    }
    uVar30 = Type::SlowIs(&TStack_460,0x407);
    if ((uVar30 & 1) != 0) {
      uVar10 = *(uint *)(param_2 + 0x14);
      goto code_r0x012d7598;
    }
code_r0x012d9380:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 != 1099) {
      uVar30 = Type::SlowIs(&TStack_460,1099);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012d93c8;
      }
code_r0x012dee64:
      uVar11 = NumberOperationHintOf(*(Operator **)param_2);
      uVar10 = *(uint *)(param_2 + 0x14);
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if (lVar24 == 0x407) {
code_r0x012deebc:
        pNVar26 = pNVar20;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
        TStack_b0 = SUB81(lVar24,0);
        TStack_af = SUB81((ulong)lVar24 >> 8,0);
        TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_ac = (int)((ulong)lVar24 >> 0x20);
        if (lVar24 == 0x407) {
          uVar30 = 1;
        }
        else {
          uVar30 = Type::SlowIs(&TStack_b0,0x407);
        }
      }
      else {
        uVar30 = Type::SlowIs(&TStack_460,0x407);
        if ((uVar30 & 1) != 0) {
          uVar10 = *(uint *)(param_2 + 0x14);
          goto code_r0x012deebc;
        }
        uVar30 = 0;
      }
      if (((uVar11 & 0xfd) == 0) && ((uVar30 & 1) != 0)) {
        TStack_460 = (Type)0x4;
        TStack_b0 = (Type)0x4;
        TStack_45f = SUB21(uStack_664,0);
        TStack_45e = SUB21((ushort)uStack_664 >> 8,0);
        TStack_45d = TStack_662;
        iStack_45c = 2;
        iStack_458 = 0;
        TStack_451 = TStack_666;
        uStack_454 = 0;
        uStack_453 = uStack_668;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_ad = TStack_662;
        iStack_ac = 2;
        iStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a3 = uStack_668;
        TStack_a1 = TStack_666;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0x407);
        if (*(int *)(param_1 + 0x78) == 2) {
          pOVar12 = (Operator *)
                    RepresentationChanger::Uint32OverflowOperatorFor
                              (*(RepresentationChanger **)(param_1 + 0x80),
                               *(undefined2 *)(*(long *)param_2 + 0x10));
          goto code_r0x012d48c0;
        }
        break;
      }
      uVar10 = *(uint *)(param_2 + 0x14);
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if (lVar24 == 1099) {
code_r0x012df674:
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar24 = *(long *)(*(long *)(pNVar20 + 8) + 8);
        TStack_b0 = SUB81(lVar24,0);
        TStack_af = SUB81((ulong)lVar24 >> 8,0);
        TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_ac = (int)((ulong)lVar24 >> 0x20);
        if (lVar24 != 1099) {
          uVar30 = Type::SlowIs(&TStack_b0,1099);
          if ((uVar11 & 0xfd) == 0) goto code_r0x012dfbf8;
          goto code_r0x012e0bbc;
        }
        uVar30 = 1;
        if ((uVar11 & 0xfd) != 0) goto code_r0x012e0bbc;
code_r0x012dfbf8:
        if ((uVar30 & 1) == 0) goto code_r0x012e0bbc;
        TStack_45f = SUB21(uStack_66c,0);
        TStack_45e = SUB21((ushort)uStack_66c >> 8,0);
        iStack_45c = 2;
        iStack_458 = 0;
        TStack_ad = TStack_66a;
        iStack_ac = 2;
        iStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a3 = uStack_670;
        TStack_a1 = TStack_66e;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
code_r0x012e1a7c:
        uStack_98 = 0xffffffff;
        uStack_9d = 0;
        bStack_9e = 0;
        uStack_9f = 0;
        cStack_a0 = '\0';
        TStack_b0 = (Type)0x4;
        uStack_448 = 0xffffffff;
        uStack_44b = 0;
        uStack_450 = 0;
        TStack_460 = (Type)0x4;
        TStack_45f = TStack_af;
        TStack_45e = TStack_ae;
        TStack_45d = TStack_ad;
        uStack_454 = uStack_a4;
        uStack_453 = uStack_a3;
        TStack_451 = TStack_a1;
        VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,1099);
        if (*(int *)(param_1 + 0x78) == 2) {
          pOVar12 = (Operator *)
                    RepresentationChanger::Int32OverflowOperatorFor
                              (*(RepresentationChanger **)(param_1 + 0x80),
                               *(undefined2 *)(*(long *)param_2 + 0x10));
          goto code_r0x012d48c0;
        }
        break;
      }
      uVar30 = Type::SlowIs(&TStack_460,1099);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012df674;
      }
code_r0x012e0bbc:
      if ((uVar11 & 0xff) < 3) {
        uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
        if ((uVar30 & 1) != 0) {
          if (2 < (uVar11 & 0xff)) goto code_r0x012e13f4;
          TStack_45d = TStack_672;
          uStack_453 = uStack_678;
          TStack_451 = TStack_676;
          TStack_45f = SUB21(uStack_674,0);
          TStack_45e = SUB21((ushort)uStack_674 >> 8,0);
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_a4 = (undefined1)(0x20101 >> (ulong)((uVar11 & 3) << 3));
          uStack_a3 = uStack_678;
          TStack_a1 = TStack_676;
          iStack_ac = 5;
          iStack_a8 = 1;
          TStack_af = TStack_45f;
          TStack_ae = TStack_45e;
          TStack_ad = TStack_45d;
          goto code_r0x012da0b0;
        }
        if ((uVar11 & 0xff) == 0) {
          uVar27 = 1;
        }
        else {
          if ((uVar11 & 0xff) == 1) goto code_r0x012e1400;
          uVar27 = (char)uVar11;
          if ((uVar11 & 0xff) != 2) goto code_r0x012e13f4;
        }
        uStack_a4 = uVar27;
        TStack_45f = SUB21(uStack_67c,0);
        TStack_45e = SUB21((ushort)uStack_67c >> 8,0);
        iStack_45c = 5;
        iStack_458 = 1;
        TStack_ad = TStack_67a;
        iStack_ac = 5;
        iStack_a8 = 1;
        uStack_a3 = uStack_680;
        TStack_a1 = TStack_67e;
        TStack_af = TStack_45f;
        TStack_ae = TStack_45e;
        goto code_r0x012e1a7c;
      }
code_r0x012e1400:
      TStack_45f = SUB21(uStack_684,0);
      TStack_45e = SUB21((ushort)uStack_684 >> 8,0);
      TStack_ad = TStack_682;
      uStack_a3 = uStack_688;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
code_r0x012e1480:
      uStack_a4 = 5;
      iStack_a8 = 1;
      iStack_ac = 5;
      TStack_b0 = (Type)0xc;
      uStack_448 = 0xffffffff;
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 5;
      iStack_458 = 1;
      iStack_45c = 5;
      TStack_460 = (Type)0xc;
      pTVar21 = &TStack_460;
      uVar25 = 0x1c5f;
      pTVar19 = &TStack_b0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_45f = TStack_af;
      TStack_45e = TStack_ae;
      TStack_45d = TStack_ad;
      uStack_453 = uStack_a3;
      TStack_451 = TStack_686;
      TStack_a1 = TStack_686;
      goto code_r0x012df540;
    }
code_r0x012d93c8:
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 != 1099) && (uVar30 = Type::SlowIs(&TStack_b0,1099), (uVar30 & 1) == 0))
    goto code_r0x012dee64;
    lVar24 = *(long *)(param_2 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 != 1099) &&
       ((uVar30 = Type::SlowIs(&TStack_460,1099), (uVar30 & 1) == 0 &&
        (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) == 0))))
    goto code_r0x012dee64;
    iStack_45c = 2;
    iStack_458 = 0;
    iStack_ac = 2;
    iStack_a8 = 0;
    uStack_a4 = 0;
code_r0x012da0b0:
    uStack_44b = 0;
    uStack_450 = 0;
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    TStack_b0 = (Type)0x4;
    uStack_448 = 0xffffffff;
    TStack_460 = (Type)0x4;
    uStack_98 = 0xffffffff;
    uStack_454 = uStack_a4;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
      pNVar20 = (Node *)SimplifiedLowering::Int32Div(param_4,param_2);
      goto code_r0x012e0120;
    }
    break;
  case 0x92:
    VisitSpeculativeNumberModulus(param_1,param_2,param_3,param_4);
    break;
  case 0x93:
  case 0x94:
  case 0x95:
    VisitSpeculativeInt32Binop(param_1,param_2);
    if (*(int *)(param_1 + 0x78) != 2) break;
    pOVar12 = (Operator *)
              RepresentationChanger::Int32OperatorFor
                        (*(RepresentationChanger **)(param_1 + 0x80),
                         *(undefined2 *)(*(long *)param_2 + 0x10));
    goto code_r0x012dfd40;
  case 0x96:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x801fdf) {
code_r0x012d5af8:
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if (lVar24 != 0x801fdf) {
        uVar30 = Type::SlowIs(&TStack_b0,0x801fdf);
        if ((uVar30 & 1) == 0) goto code_r0x012d9ef8;
        uVar10 = *(uint *)(param_2 + 0x14);
      }
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
      pTVar21 = aTStack_190;
      pTVar19 = aTStack_1b0;
      uVar25 = 0xffffffff;
      aTStack_190[0] = (Type)0x4;
      uStack_18c = 2;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_178 = 0xffffffff;
      aTStack_1b0[0] = (Type)0x4;
      uStack_1ac = 2;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0xffffffff;
      goto code_r0x012df800;
    }
    uVar30 = Type::SlowIs(&TStack_460,0x801fdf);
    if ((uVar30 & 1) != 0) {
      uVar10 = *(uint *)(param_2 + 0x14);
      goto code_r0x012d5af8;
    }
code_r0x012d9ef8:
    bVar7 = NumberOperationHintOf(*(Operator **)param_2);
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    if (4 < bVar7) goto code_r0x012e13f4;
    uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
    uVar25 = 0x100000005;
    uStack_454 = 1;
    switch(bVar7) {
    case 2:
      uStack_454 = 2;
      break;
    case 3:
      uStack_454 = 4;
      goto code_r0x012df77c;
    case 4:
      uStack_454 = 5;
code_r0x012df77c:
      uVar25 = 2;
    }
    TStack_460 = (Type)0x4;
    TStack_b0 = (Type)0x4;
    TStack_45f = SUB21(uStack_68c,0);
    TStack_45e = SUB21((ushort)uStack_68c >> 8,0);
    TStack_45d = TStack_68a;
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    uStack_453 = uStack_690;
    TStack_451 = TStack_68e;
    uStack_450 = 0;
    uStack_44b = 0;
    pTVar21 = &TStack_460;
    pTVar19 = &TStack_b0;
    uVar25 = 1099;
    uStack_448 = 0xffffffff;
    TStack_ad = TStack_68a;
    uStack_a3 = uStack_690;
    TStack_a1 = TStack_68e;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    iStack_ac = iStack_45c;
    iStack_a8 = iStack_458;
    uStack_a4 = uStack_454;
code_r0x012df800:
    VisitBinop(param_1,param_2,pTVar21,pTVar19,4,uVar25);
    if (*(int *)(param_1 + 0x78) != 2) break;
    MaskShiftOperand(param_1,param_2,uVar38);
    pOVar12 = (Operator *)
              MachineOperatorBuilder::Word32Shl
                        (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
    goto code_r0x012dfd40;
  case 0x97:
    uVar10 = *(uint *)(param_2 + 0x14);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (lVar24 == 0x801fdf) {
code_r0x012d5774:
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)(pNVar26 + 8) + 8);
      TStack_b0 = SUB81(lVar24,0);
      TStack_af = SUB81((ulong)lVar24 >> 8,0);
      TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_ac = (int)((ulong)lVar24 >> 0x20);
      if (lVar24 != 0x801fdf) {
        uVar30 = Type::SlowIs(&TStack_b0,0x801fdf);
        if ((uVar30 & 1) == 0) goto code_r0x012d9e8c;
        uVar10 = *(uint *)(param_2 + 0x14);
      }
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
      pTVar21 = aTStack_210;
      pTVar19 = aTStack_230;
      uVar25 = 0xffffffff;
      aTStack_210[0] = (Type)0x4;
      uStack_20c = 2;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0xffffffff;
      aTStack_230[0] = (Type)0x4;
      uStack_22c = 2;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_218 = 0xffffffff;
      goto code_r0x012df740;
    }
    uVar30 = Type::SlowIs(&TStack_460,0x801fdf);
    if ((uVar30 & 1) != 0) {
      uVar10 = *(uint *)(param_2 + 0x14);
      goto code_r0x012d5774;
    }
code_r0x012d9e8c:
    bVar7 = NumberOperationHintOf(*(Operator **)param_2);
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    if (4 < bVar7) goto code_r0x012e13f4;
    uVar38 = *(undefined8 *)(*(long *)(pNVar20 + 8) + 8);
    uVar25 = 0x100000005;
    uStack_454 = 1;
    switch(bVar7) {
    case 2:
      uStack_454 = 2;
      break;
    case 3:
      uStack_454 = 4;
      goto code_r0x012df6bc;
    case 4:
      uStack_454 = 5;
code_r0x012df6bc:
      uVar25 = 2;
    }
    TStack_460 = (Type)0x4;
    TStack_b0 = (Type)0x4;
    TStack_45f = SUB21(uStack_694,0);
    TStack_45e = SUB21((ushort)uStack_694 >> 8,0);
    TStack_45d = TStack_692;
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    uStack_453 = uStack_698;
    TStack_451 = TStack_696;
    uStack_450 = 0;
    uStack_44b = 0;
    pTVar21 = &TStack_460;
    pTVar19 = &TStack_b0;
    uVar25 = 1099;
    uStack_448 = 0xffffffff;
    TStack_ad = TStack_692;
    uStack_a3 = uStack_698;
    TStack_a1 = TStack_696;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    iStack_ac = iStack_45c;
    iStack_a8 = iStack_458;
    uStack_a4 = uStack_454;
code_r0x012df740:
    VisitBinop(param_1,param_2,pTVar21,pTVar19,4,uVar25);
    if (*(int *)(param_1 + 0x78) != 2) break;
    MaskShiftOperand(param_1,param_2,uVar38);
    pOVar12 = (Operator *)
              MachineOperatorBuilder::Word32Sar
                        (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
    goto code_r0x012dfd40;
  case 0x98:
    bVar7 = NumberOperationHintOf(pOVar12);
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(pNVar26 + 8) + 8);
    if (uStack_5d8 == *(ulong *)(*(long *)(param_1 + 0x138) + 0x148)) {
      uVar30 = 1;
    }
    else {
      uVar30 = Type::SlowIs((Type *)&uStack_5d8);
    }
    if ((((bVar7 & 0xfd) != 0) || ((uVar30 & 1) == 0)) ||
       (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) != 0)) {
      uVar10 = *(uint *)(param_2 + 0x14);
      pNVar26 = pNVar20;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if (lVar24 == 0x801fdf) {
code_r0x012d9ad4:
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar24 = *(long *)(*(long *)(pNVar20 + 8) + 8);
        TStack_b0 = SUB81(lVar24,0);
        TStack_af = SUB81((ulong)lVar24 >> 8,0);
        TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_ac = (int)((ulong)lVar24 >> 0x20);
        if ((lVar24 != 0x801fdf) && (uVar30 = Type::SlowIs(&TStack_b0,0x801fdf), (uVar30 & 1) == 0))
        goto code_r0x012dba48;
        aTStack_290[0] = (Type)0x4;
        uStack_28c = 2;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_278 = 0xffffffff;
        aTStack_2b0[0] = (Type)0x4;
        uStack_2ac = 2;
        uStack_2a4 = 0;
        uStack_2a0 = 0;
        uStack_298 = 0xffffffff;
        pTVar21 = aTStack_290;
        pTVar19 = aTStack_2b0;
        uVar25 = 0xffffffff;
        goto code_r0x012dfd0c;
      }
      uVar30 = Type::SlowIs(&TStack_460,0x801fdf);
      if ((uVar30 & 1) != 0) {
        uVar10 = *(uint *)(param_2 + 0x14);
        goto code_r0x012d9ad4;
      }
code_r0x012dba48:
      uVar25 = 0x100000005;
      uVar27 = 1;
      switch(bVar7) {
      case 0:
      case 1:
        break;
      case 2:
        uVar27 = 2;
        break;
      case 3:
        uVar27 = 4;
        goto code_r0x012dfc90;
      case 4:
        uVar27 = 5;
code_r0x012dfc90:
        uVar25 = 2;
        break;
      default:
        goto code_r0x012e13f4;
      }
      TStack_460 = (Type)0x4;
      TStack_b0 = (Type)0x4;
      TStack_45f = SUB21(uStack_6a4,0);
      TStack_45e = SUB21((ushort)uStack_6a4 >> 8,0);
      TStack_45d = TStack_6a2;
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      uStack_453 = uStack_6a8;
      TStack_451 = TStack_6a6;
      uStack_450 = 0;
      uStack_44b = 0;
      pTVar21 = &TStack_460;
      pTVar19 = &TStack_b0;
      uVar25 = 0x407;
      uStack_448 = 0xffffffff;
      TStack_ad = TStack_6a2;
      uStack_a3 = uStack_6a8;
      TStack_a1 = TStack_6a6;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      uStack_454 = uVar27;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      iStack_ac = iStack_45c;
      iStack_a8 = iStack_458;
      uStack_a4 = uVar27;
code_r0x012dfd0c:
      VisitBinop(param_1,param_2,pTVar21,pTVar19,4,uVar25);
      iVar33 = *(int *)(param_1 + 0x78);
      uVar30 = uStack_5d8;
joined_r0x012dfd20:
      if (iVar33 != 2) break;
      MaskShiftOperand(param_1,param_2,uVar30);
      pOVar12 = (Operator *)
                MachineOperatorBuilder::Word32Shr
                          (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
      goto code_r0x012dfd40;
    }
    uVar25 = 0x100000005;
    uVar27 = 1;
    switch(bVar7) {
    case 0:
    case 1:
      break;
    case 2:
      uVar27 = 2;
      break;
    case 3:
      uVar27 = 4;
      goto code_r0x012e060c;
    case 4:
      uVar27 = 5;
code_r0x012e060c:
      uVar25 = 2;
      break;
    default:
      goto code_r0x012e13f4;
    }
    TStack_460 = (Type)0x4;
    TStack_b0 = (Type)0x4;
    TStack_45f = SUB21(uStack_69c,0);
    TStack_45e = SUB21((ushort)uStack_69c >> 8,0);
    TStack_45d = TStack_69a;
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    TStack_451 = TStack_69e;
    TStack_ad = TStack_69a;
    uStack_453 = uStack_6a0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    uStack_a3 = uStack_6a0;
    TStack_a1 = TStack_69e;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    uStack_454 = uVar27;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    iStack_ac = iStack_45c;
    iStack_a8 = iStack_458;
    uStack_a4 = uVar27;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,4,0x403);
    if (*(int *)(param_1 + 0x78) != 2) break;
    Node::RemoveInput(param_2,1);
    TStack_460 = (Type)0x0;
    TStack_45f = (Type)0x0;
    TStack_45e = (Type)0x0;
    TStack_45d = (Type)0x0;
    iStack_45c = 0;
    iStack_458 = -1;
    pOVar12 = (Operator *)
              SimplifiedOperatorBuilder::CheckedUint32ToInt32
                        (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178),
                         (FeedbackSource *)&TStack_460);
    goto code_r0x012d48c0;
  case 0x99:
  case 0x9a:
    VisitSpeculativeIntegerAdditiveOp(param_1,param_2,param_3,param_4);
    break;
  case 0x9b:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0xc07) || (uVar30 = Type::SlowIs(&TStack_b0,0xc07), (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_6aa,uStack_6ac);
      uStack_5e0._0_3_ = CONCAT12(TStack_6ae,uStack_6b0);
      TStack_45f = SUB21(uStack_6ac,0);
      TStack_45e = SUB21((ushort)uStack_6ac >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_6aa;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6b0;
        TStack_451 = TStack_6ae;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_6aa;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6b0;
        TStack_451 = TStack_6ae;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 == 1) {
        lVar24 = lVar24 + uVar30 * 0x28;
        uVar27 = 4;
code_r0x012dca80:
        *(undefined1 *)(lVar24 + 1) = uVar27;
      }
      else {
code_r0x012dca5c:
        if (iVar33 != 0) goto joined_r0x012dcc9c;
        *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
      }
      iVar33 = *(int *)pRVar41;
joined_r0x012dcc9c:
      if (iVar33 != 2) break;
code_r0x012dcca0:
      pNVar20 = param_2 + 0x20;
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      pNVar20 = *(Node **)pNVar20;
      goto code_r0x012e0120;
    }
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         == 0xc4b) || (uVar30 = Type::SlowIs(&TStack_b0,0xc4b), (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_6b2,uStack_6b4);
      uStack_5e0._0_3_ = CONCAT12(TStack_6b6,uStack_6b8);
      TStack_45f = SUB21(uStack_6b4,0);
      TStack_45e = SUB21((ushort)uStack_6b4 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_6b2;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6b8;
        TStack_451 = TStack_6b6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_6b2;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6b8;
        TStack_451 = TStack_6b6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012e03a8:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012e03a8;
      }
      if (iVar33 == 2) {
        pNVar20 = (Node *)SimplifiedLowering::Int32Abs(param_4,param_2);
        goto code_r0x012e0120;
      }
      break;
    }
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         == *(long *)(*(long *)(param_1 + 0x138) + 0x178)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), TVar3 = TStack_45e, TVar32 = TStack_45f,
       (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_6ba,uStack_6bc);
      uStack_5e0._0_3_ = CONCAT12(TStack_6be,uStack_6c0);
      TStack_45f = SUB21(uStack_6bc,0);
      TStack_45e = SUB21((ushort)uStack_6bc >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_6ba;
        iStack_45c = 4;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6c0;
        TStack_451 = TStack_6be;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_6ba;
        iStack_45c = 4;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_6c0;
        TStack_451 = TStack_6be;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 == 1) {
        lVar24 = lVar24 + uVar30 * 0x28;
        uVar27 = 0xc;
        goto code_r0x012dca80;
      }
      goto code_r0x012dca5c;
    }
    uStack_5d8._0_3_ = CONCAT12(TStack_6c2,uStack_6c4);
    uStack_5e0._0_3_ = CONCAT12(TStack_6c6,uStack_6c8);
    TStack_45f = SUB21(uStack_6c4,0);
    TStack_45e = SUB21((ushort)uStack_6c4 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      uStack_453 = uStack_6c8;
      TStack_45d = TStack_6c2;
      TStack_451 = TStack_6c6;
      iStack_458 = 0;
      goto code_r0x012d484c;
    }
    if (*(int *)pRVar41 == 0) {
      uStack_453 = uStack_6c8;
      TStack_45d = TStack_6c2;
      TStack_451 = TStack_6c6;
      iStack_458 = 0;
      goto code_r0x012d47e8;
    }
    goto code_r0x012d4854;
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xb1:
  case 0xb2:
  case 0xb4:
  case 0xb5:
    goto code_r0x012d4774;
  case 0xa3:
  case 0xa9:
  case 0xaf:
  case 0xb6:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar26 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    uStack_5d8._0_3_ = CONCAT12(TStack_6f2,uStack_6f4);
    uStack_5e0._0_3_ = CONCAT12(TStack_6f6,uStack_6f8);
    TStack_45f = SUB21(uStack_6f4,0);
    TStack_45e = SUB21((ushort)uStack_6f4 >> 8,0);
    iStack_45c = 4;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_6f2;
      uStack_454 = 0;
      uStack_453 = uStack_6f8;
      TStack_451 = TStack_6f6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      iStack_458 = iVar39;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_6f2;
      uStack_454 = 0;
      uStack_453 = uStack_6f8;
      TStack_451 = TStack_6f6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      iStack_458 = iVar39;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
    }
    iStack_45c = iVar33;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 0xc;
code_r0x012d5218:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012d5218;
    }
    if (iVar33 != 2) break;
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         == *(long *)(*(long *)(param_1 + 0x138) + 0x160)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) {
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      pNVar20 = *(Node **)pNVar20;
      goto code_r0x012e0120;
    }
    sVar2 = *(short *)(*(long *)param_2 + 0x10);
    if (sVar2 == 0xaf) {
      pNVar20 = (Node *)SimplifiedLowering::Float64Round(param_4,param_2);
      goto code_r0x012e0120;
    }
    pRVar13 = *(RepresentationChanger **)(param_1 + 0x80);
    goto code_r0x012d48bc;
  case 0xa4:
    TStack_b0 = SUB21(uStack_6cc,0);
    TStack_af = SUB21((ushort)uStack_6cc >> 8,0);
    TStack_ae = TStack_6ca;
    uStack_5d8._0_3_ = CONCAT12(TStack_6ce,uStack_6d0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_6ca;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_6d0;
      TStack_451 = TStack_6ce;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_6ca;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_6d0;
      TStack_451 = TStack_6ce;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
    }
    else {
      if (iVar33 != 0) goto joined_r0x012db88c;
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
    }
    iVar33 = *(int *)pRVar41;
joined_r0x012db88c:
    if (iVar33 != 2) break;
    goto code_r0x012db890;
  case 0xaa:
    TStack_b0 = SUB21(uStack_6d4,0);
    TStack_af = SUB21((ushort)uStack_6d4 >> 8,0);
    TStack_ae = TStack_6d2;
    uStack_5d8._0_3_ = CONCAT12(TStack_6d6,uStack_6d8);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_6d2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_6d8;
      TStack_451 = TStack_6d6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_6d2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_6d8;
      TStack_451 = TStack_6d6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 0xb;
      goto code_r0x012d48a0;
    }
    goto code_r0x012d487c;
  case 0xb0:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 1099) || (uVar30 = Type::SlowIs(&TStack_460,1099), (uVar30 & 1) != 0)) {
      TStack_b0 = SUB21(uStack_714,0);
      TStack_af = SUB21((ushort)uStack_714 >> 8,0);
      TStack_ae = TStack_712;
      uStack_5d8._0_3_ = CONCAT12(TStack_716,uStack_718);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_712;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_718;
        TStack_451 = TStack_716;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_712;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_718;
        TStack_451 = TStack_716;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012dcbcc:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dcbcc;
      }
      if (iVar33 == 2) {
        pNVar20 = (Node *)SimplifiedLowering::Int32Sign(param_4,param_2);
        goto code_r0x012e0120;
      }
    }
    else {
      TStack_b0 = SUB21(uStack_71c,0);
      TStack_af = SUB21((ushort)uStack_71c >> 8,0);
      TStack_ae = TStack_71a;
      uStack_5d8._0_3_ = CONCAT12(TStack_71e,uStack_720);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_71a;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_720;
        TStack_451 = TStack_71e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_71a;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_720;
        TStack_451 = TStack_71e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
             0xc;
code_r0x012dfaf4:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dfaf4;
      }
      if (iVar33 == 2) {
        pNVar20 = (Node *)SimplifiedLowering::Float64Sign(param_4,param_2);
        goto code_r0x012e0120;
      }
    }
    break;
  case 0xb3:
    uStack_70c = uStack_734;
    TStack_70a = TStack_732;
    uStack_710 = uStack_738;
    TStack_70e = TStack_736;
code_r0x012d4774:
    TStack_b0 = SUB21(uStack_70c,0);
    TStack_af = SUB21((ushort)uStack_70c >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_70e,uStack_710);
    TStack_ae = TStack_70a;
    if (*(int *)pRVar41 == 2) {
      iStack_458 = 1;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_70a;
      uStack_453 = uStack_710;
      TStack_451 = TStack_70e;
code_r0x012d484c:
      uStack_44b = 0;
      uStack_450 = 0;
      iStack_45c = 4;
      uStack_454 = 0;
      TStack_460 = (Type)0xc;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else {
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      if (*(int *)pRVar41 == 0) {
        iStack_458 = 1;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        TStack_45d = TStack_70a;
        uStack_453 = uStack_710;
        TStack_451 = TStack_70e;
code_r0x012d47e8:
        uStack_44b = 0;
        uStack_450 = 0;
        iStack_45c = 4;
        uStack_454 = 0;
        TStack_460 = (Type)0xc;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
    }
code_r0x012d4854:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 0xc;
code_r0x012d48a0:
      *(undefined1 *)(lVar24 + 1) = uVar27;
code_r0x012d48a4:
      iVar33 = *(int *)pRVar41;
    }
    else {
code_r0x012d487c:
      if (iVar33 == 0) {
        *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
        goto code_r0x012d48a4;
      }
    }
joined_r0x012dfadc:
    if (iVar33 != 2) break;
code_r0x012d48b0:
    pRVar13 = *(RepresentationChanger **)(param_1 + 0x80);
    sVar2 = *(short *)(*(long *)param_2 + 0x10);
code_r0x012d48bc:
    pOVar12 = (Operator *)RepresentationChanger::Float64OperatorFor(pRVar13,sVar2);
    goto code_r0x012d48c0;
  case 0xb7:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x1c4f) || (uVar30 = Type::SlowIs(&TStack_b0,0x1c4f), (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_73a,uStack_73c);
      uStack_5e0._0_3_ = CONCAT12(TStack_73e,uStack_740);
      TStack_45f = SUB21(uStack_73c,0);
      TStack_45e = SUB21((ushort)uStack_73c >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_73a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_740;
        TStack_451 = TStack_73e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_73a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_740;
        TStack_451 = TStack_73e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012dc534:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dc534;
      }
      if (iVar33 == 2) {
        SimplifiedLowering::DoIntegral32ToBit(param_4,param_2);
      }
    }
    else {
      if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
           != 0xc5f) &&
         (uVar30 = Type::SlowIs(&TStack_b0,0xc5f), TVar3 = TStack_45e, TVar32 = TStack_45f,
         (uVar30 & 1) == 0)) {
        uStack_5d8._0_3_ = CONCAT12(TStack_74a,uStack_74c);
        uStack_5e0._0_3_ = CONCAT12(TStack_74e,uStack_750);
        TStack_45f = SUB21(uStack_74c,0);
        TStack_45e = SUB21((ushort)uStack_74c >> 8,0);
        if (*(int *)pRVar41 == 2) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_74a;
          iStack_45c = 4;
          iStack_458 = 0;
          uStack_454 = 0;
          uStack_453 = uStack_750;
          TStack_451 = TStack_74e;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          ConvertInput(param_1,param_2,0,&TStack_460,0);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        else if (*(int *)pRVar41 == 0) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_74a;
          iStack_45c = 4;
          iStack_458 = 0;
          uStack_454 = 0;
          uStack_453 = uStack_750;
          TStack_451 = TStack_74e;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          EnqueueInput(param_1,param_2,0,&TStack_460);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        TStack_45e = TVar3;
        TStack_45f = TVar32;
        ProcessRemainingInputs(param_1,param_2,1);
        iVar33 = *(int *)(param_1 + 0x78);
        if (iVar33 == 1) {
          *(undefined1 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
               1;
code_r0x012e1538:
          iVar33 = *(int *)pRVar41;
        }
        else if (iVar33 == 0) {
          *(undefined8 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10)
               = 0xffffffff;
          goto code_r0x012e1538;
        }
        if (iVar33 == 2) {
          SimplifiedLowering::DoNumberToBit(param_4,param_2);
        }
        break;
      }
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_742,uStack_744);
      uStack_5e0._0_3_ = CONCAT12(TStack_746,uStack_748);
      TStack_45f = SUB21(uStack_744,0);
      TStack_45e = SUB21((ushort)uStack_744 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_742;
        iStack_45c = 4;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_748;
        TStack_451 = TStack_746;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_742;
        iStack_45c = 4;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_748;
        TStack_451 = TStack_746;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e0350:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012e0350;
      }
      if (iVar33 == 2) {
        SimplifiedLowering::DoOrderedNumberToBit(param_4,param_2);
      }
    }
    break;
  case 0xb8:
    TStack_b0 = SUB21(uStack_754,0);
    TStack_af = SUB21((ushort)uStack_754 >> 8,0);
    TStack_ae = TStack_752;
    uStack_5d8._0_3_ = CONCAT12(TStack_756,uStack_758);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_752;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_758;
      TStack_451 = TStack_756;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_752;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_758;
      TStack_451 = TStack_756;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 4;
code_r0x012dd420:
      *(undefined1 *)(lVar24 + 1) = uVar27;
code_r0x012dd424:
      iVar33 = *(int *)pRVar41;
    }
    else {
code_r0x012dd3fc:
      if (iVar33 == 0) {
        *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
        goto code_r0x012dd424;
      }
    }
    goto joined_r0x012de9a0;
  case 0xb9:
    uStack_7b4 = uStack_75c;
    TStack_7b2 = TStack_75a;
    uStack_7b8 = uStack_760;
    TStack_7b6 = TStack_75e;
    goto code_r0x012d71c0;
  case 0xba:
    TStack_b0 = SUB21(uStack_764,0);
    TStack_af = SUB21((ushort)uStack_764 >> 8,0);
    TStack_ae = TStack_762;
    uStack_5d8._0_3_ = CONCAT12(TStack_766,uStack_768);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_762;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_768;
      TStack_451 = TStack_766;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_762;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_768;
      TStack_451 = TStack_766;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 4;
      goto code_r0x012dac00;
    }
code_r0x012daab4:
    if (iVar33 == 0) {
      *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
      goto code_r0x012dac04;
    }
    goto code_r0x012dac08;
  case 0xbb:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == *(long *)(*(long *)(param_1 + 0x138) + 0x70)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_76a,uStack_76c);
      uStack_5e0._0_3_ = CONCAT12(TStack_76e,uStack_770);
      TStack_45f = SUB21(uStack_76c,0);
      TStack_45e = SUB21((ushort)uStack_76c >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_76a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_770;
        TStack_451 = TStack_76e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_76a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_770;
        TStack_451 = TStack_76e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
      }
      else {
        if (iVar33 != 0) goto joined_r0x012dcc9c;
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
      }
      iVar33 = *(int *)pRVar41;
      goto joined_r0x012dcc9c;
    }
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c07) && (uVar30 = Type::SlowIs(&TStack_b0,0x1c07), (uVar30 & 1) == 0)) {
      if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
           != 0x1c4b) && (uVar30 = Type::SlowIs(&TStack_b0,0x1c4b), (uVar30 & 1) == 0)) {
        if ((CONCAT44(iStack_ac,
                      CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0)))) !=
             *(long *)(*(long *)(param_1 + 0x138) + 0x160)) &&
           (uVar30 = Type::SlowIs(&TStack_b0), TVar3 = TStack_45e, TVar32 = TStack_45f,
           (uVar30 & 1) == 0)) {
          uStack_5d8._0_3_ = CONCAT12(TStack_78a,uStack_78c);
          uStack_5e0._0_3_ = CONCAT12(TStack_78e,uStack_790);
          TStack_45f = SUB21(uStack_78c,0);
          TStack_45e = SUB21((ushort)uStack_78c >> 8,0);
          if (*(int *)pRVar41 == 2) {
            TStack_460 = (Type)0xc;
            TStack_45d = TStack_78a;
            iStack_45c = 4;
            iStack_458 = 1;
            uStack_454 = 0;
            uStack_453 = uStack_790;
            TStack_451 = TStack_78e;
            uStack_450 = 0;
            uStack_44b = 0;
            uStack_448 = 0xffffffff;
            ConvertInput(param_1,param_2,0,&TStack_460,0);
            TVar32 = TStack_45f;
            TVar3 = TStack_45e;
          }
          else if (*(int *)pRVar41 == 0) {
            TStack_460 = (Type)0xc;
            TStack_45d = TStack_78a;
            iStack_45c = 4;
            iStack_458 = 1;
            uStack_454 = 0;
            uStack_453 = uStack_790;
            TStack_451 = TStack_78e;
            uStack_450 = 0;
            uStack_44b = 0;
            uStack_448 = 0xffffffff;
            EnqueueInput(param_1,param_2,0,&TStack_460);
            TVar32 = TStack_45f;
            TVar3 = TStack_45e;
          }
          TStack_45e = TVar3;
          TStack_45f = TVar32;
          ProcessRemainingInputs(param_1,param_2,1);
          iVar33 = *(int *)(param_1 + 0x78);
          if (iVar33 == 1) {
            *(undefined1 *)
             (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1)
                 = 0xc;
code_r0x012e2064:
            iVar33 = *(int *)pRVar41;
          }
          else if (iVar33 == 0) {
            *(undefined8 *)
             (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 +
             0x10) = 0xffffffff;
            goto code_r0x012e2064;
          }
          if (iVar33 == 2) {
            SimplifiedLowering::DoNumberToUint8Clamped(param_4,param_2);
          }
          break;
        }
        TVar3 = TStack_45e;
        TVar32 = TStack_45f;
        uStack_5d8._0_3_ = CONCAT12(TStack_782,uStack_784);
        uStack_5e0._0_3_ = CONCAT12(TStack_786,uStack_788);
        TStack_45f = SUB21(uStack_784,0);
        TStack_45e = SUB21((ushort)uStack_784 >> 8,0);
        if (*(int *)pRVar41 == 2) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_782;
          iStack_45c = 4;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_788;
          TStack_451 = TStack_786;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          ConvertInput(param_1,param_2,0,&TStack_460,0);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        else if (*(int *)pRVar41 == 0) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_782;
          iStack_45c = 4;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_788;
          TStack_451 = TStack_786;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          EnqueueInput(param_1,param_2,0,&TStack_460);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        TStack_45e = TVar3;
        TStack_45f = TVar32;
        ProcessRemainingInputs(param_1,param_2,1);
        iVar33 = *(int *)(param_1 + 0x78);
        if (iVar33 == 1) {
          *(undefined1 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
               0xc;
code_r0x012e1dfc:
          iVar33 = *(int *)pRVar41;
        }
        else if (iVar33 == 0) {
          *(undefined8 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10)
               = 0xffffffff;
          goto code_r0x012e1dfc;
        }
        if (iVar33 == 2) {
          SimplifiedLowering::DoIntegerToUint8Clamped(param_4,param_2);
        }
        break;
      }
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_77a,uStack_77c);
      uStack_5e0._0_3_ = CONCAT12(TStack_77e,uStack_780);
      TStack_45f = SUB21(uStack_77c,0);
      TStack_45e = SUB21((ushort)uStack_77c >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_77a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_780;
        TStack_451 = TStack_77e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_77a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_780;
        TStack_451 = TStack_77e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012e19cc:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012e19cc;
      }
      if (iVar33 == 2) {
        SimplifiedLowering::DoSigned32ToUint8Clamped(param_4,param_2);
      }
      break;
    }
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_772,uStack_774);
    uStack_5e0._0_3_ = CONCAT12(TStack_776,uStack_778);
    TStack_45f = SUB21(uStack_774,0);
    TStack_45e = SUB21((ushort)uStack_774 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_772;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_778;
      TStack_451 = TStack_776;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_772;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_778;
      TStack_451 = TStack_776;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012e0520:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e0520;
    }
    if (iVar33 == 2) {
      SimplifiedLowering::DoUnsigned32ToUint8Clamped(param_4,param_2);
    }
    break;
  case 0xbc:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0xc5f) ||
       (uVar30 = Type::SlowIs(&TStack_b0,0xc5f), TVar3 = TStack_45e, TVar32 = TStack_45f,
       (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_722,uStack_724);
      uStack_5e0._0_3_ = CONCAT12(TStack_726,uStack_728);
      TStack_45f = SUB21(uStack_724,0);
      TStack_45e = SUB21((ushort)uStack_724 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_722;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_728;
        TStack_451 = TStack_726;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_722;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_728;
        TStack_451 = TStack_726;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
             0xc;
      }
      else {
        if (iVar33 != 0) goto joined_r0x012e05f8;
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
      }
      iVar33 = *(int *)pRVar41;
      goto joined_r0x012e05f8;
    }
    uStack_5d8._0_3_ = CONCAT12(TStack_72a,uStack_72c);
    uStack_5e0._0_3_ = CONCAT12(TStack_72e,uStack_730);
    TStack_45f = SUB21(uStack_72c,0);
    TStack_45e = SUB21((ushort)uStack_72c >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_72a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_730;
      TStack_451 = TStack_72e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_72a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_730;
      TStack_451 = TStack_72e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 0xc;
code_r0x012dfad4:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012dfad4;
    }
    goto joined_r0x012dfadc;
  case 0xbd:
    TStack_45f = SUB21(uStack_704,0);
    TStack_45e = SUB21((ushort)uStack_704 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_702;
      iStack_45c = 3;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_708;
      TStack_451 = TStack_706;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_702;
      iStack_45c = 3;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_708;
      TStack_451 = TStack_706;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (*(int *)(param_1 + 0x78) == 1) goto code_r0x012db6b8;
    if (*(int *)(param_1 + 0x78) == 0) {
      *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0x8000001;
    }
    break;
  case 0xbf:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x8000001) || (uVar30 = Type::SlowIs(&TStack_460,0x8000001), (uVar30 & 1) != 0))
    {
code_r0x012d5cb8:
      VisitNoop(param_1,param_2,param_3);
      break;
    }
    TStack_b0 = SUB21(uStack_6fc,0);
    TStack_af = SUB21((ushort)uStack_6fc >> 8,0);
    TStack_ae = TStack_6fa;
    uStack_5d8._0_3_ = CONCAT12(TStack_6fe,uStack_700);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_453 = uStack_700;
      TStack_451 = TStack_6fe;
      goto code_r0x012d95ac;
    }
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
    uVar4 = uStack_453;
    uVar5 = uStack_44b;
    if (*(int *)pRVar41 != 0) goto code_r0x012d95b4;
    TStack_460 = (Type)0x8;
    iStack_45c = 5;
    iStack_458 = 1;
    uStack_453 = uStack_700;
    TStack_451 = TStack_6fe;
    goto code_r0x012d875c;
  case 0xc0:
    puVar17 = (undefined1 *)NumberOperationParametersOf(pOVar12);
    uVar5 = uStack_44b;
    uVar4 = uStack_453;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uVar27 = 4;
    uVar28 = 1;
    switch(*puVar17) {
    case 2:
      uVar28 = 2;
    case 0:
    case 1:
      uVar38 = *(undefined8 *)(puVar17 + 0x10);
      uVar25 = *(undefined8 *)(puVar17 + 8);
      uStack_4ad = (undefined4)uVar38;
      uStack_4a9 = (undefined4)((ulong)uVar38 >> 0x20);
      uStack_4b5 = (undefined5)uVar25;
      uStack_4b0 = (undefined3)((ulong)uVar25 >> 0x28);
      uStack_5d8._0_3_ = CONCAT12(TStack_a0a,uStack_a0c);
      iStack_a8 = (int)CONCAT43(uStack_4ad,uStack_4b0);
      uStack_a4 = (undefined1)((ulong)uVar38 >> 8);
      uStack_a3 = (undefined2)((ulong)uVar38 >> 0x10);
      TStack_b0 = SUB31(uStack_4b8,0);
      TStack_af = SUB31((uint3)uStack_4b8 >> 8,0);
      TStack_ae = SUB31((uint3)uStack_4b8 >> 0x10,0);
      TStack_ad = SUB81(uVar25,0);
      iStack_ac = (int)((ulong)uVar25 >> 8);
      TStack_a1 = SUB81((ulong)uVar38 >> 0x20,0);
      cStack_a0 = (char)((ulong)uVar38 >> 0x28);
      uStack_9f = (undefined1)((ulong)uVar38 >> 0x30);
      bStack_9e = (byte)((ulong)uVar38 >> 0x38);
      TStack_45f = SUB21(uStack_a0c,0);
      TStack_45e = SUB21((ushort)uStack_a0c >> 8,0);
      uStack_453 = (undefined2)uStack_4b8;
      uStack_44b = uStack_4b0;
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_a0a;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
        uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_4b8)) >> 0x18);
        uStack_454 = uVar28;
        TStack_451 = TStack_ae;
        uStack_444 = uStack_4a9;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
        uVar4 = uStack_453;
        uVar5 = uStack_44b;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_a0a;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
        uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_4b8)) >> 0x18);
        uStack_454 = uVar28;
        TStack_451 = TStack_ae;
        uStack_444 = uStack_4a9;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
        uVar4 = uStack_453;
        uVar5 = uStack_44b;
      }
      uStack_44b = uVar5;
      uStack_453 = uVar4;
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      if (*(int *)(param_1 + 0x78) == 1) {
        lVar24 = *(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28;
        uVar27 = 4;
code_r0x012de994:
        *(undefined1 *)(lVar24 + 1) = uVar27;
      }
      else if (*(int *)(param_1 + 0x78) == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             1099;
      }
      break;
    case 3:
      goto code_r0x012dd438;
    case 4:
      uVar27 = 5;
code_r0x012dd438:
      uVar38 = *(undefined8 *)(puVar17 + 0x10);
      uVar25 = *(undefined8 *)(puVar17 + 8);
      uStack_4c5 = (undefined4)uVar38;
      uStack_4c1 = (undefined4)((ulong)uVar38 >> 0x20);
      uStack_4cd = (undefined5)uVar25;
      uStack_4c8 = (undefined3)((ulong)uVar25 >> 0x28);
      uStack_5d8._0_3_ = CONCAT12(TStack_a0e,uStack_a10);
      iStack_a8 = (int)CONCAT43(uStack_4c5,uStack_4c8);
      uStack_a4 = (undefined1)((ulong)uVar38 >> 8);
      uStack_a3 = (undefined2)((ulong)uVar38 >> 0x10);
      TStack_b0 = SUB31(uStack_4d0,0);
      TStack_af = SUB31((uint3)uStack_4d0 >> 8,0);
      TStack_ae = SUB31((uint3)uStack_4d0 >> 0x10,0);
      TStack_ad = SUB81(uVar25,0);
      iStack_ac = (int)((ulong)uVar25 >> 8);
      TStack_a1 = SUB81((ulong)uVar38 >> 0x20,0);
      cStack_a0 = (char)((ulong)uVar38 >> 0x28);
      uStack_9f = (undefined1)((ulong)uVar38 >> 0x30);
      bStack_9e = (byte)((ulong)uVar38 >> 0x38);
      TStack_45f = SUB21(uStack_a10,0);
      TStack_45e = SUB21((ushort)uStack_a10 >> 8,0);
      uStack_453 = (undefined2)uStack_4d0;
      uStack_44b = uStack_4c8;
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_a0e;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
        uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_4d0)) >> 0x18);
        uStack_454 = uVar27;
        TStack_451 = TStack_ae;
        uStack_444 = uStack_4c1;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
        uVar4 = uStack_453;
        uVar5 = uStack_44b;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_a0e;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
        uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_4d0)) >> 0x18);
        uStack_454 = uVar27;
        TStack_451 = TStack_ae;
        uStack_444 = uStack_4c1;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
        uVar4 = uStack_453;
        uVar5 = uStack_44b;
      }
      uStack_44b = uVar5;
      uStack_453 = uVar4;
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      if (*(int *)(param_1 + 0x78) == 1) {
        lVar24 = *(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28;
        uVar27 = 0xc;
        goto code_r0x012de994;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
      }
      break;
    default:
      break;
    }
    iVar33 = *(int *)pRVar41;
joined_r0x012de9a0:
    if (iVar33 != 2) break;
    goto code_r0x012de9a4;
  case 0xc1:
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,3);
    if ((uVar30 & 1) == 0) {
      TStack_b0 = SUB21(uStack_7fc,0);
      TStack_af = SUB21((ushort)uStack_7fc >> 8,0);
      TStack_ae = TStack_7fa;
      uStack_5d8._0_3_ = CONCAT12(TStack_7fe,uStack_800);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x7;
        TStack_45d = TStack_7fa;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 7;
        uStack_453 = uStack_800;
        TStack_451 = TStack_7fe;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x7;
        TStack_45d = TStack_7fa;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 7;
        uStack_453 = uStack_800;
        TStack_451 = TStack_7fe;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
code_r0x012dd370:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dd370;
      }
      if (iVar33 == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::BigIntNegate
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
        goto code_r0x012dfd40;
      }
    }
    else {
      TStack_b0 = SUB21(uStack_7f4,0);
      TStack_af = SUB21((ushort)uStack_7f4 >> 8,0);
      TStack_ae = TStack_7f2;
      uStack_5d8._0_3_ = CONCAT12(TStack_7f6,uStack_7f8);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x5;
        TStack_45d = TStack_7f2;
        iStack_45c = 3;
        iStack_458 = 0;
        uStack_454 = 7;
        uStack_453 = uStack_7f8;
        TStack_451 = TStack_7f6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x5;
        TStack_45d = TStack_7f2;
        iStack_45c = 3;
        iStack_458 = 0;
        uStack_454 = 7;
        uStack_453 = uStack_7f8;
        TStack_451 = TStack_7f6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 5;
code_r0x012dd318:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dd318;
      }
      if (iVar33 == 2) {
        pOVar12 = (Operator *)
                  MachineOperatorBuilder::Int64Sub
                            (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
        pNVar20 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)param_1,0);
        ChangeUnaryToPureBinaryOp(param_1,param_2,pOVar12,0,pNVar20);
      }
    }
    break;
  case 0xc2:
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,3);
    if ((uVar30 & 1) == 0) {
      TStack_460 = (Type)0x7;
      TStack_45f = SUB21(uStack_7dc,0);
      TStack_45e = SUB21((ushort)uStack_7dc >> 8,0);
      TStack_45d = TStack_7da;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_451 = TStack_7de;
      TStack_ad = TStack_7da;
      uStack_454 = 7;
      uStack_453 = uStack_7e0;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_b0 = (Type)0x7;
      uStack_448 = 0xffffffff;
      iStack_ac = 5;
      iStack_a8 = 1;
      uStack_a4 = 7;
      uStack_a3 = uStack_7e0;
      TStack_a1 = TStack_7de;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,7,0xffffffff);
      if (*(int *)(param_1 + 0x78) == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::BigIntAdd
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
        goto code_r0x012d48c0;
      }
    }
    else {
      TStack_460 = (Type)0x5;
      TStack_b0 = (Type)0x5;
      TStack_45f = SUB21(uStack_7d4,0);
      TStack_45e = SUB21((ushort)uStack_7d4 >> 8,0);
      TStack_45d = TStack_7d2;
      iStack_45c = 3;
      iStack_458 = 0;
      uStack_454 = 7;
      uStack_453 = uStack_7d8;
      TStack_451 = TStack_7d6;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_ad = TStack_7d2;
      uStack_448 = 0xffffffff;
      iStack_ac = 3;
      iStack_a8 = 0;
      uStack_a4 = 7;
      uStack_a3 = uStack_7d8;
      TStack_a1 = TStack_7d6;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,5,0xffffffff);
      if (*(int *)(param_1 + 0x78) == 2) {
        pOVar12 = (Operator *)
                  MachineOperatorBuilder::Int64Add
                            (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
        goto code_r0x012dfd40;
      }
    }
    break;
  case 0xc3:
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,3);
    if ((uVar30 & 1) == 0) {
      TStack_460 = (Type)0x7;
      TStack_45f = SUB21(uStack_7ec,0);
      TStack_45e = SUB21((ushort)uStack_7ec >> 8,0);
      TStack_45d = TStack_7ea;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_451 = TStack_7ee;
      TStack_ad = TStack_7ea;
      uStack_454 = 7;
      uStack_453 = uStack_7f0;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_b0 = (Type)0x7;
      uStack_448 = 0xffffffff;
      iStack_ac = 5;
      iStack_a8 = 1;
      uStack_a4 = 7;
      uStack_a3 = uStack_7f0;
      TStack_a1 = TStack_7ee;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,7,0xffffffff);
      if (*(int *)(param_1 + 0x78) == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::BigIntSubtract
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
        goto code_r0x012d48c0;
      }
    }
    else {
      TStack_460 = (Type)0x5;
      TStack_b0 = (Type)0x5;
      TStack_45f = SUB21(uStack_7e4,0);
      TStack_45e = SUB21((ushort)uStack_7e4 >> 8,0);
      TStack_45d = TStack_7e2;
      iStack_45c = 3;
      iStack_458 = 0;
      uStack_454 = 7;
      uStack_453 = uStack_7e8;
      TStack_451 = TStack_7e6;
      uStack_450 = 0;
      uStack_44b = 0;
      TStack_ad = TStack_7e2;
      uStack_448 = 0xffffffff;
      iStack_ac = 3;
      iStack_a8 = 0;
      uStack_a4 = 7;
      uStack_a3 = uStack_7e8;
      TStack_a1 = TStack_7e6;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,5,0xffffffff);
      if (*(int *)(param_1 + 0x78) == 2) {
        pOVar12 = (Operator *)
                  MachineOperatorBuilder::Int64Sub
                            (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
        goto code_r0x012dfd40;
      }
    }
    break;
  case 0xc4:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x201) || (uVar30 = Type::SlowIs(&TStack_460,0x201), (uVar30 & 1) != 0)) {
      TStack_b0 = SUB21(uStack_9d4,0);
      TStack_af = SUB21((ushort)uStack_9d4 >> 8,0);
      TStack_ae = TStack_9d2;
      uStack_5d8._0_3_ = CONCAT12(TStack_9d6,uStack_9d8);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x1;
        iStack_45c = 1;
        uStack_453 = uStack_9d8;
        TStack_451 = TStack_9d6;
        goto code_r0x012e00a0;
      }
      uVar30 = uStack_5d8;
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x1;
        iStack_45c = 1;
        uStack_453 = uStack_9d8;
        TStack_451 = TStack_9d6;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        goto code_r0x012d8424;
      }
code_r0x012e00a8:
      uStack_5d8 = uVar30;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 == 1) {
        lVar24 = lVar24 + uVar30 * 0x28;
        uVar27 = 4;
        goto code_r0x012e00f4;
      }
code_r0x012e00d0:
      if (iVar33 != 0) goto joined_r0x012e05f8;
      *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
      goto code_r0x012e00f8;
    }
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 != 0x4021) && (uVar30 = Type::SlowIs(&TStack_460,0x4021), (uVar30 & 1) == 0)) {
      uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
      if ((uVar30 & 1) == 0) {
        uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,4);
        if ((uVar30 & 1) == 0) {
          TStack_ae = TStack_a02;
          TStack_b0 = SUB21(uStack_a04,0);
          TStack_af = SUB21((ushort)uStack_a04 >> 8,0);
          uStack_5d8._0_3_ = CONCAT12(TStack_a06,uStack_a08);
          uStack_898 = uStack_a08;
          TStack_896 = TStack_a06;
          if (*(int *)pRVar41 != 2) {
            TVar32 = TStack_45f;
            TVar3 = TStack_45e;
            if (*(int *)pRVar41 == 0) {
              TStack_45d = TStack_a02;
              TStack_45f = TStack_b0;
              TStack_45e = TStack_af;
              goto code_r0x012dbb5c;
            }
            goto code_r0x012df8ec;
          }
          TStack_45d = TStack_a02;
          TStack_45f = TStack_b0;
          TStack_45e = TStack_af;
          goto code_r0x012df8b0;
        }
        if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        lVar24 = *(long *)(*(long *)pNVar20 + 8);
        TStack_460 = SUB81(lVar24,0);
        TStack_45f = SUB81((ulong)lVar24 >> 8,0);
        TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
        TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
        iStack_45c = (int)((ulong)lVar24 >> 0x20);
        if ((lVar24 == 0x801fdf) || (uVar30 = Type::SlowIs(&TStack_460,0x801fdf), (uVar30 & 1) != 0)
           ) {
          TStack_b0 = SUB21(uStack_9f4,0);
          TStack_af = SUB21((ushort)uStack_9f4 >> 8,0);
          uStack_5d8._0_3_ = CONCAT12(uStack_9f6,uStack_9f8);
          iVar33 = *(int *)pRVar41;
          uVar30 = uStack_5d8;
          TVar32 = TStack_45d;
          uStack_b14 = uStack_9f4;
          TStack_45d = TStack_9f2;
          goto joined_r0x012d96ec;
        }
        TStack_b0 = SUB21(uStack_9fc,0);
        TStack_af = SUB21((ushort)uStack_9fc >> 8,0);
        TStack_ae = TStack_9fa;
        uStack_5d8._0_3_ = CONCAT12(TStack_9fe,uStack_a00);
        if (*(int *)pRVar41 == 2) {
          TStack_460 = (Type)0x8;
          TStack_45d = TStack_9fa;
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_a00;
          TStack_451 = TStack_9fe;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          TStack_45f = TStack_b0;
          TStack_45e = TStack_af;
          ConvertInput(param_1,param_2,0,&TStack_460,0);
        }
        else if (*(int *)pRVar41 == 0) {
          TStack_460 = (Type)0x8;
          TStack_45d = TStack_9fa;
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_a00;
          TStack_451 = TStack_9fe;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          TStack_45f = TStack_b0;
          TStack_45e = TStack_af;
          EnqueueInput(param_1,param_2,0,&TStack_460);
        }
        ProcessRemainingInputs(param_1,param_2,1);
        iVar33 = *(int *)(param_1 + 0x78);
        if (iVar33 == 1) {
          *(undefined1 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
               0xc;
code_r0x012e2038:
          iVar33 = *(int *)pRVar41;
        }
        else if (iVar33 == 0) {
          *(undefined8 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10)
               = 0xffffffff;
          goto code_r0x012e2038;
        }
        if (iVar33 == 2) {
          pOVar12 = (Operator *)
                    SimplifiedOperatorBuilder::PlainPrimitiveToFloat64
                              (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
          goto code_r0x012d48c0;
        }
        break;
      }
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 == 0x801fdf) || (uVar30 = Type::SlowIs(&TStack_460,0x801fdf), (uVar30 & 1) != 0))
      {
        TStack_b0 = SUB21(uStack_9e4,0);
        TStack_af = SUB21((ushort)uStack_9e4 >> 8,0);
        uStack_5d8._0_3_ = CONCAT12(uStack_9e6,uStack_9e8);
        iVar33 = *(int *)pRVar41;
        uVar30 = uStack_5d8;
        uStack_b0c = uStack_9e4;
        TStack_ae = TStack_9e2;
        goto joined_r0x012d8248;
      }
      TStack_b0 = SUB21(uStack_9ec,0);
      TStack_af = SUB21((ushort)uStack_9ec >> 8,0);
      TStack_ae = TStack_9ea;
      uStack_5d8._0_3_ = CONCAT12(TStack_9ee,uStack_9f0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_9ea;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_9f0;
        TStack_451 = TStack_9ee;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_9ea;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_9f0;
        TStack_451 = TStack_9ee;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012e1ec8:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012e1ec8;
      }
      if (iVar33 == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::PlainPrimitiveToWord32
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
        goto code_r0x012d48c0;
      }
      break;
    }
    TStack_b0 = SUB21(uStack_9dc,0);
    TStack_af = SUB21((ushort)uStack_9dc >> 8,0);
    TStack_ae = TStack_9da;
    uStack_5d8._0_3_ = CONCAT12(TStack_9de,uStack_9e0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_9da;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9e0;
      TStack_451 = TStack_9de;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_9da;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9e0;
      TStack_451 = TStack_9de;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 8;
code_r0x012e037c:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e037c;
    }
    if (iVar33 == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::StringToNumber
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 199:
    iVar33 = *(int *)pRVar41;
    if (iVar33 == 2) {
      pNVar20 = param_2 + 0x20;
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0x18) +
                               ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 1);
      if (uVar10 == 1) {
        pZVar35 = (Zone *)**(undefined8 **)*(MachineGraph **)param_1;
        pNVar20 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)param_1,0);
        Node::AppendInput(param_2,pZVar35,pNVar20);
        pOVar12 = (Operator *)
                  MachineOperatorBuilder::Word32Equal
                            (*(MachineOperatorBuilder **)(*(long *)param_4 + 0x10));
      }
      else {
        if (1 < uVar10 - 7) {
          pNVar20 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)param_4,0);
          DeferReplacement(param_1,param_2,pNVar20);
          lVar23 = *(long *)(lVar23 + 0x28);
          goto LAB_012e0134;
        }
        pZVar35 = (Zone *)**(undefined8 **)*(JSGraph **)param_1;
        pNVar20 = (Node *)JSGraph::FalseConstant(*(JSGraph **)param_1);
        Node::AppendInput(param_2,pZVar35,pNVar20);
        this = *(MachineOperatorBuilder **)(*(long *)param_4 + 0x10);
        if (this[0x10] == (MachineOperatorBuilder)0x4) {
          pOVar12 = (Operator *)MachineOperatorBuilder::Word32Equal(this);
        }
        else {
          pOVar12 = (Operator *)MachineOperatorBuilder::Word64Equal(this);
        }
      }
      NodeProperties::ChangeOp(param_2,pOVar12);
      lVar23 = *(long *)(lVar23 + 0x28);
      goto LAB_012e0134;
    }
    if (iVar33 == 0) {
      TStack_460 = (Type)0x0;
      TStack_45f = SUB21(uStack_5cc,0);
      TStack_45e = SUB21((ushort)uStack_5cc >> 8,0);
      TStack_45d = TStack_5ca;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_5d0;
      TStack_451 = TStack_5ce;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      iVar33 = *(int *)(param_1 + 0x78);
    }
    if (iVar33 == 1) {
      lVar24 = *(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28;
      uVar27 = 1;
      goto code_r0x012dba40;
    }
    if (iVar33 != 0) break;
    lVar24 = *(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28;
    goto code_r0x012d4758;
  case 200:
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_804,0);
    TStack_45e = SUB21((ushort)uStack_804 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_802;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_808;
      TStack_451 = TStack_806;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012da778:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_802;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_808;
      TStack_451 = TStack_806;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012da778;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_80c,0);
    TStack_45e = SUB21((ushort)uStack_80c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_80a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_810;
      TStack_451 = TStack_80e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_80a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_810;
      TStack_451 = TStack_80e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_814,0);
    TStack_45e = SUB21((ushort)uStack_814 >> 8,0);
    uStack_7d0 = uStack_818;
    TStack_7ce = TStack_816;
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_812;
code_r0x012daf5c:
      TStack_460 = (Type)0x8;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      uStack_453 = uStack_7d0;
      TStack_451 = TStack_7ce;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_45d = TStack_812;
      goto code_r0x012daf08;
    }
    goto code_r0x012db22c;
  case 0xca:
    aTStack_310[0] = (Type)0x8;
    uStack_30c = 0x100000005;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0xffffffff;
    aTStack_330[0] = (Type)0x5;
    uStack_32c = 0x100000005;
    uStack_324 = 0;
    uStack_320 = 0;
    uStack_318 = 0xffffffff;
    pTVar19 = aTStack_310;
    pTVar21 = aTStack_330;
    cVar6 = '\x04';
    goto code_r0x012d6d90;
  case 0xcb:
    aTStack_350[0] = (Type)0x8;
    uStack_34c = 0x100000005;
    uStack_344 = 0;
    uStack_340 = 0;
    uStack_338 = 0xffffffff;
    aTStack_370[0] = (Type)0x5;
    uStack_36c = 0x100000005;
    uStack_364 = 0;
    uStack_360 = 0;
    uStack_358 = 0xffffffff;
    pTVar19 = aTStack_350;
    pTVar21 = aTStack_370;
    cVar6 = '\x06';
    goto code_r0x012d6d90;
  case 0xcc:
    uStack_82c = uStack_824;
    TStack_82a = TStack_822;
    uStack_830 = uStack_828;
    TStack_82e = TStack_826;
    goto code_r0x012d86f0;
  case 0xcd:
code_r0x012d86f0:
    TStack_b0 = SUB21(uStack_82c,0);
    TStack_af = SUB21((ushort)uStack_82c >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_82e,uStack_830);
    uStack_7b8 = uStack_830;
    TStack_7b6 = TStack_82e;
    TStack_ae = TStack_82a;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      uVar25 = 2;
      goto code_r0x012d9580;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      uVar25 = 2;
      goto code_r0x012d8734;
    }
    goto code_r0x012d95b4;
  case 0xce:
    aTStack_390[0] = (Type)0x8;
    uStack_38c = 0x100000005;
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_378 = 0xffffffff;
    aTStack_3b0[0] = (Type)0x5;
    uStack_3ac = 0x100000005;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0xffffffff;
    pTVar19 = aTStack_390;
    pTVar21 = aTStack_3b0;
    goto code_r0x012d6d8c;
  case 0xcf:
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_834,0);
    TStack_45e = SUB21((ushort)uStack_834 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_832;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_838;
      TStack_451 = TStack_836;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012da348:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_832;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_838;
      TStack_451 = TStack_836;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012da348;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_83c,0);
    TStack_45e = SUB21((ushort)uStack_83c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_83a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_840;
      TStack_451 = TStack_83e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_83a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_840;
      TStack_451 = TStack_83e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_844,0);
    TStack_45e = SUB21((ushort)uStack_844 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_842;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_848;
      TStack_451 = TStack_846;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_842;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_848;
      TStack_451 = TStack_846;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012db08c:
      *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 6;
      break;
    }
    goto code_r0x012d474c;
  case 0xd0:
    TStack_b0 = SUB21(uStack_84c,0);
    TStack_af = SUB21((ushort)uStack_84c >> 8,0);
    TStack_ae = TStack_84a;
    uStack_5d8._0_3_ = CONCAT12(TStack_84e,uStack_850);
    uStack_878 = uStack_850;
    TStack_876 = TStack_84e;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
code_r0x012db0f0:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      uStack_453 = uStack_878;
      TStack_451 = TStack_876;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
code_r0x012d6ec4:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      uStack_453 = uStack_878;
      TStack_451 = TStack_876;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    goto code_r0x012db124;
  case 0xd1:
  case 0xd2:
    uStack_7b4 = uStack_86c;
    TStack_7b2 = TStack_86a;
    uStack_7b8 = uStack_870;
    TStack_7b6 = TStack_86e;
    goto code_r0x012d71c0;
  case 0xd3:
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_854,0);
    TStack_45e = SUB21((ushort)uStack_854 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_852;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_858;
      TStack_451 = TStack_856;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012da538:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_852;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_858;
      TStack_451 = TStack_856;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012da538;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_85c,0);
    TStack_45e = SUB21((ushort)uStack_85c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_85a;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_860;
      TStack_451 = TStack_85e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_85a;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_860;
      TStack_451 = TStack_85e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_864,0);
    TStack_45e = SUB21((ushort)uStack_864 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_862;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_868;
      TStack_451 = TStack_866;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_862;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_868;
      TStack_451 = TStack_866;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = 3;
    goto code_r0x012db220;
  case 0xd4:
    VisitCheckBounds(param_1,param_2,param_4);
    break;
  case 0xd5:
    TStack_45f = SUB21(uStack_88c,0);
    TStack_45e = SUB21((ushort)uStack_88c >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_88a;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_890;
      TStack_451 = TStack_88e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_88a;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_890;
      TStack_451 = TStack_88e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = 1;
    goto code_r0x012dedd8;
  case 0xd6:
    lVar24 = CheckMapsParametersOf(pOVar12);
    uVar5 = uStack_44b;
    uVar4 = uStack_453;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uVar38 = *(undefined8 *)(lVar24 + 0x18);
    uVar25 = *(undefined8 *)(lVar24 + 0x10);
    uStack_51d = (undefined4)uVar38;
    uStack_519 = (undefined4)((ulong)uVar38 >> 0x20);
    uStack_525 = (undefined5)uVar25;
    uStack_520 = (undefined3)((ulong)uVar25 >> 0x28);
    uStack_5d8._0_3_ = CONCAT12(TStack_b32,uStack_b34);
    iStack_a8 = (int)CONCAT43(uStack_51d,uStack_520);
    uStack_a4 = (undefined1)((ulong)uVar38 >> 8);
    uStack_a3 = (undefined2)((ulong)uVar38 >> 0x10);
    TStack_b0 = SUB31(uStack_528,0);
    TStack_af = SUB31((uint3)uStack_528 >> 8,0);
    TStack_ae = SUB31((uint3)uStack_528 >> 0x10,0);
    TStack_ad = SUB81(uVar25,0);
    iStack_ac = (int)((ulong)uVar25 >> 8);
    TStack_a1 = SUB81((ulong)uVar38 >> 0x20,0);
    cStack_a0 = (char)((ulong)uVar38 >> 0x28);
    uStack_9f = (undefined1)((ulong)uVar38 >> 0x30);
    bStack_9e = (byte)((ulong)uVar38 >> 0x38);
    TStack_45f = SUB21(uStack_b34,0);
    TStack_45e = SUB21((ushort)uStack_b34 >> 8,0);
    uStack_453 = (undefined2)uStack_528;
    uStack_44b = uStack_520;
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_b32;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_528)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_519;
code_r0x012db5fc:
      uStack_454 = 6;
      iStack_458 = 1;
      iStack_45c = 5;
      TStack_460 = (Type)0x7;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x7;
      TStack_45d = TStack_b32;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_528)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_519;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    goto code_r0x012db600;
  case 0xd7:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x1c5f) ||
       (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), TVar3 = TStack_45e, TVar32 = TStack_45f,
       (uVar30 & 1) != 0)) goto code_r0x012d5cb8;
    uStack_5d8._0_3_ = CONCAT12(TStack_892,uStack_894);
    uStack_5e0._0_3_ = CONCAT12(TStack_896,uStack_898);
    TStack_45f = SUB21(uStack_894,0);
    TStack_45e = SUB21((ushort)uStack_894 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_892;
code_r0x012df8b0:
      TStack_460 = (Type)0x8;
      uStack_453 = uStack_898;
      TStack_451 = TStack_896;
code_r0x012df8e4:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      iStack_458 = 1;
      iStack_45c = 5;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_45d = TStack_892;
code_r0x012dbb5c:
      TStack_460 = (Type)0x8;
      uStack_453 = uStack_898;
      TStack_451 = TStack_896;
code_r0x012dbb8c:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      iStack_458 = 1;
      iStack_45c = 5;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
code_r0x012df8ec:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto code_r0x012df914;
    goto code_r0x012df91c;
  case 0xd8:
    uVar25 = 0x4001;
    goto code_r0x012d87f4;
  case 0xd9:
    uVar25 = 0x47f0001;
    goto code_r0x012d87f4;
  case 0xda:
    uVar25 = 0x47f0181;
    goto code_r0x012d87f4;
  case 0xdb:
    puVar16 = (undefined8 *)CheckParametersOf(pOVar12);
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x4021) ||
       (uVar30 = Type::SlowIs(&TStack_460,0x4021), uVar5 = uStack_44b, uVar4 = uStack_453,
       TVar3 = TStack_45e, TVar32 = TStack_45f, (uVar30 & 1) != 0)) {
      TStack_b0 = SUB21(uStack_8a0,0);
      TStack_af = SUB21((ushort)uStack_8a0 >> 8,0);
      TStack_ae = TStack_89e;
      uStack_5d8._0_3_ = CONCAT12(TStack_8a2,uStack_8a4);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_89e;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_8a4;
        TStack_451 = TStack_8a2;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_89e;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_8a4;
        TStack_451 = TStack_8a2;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
code_r0x012dbd1c:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dbd1c;
      }
      if (iVar33 == 2) goto code_r0x012dcca0;
      break;
    }
    uVar38 = puVar16[1];
    uVar25 = *puVar16;
    uStack_3d5 = (undefined4)uVar38;
    uStack_3d1 = (undefined4)((ulong)uVar38 >> 0x20);
    uStack_3dd = (undefined5)uVar25;
    uStack_3d8 = (undefined3)((ulong)uVar25 >> 0x28);
    uStack_5d8._0_3_ = CONCAT12(TStack_8a6,uStack_8a8);
    iStack_a8 = (int)CONCAT43(uStack_3d5,uStack_3d8);
    uStack_a4 = (undefined1)((ulong)uVar38 >> 8);
    uStack_a3 = (undefined2)((ulong)uVar38 >> 0x10);
    TStack_b0 = SUB31(uStack_3e0,0);
    TStack_af = SUB31((uint3)uStack_3e0 >> 8,0);
    TStack_ae = SUB31((uint3)uStack_3e0 >> 0x10,0);
    TStack_ad = SUB81(uVar25,0);
    iStack_ac = (int)((ulong)uVar25 >> 8);
    TStack_a1 = SUB81((ulong)uVar38 >> 0x20,0);
    cStack_a0 = (char)((ulong)uVar38 >> 0x28);
    uStack_9f = (undefined1)((ulong)uVar38 >> 0x30);
    bStack_9e = (byte)((ulong)uVar38 >> 0x38);
    TStack_45f = SUB21(uStack_8a8,0);
    TStack_45e = SUB21((ushort)uStack_8a8 >> 8,0);
    uStack_453 = (undefined2)uStack_3e0;
    uStack_44b = uStack_3d8;
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_8a6;
      TStack_460 = (Type)0x7;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_3e0)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_3d1;
      goto code_r0x012d95b0;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x7;
      TStack_45d = TStack_8a6;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_3e0)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_3d1;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    goto code_r0x012d95b4;
  case 0xdc:
    uVar25 = 0x2001;
code_r0x012d87f4:
    VisitCheck(param_1,param_2,uVar25,param_4);
    break;
  case 0xdd:
    puVar16 = (undefined8 *)CheckParametersOf(pOVar12);
    uVar5 = uStack_44b;
    uVar4 = uStack_453;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uVar38 = puVar16[1];
    uVar25 = *puVar16;
    uStack_3bd = (undefined4)uVar38;
    uStack_3b9 = (undefined4)((ulong)uVar38 >> 0x20);
    uStack_3c5 = (undefined5)uVar25;
    uStack_3c0 = (undefined3)((ulong)uVar25 >> 0x28);
    uStack_5d8._0_3_ = CONCAT12(TStack_89a,uStack_89c);
    iStack_a8 = (int)CONCAT43(uStack_3bd,uStack_3c0);
    uStack_a4 = (undefined1)((ulong)uVar38 >> 8);
    uStack_a3 = (undefined2)((ulong)uVar38 >> 0x10);
    TStack_b0 = SUB31(uStack_3c8,0);
    TStack_af = SUB31((uint3)uStack_3c8 >> 8,0);
    TStack_ae = SUB31((uint3)uStack_3c8 >> 0x10,0);
    TStack_ad = SUB81(uVar25,0);
    iStack_ac = (int)((ulong)uVar25 >> 8);
    TStack_a1 = SUB81((ulong)uVar38 >> 0x20,0);
    cStack_a0 = (char)((ulong)uVar38 >> 0x28);
    uStack_9f = (undefined1)((ulong)uVar38 >> 0x30);
    bStack_9e = (byte)((ulong)uVar38 >> 0x38);
    TStack_45f = SUB21(uStack_89c,0);
    TStack_45e = SUB21((ushort)uStack_89c >> 8,0);
    uStack_453 = (undefined2)uStack_3c8;
    uStack_44b = uStack_3c0;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_89a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 1;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_3c8)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_3b9;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x6;
      TStack_45d = TStack_89a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 1;
      uStack_448 = (undefined4)(CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8)) >> 0x18);
      uStack_450 = (undefined5)(CONCAT44(iStack_ac,CONCAT13(TStack_ad,uStack_3c8)) >> 0x18);
      TStack_451 = TStack_ae;
      uStack_444 = uStack_3b9;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    uStack_44b = uVar5;
    uStack_453 = uVar4;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto code_r0x012daab4;
    lVar24 = lVar24 + uVar30 * 0x28;
    uVar27 = 6;
code_r0x012dac00:
    *(undefined1 *)(lVar24 + 1) = uVar27;
code_r0x012dac04:
    iVar33 = *(int *)pRVar41;
code_r0x012dac08:
    if (iVar33 == 2) {
code_r0x012de9a4:
      pNVar20 = param_2 + 0x20;
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      pNVar20 = *(Node **)pNVar20;
code_r0x012e0120:
      DeferReplacement(param_1,param_2,pNVar20);
    }
    break;
  case 0xde:
    uVar10 = BitsetType::SignedSmall();
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uVar25 = *(undefined8 *)(*(long *)pNVar20 + 8);
    TStack_460 = SUB81(uVar25,0);
    TStack_45f = SUB81((ulong)uVar25 >> 8,0);
    TStack_45e = SUB81((ulong)uVar25 >> 0x10,0);
    TStack_45d = SUB81((ulong)uVar25 >> 0x18,0);
    iStack_45c = (int)((ulong)uVar25 >> 0x20);
    uVar30 = Type::Maybe(&TStack_460,uVar10 | 1);
    if ((uVar30 & 1) == 0) {
      TStack_b0 = SUB21(uStack_87c,0);
      TStack_af = SUB21((ushort)uStack_87c >> 8,0);
      TStack_ae = TStack_87a;
      uStack_5d8._0_3_ = CONCAT12(TStack_87e,uStack_880);
      uStack_888 = uStack_880;
      TStack_886 = TStack_87e;
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x8;
        uStack_454 = 0;
        goto code_r0x012dd15c;
      }
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x8;
        uStack_454 = 0;
        goto code_r0x012d9c50;
      }
    }
    else {
      TStack_b0 = SUB21(uStack_884,0);
      TStack_af = SUB21((ushort)uStack_884 >> 8,0);
      TStack_ae = TStack_882;
      uStack_5d8._0_3_ = CONCAT12(TStack_886,uStack_888);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x7;
        uStack_454 = 6;
code_r0x012dd15c:
        iStack_458 = 1;
        iStack_45c = 5;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        TStack_45d = TStack_ae;
        uStack_453 = uStack_888;
        TStack_451 = TStack_886;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x7;
        uStack_454 = 6;
code_r0x012d9c50:
        iStack_458 = 1;
        iStack_45c = 5;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        TStack_45d = TStack_ae;
        uStack_453 = uStack_888;
        TStack_451 = TStack_886;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
    }
    ProcessRemainingInputs(param_1,param_2,1);
    if (*(int *)(param_1 + 0x78) == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
    }
    iVar33 = *(int *)pRVar41;
    goto joined_r0x012e05f8;
  case 0xdf:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar20 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    pcVar15 = (char *)CheckFloat64HoleParametersOf(pOVar12);
    if (*pcVar15 == '\x01') {
      if ((param_3 & 0xff) == 0) goto code_r0x012d8ef4;
      uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,4);
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      if ((uVar30 & 1) != 0) {
        uStack_5d8._0_3_ = CONCAT12(TStack_af2,uStack_af4);
        uStack_5e0._0_3_ = CONCAT12(TStack_af6,uStack_af8);
        TStack_45f = SUB21(uStack_af4,0);
        TStack_45e = SUB21((ushort)uStack_af4 >> 8,0);
        if (*(int *)pRVar41 == 2) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_af2;
          iStack_45c = 4;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_af8;
          TStack_451 = TStack_af6;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          ConvertInput(param_1,param_2,0,&TStack_460,0);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        else if (*(int *)pRVar41 == 0) {
          TStack_460 = (Type)0xc;
          TStack_45d = TStack_af2;
          iStack_45c = 4;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_af8;
          TStack_451 = TStack_af6;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          EnqueueInput(param_1,param_2,0,&TStack_460);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
        TStack_45e = TVar3;
        TStack_45f = TVar32;
        ProcessRemainingInputs(param_1,param_2,1);
        iVar33 = *(int *)(param_1 + 0x78);
        if (iVar33 == 1) {
          *(undefined1 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) =
               0xc;
        }
        else {
          if (iVar33 != 0) goto joined_r0x012e05f8;
          *(undefined8 *)
           (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10)
               = 0xffffffff;
        }
        iVar33 = *(int *)pRVar41;
        goto joined_r0x012e05f8;
      }
    }
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_afa,uStack_afc);
    uStack_5e0._0_3_ = CONCAT12(TStack_afe,uStack_b00);
    TStack_45f = SUB21(uStack_afc,0);
    TStack_45e = SUB21((ushort)uStack_afc >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_afa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b00;
      TStack_451 = TStack_afe;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_afa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b00;
      TStack_451 = TStack_afe;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 0xc;
code_r0x012dcf00:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0x1c5f;
      goto code_r0x012dcf00;
    }
    if ((iVar33 != 2) ||
       ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c5f && (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), (uVar30 & 1) == 0)))) break;
    goto code_r0x012e0104;
  case 0xe0:
    uStack_b88 = uStack_b04;
    TStack_b86 = TStack_b02;
    uStack_b8c = uStack_b08;
    TStack_b8a = TStack_b06;
    goto code_r0x012d7364;
  case 0xe1:
  case 0xe2:
    TStack_45f = SUB21(uStack_b2c,0);
    TStack_45e = SUB21((ushort)uStack_b2c >> 8,0);
    uVar25 = 0;
    TStack_ad = TStack_b2a;
    uStack_a3 = uStack_b30;
    TStack_a1 = TStack_b2e;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
code_r0x012d4cec:
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    iStack_a8 = 1;
    iStack_ac = 5;
    uStack_44b = 0;
    uStack_450 = 0;
    iStack_458 = 1;
    iStack_45c = 5;
    uStack_a4 = 0;
    TStack_b0 = (Type)0x8;
    uStack_448 = 0xffffffff;
    uStack_454 = 0;
    TStack_460 = (Type)0x8;
    uStack_98 = 0xffffffff;
    TStack_45f = TStack_af;
    TStack_45e = TStack_ae;
    TStack_45d = TStack_ad;
    uStack_453 = uStack_a3;
    TStack_451 = TStack_a1;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,uVar25,0xffffffff);
    break;
  case 0xe3:
    TStack_b0 = SUB21(uStack_b40,0);
    TStack_af = SUB21((ushort)uStack_b40 >> 8,0);
    TStack_ae = TStack_b3e;
    uStack_5d8._0_3_ = CONCAT12(TStack_b42,uStack_b44);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x7;
      TStack_45d = TStack_b3e;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_453 = uStack_b44;
      TStack_451 = TStack_b42;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x7;
      TStack_45d = TStack_b3e;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_453 = uStack_b44;
      TStack_451 = TStack_b42;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    cVar6 = '\x01';
code_r0x012db988:
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto joined_r0x012db9a4;
    goto code_r0x012de8e8;
  case 0xe4:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uVar30 = *(ulong *)(*(long *)(param_1 + 0x18) +
                        ((ulong)*(uint *)(*(long *)pNVar26 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (uVar30 == 0) {
      uVar30 = *(ulong *)(*(long *)pNVar26 + 8);
    }
    TStack_460 = (Type)0x8;
    TStack_b0 = (Type)0x8;
    TStack_45f = SUB21(uStack_9cc,0);
    TStack_45e = SUB21((ushort)uStack_9cc >> 8,0);
    TStack_45d = TStack_9ca;
    iStack_45c = 5;
    iStack_458 = 1;
    TStack_451 = TStack_9ce;
    uStack_454 = 0;
    uStack_453 = uStack_9d0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    TStack_ad = TStack_9ca;
    iStack_ac = 5;
    iStack_a8 = 1;
    uStack_a4 = 0;
    TStack_a1 = TStack_9ce;
    uStack_a3 = uStack_9d0;
    cStack_a0 = '\0';
    uStack_9f = 0;
    bStack_9e = 0;
    uStack_9d = 0;
    uStack_98 = 0xffffffff;
    uStack_5d8 = uVar30;
    TStack_af = TStack_45f;
    TStack_ae = TStack_45e;
    VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,7,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
      if ((uVar30 == 0x47f0001) ||
         (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x47f0001), (uVar30 & 1) != 0))
      goto code_r0x012dcca0;
      if ((uStack_5d8 == 0x181) ||
         (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x181), (uVar30 & 1) != 0)) {
        if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        pNVar20 = *(Node **)(pNVar20 + 8);
        goto code_r0x012e0120;
      }
      uVar30 = Type::Maybe((Type *)&uStack_5d8,0x181);
      if ((uVar30 & 1) == 0) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::ConvertReceiver
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178),1);
        goto code_r0x012d48c0;
      }
    }
    break;
  case 0xe5:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (((lVar24 == 0x801fdf) || (uVar30 = Type::SlowIs(&TStack_460,0x801fdf), (uVar30 & 1) != 0))
       && (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar30 & 1) != 0)) {
      TStack_b0 = SUB21(uStack_b0c,0);
      TStack_af = SUB21((ushort)uStack_b0c >> 8,0);
      uStack_5d8._0_3_ = CONCAT12(uStack_b0e,uStack_b10);
      iVar33 = *(int *)pRVar41;
      uVar30 = uStack_5d8;
      TStack_ae = TStack_b0a;
joined_r0x012d8248:
      uStack_5d8._2_1_ = SUB81(uVar30 >> 0x10,0);
      uStack_5d8._0_2_ = (undefined2)uVar30;
      uStack_5d8 = uVar30;
      if (iVar33 == 2) {
        TStack_460 = (Type)0x4;
        iStack_45c = 2;
        uStack_453 = (undefined2)uStack_5d8;
        TStack_451 = uStack_5d8._2_1_;
code_r0x012e00a0:
        iStack_458 = 0;
        uStack_44b = 0;
        uStack_450 = 0;
        uStack_454 = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        TStack_45d = TStack_ae;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        uVar30 = uStack_5d8;
      }
      else if (iVar33 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45f = SUB21(uStack_b0c,0);
        TStack_45e = SUB21((ushort)uStack_b0c >> 8,0);
        iStack_45c = 2;
        uStack_453 = (undefined2)uStack_5d8;
        TStack_451 = uStack_5d8._2_1_;
code_r0x012d8424:
        iStack_458 = 0;
        uStack_44b = 0;
        uStack_450 = 0;
        uStack_454 = 0;
        uStack_448 = 0xffffffff;
        TStack_45d = TStack_ae;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        uVar30 = uStack_5d8;
      }
      goto code_r0x012e00a8;
    }
    pNVar26 = pNVar20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar26 + 8);
    TStack_460 = SUB81(lVar24,0);
    TStack_45f = SUB81((ulong)lVar24 >> 8,0);
    TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_45c = (int)((ulong)lVar24 >> 0x20);
    if (((lVar24 == 0x801fdf) || (uVar30 = Type::SlowIs(&TStack_460,0x801fdf), (uVar30 & 1) != 0))
       && (uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,4), (uVar30 & 1) != 0)) {
      TStack_b0 = SUB21(uStack_b14,0);
      TStack_af = SUB21((ushort)uStack_b14 >> 8,0);
      uStack_5d8._0_3_ = CONCAT12(uStack_b16,uStack_b18);
      iVar33 = *(int *)pRVar41;
      uVar30 = uStack_5d8;
      TVar32 = TStack_45d;
      TStack_45d = TStack_b12;
joined_r0x012d96ec:
      uStack_5d8._2_1_ = SUB81(uVar30 >> 0x10,0);
      uStack_5d8._0_2_ = (undefined2)uVar30;
      uStack_5d8 = uVar30;
      TStack_ae = TStack_45d;
      if (iVar33 == 2) {
        TStack_460 = (Type)0xc;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = (undefined2)uStack_5d8;
        TStack_451 = uStack_5d8._2_1_;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        uVar30 = uStack_5d8;
        TVar32 = TStack_45d;
      }
      else if (iVar33 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45f = SUB21(uStack_b14,0);
        TStack_45e = SUB21((ushort)uStack_b14 >> 8,0);
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = (undefined2)uStack_5d8;
        TStack_451 = uStack_5d8._2_1_;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        uVar30 = uStack_5d8;
        TVar32 = TStack_45d;
      }
      TStack_45d = TVar32;
      uStack_5d8 = uVar30;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 != 1) goto code_r0x012e00d0;
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 0xc;
    }
    else {
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      lVar24 = *(long *)(*(long *)pNVar20 + 8);
      TStack_460 = SUB81(lVar24,0);
      TStack_45f = SUB81((ulong)lVar24 >> 8,0);
      TStack_45e = SUB81((ulong)lVar24 >> 0x10,0);
      TStack_45d = SUB81((ulong)lVar24 >> 0x18,0);
      iStack_45c = (int)((ulong)lVar24 >> 0x20);
      if ((lVar24 != 0xc7f7fff) && (uVar30 = Type::SlowIs(&TStack_460,0xc7f7fff), (uVar30 & 1) == 0)
         ) {
        TStack_ae = TStack_b22;
        TStack_b0 = SUB21(uStack_b24,0);
        TStack_af = SUB21((ushort)uStack_b24 >> 8,0);
        uStack_5d8._0_3_ = CONCAT12(TStack_b26,uStack_b28);
        if (*(int *)pRVar41 != 2) {
          if (*(int *)pRVar41 == 0) {
            TStack_460 = (Type)0x8;
            uStack_453 = uStack_b28;
            TStack_451 = TStack_b26;
            goto code_r0x012d8884;
          }
          goto code_r0x012db848;
        }
        TStack_460 = (Type)0x8;
        uStack_453 = uStack_b28;
        TStack_451 = TStack_b26;
        goto code_r0x012db840;
      }
      TStack_b0 = SUB21(uStack_b1c,0);
      TStack_af = SUB21((ushort)uStack_b1c >> 8,0);
      TStack_ae = TStack_b1a;
      uStack_5d8._0_3_ = CONCAT12(TStack_b1e,uStack_b20);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_b1a;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_b20;
        TStack_451 = TStack_b1e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_b1a;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_b20;
        TStack_451 = TStack_b1e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        EnqueueInput(param_1,param_2,0,&TStack_460);
      }
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 != 1) goto code_r0x012e00d0;
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 8;
    }
code_r0x012e00f4:
    *(undefined1 *)(lVar24 + 1) = uVar27;
code_r0x012e00f8:
    iVar33 = *(int *)pRVar41;
joined_r0x012e05f8:
    if (iVar33 != 2) break;
code_r0x012e0104:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    pNVar20 = *(Node **)pNVar20;
    goto code_r0x012e0120;
  case 0xe6:
code_r0x012d71c0:
    TStack_b0 = SUB21(uStack_7b4,0);
    TStack_af = SUB21((ushort)uStack_7b4 >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_7b6,uStack_7b8);
    TStack_ae = TStack_7b2;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
code_r0x012d9580:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      uStack_453 = uStack_7b8;
      TStack_451 = TStack_7b6;
code_r0x012d95ac:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
code_r0x012d95b0:
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
code_r0x012d8734:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      uStack_453 = uStack_7b8;
      TStack_451 = TStack_7b6;
code_r0x012d875c:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
code_r0x012d95b4:
    uStack_44b = uVar5;
    uStack_453 = uVar4;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto code_r0x012df914;
    goto code_r0x012db244;
  case 0xe7:
    TStack_45f = SUB21(uStack_8ac,0);
    TStack_45e = SUB21((ushort)uStack_8ac >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8aa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8b0;
      TStack_451 = TStack_8ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8aa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8b0;
      TStack_451 = TStack_8ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = 1;
code_r0x012db220:
    ProcessRemainingInputs(param_1,param_2,iVar33);
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
    goto code_r0x012db22c;
  case 0xe9:
    if ((param_3 & 0xff) != 0) {
      aTStack_400[0] = (Type)0x8;
      uStack_3fc = 0x100000005;
      aTStack_420[0] = (Type)0x4;
      uStack_3f4 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0xffffffff;
      uStack_41c = 2;
      uStack_414 = 0;
      uStack_410 = 0;
      uStack_408 = 0xffffffff;
      pTVar19 = aTStack_400;
      pTVar21 = aTStack_420;
      cVar6 = '\b';
      goto code_r0x012d6d90;
    }
    goto code_r0x012d8ef4;
  case 0xea:
    if ((param_3 & 0xff) == 0) goto code_r0x012d8ef4;
    pcVar15 = (char *)FieldAccessOf(pOVar12);
    cVar6 = pcVar15[0x20];
    TStack_b0 = SUB21(uStack_8cc,0);
    TStack_af = SUB21((ushort)uStack_8cc >> 8,0);
    TStack_ae = TStack_8ca;
    uStack_5d8._0_3_ = CONCAT12(TStack_8ce,uStack_8d0);
    TVar32 = (Type)0x8;
    if (*pcVar15 != '\x01') {
      TVar32 = (Type)0x5;
    }
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_8ca;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_451 = TStack_8ce;
      uStack_454 = 0;
      uStack_453 = uStack_8d0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar32;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_45d = TStack_8ca;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_451 = TStack_8ce;
      uStack_454 = 0;
      uStack_453 = uStack_8d0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar32;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    goto code_r0x012d7c10;
  case 0xeb:
    if ((param_3 & 0xff) != 0) {
      pcVar15 = (char *)ElementAccessOf(pOVar12);
      cVar6 = pcVar15[0x10];
      aTStack_4a0[0] = (Type)0x5;
      aTStack_480[0] = (Type)0x8;
      if (*pcVar15 != '\x01') {
        aTStack_480[0] = (Type)0x5;
      }
      uStack_49c = 0x100000005;
      uStack_494 = 0;
      uStack_490 = 0;
      uStack_47c = 0x100000005;
      uStack_474 = 0;
      uStack_470 = 0;
      uStack_468 = 0xffffffff;
      uStack_488 = 0xffffffff;
      pTVar19 = aTStack_480;
      pTVar21 = aTStack_4a0;
      goto code_r0x012d6d90;
    }
    goto code_r0x012d8ef4;
  case 0xec:
    if ((param_3 & 0xff) != 0) {
      TStack_b0 = SUB21(uStack_8b4,0);
      TStack_af = SUB21((ushort)uStack_8b4 >> 8,0);
      TStack_ae = TStack_8b2;
      uStack_5d8._0_3_ = CONCAT12(TStack_8b6,uStack_8b8);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x5;
        TStack_45d = TStack_8b2;
        uStack_453 = uStack_8b8;
        TStack_451 = TStack_8b6;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        goto code_r0x012df8e4;
      }
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x5;
        TStack_45d = TStack_8b2;
        uStack_453 = uStack_8b8;
        TStack_451 = TStack_8b6;
        TStack_45f = TStack_b0;
        TStack_45e = TStack_af;
        goto code_r0x012dbb8c;
      }
      goto code_r0x012df8ec;
    }
    goto code_r0x012d8ef4;
  case 0xed:
    uVar9 = ExternalArrayTypeOf(pOVar12);
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    cVar6 = '\x02';
    switch(uVar9) {
    case 1:
    case 2:
    case 9:
      break;
    case 3:
    case 4:
      cVar6 = '\x03';
      break;
    case 5:
    case 6:
      cVar6 = '\x04';
      break;
    case 7:
      cVar6 = '\v';
      break;
    case 8:
      cVar6 = '\f';
      break;
    case 10:
    case 0xb:
code_r0x012e209c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unimplemented code");
    default:
      goto code_r0x012e13f4;
    }
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_93c,0);
    TStack_45e = SUB21((ushort)uStack_93c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_93a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_940;
      TStack_451 = TStack_93e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012de68c:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_93a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_940;
      TStack_451 = TStack_93e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012de68c;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_944,0);
    TStack_45e = SUB21((ushort)uStack_944 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_942;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_948;
      TStack_451 = TStack_946;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_942;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_948;
      TStack_451 = TStack_946;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_94c,0);
    TStack_45e = SUB21((ushort)uStack_94c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_94a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_950;
      TStack_451 = TStack_94e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
code_r0x012de804:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_94a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_950;
      TStack_451 = TStack_94e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      goto code_r0x012de804;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_954,0);
    TStack_45e = SUB21((ushort)uStack_954 >> 8,0);
    uStack_978 = uStack_958;
    TStack_976 = TStack_956;
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_952;
      iStack_45c = 5;
      iStack_458 = 1;
code_r0x012de890:
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      uStack_453 = uStack_978;
      TStack_451 = TStack_976;
      ConvertInput(param_1,param_2,3,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_952;
      iStack_45c = 5;
      iStack_458 = 1;
code_r0x012de83c:
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      uStack_453 = uStack_978;
      TStack_451 = TStack_976;
      EnqueueInput(param_1,param_2,3,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    goto code_r0x012de8c0;
  case 0xef:
    uVar9 = ExternalArrayTypeOf(pOVar12);
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    cVar6 = '\x02';
    switch(uVar9) {
    case 1:
    case 2:
    case 9:
      break;
    case 3:
    case 4:
      cVar6 = '\x03';
      break;
    case 5:
    case 6:
      cVar6 = '\x04';
      break;
    case 7:
      cVar6 = '\v';
      break;
    case 8:
      cVar6 = '\f';
      break;
    case 10:
    case 0xb:
      goto code_r0x012e209c;
    default:
      goto code_r0x012e13f4;
    }
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_95c,0);
    TStack_45e = SUB21((ushort)uStack_95c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_95a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_960;
      TStack_451 = TStack_95e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012de258:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_95a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_960;
      TStack_451 = TStack_95e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012de258;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_964,0);
    TStack_45e = SUB21((ushort)uStack_964 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_962;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_968;
      TStack_451 = TStack_966;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_962;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_968;
      TStack_451 = TStack_966;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_96c,0);
    TStack_45e = SUB21((ushort)uStack_96c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_96a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_970;
      TStack_451 = TStack_96e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
code_r0x012de3d0:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_96a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_970;
      TStack_451 = TStack_96e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      goto code_r0x012de3d0;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_974,0);
    TStack_45e = SUB21((ushort)uStack_974 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_972;
      iStack_45c = 1;
      iStack_458 = 0;
      goto code_r0x012de890;
    }
    if (iVar33 == 0) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_972;
      iStack_45c = 1;
      iStack_458 = 0;
      goto code_r0x012de83c;
    }
code_r0x012de8c0:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,4);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) goto code_r0x012de8e8;
    goto code_r0x012d474c;
  case 0xf0:
    if ((param_3 & 0xff) != 0) {
      TStack_45d = TStack_8e2;
      TStack_460 = (Type)0x5;
      TStack_b0 = (Type)0x5;
      TStack_451 = TStack_8e6;
      uStack_453 = uStack_8e8;
      TStack_45f = SUB21(uStack_8e4,0);
      TStack_45e = SUB21((ushort)uStack_8e4 >> 8,0);
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_a3 = uStack_8e8;
      TStack_a1 = TStack_8e6;
      uStack_454 = 0;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      iStack_ac = 5;
      iStack_a8 = 1;
      uStack_a4 = 0;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      pTVar19 = &TStack_460;
      pTVar21 = &TStack_b0;
      cVar6 = '\b';
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      TStack_ad = TStack_45d;
      goto code_r0x012d6d90;
    }
code_r0x012d8ef4:
    VisitUnused(param_1,param_2);
    break;
  case 0xf1:
    puVar16 = (undefined8 *)FieldAccessOf(pOVar12);
    uStack_430 = puVar16[6];
    uStack_438 = puVar16[5];
    uStack_440 = puVar16[4];
    uVar38 = puVar16[1];
    uVar25 = *puVar16;
    uStack_448 = (undefined4)puVar16[3];
    uStack_444 = (undefined4)((ulong)puVar16[3] >> 0x20);
    uStack_450 = (undefined5)puVar16[2];
    uStack_44b = (undefined3)((ulong)puVar16[2] >> 0x28);
    iStack_458 = (int)uVar38;
    uStack_454 = (undefined1)((ulong)uVar38 >> 0x20);
    uStack_453 = (undefined2)((ulong)uVar38 >> 0x28);
    TStack_451 = SUB81((ulong)uVar38 >> 0x38,0);
    TStack_460 = SUB81(uVar25,0);
    TStack_45f = SUB81((ulong)uVar25 >> 8,0);
    TStack_45e = SUB81((ulong)uVar25 >> 0x10,0);
    TStack_45d = SUB81((ulong)uVar25 >> 0x18,0);
    iStack_45c = (int)((ulong)uVar25 >> 0x20);
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(pNVar20 + 8);
    uVar30 = uStack_440 & 0xff;
    lVar40 = *(long *)(param_1 + 0x18);
    uVar14 = (ulong)*(uint *)(lVar24 + 0x14) & 0xffffff;
    if ((char)uStack_440 == '\b') {
      uVar30 = *(ulong *)(lVar40 + uVar14 * 0x28 + 0x18);
      if (uVar30 == 0) {
        uVar30 = *(ulong *)(lVar24 + 8);
      }
      TStack_b0 = SUB81(uVar30,0);
      TStack_af = SUB81(uVar30 >> 8,0);
      TStack_ae = SUB81(uVar30 >> 0x10,0);
      TStack_ad = SUB81(uVar30 >> 0x18,0);
      iStack_ac = (int)(uVar30 >> 0x20);
      uVar10 = BitsetType::SignedSmall();
      if ((uVar30 == (uVar10 | 1)) || (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) {
        uVar30 = 6;
      }
      else {
        uVar30 = 8;
      }
    }
    iVar33 = iStack_45c;
    TVar32 = TStack_460;
    TVar36 = SUB81(uVar30,0);
    uVar25 = 0x100000005;
    bVar8 = WriteBarrierKindFor(param_1,TStack_460,uVar30,CONCAT44(uStack_444,uStack_448),
                                *(undefined1 *)(lVar40 + uVar14 * 0x28 + 1),lVar24);
    TVar22 = TStack_ae;
    TVar3 = TStack_af;
    bVar7 = 2;
    if (iVar33 != 0 || TVar32 != (Type)0x1) {
      bVar7 = bVar8;
    }
    bVar1 = 0;
    if (bVar8 != 0) {
      bVar1 = bVar7;
    }
    TVar34 = (Type)0x8;
    if (TVar32 != (Type)0x1) {
      TVar34 = (Type)0x5;
    }
    TStack_af = SUB21(uStack_8d4,0);
    TStack_ae = SUB21((ushort)uStack_8d4 >> 8,0);
    if (*(int *)(param_1 + 0x78) == 2) {
      TStack_ad = TStack_8d2;
      iStack_ac = 5;
      iStack_a8 = 1;
      uStack_a4 = 0;
      uStack_a3 = uStack_8d8;
      TStack_a1 = TStack_8d6;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_b0 = TVar34;
      ConvertInput(param_1,param_2,0,&TStack_b0,0);
      TVar3 = TStack_af;
      TVar22 = TStack_ae;
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      TStack_ad = TStack_8d2;
      iStack_ac = 5;
      iStack_a8 = 1;
      uStack_a4 = 0;
      uStack_a3 = uStack_8d8;
      TStack_a1 = TStack_8d6;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_b0 = TVar34;
      EnqueueInput(param_1,param_2,0,&TStack_b0);
      TVar3 = TStack_af;
      TVar22 = TStack_ae;
    }
    TStack_ae = TVar22;
    TStack_af = TVar3;
    iVar39 = iStack_a8;
    iVar33 = iStack_ac;
    TVar3 = TStack_ae;
    TVar32 = TStack_af;
    switch((int)uVar30) {
    case 1:
      uVar25 = 1;
      break;
    case 2:
    case 3:
    case 4:
      TVar36 = (Type)0x4;
      uVar25 = 2;
      break;
    case 5:
    case 6:
    case 0xb:
      break;
    case 7:
    case 8:
      TVar36 = (Type)0x8;
      break;
    default:
      goto code_r0x012e13f4;
    case 0xc:
      uVar25 = 0x100000004;
    }
    TStack_af = SUB21(uStack_8dc,0);
    TStack_ae = SUB21((ushort)uStack_8dc >> 8,0);
    iStack_ac = (int)uVar25;
    iStack_a8 = (int)((ulong)uVar25 >> 0x20);
    if (*(int *)pRVar41 == 2) {
      TStack_ad = TStack_8da;
      uStack_a4 = 0;
      uStack_a3 = uStack_8e0;
      TStack_a1 = TStack_8de;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_b0 = TVar36;
      ConvertInput(param_1,param_2,1,&TStack_b0,0);
      TVar32 = TStack_af;
      TVar3 = TStack_ae;
      iVar33 = iStack_ac;
      iVar39 = iStack_a8;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_ad = TStack_8da;
      uStack_a4 = 0;
      uStack_a3 = uStack_8e0;
      TStack_a1 = TStack_8de;
      cStack_a0 = '\0';
      uStack_9f = 0;
      bStack_9e = 0;
      uStack_9d = 0;
      uStack_98 = 0xffffffff;
      TStack_b0 = TVar36;
      EnqueueInput(param_1,param_2,1,&TStack_b0);
      TVar32 = TStack_af;
      TVar3 = TStack_ae;
      iVar33 = iStack_ac;
      iVar39 = iStack_a8;
    }
    iStack_a8 = iVar39;
    iStack_ac = iVar33;
    TStack_ae = TVar3;
    TStack_af = TVar32;
    ProcessRemainingInputs(param_1,param_2,2);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 0;
code_r0x012df150:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012df150;
    }
    if ((iVar33 == 2) && (bVar1 < uStack_440._2_1_)) {
      uStack_440._0_3_ = CONCAT12(bVar1,(undefined2)uStack_440);
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178),
                           (FieldAccess *)&TStack_460);
      goto code_r0x012d48c0;
    }
    break;
  case 0xf2:
    puVar16 = (undefined8 *)ElementAccessOf(pOVar12);
    uVar30 = puVar16[2];
    uVar38 = puVar16[1];
    uVar25 = *puVar16;
    cStack_a0 = (char)uVar30;
    uStack_9f = (undefined1)(uVar30 >> 8);
    bStack_9e = (byte)(uVar30 >> 0x10);
    uStack_9d = (undefined5)(uVar30 >> 0x18);
    iStack_a8 = (int)uVar38;
    uStack_a4 = (undefined1)((ulong)uVar38 >> 0x20);
    uStack_a3 = (undefined2)((ulong)uVar38 >> 0x28);
    TStack_a1 = SUB81((ulong)uVar38 >> 0x38,0);
    TStack_b0 = SUB81(uVar25,0);
    TStack_af = SUB81((ulong)uVar25 >> 8,0);
    TStack_ae = SUB81((ulong)uVar25 >> 0x10,0);
    TStack_ad = SUB81((ulong)uVar25 >> 0x18,0);
    iStack_ac = (int)((ulong)uVar25 >> 0x20);
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(pNVar20 + 0x10);
    uVar30 = uVar30 & 0xff;
    lVar40 = *(long *)(param_1 + 0x18);
    uVar14 = (ulong)*(uint *)(lVar24 + 0x14) & 0xffffff;
    if (cStack_a0 == '\b') {
      uVar30 = *(ulong *)(lVar40 + uVar14 * 0x28 + 0x18);
      if (uVar30 == 0) {
        uVar30 = *(ulong *)(lVar24 + 8);
      }
      TStack_460 = SUB81(uVar30,0);
      TStack_45f = SUB81(uVar30 >> 8,0);
      TStack_45e = SUB81(uVar30 >> 0x10,0);
      TStack_45d = SUB81(uVar30 >> 0x18,0);
      iStack_45c = (int)(uVar30 >> 0x20);
      uVar10 = BitsetType::SignedSmall();
      if ((uVar30 == (uVar10 | 1)) || (uVar30 = Type::SlowIs(&TStack_460), (uVar30 & 1) != 0)) {
        uVar30 = 6;
      }
      else {
        uVar30 = 8;
      }
    }
    TVar36 = TStack_b0;
    TVar34 = SUB81(uVar30,0);
    uVar25 = 0x100000005;
    bVar7 = WriteBarrierKindFor(param_1,TStack_b0,uVar30,
                                CONCAT17(TStack_a1,CONCAT25(uStack_a3,CONCAT14(uStack_a4,iStack_a8))
                                        ),*(undefined1 *)(lVar40 + uVar14 * 0x28 + 1),lVar24);
    TVar22 = TStack_45e;
    TVar3 = TStack_45f;
    iVar33 = *(int *)(param_1 + 0x78);
    TVar32 = (Type)0x8;
    if (TVar36 != (Type)0x1) {
      TVar32 = (Type)0x5;
    }
    TStack_45f = SUB21(uStack_8ec,0);
    TStack_45e = SUB21((ushort)uStack_8ec >> 8,0);
    if (iVar33 == 2) {
      TStack_45d = TStack_8ea;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8f0;
      TStack_451 = TStack_8ee;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar32;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012ddacc:
      iVar33 = *(int *)pRVar41;
      TVar3 = TStack_45f;
      TVar22 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_45d = TStack_8ea;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8f0;
      TStack_451 = TStack_8ee;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar32;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012ddacc;
    }
    TStack_45e = TVar22;
    TStack_45f = TVar3;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_8f4,0);
    TStack_45e = SUB21((ushort)uStack_8f4 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8f2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8f8;
      TStack_451 = TStack_8f6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8f2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8f8;
      TStack_451 = TStack_8f6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar39 = iStack_458;
    iVar33 = iStack_45c;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    switch((int)uVar30) {
    case 1:
      uVar25 = 1;
      break;
    case 2:
    case 3:
    case 4:
      TVar34 = (Type)0x4;
      uVar25 = 2;
      break;
    case 5:
    case 6:
    case 0xb:
      break;
    case 7:
    case 8:
      TVar34 = (Type)0x8;
      break;
    default:
      goto code_r0x012e13f4;
    case 0xc:
      uVar25 = 0x100000004;
    }
    TStack_45f = SUB21(uStack_8fc,0);
    TStack_45e = SUB21((ushort)uStack_8fc >> 8,0);
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_8fa;
      uStack_454 = 0;
      uStack_453 = uStack_900;
      TStack_451 = TStack_8fe;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar34;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_45d = TStack_8fa;
      uStack_454 = 0;
      uStack_453 = uStack_900;
      TStack_451 = TStack_8fe;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar34;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
    iStack_458 = iVar39;
    iStack_45c = iVar33;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,3);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 0;
code_r0x012df014:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012df014;
    }
    if ((iVar33 == 2) && (bVar7 < bStack_9e)) {
      bStack_9e = bVar7;
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::StoreElement
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178),
                           (ElementAccess *)&TStack_b0);
      goto code_r0x012d48c0;
    }
    break;
  case 0xf3:
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_8bc,0);
    TStack_45e = SUB21((ushort)uStack_8bc >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8ba;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8c0;
      TStack_451 = TStack_8be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012da970:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_8ba;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8c0;
      TStack_451 = TStack_8be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012da970;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_8c4,0);
    TStack_45e = SUB21((ushort)uStack_8c4 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_8c2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8c8;
      TStack_451 = TStack_8c6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_8c2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_8c8;
      TStack_451 = TStack_8c6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = 2;
    goto code_r0x012dedd8;
  case 0xf4:
    uVar9 = ExternalArrayTypeOf(pOVar12);
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uVar37 = 2;
    switch(uVar9) {
    case 1:
    case 2:
    case 9:
      break;
    case 3:
    case 4:
      uVar37 = 3;
      break;
    case 5:
    case 6:
      uVar37 = 4;
      break;
    case 7:
      uVar37 = 0xb;
      break;
    case 8:
      uVar37 = 0xc;
      break;
    case 10:
    case 0xb:
      goto code_r0x012e209c;
    default:
      goto code_r0x012e13f4;
    }
    iVar33 = *(int *)pRVar41;
    uVar25 = 0x100000005;
    TStack_45f = SUB21(uStack_97c,0);
    TStack_45e = SUB21((ushort)uStack_97c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_97a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_980;
      TStack_451 = TStack_97e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012dea98:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_97a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_980;
      TStack_451 = TStack_97e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012dea98;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_984,0);
    TStack_45e = SUB21((ushort)uStack_984 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_982;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_988;
      TStack_451 = TStack_986;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_982;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_988;
      TStack_451 = TStack_986;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_98c,0);
    TStack_45e = SUB21((ushort)uStack_98c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_98a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_990;
      TStack_451 = TStack_98e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
code_r0x012dec10:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_98a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_990;
      TStack_451 = TStack_98e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      goto code_r0x012dec10;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_994,0);
    TStack_45e = SUB21((ushort)uStack_994 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_992;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_998;
      TStack_451 = TStack_996;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,3,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_992;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_998;
      TStack_451 = TStack_996;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,3,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar39 = iStack_458;
    iVar33 = iStack_45c;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TVar22 = (Type)0x6;
    switch(uVar37) {
    case 2:
    case 3:
    case 4:
      TVar22 = (Type)0x4;
      uVar25 = 2;
      break;
    case 5:
      TVar22 = (Type)0x5;
      break;
    case 6:
      break;
    case 7:
    case 8:
      TVar22 = (Type)0x8;
      break;
    default:
      goto code_r0x012e13f4;
    case 0xb:
      TVar22 = (Type)0xb;
      break;
    case 0xc:
      uVar25 = 0x100000004;
      TVar22 = (Type)0xc;
    }
    TStack_45f = SUB21(uStack_99c,0);
    TStack_45e = SUB21((ushort)uStack_99c >> 8,0);
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_99a;
      uStack_453 = uStack_9a0;
      TStack_451 = TStack_99e;
      TStack_460 = TVar22;
code_r0x012dedd0:
      uStack_448 = 0xffffffff;
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      ConvertInput(param_1,param_2,4,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_45d = TStack_99a;
      uStack_454 = 0;
      uStack_453 = uStack_9a0;
      TStack_451 = TStack_99e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar22;
      EnqueueInput(param_1,param_2,4,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
    goto code_r0x012dedd4;
  case 0xf6:
    uVar9 = ExternalArrayTypeOf(pOVar12);
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uVar37 = 2;
    switch(uVar9) {
    case 1:
    case 2:
    case 9:
      break;
    case 3:
    case 4:
      uVar37 = 3;
      break;
    case 5:
    case 6:
      uVar37 = 4;
      break;
    case 7:
      uVar37 = 0xb;
      break;
    case 8:
      uVar37 = 0xc;
      break;
    case 10:
    case 0xb:
      goto code_r0x012e209c;
    default:
      goto code_r0x012e13f4;
    }
    iVar33 = *(int *)pRVar41;
    uVar25 = 0x100000005;
    TStack_45f = SUB21(uStack_9a4,0);
    TStack_45e = SUB21((ushort)uStack_9a4 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_9a2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9a8;
      TStack_451 = TStack_9a6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012ddfcc:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_9a2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9a8;
      TStack_451 = TStack_9a6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012ddfcc;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_9ac,0);
    TStack_45e = SUB21((ushort)uStack_9ac >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_9aa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9b0;
      TStack_451 = TStack_9ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_9aa;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9b0;
      TStack_451 = TStack_9ae;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_9b4,0);
    TStack_45e = SUB21((ushort)uStack_9b4 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_9b2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9b8;
      TStack_451 = TStack_9b6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_9b2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_9b8;
      TStack_451 = TStack_9b6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar39 = iStack_458;
    iVar33 = iStack_45c;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TVar22 = (Type)0x6;
    switch(uVar37) {
    case 2:
    case 3:
    case 4:
      TVar22 = (Type)0x4;
      uVar25 = 2;
      break;
    case 5:
      TVar22 = (Type)0x5;
      break;
    case 6:
      break;
    case 7:
    case 8:
      TVar22 = (Type)0x8;
      break;
    default:
      goto code_r0x012e13f4;
    case 0xb:
      TVar22 = (Type)0xb;
      break;
    case 0xc:
      uVar25 = 0x100000004;
      TVar22 = (Type)0xc;
    }
    iVar29 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_9bc,0);
    TStack_45e = SUB21((ushort)uStack_9bc >> 8,0);
    iStack_45c = (int)uVar25;
    iStack_458 = (int)((ulong)uVar25 >> 0x20);
    if (iVar29 == 2) {
      TStack_45d = TStack_9ba;
      uStack_454 = 0;
      uStack_453 = uStack_9c0;
      TStack_451 = TStack_9be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar22;
      ConvertInput(param_1,param_2,3,&TStack_460,0);
code_r0x012de500:
      iVar29 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
    else if (iVar29 == 0) {
      TStack_45d = TStack_9ba;
      uStack_454 = 0;
      uStack_453 = uStack_9c0;
      TStack_451 = TStack_9be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_460 = TVar22;
      EnqueueInput(param_1,param_2,3,&TStack_460);
      goto code_r0x012de500;
    }
    iStack_458 = iVar39;
    iStack_45c = iVar33;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_9c4,0);
    TStack_45e = SUB21((ushort)uStack_9c4 >> 8,0);
    if (iVar29 == 2) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_9c2;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_453 = uStack_9c8;
      TStack_451 = TStack_9c6;
      goto code_r0x012dedd0;
    }
    iVar33 = iStack_45c;
    iVar39 = iStack_458;
    if (iVar29 == 0) {
      TStack_460 = (Type)0x1;
      TStack_45d = TStack_9c2;
      iStack_45c = 1;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_9c8;
      TStack_451 = TStack_9c6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,4,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      iVar33 = iStack_45c;
      iVar39 = iStack_458;
    }
code_r0x012dedd4:
    iStack_458 = iVar39;
    iStack_45c = iVar33;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = 5;
code_r0x012dedd8:
    ProcessRemainingInputs(param_1,param_2,iVar33);
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
code_r0x012dede4:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012dedfc:
      *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 0;
      break;
    }
    goto code_r0x012d474c;
  case 0xf8:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 0x10) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)(pNVar20 + 0x10) + 8);
    }
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_90c,0);
    TStack_45e = SUB21((ushort)uStack_90c >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_90a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_910;
      TStack_451 = TStack_90e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012dac68:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_90a;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_910;
      TStack_451 = TStack_90e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012dac68;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_914,0);
    TStack_45e = SUB21((ushort)uStack_914 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_912;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_918;
      TStack_451 = TStack_916;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_912;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_918;
      TStack_451 = TStack_916;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    uVar10 = BitsetType::SignedSmall();
    if ((uStack_5d8 == (uVar10 | 1)) ||
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8), (uVar30 & 1) != 0)) {
      TVar3 = TStack_ae;
      TVar32 = TStack_af;
      TStack_af = SUB21(uStack_91c,0);
      TStack_ae = SUB21((ushort)uStack_91c >> 8,0);
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x4;
        TStack_45d = TStack_91a;
        iStack_45c = 2;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_920;
        TStack_451 = TStack_91e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_af;
        TStack_45e = TStack_ae;
        TStack_af = TVar32;
        TStack_ae = TVar3;
        EnqueueInput(param_1,param_2,2,&TStack_460);
      }
      else {
        TVar22 = TStack_45f;
        TVar36 = TStack_45e;
        if (*(int *)pRVar41 != 2) goto code_r0x012dbdc0;
        TStack_b0 = (Type)0x4;
        TStack_ad = TStack_91a;
        iStack_ac = 2;
        iStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a3 = uStack_920;
        TStack_a1 = TStack_91e;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        ConvertInput(param_1,param_2,2,&TStack_b0,0);
      }
      TVar22 = TStack_45f;
      TVar36 = TStack_45e;
      TVar32 = TStack_af;
      TVar3 = TStack_ae;
      if (*(int *)pRVar41 == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::StoreSignedSmallElement
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
code_r0x012dbdb4:
        NodeProperties::ChangeOp(param_2,pOVar12);
        TVar22 = TStack_45f;
        TVar36 = TStack_45e;
        TVar32 = TStack_af;
        TVar3 = TStack_ae;
      }
    }
    else if ((uStack_5d8 == 0x1c5f) ||
            (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0x1c5f), (uVar30 & 1) != 0)) {
      TVar3 = TStack_ae;
      TVar32 = TStack_af;
      TStack_af = SUB21(uStack_924,0);
      TStack_ae = SUB21((ushort)uStack_924 >> 8,0);
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_922;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_928;
        TStack_451 = TStack_926;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_af;
        TStack_45e = TStack_ae;
        TStack_af = TVar32;
        TStack_ae = TVar3;
        EnqueueInput(param_1,param_2,2,&TStack_460);
      }
      else {
        TVar22 = TStack_45f;
        TVar36 = TStack_45e;
        if (*(int *)pRVar41 != 2) goto code_r0x012dbdc0;
        TStack_b0 = (Type)0xc;
        TStack_ad = TStack_922;
        iStack_ac = 4;
        iStack_a8 = 1;
        uStack_a4 = 0;
        uStack_a3 = uStack_928;
        TStack_a1 = TStack_926;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        ConvertInput(param_1,param_2,2,&TStack_b0,0);
      }
      TVar22 = TStack_45f;
      TVar36 = TStack_45e;
      TVar32 = TStack_af;
      TVar3 = TStack_ae;
      if (*(int *)pRVar41 == 2) {
        uVar25 = DoubleMapParameterOf(*(Operator **)param_2);
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::TransitionAndStoreNumberElement
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178),uVar25);
        goto code_r0x012dbdb4;
      }
    }
    else if ((uStack_5d8 == 0xfff63a1) ||
            (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xfff63a1), TVar36 = TStack_45e,
            TVar22 = TStack_45f, (uVar30 & 1) != 0)) {
      TVar3 = TStack_ae;
      TVar32 = TStack_af;
      TStack_af = SUB21(uStack_92c,0);
      TStack_ae = SUB21((ushort)uStack_92c >> 8,0);
      if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_92a;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_930;
        TStack_451 = TStack_92e;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45f = TStack_af;
        TStack_45e = TStack_ae;
        TStack_af = TVar32;
        TStack_ae = TVar3;
        EnqueueInput(param_1,param_2,2,&TStack_460);
      }
      else {
        TVar22 = TStack_45f;
        TVar36 = TStack_45e;
        if (*(int *)pRVar41 != 2) goto code_r0x012dbdc0;
        TStack_b0 = (Type)0x8;
        TStack_ad = TStack_92a;
        iStack_ac = 5;
        iStack_a8 = 1;
        uStack_a4 = 0;
        uStack_a3 = uStack_930;
        TStack_a1 = TStack_92e;
        cStack_a0 = '\0';
        uStack_9f = 0;
        bStack_9e = 0;
        uStack_9d = 0;
        uStack_98 = 0xffffffff;
        ConvertInput(param_1,param_2,2,&TStack_b0,0);
      }
      TVar22 = TStack_45f;
      TVar36 = TStack_45e;
      TVar32 = TStack_af;
      TVar3 = TStack_ae;
      if (*(int *)pRVar41 == 2) {
        uVar25 = FastMapParameterOf(*(Operator **)param_2);
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::TransitionAndStoreNonNumberElement
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178),uVar25,
                             uStack_5d8);
        goto code_r0x012dbdb4;
      }
    }
    else {
      TStack_45f = SUB21(uStack_934,0);
      TStack_45e = SUB21((ushort)uStack_934 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x8;
        TStack_45d = TStack_932;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_938;
        TStack_451 = TStack_936;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,2,&TStack_460,0);
        TVar22 = TStack_45f;
        TVar36 = TStack_45e;
        TVar32 = TStack_af;
        TVar3 = TStack_ae;
      }
      else {
        TVar32 = TStack_af;
        TVar3 = TStack_ae;
        if (*(int *)pRVar41 == 0) {
          TStack_460 = (Type)0x8;
          TStack_45d = TStack_932;
          iStack_45c = 5;
          iStack_458 = 1;
          uStack_454 = 0;
          uStack_453 = uStack_938;
          TStack_451 = TStack_936;
          uStack_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0xffffffff;
          EnqueueInput(param_1,param_2,2,&TStack_460);
          TVar22 = TStack_45f;
          TVar36 = TStack_45e;
          TVar32 = TStack_af;
          TVar3 = TStack_ae;
        }
      }
    }
code_r0x012dbdc0:
    TStack_ae = TVar3;
    TStack_af = TVar32;
    TStack_45e = TVar36;
    TStack_45f = TVar22;
    ProcessRemainingInputs(param_1,param_2,3);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto code_r0x012df914;
    goto code_r0x012dedfc;
  case 0xfb:
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,1);
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    if ((uVar30 & 1) != 0) {
      TStack_45f = SUB21(uStack_5c4,0);
      TStack_45e = SUB21((ushort)uStack_5c4 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x1;
        TStack_45d = TStack_5c2;
        iStack_45c = 1;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_5c8;
        TStack_451 = TStack_5c6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x1;
        TStack_45d = TStack_5c2;
        iStack_45c = 1;
        iStack_458 = 0;
        uStack_454 = 0;
        uStack_453 = uStack_5c8;
        TStack_451 = TStack_5c6;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      iVar33 = *(int *)(param_1 + 0x78);
      lVar24 = *(long *)(param_1 + 0x18);
      uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
      if (iVar33 != 1) goto code_r0x012dd3fc;
      lVar24 = lVar24 + uVar30 * 0x28;
      uVar27 = 1;
      goto code_r0x012dd420;
    }
    VisitInputs(param_1,param_2);
code_r0x012d9db4:
    iVar33 = *(int *)(param_1 + 0x78);
    uVar10 = *(uint *)(param_2 + 0x14);
    lVar24 = *(long *)(param_1 + 0x18);
joined_r0x012d9500:
    uVar30 = (ulong)uVar10 & 0xffffff;
    if (iVar33 != 1) goto joined_r0x012db9a4;
    lVar24 = lVar24 + uVar30 * 0x28;
    uVar27 = 7;
    goto code_r0x012dba40;
  case 0xfc:
    uStack_ad4 = uStack_904;
    TStack_ad2 = TStack_902;
    uStack_ad8 = uStack_908;
    TStack_ad6 = TStack_906;
    goto code_r0x012d76fc;
  case 0xfd:
    uStack_ad4 = uStack_a44;
    TStack_ad2 = TStack_a42;
    uStack_ad8 = uStack_a48;
    TStack_ad6 = TStack_a46;
    goto code_r0x012d76fc;
  case 0xfe:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    uStack_ab4 = uStack_a24;
    TStack_ab2 = TStack_a22;
    uStack_ab8 = uStack_a28;
    TStack_ab6 = TStack_a26;
    if ((lVar24 == *(long *)(*(long *)(param_1 + 0x138) + 400)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) {
code_r0x012d7a54:
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_ab2,uStack_ab4);
      uStack_5e0._0_3_ = CONCAT12(TStack_ab6,uStack_ab8);
      TStack_45f = SUB21(uStack_ab4,0);
      TStack_45e = SUB21((ushort)uStack_ab4 >> 8,0);
      TVar22 = TStack_ab2;
      uVar4 = uStack_ab8;
      TVar36 = TStack_ab6;
      if (*(int *)pRVar41 == 2) {
code_r0x012dc338:
        TStack_451 = TVar36;
        uStack_453 = uVar4;
        TStack_45d = TVar22;
        uStack_44b = 0;
        uStack_450 = 0;
        uStack_454 = 0;
        iStack_458 = 0;
        iStack_45c = 0;
        TStack_460 = (Type)0x0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else {
        TVar22 = TStack_ab2;
        uVar4 = uStack_ab8;
        TVar36 = TStack_ab6;
        if (*(int *)pRVar41 == 0) {
code_r0x012d7abc:
          TStack_451 = TVar36;
          uStack_453 = uVar4;
          TStack_45d = TVar22;
          uStack_44b = 0;
          uStack_450 = 0;
          uStack_454 = 0;
          iStack_458 = 0;
          iStack_45c = 0;
          TStack_460 = (Type)0x0;
          uStack_448 = 0xffffffff;
          EnqueueInput(param_1,param_2,0,&TStack_460);
          TVar32 = TStack_45f;
          TVar3 = TStack_45e;
        }
      }
code_r0x012dc340:
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012dc390:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dc390;
      }
      if (iVar33 == 2) {
        pMVar18 = *(MachineGraph **)param_4;
        iVar33 = 1;
        goto code_r0x012dc3a4;
      }
      break;
    }
    uVar30 = Type::Maybe(&TStack_b0,0x1c5f);
    uStack_abc = uStack_a2c;
    TStack_aba = TStack_a2a;
    uStack_ac0 = uStack_a30;
    TStack_abe = TStack_a2e;
    if ((uVar30 & 1) == 0) {
code_r0x012ddd74:
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_aba,uStack_abc);
      uStack_5e0._0_3_ = CONCAT12(TStack_abe,uStack_ac0);
      TStack_45f = SUB21(uStack_abc,0);
      TStack_45e = SUB21((ushort)uStack_abc >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0x0;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45d = TStack_aba;
        uStack_453 = uStack_ac0;
        TStack_451 = TStack_abe;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0x0;
        iStack_45c = 5;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        TStack_45d = TStack_aba;
        uStack_453 = uStack_ac0;
        TStack_451 = TStack_abe;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012dde9c:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012dde9c;
      }
      if (iVar33 != 2) break;
      pMVar18 = *(MachineGraph **)param_4;
      iVar33 = 0;
code_r0x012dc3a4:
      pNVar20 = (Node *)MachineGraph::Int32Constant(pMVar18,iVar33);
      goto code_r0x012e0120;
    }
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         == 0x1c5f) ||
       (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), uStack_acc = uStack_a3c, TStack_aca = TStack_a3a,
       uStack_ad0 = uStack_a40, TStack_ace = TStack_a3e, (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_a32,uStack_a34);
      uStack_5e0._0_3_ = CONCAT12(TStack_a36,uStack_a38);
      TStack_45f = SUB21(uStack_a34,0);
      TStack_45e = SUB21((ushort)uStack_a34 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_a32;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_a38;
        TStack_451 = TStack_a36;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        ConvertInput(param_1,param_2,0,&TStack_460,0);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      else if (*(int *)pRVar41 == 0) {
        TStack_460 = (Type)0xc;
        TStack_45d = TStack_a32;
        iStack_45c = 4;
        iStack_458 = 1;
        uStack_454 = 0;
        uStack_453 = uStack_a38;
        TStack_451 = TStack_a36;
        uStack_450 = 0;
        uStack_44b = 0;
        uStack_448 = 0xffffffff;
        EnqueueInput(param_1,param_2,0,&TStack_460);
        TVar32 = TStack_45f;
        TVar3 = TStack_45e;
      }
      TStack_45e = TVar3;
      TStack_45f = TVar32;
      ProcessRemainingInputs(param_1,param_2,1);
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e1318:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012e1318;
      }
      if (iVar33 == 2) {
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::NumberIsFinite
                            (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
        goto code_r0x012d48c0;
      }
      break;
    }
code_r0x012e1054:
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_aca,uStack_acc);
    uStack_5e0._0_3_ = CONCAT12(TStack_ace,uStack_ad0);
    TStack_45f = SUB21(uStack_acc,0);
    TStack_45e = SUB21((ushort)uStack_acc >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_45d = TStack_aca;
      uStack_453 = uStack_ad0;
      TStack_451 = TStack_ace;
      goto code_r0x012d7bf8;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      iStack_45c = 5;
      iStack_458 = 1;
      TStack_45d = TStack_aca;
      uStack_453 = uStack_ad0;
      TStack_451 = TStack_ace;
      goto code_r0x012d7b98;
    }
    goto code_r0x012d7c00;
  case 0xff:
    uStack_ad4 = uStack_a8c;
    TStack_ad2 = TStack_a8a;
    uStack_ad8 = uStack_a90;
    TStack_ad6 = TStack_a8e;
    goto code_r0x012d76fc;
  case 0x100:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    uStack_ab4 = uStack_a4c;
    TStack_ab2 = TStack_a4a;
    uStack_ab8 = uStack_a50;
    TStack_ab6 = TStack_a4e;
    if ((lVar24 == *(long *)(*(long *)(param_1 + 0x138) + 400)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) goto code_r0x012d7a54;
    uVar30 = Type::Maybe(&TStack_b0,0x1c5f);
    uStack_abc = uStack_a54;
    TStack_aba = TStack_a52;
    uStack_ac0 = uStack_a58;
    TStack_abe = TStack_a56;
    if ((uVar30 & 1) == 0) goto code_r0x012ddd74;
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c5f) &&
       (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), uStack_acc = uStack_a64, TStack_aca = TStack_a62,
       uStack_ad0 = uStack_a68, TStack_ace = TStack_a66, (uVar30 & 1) == 0)) goto code_r0x012e1054;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_a5a,uStack_a5c);
    uStack_5e0._0_3_ = CONCAT12(TStack_a5e,uStack_a60);
    TStack_45f = SUB21(uStack_a5c,0);
    TStack_45e = SUB21((ushort)uStack_a5c >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_a5a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_a60;
      TStack_451 = TStack_a5e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_a5a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_a60;
      TStack_451 = TStack_a5e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e1390:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e1390;
    }
    if (iVar33 == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::NumberIsSafeInteger
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 0x101:
    goto code_r0x012e13f4;
  case 0x102:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    uStack_ab4 = uStack_a6c;
    TStack_ab2 = TStack_a6a;
    uStack_ab8 = uStack_a70;
    TStack_ab6 = TStack_a6e;
    if ((lVar24 == *(long *)(*(long *)(param_1 + 0x138) + 400)) ||
       (uVar30 = Type::SlowIs(&TStack_b0), (uVar30 & 1) != 0)) goto code_r0x012d7a54;
    uVar30 = Type::Maybe(&TStack_b0,0x1c5f);
    uStack_abc = uStack_a74;
    TStack_aba = TStack_a72;
    uStack_ac0 = uStack_a78;
    TStack_abe = TStack_a76;
    if ((uVar30 & 1) == 0) goto code_r0x012ddd74;
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c5f) &&
       (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), uStack_acc = uStack_a84, TStack_aca = TStack_a82,
       uStack_ad0 = uStack_a88, TStack_ace = TStack_a86, (uVar30 & 1) == 0)) goto code_r0x012e1054;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_a7a,uStack_a7c);
    uStack_5e0._0_3_ = CONCAT12(TStack_a7e,uStack_a80);
    TStack_45f = SUB21(uStack_a7c,0);
    TStack_45e = SUB21((ushort)uStack_a7c >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_a7a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_a80;
      TStack_451 = TStack_a7e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_a7a;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_a80;
      TStack_451 = TStack_a7e;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e13b8:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e13b8;
    }
    if (iVar33 == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::NumberIsInteger
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 0x103:
    uStack_adc = uStack_a14;
    TStack_ada = TStack_a12;
    uStack_ae0 = uStack_a18;
    TStack_ade = TStack_a16;
    goto code_r0x012d7b28;
  case 0x104:
    uVar25 = 0x8000001;
    goto code_r0x012d786c;
  case 0x105:
    uVar25 = 0x6d0001;
    goto code_r0x012d786c;
  case 0x106:
    uStack_adc = uStack_a1c;
    TStack_ada = TStack_a1a;
    uStack_ae0 = uStack_a20;
    TStack_ade = TStack_a1e;
    goto code_r0x012d7b28;
  case 0x107:
    uVar25 = 0x690001;
    goto code_r0x012d786c;
  case 0x108:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x801) || (uVar30 = Type::SlowIs(&TStack_b0,0x801), (uVar30 & 1) != 0)) {
      TVar3 = TStack_45e;
      TVar32 = TStack_45f;
      uStack_5d8._0_3_ = CONCAT12(TStack_a92,uStack_a94);
      uStack_5e0._0_3_ = CONCAT12(TStack_a96,uStack_a98);
      TStack_45f = SUB21(uStack_a94,0);
      TStack_45e = SUB21((ushort)uStack_a94 >> 8,0);
      if (*(int *)pRVar41 == 2) {
        TStack_45d = TStack_a92;
        uStack_453 = uStack_a98;
        TStack_451 = TStack_a96;
        TVar22 = TStack_45d;
        uVar4 = uStack_453;
        TVar36 = TStack_451;
        goto code_r0x012dc338;
      }
      if (*(int *)pRVar41 == 0) {
        TStack_45d = TStack_a92;
        uStack_453 = uStack_a98;
        TStack_451 = TStack_a96;
        TVar22 = TStack_45d;
        uVar4 = uStack_453;
        TVar36 = TStack_451;
        goto code_r0x012d7abc;
      }
      goto code_r0x012dc340;
    }
    uVar30 = Type::Maybe(&TStack_b0,0x801);
    uStack_abc = uStack_a9c;
    TStack_aba = TStack_a9a;
    uStack_ac0 = uStack_aa0;
    TStack_abe = TStack_a9e;
    if ((uVar30 & 1) == 0) goto code_r0x012ddd74;
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c5f) &&
       (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), uStack_acc = uStack_aac, TStack_aca = TStack_aaa,
       uStack_ad0 = uStack_ab0, TStack_ace = TStack_aae, (uVar30 & 1) == 0)) goto code_r0x012e1054;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_aa2,uStack_aa4);
    uStack_5e0._0_3_ = CONCAT12(TStack_aa6,uStack_aa8);
    TStack_45f = SUB21(uStack_aa4,0);
    TStack_45e = SUB21((ushort)uStack_aa4 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_aa2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_aa8;
      TStack_451 = TStack_aa6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_aa2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_aa8;
      TStack_451 = TStack_aa6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e1368:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e1368;
    }
    if (iVar33 == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::NumberIsMinusZero
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 0x10a:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)pNVar20 + 8);
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    if ((lVar24 == 0x1001) || (uVar30 = Type::SlowIs(&TStack_b0,0x1001), (uVar30 & 1) != 0))
    goto code_r0x012d7a54;
    uVar30 = Type::Maybe(&TStack_b0,0x1001);
    if ((uVar30 & 1) == 0) goto code_r0x012ddd74;
    if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
         != 0x1c5f) && (uVar30 = Type::SlowIs(&TStack_b0,0x1c5f), (uVar30 & 1) == 0))
    goto code_r0x012e1054;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    uStack_5d8._0_3_ = CONCAT12(TStack_ac2,uStack_ac4);
    uStack_5e0._0_3_ = CONCAT12(TStack_ac6,uStack_ac8);
    TStack_45f = SUB21(uStack_ac4,0);
    TStack_45e = SUB21((ushort)uStack_ac4 >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_ac2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_ac8;
      TStack_451 = TStack_ac6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      TStack_45d = TStack_ac2;
      iStack_45c = 4;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_ac8;
      TStack_451 = TStack_ac6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
code_r0x012e1340:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012e1340;
    }
    if (iVar33 == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::NumberIsNaN
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_1 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 0x10b:
code_r0x012d76fc:
    TStack_b0 = SUB21(uStack_ad4,0);
    TStack_af = SUB21((ushort)uStack_ad4 >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_ad6,uStack_ad8);
    uStack_ae0 = uStack_ad8;
    TStack_ade = TStack_ad6;
    TStack_ae = TStack_ad2;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0xc;
      uVar25 = 0x100000004;
code_r0x012d7bcc:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      uStack_453 = uStack_ae0;
      TStack_451 = TStack_ade;
code_r0x012d7bf8:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0xc;
      uVar25 = 0x100000004;
code_r0x012d7b70:
      iStack_45c = (int)uVar25;
      iStack_458 = (int)((ulong)uVar25 >> 0x20);
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      uStack_453 = uStack_ae0;
      TStack_451 = TStack_ade;
code_r0x012d7b98:
      uStack_44b = 0;
      uStack_450 = 0;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
code_r0x012d7c00:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    cVar6 = '\x01';
code_r0x012d7c10:
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012de8e8:
      *(char *)(lVar24 + uVar30 * 0x28 + 1) = cVar6;
      break;
    }
code_r0x012df914:
    if (iVar33 != 0) break;
    goto code_r0x012d4750;
  case 0x10c:
    uVar25 = 0x4120001;
    goto code_r0x012d786c;
  case 0x10d:
    uVar25 = 0x1c5f;
    goto code_r0x012d786c;
  case 0x10e:
    uVar25 = 0x47f0001;
    goto code_r0x012d786c;
  case 0x10f:
code_r0x012d7b28:
    TStack_b0 = SUB21(uStack_adc,0);
    TStack_af = SUB21((ushort)uStack_adc >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_ade,uStack_ae0);
    TStack_ae = TStack_ada;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
      goto code_r0x012d7bcc;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      uVar25 = 0x100000005;
      goto code_r0x012d7b70;
    }
    goto code_r0x012d7c00;
  case 0x110:
    uVar25 = 0x4021;
    goto code_r0x012d786c;
  case 0x111:
    uVar25 = 0x2001;
    goto code_r0x012d786c;
  case 0x112:
    uVar25 = 0x40181;
code_r0x012d786c:
    VisitObjectIs(param_1,param_2,uVar25,param_4);
    break;
  case 0x113:
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto code_r0x012d474c;
    *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 5;
    break;
  case 0x114:
    TStack_b0 = SUB21(uStack_ae4,0);
    TStack_af = SUB21((ushort)uStack_ae4 >> 8,0);
    TStack_ae = TStack_ae2;
    uStack_5d8._0_3_ = CONCAT12(TStack_ae6,uStack_ae8);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_ae2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_ae8;
      TStack_451 = TStack_ae6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_ae2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_ae8;
      TStack_451 = TStack_ae6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) goto code_r0x012db08c;
    goto joined_r0x012db9a4;
  case 0x115:
  case 0x116:
    TStack_b0 = SUB21(uStack_aec,0);
    TStack_af = SUB21((ushort)uStack_aec >> 8,0);
    TStack_ae = TStack_aea;
    uStack_5d8._0_3_ = CONCAT12(TStack_aee,uStack_af0);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_aea;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_af0;
      TStack_451 = TStack_aee;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x5;
      TStack_45d = TStack_aea;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_af0;
      TStack_451 = TStack_aee;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    uVar10 = *(uint *)(param_2 + 0x14);
    lVar24 = *(long *)(param_1 + 0x18);
    goto joined_r0x012d9500;
  case 0x117:
    aTStack_4f0[0] = (Type)0x5;
    uStack_4ec = 0x100000005;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0xffffffff;
    aTStack_510[0] = (Type)0x6;
    uStack_50c = 0x100000005;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4f8 = 0xffffffff;
    pTVar19 = aTStack_4f0;
    pTVar21 = aTStack_510;
    goto code_r0x012d6d8c;
  case 0x118:
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_7bc,0);
    TStack_45e = SUB21((ushort)uStack_7bc >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_7ba;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_7c0;
      TStack_451 = TStack_7be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012dae10:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_7ba;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_7c0;
      TStack_451 = TStack_7be;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012dae10;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_7c4,0);
    TStack_45e = SUB21((ushort)uStack_7c4 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_7c2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_7c8;
      TStack_451 = TStack_7c6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_7c2;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_7c8;
      TStack_451 = TStack_7c6;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_7cc,0);
    TStack_45e = SUB21((ushort)uStack_7cc >> 8,0);
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_7ca;
      goto code_r0x012daf5c;
    }
    if (*(int *)pRVar41 != 0) goto code_r0x012db22c;
    TStack_45d = TStack_7ca;
code_r0x012daf08:
    TStack_460 = (Type)0x8;
    iStack_45c = 5;
    iStack_458 = 1;
    uStack_454 = 0;
    uStack_450 = 0;
    uStack_44b = 0;
    uStack_448 = 0xffffffff;
    uStack_453 = uStack_7d0;
    TStack_451 = TStack_7ce;
    EnqueueInput(param_1,param_2,2,&TStack_460);
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
code_r0x012db22c:
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
code_r0x012db244:
      *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 7;
    }
    else {
code_r0x012d474c:
      if (iVar33 == 0) {
code_r0x012d4750:
        lVar24 = lVar24 + uVar30 * 0x28;
code_r0x012d4758:
        *(undefined8 *)(lVar24 + 0x10) = 0xffffffff;
      }
    }
    break;
  case 0x11a:
    TStack_45f = SUB21(uStack_b48,0);
    TStack_45e = SUB21((ushort)uStack_b48 >> 8,0);
    TStack_45d = TStack_b46;
    TStack_451 = TStack_b4a;
code_r0x012d6d50:
    TStack_af = SUB21(uStack_b48,0);
    TStack_ae = SUB21((ushort)uStack_b48 >> 8,0);
    TStack_ad = TStack_45d;
    uStack_a3 = uStack_b4c;
    TStack_a1 = TStack_451;
code_r0x012d6d84:
    uStack_9d = 0;
    bStack_9e = 0;
    uStack_9f = 0;
    cStack_a0 = '\0';
    iStack_a8 = 1;
    iStack_ac = 5;
    uStack_44b = 0;
    uStack_450 = 0;
    iStack_458 = 1;
    iStack_45c = 5;
    uStack_98 = 0xffffffff;
    uStack_a4 = 0;
    TStack_b0 = (Type)0x8;
    uStack_448 = 0xffffffff;
    uStack_454 = 0;
    TStack_460 = (Type)0x8;
    pTVar19 = &TStack_460;
    pTVar21 = &TStack_b0;
    TStack_45d = TStack_ad;
    uStack_453 = uStack_a3;
    TStack_451 = TStack_a1;
code_r0x012d6d8c:
    cVar6 = '\a';
code_r0x012d6d90:
    VisitBinop(param_1,param_2,pTVar19,pTVar21,cVar6,0xffffffff);
    break;
  case 0x11b:
    pNVar20 = param_2 + 0x20;
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x18) +
                       ((ulong)*(uint *)(*(long *)(pNVar26 + 0x10) + 0x14) & 0xffffff) * 0x28 + 0x18
                      );
    if (lVar24 == 0) {
      lVar24 = *(long *)(*(long *)(pNVar26 + 0x10) + 8);
    }
    TStack_b0 = SUB81(lVar24,0);
    TStack_af = SUB81((ulong)lVar24 >> 8,0);
    TStack_ae = SUB81((ulong)lVar24 >> 0x10,0);
    TStack_ad = SUB81((ulong)lVar24 >> 0x18,0);
    iStack_ac = (int)((ulong)lVar24 >> 0x20);
    pNVar26 = pNVar20;
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar26 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar26 + 0x18) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)(pNVar26 + 0x18) + 8);
    }
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_b50,0);
    TStack_45e = SUB21((ushort)uStack_b50 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_b4e;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b54;
      TStack_451 = TStack_b52;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
code_r0x012db2ac:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_b4e;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b54;
      TStack_451 = TStack_b52;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      goto code_r0x012db2ac;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_b58,0);
    TStack_45e = SUB21((ushort)uStack_b58 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_b56;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b5c;
      TStack_451 = TStack_b5a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,1,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x8;
      TStack_45d = TStack_b56;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 0;
      uStack_453 = uStack_b5c;
      TStack_451 = TStack_b5a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,1,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    iVar33 = *(int *)pRVar41;
    TStack_45f = SUB21(uStack_b60,0);
    TStack_45e = SUB21((ushort)uStack_b60 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_b5e;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_b64;
      TStack_451 = TStack_b62;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,2,&TStack_460,0);
code_r0x012db42c:
      iVar33 = *(int *)pRVar41;
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_b5e;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_b64;
      TStack_451 = TStack_b62;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,2,&TStack_460);
      goto code_r0x012db42c;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    TVar3 = TStack_45e;
    TVar32 = TStack_45f;
    TStack_45f = SUB21(uStack_b68,0);
    TStack_45e = SUB21((ushort)uStack_b68 >> 8,0);
    if (iVar33 == 2) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_b66;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_b6c;
      TStack_451 = TStack_b6a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      ConvertInput(param_1,param_2,3,&TStack_460,0);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    else if (iVar33 == 0) {
      TStack_460 = (Type)0x4;
      TStack_45d = TStack_b66;
      iStack_45c = 2;
      iStack_458 = 0;
      uStack_454 = 0;
      uStack_453 = uStack_b6c;
      TStack_451 = TStack_b6a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      EnqueueInput(param_1,param_2,3,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
    }
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,4);
    iVar33 = *(int *)(param_1 + 0x78);
    if (iVar33 == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
code_r0x012db548:
      iVar33 = *(int *)pRVar41;
    }
    else if (iVar33 == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto code_r0x012db548;
    }
    if (iVar33 == 2) {
      if ((CONCAT44(iStack_ac,CONCAT13(TStack_ad,CONCAT12(TStack_ae,CONCAT11(TStack_af,TStack_b0))))
           != 1) && (uStack_5d8 != 1)) {
        dVar42 = (double)Type::Max(&TStack_b0);
        dVar43 = (double)Type::Min((Type *)&uStack_5d8);
        if (dVar43 <= dVar42) break;
      }
      if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
        pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
      }
      pNVar20 = *(Node **)(pNVar20 + 8);
      goto code_r0x012e0120;
    }
    break;
  case 0x11c:
    TStack_b0 = SUB21(uStack_b38,0);
    TStack_af = SUB21((ushort)uStack_b38 >> 8,0);
    TStack_ae = TStack_b36;
    uStack_5d8._0_3_ = CONCAT12(TStack_b3a,uStack_b3c);
    if (*(int *)pRVar41 == 2) {
      TStack_45d = TStack_b36;
      uStack_453 = uStack_b3c;
      TStack_451 = TStack_b3a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      goto code_r0x012db5fc;
    }
    TVar32 = TStack_45f;
    TVar3 = TStack_45e;
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x7;
      TStack_45d = TStack_b36;
      iStack_45c = 5;
      iStack_458 = 1;
      uStack_454 = 6;
      uStack_453 = uStack_b3c;
      TStack_451 = TStack_b3a;
      uStack_450 = 0;
      uStack_44b = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      EnqueueInput(param_1,param_2,0,&TStack_460);
      TVar32 = TStack_45f;
      TVar3 = TStack_45e;
      uVar4 = uStack_453;
      uVar5 = uStack_44b;
    }
code_r0x012db600:
    uStack_44b = uVar5;
    uStack_453 = uVar4;
    TStack_45e = TVar3;
    TStack_45f = TVar32;
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto joined_r0x012db9a4;
    goto code_r0x012dedfc;
  case 0x11d:
    pNVar20 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    uStack_5d8 = *(ulong *)(*(long *)(param_1 + 0x18) +
                            ((ulong)*(uint *)(*(long *)(pNVar20 + 8) + 0x14) & 0xffffff) * 0x28 +
                           0x18);
    if (uStack_5d8 == 0) {
      uStack_5d8 = *(ulong *)(*(long *)(pNVar20 + 8) + 8);
    }
    if ((uStack_5d8 != 0xc4b) &&
       (uVar30 = Type::SlowIs((Type *)&uStack_5d8,0xc4b), (uVar30 & 1) == 0)) {
      TStack_ad = TStack_b6e;
      TStack_45f = SUB21(uStack_b70,0);
      TStack_45e = SUB21((ushort)uStack_b70 >> 8,0);
      uStack_a3 = uStack_b74;
      TStack_a1 = TStack_b72;
      uVar25 = 6;
      TStack_af = TStack_45f;
      TStack_ae = TStack_45e;
      goto code_r0x012d4cec;
    }
    auStack_588[0] = 8;
    uStack_584 = 0x100000005;
    auStack_5a8[0] = 4;
    uStack_57c = 0;
    uStack_578 = 0;
    uStack_570 = 0xffffffff;
    uStack_5a4 = 2;
    uStack_59c = 0;
    uStack_598 = 0;
    uStack_590 = 0xffffffff;
    VisitBinop(param_1,param_2,auStack_588,auStack_5a8,5,0xffffffff);
    if (*(int *)(param_1 + 0x78) == 2) {
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::FindOrderedHashMapEntryForInt32Key
                          (*(SimplifiedOperatorBuilder **)(*(long *)param_4 + 0x178));
      goto code_r0x012d48c0;
    }
    break;
  case 0x11f:
    TStack_b0 = SUB21(uStack_874,0);
    TStack_af = SUB21((ushort)uStack_874 >> 8,0);
    TStack_ae = TStack_872;
    uStack_5d8._0_3_ = CONCAT12(TStack_876,uStack_878);
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x4;
      uVar25 = 2;
      goto code_r0x012db0f0;
    }
    if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x4;
      uVar25 = 2;
      goto code_r0x012d6ec4;
    }
code_r0x012db124:
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 == 1) {
      *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 4;
      break;
    }
    goto code_r0x012df914;
  case 0x121:
code_r0x012d7364:
    TStack_b0 = SUB21(uStack_b88,0);
    TStack_af = SUB21((ushort)uStack_b88 >> 8,0);
    uStack_5d8._0_3_ = CONCAT12(TStack_b8a,uStack_b8c);
    TStack_ae = TStack_b86;
    if (*(int *)pRVar41 == 2) {
      TStack_460 = (Type)0x8;
      uStack_453 = uStack_b8c;
      TStack_451 = TStack_b8a;
code_r0x012db840:
      uStack_44b = 0;
      uStack_450 = 0;
      iStack_458 = 1;
      iStack_45c = 5;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      ConvertInput(param_1,param_2,0,&TStack_460,0);
    }
    else if (*(int *)pRVar41 == 0) {
      TStack_460 = (Type)0x8;
      uStack_453 = uStack_b8c;
      TStack_451 = TStack_b8a;
code_r0x012d8884:
      uStack_44b = 0;
      uStack_450 = 0;
      iStack_458 = 1;
      iStack_45c = 5;
      uStack_454 = 0;
      uStack_448 = 0xffffffff;
      TStack_45f = TStack_b0;
      TStack_45e = TStack_af;
      TStack_45d = TStack_ae;
      EnqueueInput(param_1,param_2,0,&TStack_460);
    }
code_r0x012db848:
    ProcessRemainingInputs(param_1,param_2,1);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (iVar33 != 1) goto joined_r0x012db9a4;
    goto code_r0x012dba34;
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
    VisitInputs(param_1,param_2);
    uVar30 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
    if ((uVar30 & 1) != 0) {
      iVar33 = *(int *)(param_1 + 0x78);
      if (iVar33 == 1) {
        *(undefined1 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 4;
code_r0x012d997c:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)
         (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
             0xffffffff;
        goto code_r0x012d997c;
      }
      if (iVar33 == 2) {
        SimplifiedLowering::DoJSToNumberOrNumericTruncatesToWord32(param_4,param_2,param_1);
      }
      break;
    }
    uVar14 = Truncation::LessGeneral(param_3 & 0xffffffff,4);
    iVar33 = *(int *)(param_1 + 0x78);
    lVar24 = *(long *)(param_1 + 0x18);
    uVar30 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if ((uVar14 & 1) != 0) {
      if (iVar33 == 1) {
        *(undefined1 *)(lVar24 + uVar30 * 0x28 + 1) = 0xc;
code_r0x012dbaa4:
        iVar33 = *(int *)pRVar41;
      }
      else if (iVar33 == 0) {
        *(undefined8 *)(lVar24 + uVar30 * 0x28 + 0x10) = 0xffffffff;
        goto code_r0x012dbaa4;
      }
      if (iVar33 == 2) {
        SimplifiedLowering::DoJSToNumberOrNumericTruncatesToFloat64(param_4,param_2,param_1);
      }
      break;
    }
    if (iVar33 != 1) goto joined_r0x012db9a4;
    goto code_r0x012dba34;
  }
code_r0x012e012c:
  lVar23 = *(long *)(lVar23 + 0x28);
LAB_012e0134:
  if (lVar23 != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x012dd7bc:
  uVar27 = 5;
code_r0x012dd7c0:
  uStack_454 = uVar27;
  TStack_460 = (Type)0xc;
  TStack_b0 = (Type)0xc;
  TStack_45f = SUB21(uStack_63c,0);
  TStack_45e = SUB21((ushort)uStack_63c >> 8,0);
  TStack_45d = TStack_63a;
  iStack_45c = 5;
  iStack_458 = 0;
  uStack_453 = uStack_640;
  TStack_451 = TStack_63e;
  uStack_450 = 0;
  uStack_44b = 0;
  uStack_448 = 0xffffffff;
  TStack_ad = TStack_63a;
  iStack_ac = 5;
  iStack_a8 = 0;
  uStack_a3 = uStack_640;
  TStack_a1 = TStack_63e;
  cStack_a0 = '\0';
  uStack_9f = 0;
  bStack_9e = 0;
  uStack_9d = 0;
  uStack_98 = 0xffffffff;
  TStack_af = TStack_45f;
  TStack_ae = TStack_45e;
  uStack_a4 = uStack_454;
  VisitBinop(param_1,param_2,&TStack_460,&TStack_b0,1,0xffffffff);
  if (*(int *)(param_1 + 0x78) != 2) goto code_r0x012e012c;
  goto code_r0x012df550;
}

