package com.tkay.expressad.exoplayer.d;

import com.tkay.expressad.exoplayer.d.i;

final class b<T extends com.tkay.expressad.exoplayer.d.i> implements com.tkay.expressad.exoplayer.d.f<T> {
    private static final java.lang.String i = "DefaultDrmSession";
    private static final int j = 0;
    private static final int k = 1;
    private static final int l = 60;
    private byte[] A;
    private java.lang.Object B;
    private java.lang.Object C;
    final com.tkay.expressad.exoplayer.d.n a;
    final java.util.UUID b;
    final com.tkay.expressad.exoplayer.d.b<T>.b c;
    private final com.tkay.expressad.exoplayer.d.j<T> m;
    private final com.tkay.expressad.exoplayer.d.b.c<T> n;
    private final com.tkay.expressad.exoplayer.d.e.a o;
    private final int p;
    private final java.util.HashMap<java.lang.String, java.lang.String> q;
    private final com.tkay.expressad.exoplayer.d.c.a r;
    private final int s;
    private int t;
    private int u;
    private android.os.HandlerThread v;
    private com.tkay.expressad.exoplayer.d.b<T>.a w;
    private T x;
    private com.tkay.expressad.exoplayer.d.f.a y;
    private byte[] z;

    private class a extends android.os.Handler {
        final com.tkay.expressad.exoplayer.d.b a;

        public a(com.tkay.expressad.exoplayer.d.b r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        private static long a(int r2) {
                int r2 = r2 + (-1)
                int r2 = r2 * 1000
                r0 = 5000(0x1388, float:7.006E-42)
                int r2 = java.lang.Math.min(r2, r0)
                long r0 = (long) r2
                return r0
        }

        private boolean a(android.os.Message r5) {
                r4 = this;
                int r0 = r5.arg1
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L8
                r0 = r2
                goto L9
            L8:
                r0 = r1
            L9:
                if (r0 != 0) goto Lc
                return r1
            Lc:
                int r0 = r5.arg2
                int r0 = r0 + r2
                com.tkay.expressad.exoplayer.d.b r3 = r4.a
                int r3 = com.tkay.expressad.exoplayer.d.b.a(r3)
                if (r0 <= r3) goto L18
                return r1
            L18:
                android.os.Message r5 = android.os.Message.obtain(r5)
                r5.arg2 = r0
                int r0 = r0 - r2
                int r0 = r0 * 1000
                r1 = 5000(0x1388, float:7.006E-42)
                int r0 = java.lang.Math.min(r0, r1)
                long r0 = (long) r0
                r4.sendMessageDelayed(r5, r0)
                return r2
        }

        final void a(int r2, java.lang.Object r3, boolean r4) {
                r1 = this;
                r0 = 0
                android.os.Message r2 = r1.obtainMessage(r2, r4, r0, r3)
                r2.sendToTarget()
                return
        }

        @Override
        public final void handleMessage(android.os.Message r8) {
                r7 = this;
                java.lang.Object r0 = r8.obj
                r1 = 1
                int r2 = r8.what     // Catch: java.lang.Exception -> L28
                if (r2 == 0) goto L1f
                if (r2 != r1) goto L19
                r2 = r0
                android.util.Pair r2 = (android.util.Pair) r2     // Catch: java.lang.Exception -> L28
                java.lang.Object r3 = r2.first     // Catch: java.lang.Exception -> L28
                java.lang.Object r2 = r2.second     // Catch: java.lang.Exception -> L28
                com.tkay.expressad.exoplayer.d.b r2 = r7.a     // Catch: java.lang.Exception -> L28
                com.tkay.expressad.exoplayer.d.n r2 = r2.a     // Catch: java.lang.Exception -> L28
                byte[] r1 = r2.b()     // Catch: java.lang.Exception -> L28
                goto L58
            L19:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Exception -> L28
                r2.<init>()     // Catch: java.lang.Exception -> L28
                throw r2     // Catch: java.lang.Exception -> L28
            L1f:
                com.tkay.expressad.exoplayer.d.b r2 = r7.a     // Catch: java.lang.Exception -> L28
                com.tkay.expressad.exoplayer.d.n r2 = r2.a     // Catch: java.lang.Exception -> L28
                byte[] r1 = r2.a()     // Catch: java.lang.Exception -> L28
                goto L58
            L28:
                r2 = move-exception
                int r3 = r8.arg1
                r4 = 0
                if (r3 != r1) goto L30
                r3 = r1
                goto L31
            L30:
                r3 = r4
            L31:
                if (r3 != 0) goto L35
            L33:
                r1 = r4
                goto L54
            L35:
                int r3 = r8.arg2
                int r3 = r3 + r1
                com.tkay.expressad.exoplayer.d.b r5 = r7.a
                int r5 = com.tkay.expressad.exoplayer.d.b.a(r5)
                if (r3 <= r5) goto L41
                goto L33
            L41:
                android.os.Message r4 = android.os.Message.obtain(r8)
                r4.arg2 = r3
                int r3 = r3 - r1
                int r3 = r3 * 1000
                r5 = 5000(0x1388, float:7.006E-42)
                int r3 = java.lang.Math.min(r3, r5)
                long r5 = (long) r3
                r7.sendMessageDelayed(r4, r5)
            L54:
                if (r1 == 0) goto L57
                return
            L57:
                r1 = r2
            L58:
                com.tkay.expressad.exoplayer.d.b r2 = r7.a
                com.tkay.expressad.exoplayer.d.b<T>$b r2 = r2.c
                int r8 = r8.what
                android.util.Pair r0 = android.util.Pair.create(r0, r1)
                android.os.Message r8 = r2.obtainMessage(r8, r0)
                r8.sendToTarget()
                return
        }
    }

