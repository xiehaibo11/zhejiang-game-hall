package org.bouncycastle.crypto.prng;

public class DigestRandomGenerator implements org.bouncycastle.crypto.prng.RandomGenerator {
    private long counter;
    private org.bouncycastle.crypto.Digest digest;
    private byte[] state;

    public DigestRandomGenerator(org.bouncycastle.crypto.Digest r3) {
            r2 = this;
            r2.<init>()
            r2.digest = r3
            int r3 = r3.getDigestSize()
            byte[] r3 = new byte[r3]
            r2.state = r3
            r0 = 1
            r2.counter = r0
            return
    }

    private void digestDoFinal(byte[] r3) {
            r2 = this;
            org.bouncycastle.crypto.Digest r0 = r2.digest
            r1 = 0
            r0.doFinal(r3, r1)
            return
    }

    private void digestUpdate(long r5) {
            r4 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 == r1) goto L10
            org.bouncycastle.crypto.Digest r2 = r4.digest
            int r3 = (int) r5
            byte r3 = (byte) r3
            r2.update(r3)
            long r5 = r5 >>> r1
            int r0 = r0 + 1
            goto L1
        L10:
            return
    }

    private void digestUpdate(byte[] r4) {
            r3 = this;
            org.bouncycastle.crypto.Digest r0 = r3.digest
            int r1 = r4.length
            r2 = 0
            r0.update(r4, r2, r1)
            return
    }

    @Override
    public void addSeedMaterial(long r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
        L2:
            r1 = 8
            if (r0 == r1) goto L10
            int r2 = (int) r5
            byte r2 = (byte) r2
            long r2 = (long) r2
            r4.digestUpdate(r2)     // Catch: java.lang.Throwable -> L12
            long r5 = r5 >>> r1
            int r0 = r0 + 1
            goto L2
        L10:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L12
            throw r5
    }

    @Override
    public void addSeedMaterial(byte[] r1) {
            r0 = this;
            monitor-enter(r0)
            r0.digestUpdate(r1)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            throw r1
    }

    @Override
    public void nextBytes(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.nextBytes(r3, r1, r0)
            return
    }

    @Override
    public void nextBytes(byte[] r7, int r8, int r9) {
            r6 = this;
            monitor-enter(r6)
            byte[] r0 = r6.state     // Catch: java.lang.Throwable -> L40
            r6.digestDoFinal(r0)     // Catch: java.lang.Throwable -> L40
            int r9 = r9 + r8
            r0 = 0
            r1 = 0
        L9:
            r2 = 1
            if (r8 == r9) goto L31
            byte[] r4 = r6.state     // Catch: java.lang.Throwable -> L40
            int r4 = r4.length     // Catch: java.lang.Throwable -> L40
            if (r1 != r4) goto L25
            long r4 = r6.counter     // Catch: java.lang.Throwable -> L40
            long r2 = r2 + r4
            r6.counter = r2     // Catch: java.lang.Throwable -> L40
            r6.digestUpdate(r4)     // Catch: java.lang.Throwable -> L40
            byte[] r1 = r6.state     // Catch: java.lang.Throwable -> L40
            r6.digestUpdate(r1)     // Catch: java.lang.Throwable -> L40
            byte[] r1 = r6.state     // Catch: java.lang.Throwable -> L40
            r6.digestDoFinal(r1)     // Catch: java.lang.Throwable -> L40
            r1 = 0
        L25:
            byte[] r2 = r6.state     // Catch: java.lang.Throwable -> L40
            int r3 = r1 + 1
            r1 = r2[r1]     // Catch: java.lang.Throwable -> L40
            r7[r8] = r1     // Catch: java.lang.Throwable -> L40
            int r8 = r8 + 1
            r1 = r3
            goto L9
        L31:
            long r7 = r6.counter     // Catch: java.lang.Throwable -> L40
            long r2 = r2 + r7
            r6.counter = r2     // Catch: java.lang.Throwable -> L40
            r6.digestUpdate(r7)     // Catch: java.lang.Throwable -> L40
            byte[] r7 = r6.state     // Catch: java.lang.Throwable -> L40
            r6.digestUpdate(r7)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L40
            return
        L40:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L40
            throw r7
    }
}
