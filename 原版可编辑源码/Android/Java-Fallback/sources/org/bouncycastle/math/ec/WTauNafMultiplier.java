package org.bouncycastle.math.ec;

class WTauNafMultiplier implements org.bouncycastle.math.ec.ECMultiplier {
    WTauNafMultiplier() {
            r0 = this;
            r0.<init>()
            return
    }

    private static org.bouncycastle.math.ec.ECPoint.F2m multiplyFromWTnaf(org.bouncycastle.math.ec.ECPoint.F2m r2, byte[] r3, org.bouncycastle.math.ec.PreCompInfo r4) {
            org.bouncycastle.math.ec.ECCurve r0 = r2.getCurve()
            org.bouncycastle.math.ec.ECCurve$F2m r0 = (org.bouncycastle.math.ec.ECCurve.F2m) r0
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getA()
            java.math.BigInteger r0 = r0.toBigInteger()
            byte r0 = r0.byteValue()
            if (r4 == 0) goto L20
            boolean r1 = r4 instanceof org.bouncycastle.math.ec.WTauNafPreCompInfo
            if (r1 != 0) goto L19
            goto L20
        L19:
            org.bouncycastle.math.ec.WTauNafPreCompInfo r4 = (org.bouncycastle.math.ec.WTauNafPreCompInfo) r4
            org.bouncycastle.math.ec.ECPoint$F2m[] r4 = r4.getPreComp()
            goto L2c
        L20:
            org.bouncycastle.math.ec.ECPoint$F2m[] r4 = org.bouncycastle.math.ec.Tnaf.getPreComp(r2, r0)
            org.bouncycastle.math.ec.WTauNafPreCompInfo r0 = new org.bouncycastle.math.ec.WTauNafPreCompInfo
            r0.<init>(r4)
            r2.setPreCompInfo(r0)
        L2c:
            org.bouncycastle.math.ec.ECCurve r2 = r2.getCurve()
            org.bouncycastle.math.ec.ECPoint r2 = r2.getInfinity()
            org.bouncycastle.math.ec.ECPoint$F2m r2 = (org.bouncycastle.math.ec.ECPoint.F2m) r2
            int r0 = r3.length
            int r0 = r0 + (-1)
        L39:
            if (r0 < 0) goto L5c
            org.bouncycastle.math.ec.ECPoint$F2m r2 = org.bouncycastle.math.ec.Tnaf.tau(r2)
            r1 = r3[r0]
            if (r1 == 0) goto L59
            r1 = r3[r0]
            if (r1 <= 0) goto L50
            r1 = r3[r0]
            r1 = r4[r1]
            org.bouncycastle.math.ec.ECPoint$F2m r2 = r2.addSimple(r1)
            goto L59
        L50:
            r1 = r3[r0]
            int r1 = -r1
            r1 = r4[r1]
            org.bouncycastle.math.ec.ECPoint$F2m r2 = r2.subtractSimple(r1)
        L59:
            int r0 = r0 + (-1)
            goto L39
        L5c:
            return r2
    }

    private org.bouncycastle.math.ec.ECPoint.F2m multiplyWTnaf(org.bouncycastle.math.ec.ECPoint.F2m r7, org.bouncycastle.math.ec.ZTauElement r8, org.bouncycastle.math.ec.PreCompInfo r9, byte r10, byte r11) {
            r6 = this;
            if (r10 != 0) goto L5
            org.bouncycastle.math.ec.ZTauElement[] r10 = org.bouncycastle.math.ec.Tnaf.alpha0
            goto L7
        L5:
            org.bouncycastle.math.ec.ZTauElement[] r10 = org.bouncycastle.math.ec.Tnaf.alpha1
        L7:
            r5 = r10
            r10 = 4
            java.math.BigInteger r4 = org.bouncycastle.math.ec.Tnaf.getTw(r11, r10)
            r2 = 4
            r0 = 16
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r0)
            r0 = r11
            r1 = r8
            byte[] r8 = org.bouncycastle.math.ec.Tnaf.tauAdicWNaf(r0, r1, r2, r3, r4, r5)
            org.bouncycastle.math.ec.ECPoint$F2m r7 = multiplyFromWTnaf(r7, r8, r9)
            return r7
    }

    @Override
    public org.bouncycastle.math.ec.ECPoint multiply(org.bouncycastle.math.ec.ECPoint r11, java.math.BigInteger r12, org.bouncycastle.math.ec.PreCompInfo r13) {
            r10 = this;
            boolean r0 = r11 instanceof org.bouncycastle.math.ec.ECPoint.F2m
            if (r0 == 0) goto L36
            r2 = r11
            org.bouncycastle.math.ec.ECPoint$F2m r2 = (org.bouncycastle.math.ec.ECPoint.F2m) r2
            org.bouncycastle.math.ec.ECCurve r11 = r2.getCurve()
            org.bouncycastle.math.ec.ECCurve$F2m r11 = (org.bouncycastle.math.ec.ECCurve.F2m) r11
            int r4 = r11.getM()
            org.bouncycastle.math.ec.ECFieldElement r0 = r11.getA()
            java.math.BigInteger r0 = r0.toBigInteger()
            byte r0 = r0.byteValue()
            byte r9 = r11.getMu()
            java.math.BigInteger[] r6 = r11.getSi()
            r8 = 10
            r3 = r12
            r5 = r0
            r7 = r9
            org.bouncycastle.math.ec.ZTauElement r3 = org.bouncycastle.math.ec.Tnaf.partModReduction(r3, r4, r5, r6, r7, r8)
            r1 = r10
            r4 = r13
            r6 = r9
            org.bouncycastle.math.ec.ECPoint$F2m r11 = r1.multiplyWTnaf(r2, r3, r4, r5, r6)
            return r11
        L36:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r12 = "Only ECPoint.F2m can be used in WTauNafMultiplier"
            r11.<init>(r12)
            throw r11
    }
}
