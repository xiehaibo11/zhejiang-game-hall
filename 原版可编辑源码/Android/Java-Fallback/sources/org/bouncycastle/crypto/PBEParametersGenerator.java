package org.bouncycastle.crypto;

public abstract class PBEParametersGenerator {
    protected int iterationCount;
    protected byte[] password;
    protected byte[] salt;

    protected PBEParametersGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] PKCS12PasswordToBytes(char[] r4) {
            int r0 = r4.length
            r1 = 0
            if (r0 <= 0) goto L22
            int r0 = r4.length
            int r0 = r0 + 1
            int r0 = r0 * 2
            byte[] r0 = new byte[r0]
        Lb:
            int r2 = r4.length
            if (r1 == r2) goto L21
            int r2 = r1 * 2
            char r3 = r4[r1]
            int r3 = r3 >>> 8
            byte r3 = (byte) r3
            r0[r2] = r3
            int r2 = r2 + 1
            char r3 = r4[r1]
            byte r3 = (byte) r3
            r0[r2] = r3
            int r1 = r1 + 1
            goto Lb
        L21:
            return r0
        L22:
            byte[] r4 = new byte[r1]
            return r4
    }

    public static byte[] PKCS5PasswordToBytes(char[] r4) {
            int r0 = r4.length
            byte[] r1 = new byte[r0]
            r2 = 0
        L4:
            if (r2 == r0) goto Le
            char r3 = r4[r2]
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        Le:
            return r1
    }

    public abstract org.bouncycastle.crypto.CipherParameters generateDerivedMacParameters(int r1);

    public abstract org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r1);

    public abstract org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r1, int r2);

    public int getIterationCount() {
            r1 = this;
            int r0 = r1.iterationCount
            return r0
    }

    public byte[] getPassword() {
            r1 = this;
            byte[] r0 = r1.password
            return r0
    }

    public byte[] getSalt() {
            r1 = this;
            byte[] r0 = r1.salt
            return r0
    }

    public void init(byte[] r1, byte[] r2, int r3) {
            r0 = this;
            r0.password = r1
            r0.salt = r2
            r0.iterationCount = r3
            return
    }
}
