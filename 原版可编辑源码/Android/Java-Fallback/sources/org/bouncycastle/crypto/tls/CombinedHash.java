package org.bouncycastle.crypto.tls;

public class CombinedHash implements org.bouncycastle.crypto.Digest {
    private org.bouncycastle.crypto.Digest md5;
    private org.bouncycastle.crypto.Digest sha1;

    public CombinedHash() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.digests.MD5Digest r0 = new org.bouncycastle.crypto.digests.MD5Digest
            r0.<init>()
            r1.md5 = r0
            org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
            r0.<init>()
            r1.sha1 = r0
            return
    }

    @Override
    public int doFinal(byte[] r3, int r4) {
            r2 = this;
            org.bouncycastle.crypto.Digest r0 = r2.md5
            int r0 = r0.doFinal(r3, r4)
            org.bouncycastle.crypto.Digest r1 = r2.sha1
            int r4 = r4 + 16
            int r3 = r1.doFinal(r3, r4)
            int r0 = r0 + r3
            return r0
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.Digest r1 = r2.md5
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = " and "
            r0.append(r1)
            org.bouncycastle.crypto.Digest r1 = r2.sha1
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = " for TLS 1.0"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 36
            return r0
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.md5
            r0.reset()
            org.bouncycastle.crypto.Digest r0 = r1.sha1
            r0.reset()
            return
    }

    @Override
    public void update(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.md5
            r0.update(r2)
            org.bouncycastle.crypto.Digest r0 = r1.sha1
            r0.update(r2)
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.md5
            r0.update(r2, r3, r4)
            org.bouncycastle.crypto.Digest r0 = r1.sha1
            r0.update(r2, r3, r4)
            return
    }
}