    private class b extends android.os.Handler {
        final com.tkay.expressad.exoplayer.d.b a;

        public b(com.tkay.expressad.exoplayer.d.b r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r4) {
                r3 = this;
                java.lang.Object r0 = r4.obj
                android.util.Pair r0 = (android.util.Pair) r0
                java.lang.Object r1 = r0.first
                java.lang.Object r0 = r0.second
                int r4 = r4.what
                if (r4 == 0) goto L16
                r2 = 1
                if (r4 == r2) goto L10
                goto L15
            L10:
                com.tkay.expressad.exoplayer.d.b r4 = r3.a
                com.tkay.expressad.exoplayer.d.b.b(r4, r1, r0)
            L15:
                return
            L16:
                com.tkay.expressad.exoplayer.d.b r4 = r3.a
                com.tkay.expressad.exoplayer.d.b.a(r4, r1, r0)
                return
        }
    }

    public interface c<T extends com.tkay.expressad.exoplayer.d.i> {
        void a();

        void a(com.tkay.expressad.exoplayer.d.b<T> r1);

        void a(java.lang.Exception r1);
    }

    public b(java.util.UUID r1, com.tkay.expressad.exoplayer.d.j<T> r2, com.tkay.expressad.exoplayer.d.b.c<T> r3, com.tkay.expressad.exoplayer.d.e.a r4, int r5, byte[] r6, java.util.HashMap<java.lang.String, java.lang.String> r7, com.tkay.expressad.exoplayer.d.n r8, android.os.Looper r9, com.tkay.expressad.exoplayer.d.c.a r10, int r11) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.n = r3
            r0.m = r2
            r0.p = r5
            r0.A = r6
            if (r6 != 0) goto L10
            goto L11
        L10:
            r4 = 0
        L11:
            r0.o = r4
            r0.q = r7
            r0.a = r8
            r0.s = r11
            r0.r = r10
            r1 = 2
            r0.t = r1
            com.tkay.expressad.exoplayer.d.b$b r1 = new com.tkay.expressad.exoplayer.d.b$b
            r1.<init>(r0, r9)
            r0.c = r1
            android.os.HandlerThread r1 = new android.os.HandlerThread
            java.lang.String r2 = "DrmRequestHandler"
            r1.<init>(r2)
            r0.v = r1
            r1.start()
            com.tkay.expressad.exoplayer.d.b$a r1 = new com.tkay.expressad.exoplayer.d.b$a
            android.os.HandlerThread r2 = r0.v
            android.os.Looper r2 = r2.getLooper()
            r1.<init>(r0, r2)
            r0.w = r1
            return
    }

