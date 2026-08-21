package org.bouncycastle.crypto.prng;

public class ThreadedSeedGenerator {

    static class 1 {
    }

    private class SeedGenerator implements java.lang.Runnable {
        private volatile int counter;
        private volatile boolean stop;
        final org.bouncycastle.crypto.prng.ThreadedSeedGenerator this$0;

        private SeedGenerator(org.bouncycastle.crypto.prng.ThreadedSeedGenerator r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.counter = r1
                r0.stop = r1
                return
        }

        SeedGenerator(org.bouncycastle.crypto.prng.ThreadedSeedGenerator r1, org.bouncycastle.crypto.prng.ThreadedSeedGenerator.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public byte[] generateSeed(int r7, boolean r8) {
                r6 = this;
                java.lang.Thread r0 = new java.lang.Thread
                r0.<init>(r6)
                byte[] r1 = new byte[r7]
                r2 = 0
                r6.counter = r2
                r6.stop = r2
                r0.start()
                if (r8 == 0) goto L12
                goto L14
            L12:
                int r7 = r7 * 8
            L14:
                r0 = 0
            L15:
                r3 = 1
                if (r2 >= r7) goto L3d
            L18:
                int r4 = r6.counter
                if (r4 != r0) goto L24
                r4 = 1
                java.lang.Thread.sleep(r4)     // Catch: java.lang.InterruptedException -> L22
                goto L18
            L22:
                goto L18
            L24:
                int r0 = r6.counter
                if (r8 == 0) goto L2e
                r3 = r0 & 255(0xff, float:3.57E-43)
                byte r3 = (byte) r3
                r1[r2] = r3
                goto L3a
            L2e:
                int r4 = r2 / 8
                r5 = r1[r4]
                int r3 = r5 << 1
                r5 = r0 & 1
                r3 = r3 | r5
                byte r3 = (byte) r3
                r1[r4] = r3
            L3a:
                int r2 = r2 + 1
                goto L15
            L3d:
                r6.stop = r3
                return r1
        }

        @Override
        public void run() {
                r1 = this;
            L0:
                boolean r0 = r1.stop
                if (r0 != 0) goto Lb
                int r0 = r1.counter
                int r0 = r0 + 1
                r1.counter = r0
                goto L0
            Lb:
                return
        }
    }

    public ThreadedSeedGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] generateSeed(int r3, boolean r4) {
            r2 = this;
            org.bouncycastle.crypto.prng.ThreadedSeedGenerator$SeedGenerator r0 = new org.bouncycastle.crypto.prng.ThreadedSeedGenerator$SeedGenerator
            r1 = 0
            r0.<init>(r2, r1)
            byte[] r3 = r0.generateSeed(r3, r4)
            return r3
    }
}
