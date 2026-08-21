package org.bouncycastle.crypto.engines;

public class VMPCKSA3Engine extends org.bouncycastle.crypto.engines.VMPCEngine {
    public VMPCKSA3Engine() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "VMPC-KSA3"
            return r0
    }

    @Override
    protected void initKey(byte[] r9, byte[] r10) {
            r8 = this;
            r0 = 0
            r8.s = r0
            r1 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r1]
            r8.P = r2
            r2 = 0
        La:
            if (r2 >= r1) goto L14
            byte[] r3 = r8.P
            byte r4 = (byte) r2
            r3[r2] = r4
            int r2 = r2 + 1
            goto La
        L14:
            r1 = 0
        L15:
            r2 = 768(0x300, float:1.076E-42)
            if (r1 >= r2) goto L4b
            byte[] r2 = r8.P
            byte r3 = r8.s
            byte[] r4 = r8.P
            r5 = r1 & 255(0xff, float:3.57E-43)
            r4 = r4[r5]
            int r3 = r3 + r4
            int r4 = r9.length
            int r4 = r1 % r4
            r4 = r9[r4]
            int r3 = r3 + r4
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2 = r2[r3]
            r8.s = r2
            byte[] r2 = r8.P
            r2 = r2[r5]
            byte[] r3 = r8.P
            byte[] r4 = r8.P
            byte r6 = r8.s
            r6 = r6 & 255(0xff, float:3.57E-43)
            r4 = r4[r6]
            r3[r5] = r4
            byte[] r3 = r8.P
            byte r4 = r8.s
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3[r4] = r2
            int r1 = r1 + 1
            goto L15
        L4b:
            r1 = 0
        L4c:
            if (r1 >= r2) goto L80
            byte[] r3 = r8.P
            byte r4 = r8.s
            byte[] r5 = r8.P
            r6 = r1 & 255(0xff, float:3.57E-43)
            r5 = r5[r6]
            int r4 = r4 + r5
            int r5 = r10.length
            int r5 = r1 % r5
            r5 = r10[r5]
            int r4 = r4 + r5
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3 = r3[r4]
            r8.s = r3
            byte[] r3 = r8.P
            r3 = r3[r6]
            byte[] r4 = r8.P
            byte[] r5 = r8.P
            byte r7 = r8.s
            r7 = r7 & 255(0xff, float:3.57E-43)
            r5 = r5[r7]
            r4[r6] = r5
            byte[] r4 = r8.P
            byte r5 = r8.s
            r5 = r5 & 255(0xff, float:3.57E-43)
            r4[r5] = r3
            int r1 = r1 + 1
            goto L4c
        L80:
            r10 = 0
        L81:
            if (r10 >= r2) goto Lb5
            byte[] r1 = r8.P
            byte r3 = r8.s
            byte[] r4 = r8.P
            r5 = r10 & 255(0xff, float:3.57E-43)
            r4 = r4[r5]
            int r3 = r3 + r4
            int r4 = r9.length
            int r4 = r10 % r4
            r4 = r9[r4]
            int r3 = r3 + r4
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1 = r1[r3]
            r8.s = r1
            byte[] r1 = r8.P
            r1 = r1[r5]
            byte[] r3 = r8.P
            byte[] r4 = r8.P
            byte r6 = r8.s
            r6 = r6 & 255(0xff, float:3.57E-43)
            r4 = r4[r6]
            r3[r5] = r4
            byte[] r3 = r8.P
            byte r4 = r8.s
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3[r4] = r1
            int r10 = r10 + 1
            goto L81
        Lb5:
            r8.n = r0
            return
    }
}
