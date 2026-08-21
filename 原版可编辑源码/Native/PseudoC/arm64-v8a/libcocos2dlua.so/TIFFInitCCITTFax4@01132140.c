
undefined8 TIFFInitCCITTFax4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_01131fb4();
  if (iVar1 != 0) {
    iVar1 = _TIFFMergeFields(param_1,&DAT_0172cf30,1);
    if (iVar1 != 0) {
      *(code **)(param_1 + 0x300) = FUN_0113301c;
      *(code **)(param_1 + 0x2f8) = FUN_011321ec;
      *(code **)(param_1 + 0x310) = FUN_0113301c;
      *(code **)(param_1 + 0x308) = FUN_011321ec;
      *(code **)(param_1 + 800) = FUN_0113301c;
      *(code **)(param_1 + 0x318) = FUN_011321ec;
      *(code **)(param_1 + 0x2f0) = FUN_011330c0;
      uVar2 = TIFFSetField(param_1,0x10000,1);
      return uVar2;
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFInitCCITTFax4",
                 "Merging CCITT Fax 4 codec-specific tags failed");
  }
                    /* try { // try from 011321e0 to 01232583 has its CatchHandler @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 011321e0 with catch @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01132594 with catch @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01132a50 with catch @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01132a74 with catch @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01132a8c with catch @ 011321e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01132adc with catch @ 011321e0
                        */
  return 0;
}

