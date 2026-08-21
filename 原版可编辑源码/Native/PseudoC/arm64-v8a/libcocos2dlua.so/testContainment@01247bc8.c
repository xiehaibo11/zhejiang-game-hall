
/* btConvexPolyhedron::testContainment() const */

undefined8 btConvexPolyhedron::testContainment(void)

{
  bool bVar1;
  long in_x0;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float in_s0;
  float in_s1;
  float fVar5;
  float in_s2;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = 0;
  do {
    switch(iVar2) {
    case 0:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x78) + *(float *)(in_x0 + 0x68);
      goto LAB_01247c68;
    case 1:
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x78) + *(float *)(in_x0 + 0x68);
      in_s1 = *(float *)(in_x0 + 0x7c) + *(float *)(in_x0 + 0x6c);
      break;
    case 2:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x78) + *(float *)(in_x0 + 0x68);
      goto LAB_01247cac;
    case 3:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x78) + *(float *)(in_x0 + 0x68);
      goto LAB_01247cd4;
    case 4:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x68) - *(float *)(in_x0 + 0x78);
LAB_01247c68:
      in_s1 = fVar5 + fVar7;
      in_s2 = fVar6 + fVar8;
switchD_01247bec_default:
      goto joined_r0x01247ce0;
    case 5:
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x68) - *(float *)(in_x0 + 0x78);
      in_s1 = *(float *)(in_x0 + 0x7c) + *(float *)(in_x0 + 0x6c);
      break;
    case 6:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x68) - *(float *)(in_x0 + 0x78);
LAB_01247cac:
      in_s1 = fVar7 - fVar5;
      in_s2 = fVar6 + fVar8;
      goto joined_r0x01247ce0;
    case 7:
      fVar5 = *(float *)(in_x0 + 0x7c);
      fVar7 = *(float *)(in_x0 + 0x6c);
      fVar6 = *(float *)(in_x0 + 0x80);
      fVar8 = *(float *)(in_x0 + 0x70);
      in_s0 = *(float *)(in_x0 + 0x68) - *(float *)(in_x0 + 0x78);
LAB_01247cd4:
      in_s1 = fVar7 - fVar5;
      break;
    default:
      goto switchD_01247bec_default;
    }
    in_s2 = fVar8 - fVar6;
joined_r0x01247ce0:
    if (0 < *(int *)(in_x0 + 0x2c)) {
      lVar3 = 0;
      pfVar4 = (float *)(*(long *)(in_x0 + 0x38) + 0x2c);
      do {
        if (0.0 < *pfVar4 + in_s0 * pfVar4[-3] + in_s1 * pfVar4[-2] + in_s2 * pfVar4[-1]) {
          return 0;
        }
        lVar3 = lVar3 + 1;
        pfVar4 = pfVar4 + 0xc;
      } while (lVar3 < *(int *)(in_x0 + 0x2c));
    }
    bVar1 = 6 < iVar2;
    iVar2 = iVar2 + 1;
    if (bVar1) {
      return 1;
    }
  } while( true );
}

