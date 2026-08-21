package org.bouncycastle.crypto.tls;

import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.digests.MD5Digest;
import org.bouncycastle.crypto.digests.SHA1Digest;

public class CombinedHash implements Digest {
    private Digest md5 = new MD5Digest();
    private Digest sha1 = new SHA1Digest();

    @Override
    public int doFinal(byte[] bArr, int i) {
        return this.md5.doFinal(bArr, i) + this.sha1.doFinal(bArr, i + 16);
    }

    @Override
    public String getAlgorithmName() {
        return this.md5.getAlgorithmName() + " and " + this.sha1.getAlgorithmName() + " for TLS 1.0";
    }

    @Override
    public int getDigestSize() {
        return 36;
    }

    @Override
    public void reset() {
        this.md5.reset();
        this.sha1.reset();
    }

    @Override
    public void update(byte b) {
        this.md5.update(b);
        this.sha1.update(b);
    }

    @Override
    public void update(byte[] bArr, int i, int i2) {
        this.md5.update(bArr, i, i2);
        this.sha1.update(bArr, i, i2);
    }
}
