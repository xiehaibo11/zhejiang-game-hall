package org.bouncycastle.crypto.macs;

public class OldHMac implements org.bouncycastle.crypto.Mac {
    private static final int BLOCK_LENGTH = 64;
    private static final byte IPAD = 54;
    private static final byte OPAD = 92;
    private org.bouncycastle.crypto.Digest digest;
    private int digestSize;
    private byte[] inputPad;
    private byte[] outputPad;

    public OldHMac(org.bouncycastle.crypto.Digest r3) {
            r2 = this;
            r2.<init>()
            r0 = 64
            byte[] r1 = new byte[r0]
            r2.inputPad = r1
            byte[] r0 = new byte[r0]
            r2.outputPad = r0
            r2.digest = r3
            int r3 = r3.getDigestSize()
            r2.digestSize = r3
            return
    }

    @Override
    public int doFinal(byte[] r7, int r8) {
            r6 = this;
            int r0 = r6.digestSize
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r6.digest
            r3 = 0
            r2.doFinal(r1, r3)
            org.bouncycastle.crypto.Digest r2 = r6.digest
            byte[] r4 = r6.outputPad
            int r5 = r4.length
            r2.update(r4, r3, r5)
            org.bouncycastle.crypto.Digest r2 = r6.digest
            r2.update(r1, r3, r0)
            org.bouncycastle.crypto.Digest r0 = r6.digest
            int r7 = r0.doFinal(r7, r8)
            r6.reset()
            return r7
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.Digest r1 = r2.digest
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/HMAC"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int getMacSize() {
            r1 = this;
            int r0 = r1.digestSize
            return r0
    }

    public org.bouncycastle.crypto.Digest getUnderlyingDigest() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r4) {
            r3 = this;
            org.bouncycastle.crypto.Digest r0 = r3.digest
            r0.reset()
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r4 = r4.getKey()
            int r0 = r4.length
            r1 = 0
            r2 = 64
            if (r0 <= r2) goto L2a
            org.bouncycastle.crypto.Digest r0 = r3.digest
            int r2 = r4.length
            r0.update(r4, r1, r2)
            org.bouncycastle.crypto.Digest r4 = r3.digest
            byte[] r0 = r3.inputPad
            r4.doFinal(r0, r1)
            int r4 = r3.digestSize
        L20:
            byte[] r0 = r3.inputPad
            int r2 = r0.length
            if (r4 >= r2) goto L3b
            r0[r4] = r1
            int r4 = r4 + 1
            goto L20
        L2a:
            byte[] r0 = r3.inputPad
            int r2 = r4.length
            java.lang.System.arraycopy(r4, r1, r0, r1, r2)
            int r4 = r4.length
        L31:
            byte[] r0 = r3.inputPad
            int r2 = r0.length
            if (r4 >= r2) goto L3b
            r0[r4] = r1
            int r4 = r4 + 1
            goto L31
        L3b:
            byte[] r4 = r3.inputPad
            int r0 = r4.length
            byte[] r0 = new byte[r0]
            r3.outputPad = r0
            int r2 = r4.length
            java.lang.System.arraycopy(r4, r1, r0, r1, r2)
            r4 = 0
        L47:
            byte[] r0 = r3.inputPad
            int r2 = r0.length
            if (r4 >= r2) goto L56
            r2 = r0[r4]
            r2 = r2 ^ 54
            byte r2 = (byte) r2
            r0[r4] = r2
            int r4 = r4 + 1
            goto L47
        L56:
            r4 = 0
        L57:
            byte[] r0 = r3.outputPad
            int r2 = r0.length
            if (r4 >= r2) goto L66
            r2 = r0[r4]
            r2 = r2 ^ 92
            byte r2 = (byte) r2
            r0[r4] = r2
            int r4 = r4 + 1
            goto L57
        L66:
            org.bouncycastle.crypto.Digest r4 = r3.digest
            byte[] r0 = r3.inputPad
            int r2 = r0.length
            r4.update(r0, r1, r2)
            return
    }

    @Override
    public void reset() {
            r4 = this;
            org.bouncycastle.crypto.Digest r0 = r4.digest
            r0.reset()
            org.bouncycastle.crypto.Digest r0 = r4.digest
            byte[] r1 = r4.inputPad
            int r2 = r1.length
            r3 = 0
            r0.update(r1, r3, r2)
            return
    }

    @Override
    public void update(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2)
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            return
    }
}
