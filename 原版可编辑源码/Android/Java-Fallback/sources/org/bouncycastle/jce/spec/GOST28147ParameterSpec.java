package org.bouncycastle.jce.spec;

public class GOST28147ParameterSpec implements java.security.spec.AlgorithmParameterSpec {
    private byte[] iv;
    private byte[] sBox;

    public GOST28147ParameterSpec(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.iv = r0
            r1.sBox = r0
            byte[] r2 = org.bouncycastle.crypto.engines.GOST28147Engine.getSBox(r2)
            r1.sBox = r2
            return
    }

    public GOST28147ParameterSpec(java.lang.String r3, byte[] r4) {
            r2 = this;
            r2.<init>(r3)
            int r3 = r4.length
            byte[] r3 = new byte[r3]
            r2.iv = r3
            int r0 = r4.length
            r1 = 0
            java.lang.System.arraycopy(r4, r1, r3, r1, r0)
            return
    }

    public GOST28147ParameterSpec(byte[] r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.iv = r0
            r3.sBox = r0
            int r0 = r4.length
            byte[] r0 = new byte[r0]
            r3.sBox = r0
            int r1 = r4.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            return
    }

    public GOST28147ParameterSpec(byte[] r3, byte[] r4) {
            r2 = this;
            r2.<init>(r3)
            int r3 = r4.length
            byte[] r3 = new byte[r3]
            r2.iv = r3
            int r0 = r4.length
            r1 = 0
            java.lang.System.arraycopy(r4, r1, r3, r1, r0)
            return
    }

    public byte[] getIV() {
            r4 = this;
            byte[] r0 = r4.iv
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r1 = r0.length
            byte[] r2 = new byte[r1]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r1)
            return r2
    }

    public byte[] getSbox() {
            r1 = this;
            byte[] r0 = r1.sBox
            return r0
    }
}
