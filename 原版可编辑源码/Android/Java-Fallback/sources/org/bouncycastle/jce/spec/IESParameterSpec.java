package org.bouncycastle.jce.spec;

public class IESParameterSpec implements java.security.spec.AlgorithmParameterSpec {
    private byte[] derivation;
    private byte[] encoding;
    private int macKeySize;

    public IESParameterSpec(byte[] r4, byte[] r5, int r6) {
            r3 = this;
            r3.<init>()
            int r0 = r4.length
            byte[] r0 = new byte[r0]
            r3.derivation = r0
            int r1 = r4.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            int r4 = r5.length
            byte[] r4 = new byte[r4]
            r3.encoding = r4
            int r0 = r5.length
            java.lang.System.arraycopy(r5, r2, r4, r2, r0)
            r3.macKeySize = r6
            return
    }

    public byte[] getDerivationV() {
            r1 = this;
            byte[] r0 = r1.derivation
            return r0
    }

    public byte[] getEncodingV() {
            r1 = this;
            byte[] r0 = r1.encoding
            return r0
    }

    public int getMacKeySize() {
            r1 = this;
            int r0 = r1.macKeySize
            return r0
    }
}
