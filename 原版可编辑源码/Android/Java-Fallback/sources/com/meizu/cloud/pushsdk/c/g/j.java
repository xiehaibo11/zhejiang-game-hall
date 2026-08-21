package com.meizu.cloud.pushsdk.c.g;

final class j {
    final byte[] a;
    int b;
    int c;
    boolean d;
    final boolean e;
    com.meizu.cloud.pushsdk.c.g.j f;
    com.meizu.cloud.pushsdk.c.g.j g;

    j() {
            r1 = this;
            r1.<init>()
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]
            r1.a = r0
            r0 = 1
            r1.e = r0
            r0 = 0
            r1.d = r0
            return
    }

    j(com.meizu.cloud.pushsdk.c.g.j r3) {
            r2 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            int r3 = r3.c
            r2.<init>(r0, r1, r3)
            return
    }

    j(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r1 = 0
            r0.e = r1
            r1 = 1
            r0.d = r1
            return
    }

    public com.meizu.cloud.pushsdk.c.g.j a() {
            r4 = this;
            com.meizu.cloud.pushsdk.c.g.j r0 = r4.f
            r1 = 0
            if (r0 == r4) goto L6
            goto L7
        L6:
            r0 = r1
        L7:
            com.meizu.cloud.pushsdk.c.g.j r2 = r4.g
            com.meizu.cloud.pushsdk.c.g.j r3 = r4.f
            r2.f = r3
            com.meizu.cloud.pushsdk.c.g.j r3 = r4.f
            r3.g = r2
            r4.f = r1
            r4.g = r1
            return r0
    }

    public com.meizu.cloud.pushsdk.c.g.j a(int r3) {
            r2 = this;
            if (r3 <= 0) goto L1e
            int r0 = r2.c
            int r1 = r2.b
            int r0 = r0 - r1
            if (r3 > r0) goto L1e
            com.meizu.cloud.pushsdk.c.g.j r0 = new com.meizu.cloud.pushsdk.c.g.j
            r0.<init>(r2)
            int r1 = r0.b
            int r1 = r1 + r3
            r0.c = r1
            int r1 = r2.b
            int r1 = r1 + r3
            r2.b = r1
            com.meizu.cloud.pushsdk.c.g.j r3 = r2.g
            r3.a(r0)
            return r0
        L1e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    public com.meizu.cloud.pushsdk.c.g.j a(com.meizu.cloud.pushsdk.c.g.j r2) {
            r1 = this;
            r2.g = r1
            com.meizu.cloud.pushsdk.c.g.j r0 = r1.f
            r2.f = r0
            com.meizu.cloud.pushsdk.c.g.j r0 = r1.f
            r0.g = r2
            r1.f = r2
            return r2
    }

    public void a(com.meizu.cloud.pushsdk.c.g.j r5, int r6) {
            r4 = this;
            boolean r0 = r5.e
            if (r0 == 0) goto L4a
            int r0 = r5.c
            int r1 = r0 + r6
            r2 = 2048(0x800, float:2.87E-42)
            if (r1 <= r2) goto L34
            boolean r1 = r5.d
            if (r1 != 0) goto L2e
            int r1 = r0 + r6
            int r3 = r5.b
            int r1 = r1 - r3
            if (r1 > r2) goto L28
            byte[] r1 = r5.a
            int r0 = r0 - r3
            r2 = 0
            java.lang.System.arraycopy(r1, r3, r1, r2, r0)
            int r0 = r5.c
            int r1 = r5.b
            int r0 = r0 - r1
            r5.c = r0
            r5.b = r2
            goto L34
        L28:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
        L2e:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
        L34:
            byte[] r0 = r4.a
            int r1 = r4.b
            byte[] r2 = r5.a
            int r3 = r5.c
            java.lang.System.arraycopy(r0, r1, r2, r3, r6)
            int r0 = r5.c
            int r0 = r0 + r6
            r5.c = r0
            int r5 = r4.b
            int r5 = r5 + r6
            r4.b = r5
            return
        L4a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
    }

    public void b() {
            r4 = this;
            com.meizu.cloud.pushsdk.c.g.j r0 = r4.g
            if (r0 == r4) goto L2a
            boolean r1 = r0.e
            if (r1 != 0) goto L9
            return
        L9:
            int r1 = r4.c
            int r2 = r4.b
            int r1 = r1 - r2
            int r2 = r0.c
            int r2 = 2048 - r2
            boolean r3 = r0.d
            if (r3 == 0) goto L18
            r0 = 0
            goto L1a
        L18:
            int r0 = r0.b
        L1a:
            int r2 = r2 + r0
            if (r1 <= r2) goto L1e
            return
        L1e:
            com.meizu.cloud.pushsdk.c.g.j r0 = r4.g
            r4.a(r0, r1)
            r4.a()
            com.meizu.cloud.pushsdk.c.g.k.a(r4)
            return
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }
}
