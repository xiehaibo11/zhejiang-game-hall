package org.bouncycastle.math.ec;

class WNafMultiplier implements org.bouncycastle.math.ec.ECMultiplier {
    WNafMultiplier() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.math.ec.ECPoint multiply(org.bouncycastle.math.ec.ECPoint r10, java.math.BigInteger r11, org.bouncycastle.math.ec.PreCompInfo r12) {
            r9 = this;
            if (r12 == 0) goto L9
            boolean r0 = r12 instanceof org.bouncycastle.math.ec.WNafPreCompInfo
            if (r0 == 0) goto L9
            org.bouncycastle.math.ec.WNafPreCompInfo r12 = (org.bouncycastle.math.ec.WNafPreCompInfo) r12
            goto Le
        L9:
            org.bouncycastle.math.ec.WNafPreCompInfo r12 = new org.bouncycastle.math.ec.WNafPreCompInfo
            r12.<init>()
        Le:
            int r0 = r11.bitLength()
            r1 = 13
            r2 = 8
            r3 = 4
            r4 = 2
            r5 = 1
            if (r0 >= r1) goto L1e
            r0 = 2
            r2 = 1
            goto L4f
        L1e:
            r1 = 41
            if (r0 >= r1) goto L26
            r2 = 3
            r0 = 3
            r2 = 2
            goto L4f
        L26:
            r1 = 121(0x79, float:1.7E-43)
            if (r0 >= r1) goto L2d
            r0 = 4
            r2 = 4
            goto L4f
        L2d:
            r1 = 337(0x151, float:4.72E-43)
            if (r0 >= r1) goto L33
            r0 = 5
            goto L4f
        L33:
            r1 = 897(0x381, float:1.257E-42)
            if (r0 >= r1) goto L3e
            r2 = 6
            r0 = 16
            r0 = 6
            r2 = 16
            goto L4f
        L3e:
            r1 = 2305(0x901, float:3.23E-42)
            if (r0 >= r1) goto L49
            r2 = 7
            r0 = 32
            r0 = 7
            r2 = 32
            goto L4f
        L49:
            r0 = 127(0x7f, float:1.78E-43)
            r0 = 8
            r2 = 127(0x7f, float:1.78E-43)
        L4f:
            org.bouncycastle.math.ec.ECPoint[] r1 = r12.getPreComp()
            org.bouncycastle.math.ec.ECPoint r3 = r12.getTwiceP()
            r6 = 0
            if (r1 != 0) goto L60
            org.bouncycastle.math.ec.ECPoint[] r1 = new org.bouncycastle.math.ec.ECPoint[r5]
            r1[r6] = r10
            r7 = 1
            goto L61
        L60:
            int r7 = r1.length
        L61:
            if (r3 != 0) goto L67
            org.bouncycastle.math.ec.ECPoint r3 = r10.twice()
        L67:
            if (r7 >= r2) goto L7e
            org.bouncycastle.math.ec.ECPoint[] r8 = new org.bouncycastle.math.ec.ECPoint[r2]
            java.lang.System.arraycopy(r1, r6, r8, r6, r7)
        L6e:
            if (r7 >= r2) goto L7d
            int r1 = r7 + (-1)
            r1 = r8[r1]
            org.bouncycastle.math.ec.ECPoint r1 = r3.add(r1)
            r8[r7] = r1
            int r7 = r7 + 1
            goto L6e
        L7d:
            r1 = r8
        L7e:
            byte[] r11 = r9.windowNaf(r0, r11)
            int r0 = r11.length
            org.bouncycastle.math.ec.ECCurve r2 = r10.getCurve()
            org.bouncycastle.math.ec.ECPoint r2 = r2.getInfinity()
            int r0 = r0 - r5
        L8c:
            if (r0 < 0) goto Lb3
            org.bouncycastle.math.ec.ECPoint r2 = r2.twice()
            r6 = r11[r0]
            if (r6 == 0) goto Lb0
            r6 = r11[r0]
            if (r6 <= 0) goto La5
            r6 = r11[r0]
            int r6 = r6 - r5
            int r6 = r6 / r4
            r6 = r1[r6]
            org.bouncycastle.math.ec.ECPoint r2 = r2.add(r6)
            goto Lb0
        La5:
            r6 = r11[r0]
            int r6 = -r6
            int r6 = r6 - r5
            int r6 = r6 / r4
            r6 = r1[r6]
            org.bouncycastle.math.ec.ECPoint r2 = r2.subtract(r6)
        Lb0:
            int r0 = r0 + (-1)
            goto L8c
        Lb3:
            r12.setPreComp(r1)
            r12.setTwiceP(r3)
            r10.setPreCompInfo(r12)
            return r2
    }

    public byte[] windowNaf(byte r10, java.math.BigInteger r11) {
            r9 = this;
            int r0 = r11.bitLength()
            r1 = 1
            int r0 = r0 + r1
            byte[] r0 = new byte[r0]
            int r2 = r1 << r10
            short r2 = (short) r2
            long r3 = (long) r2
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            r4 = 0
            r5 = 0
            r6 = 0
        L13:
            int r7 = r11.signum()
            if (r7 <= 0) goto L4d
            boolean r7 = r11.testBit(r4)
            if (r7 == 0) goto L44
            java.math.BigInteger r5 = r11.mod(r3)
            int r7 = r10 + (-1)
            boolean r7 = r5.testBit(r7)
            int r5 = r5.intValue()
            if (r7 == 0) goto L34
            int r5 = r5 - r2
            byte r5 = (byte) r5
            r0[r6] = r5
            goto L37
        L34:
            byte r5 = (byte) r5
            r0[r6] = r5
        L37:
            r5 = r0[r6]
            long r7 = (long) r5
            java.math.BigInteger r5 = java.math.BigInteger.valueOf(r7)
            java.math.BigInteger r11 = r11.subtract(r5)
            r5 = r6
            goto L46
        L44:
            r0[r6] = r4
        L46:
            java.math.BigInteger r11 = r11.shiftRight(r1)
            int r6 = r6 + 1
            goto L13
        L4d:
            int r5 = r5 + r1
            byte[] r10 = new byte[r5]
            java.lang.System.arraycopy(r0, r4, r10, r4, r5)
            return r10
    }
}