    static int a(com.tkay.expressad.exoplayer.d.b r0) {
            int r0 = r0.s
            return r0
    }

    private void a(int r9, boolean r10) {
            r8 = this;
            r0 = 3
            if (r9 != r0) goto L6
            byte[] r0 = r8.A
            goto L8
        L6:
            byte[] r0 = r8.z
        L8:
            r2 = r0
            com.tkay.expressad.exoplayer.d.e$a r0 = r8.o
            r1 = 0
            if (r0 == 0) goto L1d
            byte[] r0 = r0.c
            com.tkay.expressad.exoplayer.d.e$a r1 = r8.o
            java.lang.String r1 = r1.b
            com.tkay.expressad.exoplayer.d.e$a r3 = r8.o
            java.lang.String r3 = r3.a
            r4 = r1
            r7 = r3
            r3 = r0
            r0 = r7
            goto L20
        L1d:
            r0 = r1
            r3 = r0
            r4 = r3
        L20:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r1 = r8.m     // Catch: java.lang.Exception -> L36
            java.util.HashMap<java.lang.String, java.lang.String> r6 = r8.q     // Catch: java.lang.Exception -> L36
            r5 = r9
            com.tkay.expressad.exoplayer.d.j$d r9 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L36
            android.util.Pair r9 = android.util.Pair.create(r9, r0)     // Catch: java.lang.Exception -> L36
            r8.B = r9     // Catch: java.lang.Exception -> L36
            com.tkay.expressad.exoplayer.d.b<T>$a r0 = r8.w     // Catch: java.lang.Exception -> L36
            r1 = 1
            r0.a(r1, r9, r10)     // Catch: java.lang.Exception -> L36
            return
        L36:
            r9 = move-exception
            r8.b(r9)
            return
    }

    static void a(com.tkay.expressad.exoplayer.d.b r1, java.lang.Object r2, java.lang.Object r3) {
            java.lang.Object r0 = r1.C
            if (r2 != r0) goto L32
            int r2 = r1.t
            r0 = 2
            if (r2 == r0) goto L10
            boolean r2 = r1.n()
            if (r2 != 0) goto L10
            goto L32
        L10:
            r2 = 0
            r1.C = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L1f
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r1 = r1.n
            java.lang.Exception r3 = (java.lang.Exception) r3
            r1.a(r3)
            return
        L1f:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L2c
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L2c
            r2.b(r3)     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r1 = r1.n
            r1.a()
            return
        L2c:
            r2 = move-exception
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r1 = r1.n
            r1.a(r2)
        L32:
            return
    }

    private void a(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            java.lang.Object r0 = r1.C
            if (r2 != r0) goto L32
            int r2 = r1.t
            r0 = 2
            if (r2 == r0) goto L10
            boolean r2 = r1.n()
            if (r2 != 0) goto L10
            goto L32
        L10:
            r2 = 0
            r1.C = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L1f
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.n
            java.lang.Exception r3 = (java.lang.Exception) r3
            r2.a(r3)
            return
        L1f:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L2c
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L2c
            r2.b(r3)     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.n
            r2.a()
            return
        L2c:
            r2 = move-exception
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r3 = r1.n
            r3.a(r2)
        L32:
            return
    }

