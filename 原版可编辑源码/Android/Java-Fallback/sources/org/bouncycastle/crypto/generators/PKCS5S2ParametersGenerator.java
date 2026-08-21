package org.bouncycastle.crypto.generators;

public class PKCS5S2ParametersGenerator extends org.bouncycastle.crypto.PBEParametersGenerator {
    private org.bouncycastle.crypto.Mac hMac;

    public PKCS5S2ParametersGenerator() {
            r2 = this;
            r2.<init>()
            org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
            org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
            r1.<init>()
            r0.<init>(r1)
            r2.hMac = r0
            return
    }

    private void F(byte[] r7, byte[] r8, int r9, byte[] r10, byte[] r11, int r12) {
            r6 = this;
            org.bouncycastle.crypto.Mac r0 = r6.hMac
            int r0 = r0.getMacSize()
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r2.<init>(r7)
            org.bouncycastle.crypto.Mac r7 = r6.hMac
            r7.init(r2)
            r7 = 0
            if (r8 == 0) goto L1b
            org.bouncycastle.crypto.Mac r3 = r6.hMac
            int r4 = r8.length
            r3.update(r8, r7, r4)
        L1b:
            org.bouncycastle.crypto.Mac r8 = r6.hMac
            int r3 = r10.length
            r8.update(r10, r7, r3)
            org.bouncycastle.crypto.Mac r8 = r6.hMac
            r8.doFinal(r1, r7)
            java.lang.System.arraycopy(r1, r7, r11, r12, r0)
            if (r9 == 0) goto L51
            r8 = 1
        L2c:
            if (r8 >= r9) goto L50
            org.bouncycastle.crypto.Mac r10 = r6.hMac
            r10.init(r2)
            org.bouncycastle.crypto.Mac r10 = r6.hMac
            r10.update(r1, r7, r0)
            org.bouncycastle.crypto.Mac r10 = r6.hMac
            r10.doFinal(r1, r7)
            r10 = 0
        L3e:
            if (r10 == r0) goto L4d
            int r3 = r12 + r10
            r4 = r11[r3]
            r5 = r1[r10]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r11[r3] = r4
            int r10 = r10 + 1
            goto L3e
        L4d:
            int r8 = r8 + 1
            goto L2c
        L50:
            return
        L51:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "iteration count must be at least 1."
            r7.<init>(r8)
            throw r7
    }

    private byte[] generateDerivedKey(int r12) {
            r11 = this;
            org.bouncycastle.crypto.Mac r0 = r11.hMac
            int r0 = r0.getMacSize()
            int r12 = r12 + r0
            r1 = 1
            int r12 = r12 - r1
            int r12 = r12 / r0
            r2 = 4
            byte[] r2 = new byte[r2]
            int r3 = r12 * r0
            byte[] r10 = new byte[r3]
        L11:
            if (r1 > r12) goto L29
            r11.intToOctet(r2, r1)
            byte[] r4 = r11.password
            byte[] r5 = r11.salt
            int r6 = r11.iterationCount
            int r3 = r1 + (-1)
            int r9 = r3 * r0
            r3 = r11
            r7 = r2
            r8 = r10
            r3.F(r4, r5, r6, r7, r8, r9)
            int r1 = r1 + 1
            goto L11
        L29:
            return r10
    }

    private void intToOctet(byte[] r3, int r4) {
            r2 = this;
            int r0 = r4 >>> 24
            byte r0 = (byte) r0
            r1 = 0
            r3[r1] = r0
            int r0 = r4 >>> 16
            byte r0 = (byte) r0
            r1 = 1
            r3[r1] = r0
            int r0 = r4 >>> 8
            byte r0 = (byte) r0
            r1 = 2
            r3[r1] = r0
            byte r4 = (byte) r4
            r0 = 3
            r3[r0] = r4
            return
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedMacParameters(int r1) {
            r0 = this;
            org.bouncycastle.crypto.CipherParameters r1 = r0.generateDerivedParameters(r1)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r4) {
            r3 = this;
            int r4 = r4 / 8
            byte[] r0 = r3.generateDerivedKey(r4)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r2 = 0
            r1.<init>(r0, r2, r4)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r5, int r6) {
            r4 = this;
            int r5 = r5 / 8
            int r6 = r6 / 8
            int r0 = r5 + r6
            byte[] r0 = r4.generateDerivedKey(r0)
            org.bouncycastle.crypto.params.ParametersWithIV r1 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r3 = 0
            r2.<init>(r0, r3, r5)
            r1.<init>(r2, r0, r5, r6)
            return r1
    }
}
