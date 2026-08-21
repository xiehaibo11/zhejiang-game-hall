package org.bouncycastle.crypto.prng;

public class VMPCRandomGenerator implements org.bouncycastle.crypto.prng.RandomGenerator {
    private byte[] P;
    private byte n;
    private byte s;

    public VMPCRandomGenerator() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.n = r0
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0014: FILL_ARRAY_DATA , data: [-69, 44, 98, 127, -75, -86, -44, 13, -127, -2, -78, -126, -53, -96, -95, 8, 24, 113, 86, -24, 73, 2, 16, -60, -34, 53, -91, -20, -128, 18, -72, 105, -38, 47, 117, -52, -94, 9, 54, 3, 97, 45, -3, -32, -35, 5, 67, -112, -83, -56, -31, -81, 87, -101, 76, -40, 81, -82, 80, -123, 60, 10, -28, -13, -100, 38, 35, 83, -55, -125, -105, 70, -79, -103, 100, 49, 119, -43, 29, -42, 120, -67, 94, -80, -118, 34, 56, -8, 104, 43, 42, -59, -45, -9, -68, 111, -33, 4, -27, -107, 62, 37, -122, -90, 11, -113, -15, 36, 14, -41, 64, -77, -49, 126, 6, 21, -102, 77, 28, -93, -37, 50, -110, 88, 17, 39, -12, 89, -48, 78, 106, 23, 91, -84, -1, 7, -64, 101, 121, -4, -57, -51, 118, 66, 93, -25, 58, 52, 122, 48, 40, 15, 115, 1, -7, -47, -46, 25, -23, -111, -71, 90, -19, 65, 109, -76, -61, -98, -65, 99, -6, 31, 51, 96, 71, -119, -16, -106, 26, 95, -109, 61, 55, 75, -39, -88, -63, 27, -10, 57, -117, -73, 12, 32, -50, -120, 110, -74, 116, -114, -115, 22, 41, -14, -121, -11, -21, 112, -29, -5, 85, -97, -58, 68, 74, 69, 125, -30, 107, 92, 108, 102, -87, -116, -18, -124, 19, -89, 30, -99, -36, 103, 72, -70, 46, -26, -92, -85, 124, -108, 0, 33, -17, -22, -66, -54, 114, 79, 82, -104, 63, -62, 20, 123, 59, 84} // fill-array
            r1.P = r0
            r0 = -66
            r1.s = r0
            return
    }

    @Override
    public void addSeedMaterial(long r5) {
            r4 = this;
            r0 = 4
            byte[] r0 = new byte[r0]
            r1 = 255(0xff, double:1.26E-321)
            long r1 = r1 & r5
            int r2 = (int) r1
            byte r1 = (byte) r2
            r2 = 3
            r0[r2] = r1
            r1 = 65280(0xff00, double:3.22526E-319)
            long r1 = r1 & r5
            r3 = 8
            long r1 = r1 >> r3
            int r2 = (int) r1
            byte r1 = (byte) r2
            r2 = 2
            r0[r2] = r1
            r1 = 16711680(0xff0000, double:8.256667E-317)
            long r1 = r1 & r5
            r3 = 16
            long r1 = r1 >> r3
            int r2 = (int) r1
            byte r1 = (byte) r2
            r2 = 1
            r0[r2] = r1
            r1 = -16777216(0xffffffffff000000, double:NaN)
            long r5 = r5 & r1
            r1 = 24
            long r5 = r5 >> r1
            int r6 = (int) r5
            byte r5 = (byte) r6
            r6 = 0
            r0[r6] = r5
            r4.addSeedMaterial(r0)
            return
    }

    @Override
    public void addSeedMaterial(byte[] r8) {
            r7 = this;
            r0 = 0
        L1:
            int r1 = r8.length
            if (r0 >= r1) goto L32
            byte[] r1 = r7.P
            byte r2 = r7.s
            byte r3 = r7.n
            r4 = r3 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            int r2 = r2 + r4
            r4 = r8[r0]
            int r2 = r2 + r4
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r1[r2]
            r7.s = r2
            r4 = r3 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            r5 = r3 & 255(0xff, float:3.57E-43)
            r6 = r2 & 255(0xff, float:3.57E-43)
            r6 = r1[r6]
            r1[r5] = r6
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1[r2] = r4
            int r3 = r3 + 1
            r1 = r3 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r7.n = r1
            int r0 = r0 + 1
            goto L1
        L32:
            return
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
    public void nextBytes(byte[] r8, int r9, int r10) {
            r7 = this;
            byte[] r0 = r7.P
            monitor-enter(r0)
            int r10 = r10 + r9
        L4:
            if (r9 == r10) goto L57
            byte[] r1 = r7.P     // Catch: java.lang.Throwable -> L59
            byte r2 = r7.s     // Catch: java.lang.Throwable -> L59
            byte[] r3 = r7.P     // Catch: java.lang.Throwable -> L59
            byte r4 = r7.n     // Catch: java.lang.Throwable -> L59
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3 = r3[r4]     // Catch: java.lang.Throwable -> L59
            int r2 = r2 + r3
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L59
            r7.s = r1     // Catch: java.lang.Throwable -> L59
            byte[] r2 = r7.P     // Catch: java.lang.Throwable -> L59
            byte[] r3 = r7.P     // Catch: java.lang.Throwable -> L59
            byte[] r4 = r7.P     // Catch: java.lang.Throwable -> L59
            r5 = r1 & 255(0xff, float:3.57E-43)
            r4 = r4[r5]     // Catch: java.lang.Throwable -> L59
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3 = r3[r4]     // Catch: java.lang.Throwable -> L59
            int r3 = r3 + 1
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L59
            r8[r9] = r2     // Catch: java.lang.Throwable -> L59
            byte[] r2 = r7.P     // Catch: java.lang.Throwable -> L59
            byte r3 = r7.n     // Catch: java.lang.Throwable -> L59
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L59
            byte[] r3 = r7.P     // Catch: java.lang.Throwable -> L59
            byte r4 = r7.n     // Catch: java.lang.Throwable -> L59
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte[] r5 = r7.P     // Catch: java.lang.Throwable -> L59
            r6 = r1 & 255(0xff, float:3.57E-43)
            r5 = r5[r6]     // Catch: java.lang.Throwable -> L59
            r3[r4] = r5     // Catch: java.lang.Throwable -> L59
            byte[] r3 = r7.P     // Catch: java.lang.Throwable -> L59
            r1 = r1 & 255(0xff, float:3.57E-43)
            r3[r1] = r2     // Catch: java.lang.Throwable -> L59
            byte r1 = r7.n     // Catch: java.lang.Throwable -> L59
            int r1 = r1 + 1
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1     // Catch: java.lang.Throwable -> L59
            r7.n = r1     // Catch: java.lang.Throwable -> L59
            int r9 = r9 + 1
            goto L4
        L57:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L59
            return
        L59:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L59
            throw r8
    }
}