    private void a(boolean r8) {
            r7 = this;
            int r0 = r7.p
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L2a
            if (r0 == r1) goto L2a
            if (r0 == r2) goto L18
            r1 = 3
            if (r0 == r1) goto Le
            goto L3e
        Le:
            boolean r0 = r7.k()
            if (r0 == 0) goto L3e
            r7.a(r1, r8)
            goto L3e
        L18:
            byte[] r0 = r7.A
            if (r0 != 0) goto L20
            r7.a(r2, r8)
            return
        L20:
            boolean r0 = r7.k()
            if (r0 == 0) goto L3e
            r7.a(r2, r8)
            return
        L2a:
            byte[] r0 = r7.A
            if (r0 != 0) goto L32
            r7.a(r1, r8)
            return
        L32:
            int r0 = r7.t
            r1 = 4
            if (r0 == r1) goto L3f
            boolean r0 = r7.k()
            if (r0 == 0) goto L3e
            goto L3f
        L3e:
            return
        L3f:
            long r3 = r7.l()
            int r0 = r7.p
            if (r0 != 0) goto L60
            r5 = 60
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L60
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "Offline license has expired or will expire soon. Remaining seconds: "
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "DefaultDrmSession"
            android.util.Log.d(r1, r0)
            r7.a(r2, r8)
            return
        L60:
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 > 0) goto L6f
            com.tkay.expressad.exoplayer.d.m r8 = new com.tkay.expressad.exoplayer.d.m
            r8.<init>()
            r7.c(r8)
            return
        L6f:
            r7.t = r1
            com.tkay.expressad.exoplayer.d.c$a r8 = r7.r
            r8.b()
            return
    }

    static void b(com.tkay.expressad.exoplayer.d.b r1, java.lang.Object r2, java.lang.Object r3) {
            java.lang.Object r0 = r1.B
            if (r2 != r0) goto L55
            boolean r2 = r1.n()
            if (r2 != 0) goto Lb
            goto L55
        Lb:
            r2 = 0
            r1.B = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L18
            java.lang.Exception r3 = (java.lang.Exception) r3
            r1.b(r3)
            return
        L18:
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L51
            int r2 = r1.p     // Catch: java.lang.Exception -> L51
            r0 = 3
            if (r2 != r0) goto L2c
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L51
            byte[] r0 = r1.A     // Catch: java.lang.Exception -> L51
            r2.a(r0, r3)     // Catch: java.lang.Exception -> L51
            com.tkay.expressad.exoplayer.d.c$a r2 = r1.r     // Catch: java.lang.Exception -> L51
            r2.c()     // Catch: java.lang.Exception -> L51
            return
        L2c:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L51
            byte[] r0 = r1.z     // Catch: java.lang.Exception -> L51
            byte[] r2 = r2.a(r0, r3)     // Catch: java.lang.Exception -> L51
            int r3 = r1.p     // Catch: java.lang.Exception -> L51
            r0 = 2
            if (r3 == r0) goto L41
            int r3 = r1.p     // Catch: java.lang.Exception -> L51
            if (r3 != 0) goto L48
            byte[] r3 = r1.A     // Catch: java.lang.Exception -> L51
            if (r3 == 0) goto L48
        L41:
            if (r2 == 0) goto L48
            int r3 = r2.length     // Catch: java.lang.Exception -> L51
            if (r3 == 0) goto L48
            r1.A = r2     // Catch: java.lang.Exception -> L51
        L48:
            r2 = 4
            r1.t = r2     // Catch: java.lang.Exception -> L51
            com.tkay.expressad.exoplayer.d.c$a r2 = r1.r     // Catch: java.lang.Exception -> L51
            r2.a()     // Catch: java.lang.Exception -> L51
            return
        L51:
            r2 = move-exception
            r1.b(r2)
        L55:
            return
    }

    private void b(java.lang.Exception r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.media.NotProvisionedException
            if (r0 == 0) goto La
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.n
            r2.a(r1)
            return
        La:
            r1.c(r2)
            return
    }

    private void b(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            java.lang.Object r0 = r1.B
            if (r2 != r0) goto L55
            boolean r2 = r1.n()
            if (r2 != 0) goto Lb
            goto L55
        Lb:
            r2 = 0
            r1.B = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L18
            java.lang.Exception r3 = (java.lang.Exception) r3
            r1.b(r3)
            return
        L18:
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L51
            int r2 = r1.p     // Catch: java.lang.Exception -> L51
            r0 = 3
            if (r2 != r0) goto L2c
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L51
            byte[] r0 = r1.A     // Catch: java.lang.Exception -> L51
            r2.a(r0, r3)     // Catch: java.lang.Exception -> L51
            com.tkay.expressad.exoplayer.d.c$a r2 = r1.r     // Catch: java.lang.Exception -> L51
            r2.c()     // Catch: java.lang.Exception -> L51
            return
        L2c:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r1.m     // Catch: java.lang.Exception -> L51
            byte[] r0 = r1.z     // Catch: java.lang.Exception -> L51
            byte[] r2 = r2.a(r0, r3)     // Catch: java.lang.Exception -> L51
            int r3 = r1.p     // Catch: java.lang.Exception -> L51
            r0 = 2
            if (r3 == r0) goto L41
            int r3 = r1.p     // Catch: java.lang.Exception -> L51
            if (r3 != 0) goto L48
            byte[] r3 = r1.A     // Catch: java.lang.Exception -> L51
            if (r3 == 0) goto L48
        L41:
            if (r2 == 0) goto L48
            int r3 = r2.length     // Catch: java.lang.Exception -> L51
            if (r3 == 0) goto L48
            r1.A = r2     // Catch: java.lang.Exception -> L51
        L48:
            r2 = 4
            r1.t = r2     // Catch: java.lang.Exception -> L51
            com.tkay.expressad.exoplayer.d.c$a r2 = r1.r     // Catch: java.lang.Exception -> L51
            r2.a()     // Catch: java.lang.Exception -> L51
            return
        L51:
            r2 = move-exception
            r1.b(r2)
        L55:
            return
    }

    private void c(java.lang.Exception r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.f$a r0 = new com.tkay.expressad.exoplayer.d.f$a
            r0.<init>(r2)
            r1.y = r0
            com.tkay.expressad.exoplayer.d.c$a r0 = r1.r
            r0.a(r2)
            int r2 = r1.t
            r0 = 4
            if (r2 == r0) goto L14
            r2 = 1
            r1.t = r2
        L14:
            return
    }

    private boolean j() {
            r3 = this;
            boolean r0 = r3.n()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r3.m     // Catch: java.lang.Exception -> L1c
            byte[] r0 = r0.a()     // Catch: java.lang.Exception -> L1c
            r3.z = r0     // Catch: java.lang.Exception -> L1c
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r2 = r3.m     // Catch: java.lang.Exception -> L1c
            com.tkay.expressad.exoplayer.d.i r0 = r2.d(r0)     // Catch: java.lang.Exception -> L1c
            r3.x = r0     // Catch: java.lang.Exception -> L1c
            r0 = 3
            r3.t = r0     // Catch: java.lang.Exception -> L1c
            return r1
        L1c:
            r0 = move-exception
            r3.c(r0)
            r0 = 0
            return r0
    }

    private boolean k() {
            r3 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r3.m     // Catch: java.lang.Exception -> Lb
            byte[] r1 = r3.z     // Catch: java.lang.Exception -> Lb
            byte[] r2 = r3.A     // Catch: java.lang.Exception -> Lb
            r0.b(r1, r2)     // Catch: java.lang.Exception -> Lb
            r0 = 1
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "DefaultDrmSession"
            java.lang.String r2 = "Error trying to restore Widevine keys."
            android.util.Log.e(r1, r2, r0)
            r3.c(r0)
            r0 = 0
            return r0
    }

    private long l() {
            r5 = this;
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            java.util.UUID r1 = r5.b
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L10
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            return r0
        L10:
            android.util.Pair r0 = com.tkay.expressad.exoplayer.d.p.a(r5)
            java.lang.Object r1 = r0.first
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            java.lang.Object r0 = r0.second
            java.lang.Long r0 = (java.lang.Long) r0
            long r3 = r0.longValue()
            long r0 = java.lang.Math.min(r1, r3)
            return r0
    }

    private void m() {
            r2 = this;
            int r0 = r2.t
            r1 = 4
            if (r0 != r1) goto L10
            r0 = 3
            r2.t = r0
            com.tkay.expressad.exoplayer.d.m r0 = new com.tkay.expressad.exoplayer.d.m
            r0.<init>()
            r2.c(r0)
        L10:
            return
    }

    private boolean n() {
            r2 = this;
            int r0 = r2.t
            r1 = 3
            if (r0 == r1) goto Lb
            r1 = 4
            if (r0 != r1) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public final void a() {
            r2 = this;
            int r0 = r2.u
            r1 = 1
            int r0 = r0 + r1
            r2.u = r0
            if (r0 != r1) goto L16
            int r0 = r2.t
            if (r0 != r1) goto Ld
            return
        Ld:
            boolean r0 = r2.j()
            if (r0 == 0) goto L16
            r2.a(r1)
        L16:
            return
    }

    public final void a(int r3) {
            r2 = this;
            boolean r0 = r2.n()
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 1
            r1 = 3
            if (r3 == r0) goto L26
            r0 = 2
            if (r3 == r0) goto L21
            if (r3 == r1) goto L11
            goto L2d
        L11:
            int r3 = r2.t
            r0 = 4
            if (r3 != r0) goto L20
            r2.t = r1
            com.tkay.expressad.exoplayer.d.m r3 = new com.tkay.expressad.exoplayer.d.m
            r3.<init>()
            r2.c(r3)
        L20:
            return
        L21:
            r3 = 0
            r2.a(r3)
            return
        L26:
            r2.t = r1
            com.tkay.expressad.exoplayer.d.b$c<T extends com.tkay.expressad.exoplayer.d.i> r3 = r2.n
            r3.a(r2)
        L2d:
            return
    }

    public final void a(java.lang.Exception r1) {
            r0 = this;
            r0.c(r1)
            return
    }

    public final boolean a(byte[] r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.e$a r0 = r1.o
            if (r0 == 0) goto L7
            byte[] r0 = r0.c
            goto L8
        L7:
            r0 = 0
        L8:
            boolean r2 = java.util.Arrays.equals(r0, r2)
            return r2
    }

    public final boolean b() {
            r4 = this;
            int r0 = r4.u
            r1 = 1
            int r0 = r0 - r1
            r4.u = r0
            r2 = 0
            if (r0 != 0) goto L33
            r4.t = r2
            com.tkay.expressad.exoplayer.d.b<T>$b r0 = r4.c
            r2 = 0
            r0.removeCallbacksAndMessages(r2)
            com.tkay.expressad.exoplayer.d.b<T>$a r0 = r4.w
            r0.removeCallbacksAndMessages(r2)
            r4.w = r2
            android.os.HandlerThread r0 = r4.v
            r0.quit()
            r4.v = r2
            r4.x = r2
            r4.y = r2
            r4.B = r2
            r4.C = r2
            byte[] r0 = r4.z
            if (r0 == 0) goto L32
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r3 = r4.m
            r3.a(r0)
            r4.z = r2
        L32:
            return r1
        L33:
            return r2
    }

    public final boolean b(byte[] r2) {
            r1 = this;
            byte[] r0 = r1.z
            boolean r2 = java.util.Arrays.equals(r0, r2)
            return r2
    }

    public final void c() {
            r4 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r4.m
            com.tkay.expressad.exoplayer.d.j$h r0 = r0.b()
            r4.C = r0
            com.tkay.expressad.exoplayer.d.b<T>$a r1 = r4.w
            r2 = 0
            r3 = 1
            r1.a(r2, r0, r3)
            return
    }

    public final void d() {
            r1 = this;
            boolean r0 = r1.j()
            if (r0 == 0) goto La
            r0 = 1
            r1.a(r0)
        La:
            return
    }

    @Override
    public final int e() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.d.f.a f() {
            r2 = this;
            int r0 = r2.t
            r1 = 1
            if (r0 != r1) goto L8
            com.tkay.expressad.exoplayer.d.f$a r0 = r2.y
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final T g() {
            r1 = this;
            T extends com.tkay.expressad.exoplayer.d.i r0 = r1.x
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> h() {
            r2 = this;
            byte[] r0 = r2.z
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r1 = r2.m
            java.util.Map r0 = r1.c(r0)
            return r0
    }

    @Override
    public final byte[] i() {
            r1 = this;
            byte[] r0 = r1.A
            return r0
    }
}
