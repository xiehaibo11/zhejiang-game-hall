package org.bouncycastle.crypto.prng;

public class ReversedWindowGenerator implements org.bouncycastle.crypto.prng.RandomGenerator {
    private final org.bouncycastle.crypto.prng.RandomGenerator generator;
    private byte[] window;
    private int windowCount;

    public ReversedWindowGenerator(org.bouncycastle.crypto.prng.RandomGenerator r2, int r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L17
            r0 = 2
            if (r3 < r0) goto Lf
            r1.generator = r2
            byte[] r2 = new byte[r3]
            r1.window = r2
            return
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "windowSize must be at least 2"
            r2.<init>(r3)
            throw r2
        L17:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "generator cannot be null"
            r2.<init>(r3)
            throw r2
    }

    private void doNextBytes(byte[] r7, int r8, int r9) {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            r1 = 0
        L3:
            if (r1 >= r9) goto L29
            int r2 = r6.windowCount     // Catch: java.lang.Throwable -> L2b
            r3 = 1
            if (r2 >= r3) goto L19
            org.bouncycastle.crypto.prng.RandomGenerator r2 = r6.generator     // Catch: java.lang.Throwable -> L2b
            byte[] r4 = r6.window     // Catch: java.lang.Throwable -> L2b
            byte[] r5 = r6.window     // Catch: java.lang.Throwable -> L2b
            int r5 = r5.length     // Catch: java.lang.Throwable -> L2b
            r2.nextBytes(r4, r0, r5)     // Catch: java.lang.Throwable -> L2b
            byte[] r2 = r6.window     // Catch: java.lang.Throwable -> L2b
            int r2 = r2.length     // Catch: java.lang.Throwable -> L2b
            r6.windowCount = r2     // Catch: java.lang.Throwable -> L2b
        L19:
            int r2 = r1 + 1
            int r1 = r1 + r8
            byte[] r4 = r6.window     // Catch: java.lang.Throwable -> L2b
            int r5 = r6.windowCount     // Catch: java.lang.Throwable -> L2b
            int r5 = r5 - r3
            r6.windowCount = r5     // Catch: java.lang.Throwable -> L2b
            r3 = r4[r5]     // Catch: java.lang.Throwable -> L2b
            r7[r1] = r3     // Catch: java.lang.Throwable -> L2b
            r1 = r2
            goto L3
        L29:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L2b
            return
        L2b:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L2b
            throw r7
    }

    @Override
    public void addSeedMaterial(long r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.windowCount = r0     // Catch: java.lang.Throwable -> Lb
            org.bouncycastle.crypto.prng.RandomGenerator r0 = r1.generator     // Catch: java.lang.Throwable -> Lb
            r0.addSeedMaterial(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    @Override
    public void addSeedMaterial(byte[] r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.windowCount = r0     // Catch: java.lang.Throwable -> Lb
            org.bouncycastle.crypto.prng.RandomGenerator r0 = r1.generator     // Catch: java.lang.Throwable -> Lb
            r0.addSeedMaterial(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    @Override
    public void nextBytes(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.doNextBytes(r3, r1, r0)
            return
    }

    @Override
    public void nextBytes(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.doNextBytes(r1, r2, r3)
            return
    }
}
