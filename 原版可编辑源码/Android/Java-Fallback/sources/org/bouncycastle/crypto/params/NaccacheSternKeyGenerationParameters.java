package org.bouncycastle.crypto.params;

public class NaccacheSternKeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private int certainty;
    private int cntSmallPrimes;
    private boolean debug;

    public NaccacheSternKeyGenerationParameters(java.security.SecureRandom r7, int r8, int r9, int r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public NaccacheSternKeyGenerationParameters(java.security.SecureRandom r1, int r2, int r3, int r4, boolean r5) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.debug = r1
            r0.certainty = r3
            int r1 = r4 % 2
            r2 = 1
            if (r1 == r2) goto L1e
            r1 = 30
            if (r4 < r1) goto L16
            r0.cntSmallPrimes = r4
            r0.debug = r5
            return
        L16:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "cntSmallPrimes must be >= 30 for security reasons"
            r1.<init>(r2)
            throw r1
        L1e:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "cntSmallPrimes must be a multiple of 2"
            r1.<init>(r2)
            throw r1
    }

    public int getCertainty() {
            r1 = this;
            int r0 = r1.certainty
            return r0
    }

    public int getCntSmallPrimes() {
            r1 = this;
            int r0 = r1.cntSmallPrimes
            return r0
    }

    public boolean isDebug() {
            r1 = this;
            boolean r0 = r1.debug
            return r0
    }
}
