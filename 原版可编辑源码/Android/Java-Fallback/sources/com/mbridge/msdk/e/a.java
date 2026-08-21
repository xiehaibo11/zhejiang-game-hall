package com.mbridge.msdk.e;

public final class a {
    private long a;
    private boolean b;
    private java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> c;
    private java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> d;
    private int e;
    private int f;
    private com.mbridge.msdk.foundation.db.f g;
    private com.mbridge.msdk.videocommon.d.a h;
    private com.mbridge.msdk.foundation.db.r i;
    private com.mbridge.msdk.foundation.db.i j;
    private android.os.Handler k;



    static class a {
        static com.mbridge.msdk.e.a a;

        static {
                com.mbridge.msdk.e.a r0 = new com.mbridge.msdk.e.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.e.a.a.a = r0
                return
        }
    }

    private a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r2.c = r1
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r2.d = r1
            r2.e = r0
            r2.f = r0
            com.mbridge.msdk.e.a$1 r0 = new com.mbridge.msdk.e.a$1
            r0.<init>(r2)
            r2.k = r0
            return
    }

    a(com.mbridge.msdk.e.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.mbridge.msdk.e.a r0, long r1) {
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r0.c
            if (r1 == 0) goto L19
            int r1 = r1.size()
            if (r1 <= 0) goto L19
            int r1 = r0.e
            if (r1 == 0) goto L19
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r0.c
            int r1 = r1.size()
            int r2 = r0.e
            if (r1 <= r2) goto L19
            goto L41
        L19:
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r0.d
            if (r1 == 0) goto L32
            int r1 = r1.size()
            if (r1 <= 0) goto L32
            int r1 = r0.f
            if (r1 == 0) goto L32
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r0.d
            int r1 = r1.size()
            int r2 = r0.f
            if (r1 == r2) goto L32
            goto L41
        L32:
            r1 = 0
            r0.f = r1
            r0.e = r1
            android.os.Handler r0 = r0.k
            r1 = 2
            android.os.Message r1 = r0.obtainMessage(r1)
            r0.sendMessage(r1)
        L41:
            return
    }

    private void a(java.lang.String r3, java.lang.String r4, boolean r5) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L23
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L23
            if (r0 != 0) goto Lb
            return
        Lb:
            com.mbridge.msdk.reward.adapter.d r1 = new com.mbridge.msdk.reward.adapter.d     // Catch: java.lang.Exception -> L23
            r1.<init>(r0, r3, r4)     // Catch: java.lang.Exception -> L23
            r1.a(r5)     // Catch: java.lang.Exception -> L23
            com.mbridge.msdk.e.a$2 r3 = new com.mbridge.msdk.e.a$2     // Catch: java.lang.Exception -> L23
            r3.<init>(r2, r1)     // Catch: java.lang.Exception -> L23
            r1.a(r3)     // Catch: java.lang.Exception -> L23
            r3 = 1
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 0
            r1.a(r3, r4, r5)     // Catch: java.lang.Exception -> L23
            goto L2d
        L23:
            r3 = move-exception
            java.lang.String r4 = r3.getMessage()
            java.lang.String r5 = "LoopTimer"
            com.mbridge.msdk.foundation.tools.z.c(r5, r4, r3)
        L2d:
            return
    }

    static boolean a(com.mbridge.msdk.e.a r0) {
            boolean r0 = r0.b
            return r0
    }

    private boolean a(com.mbridge.msdk.foundation.entity.k r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L7f
            java.lang.String r1 = r6.a()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lf
            goto L7f
        Lf:
            java.lang.String r6 = r6.a()
            r1 = 1
            com.mbridge.msdk.foundation.db.f r2 = r5.g     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L72
            r2 = 0
            com.mbridge.msdk.videocommon.d.a r4 = r5.h     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L24
            com.mbridge.msdk.videocommon.d.a r2 = r5.h     // Catch: java.lang.Throwable -> L74
            long r2 = r2.e()     // Catch: java.lang.Throwable -> L74
        L24:
            com.mbridge.msdk.foundation.db.f r4 = r5.g     // Catch: java.lang.Throwable -> L74
            int r2 = r4.a(r6, r2)     // Catch: java.lang.Throwable -> L74
            r3 = -1
            if (r2 == r3) goto L30
            if (r2 == r1) goto L72
            goto L63
        L30:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L37
            goto L63
        L37:
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.c     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L49
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.c     // Catch: java.lang.Throwable -> L74
            boolean r2 = r2.contains(r6)     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L49
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.c     // Catch: java.lang.Throwable -> L74
            r2.remove(r6)     // Catch: java.lang.Throwable -> L74
            goto L5a
        L49:
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.d     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L5a
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.d     // Catch: java.lang.Throwable -> L74
            boolean r2 = r2.contains(r6)     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L5a
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r5.d     // Catch: java.lang.Throwable -> L74
            r2.remove(r6)     // Catch: java.lang.Throwable -> L74
        L5a:
            com.mbridge.msdk.foundation.db.r r2 = r5.i     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L63
            com.mbridge.msdk.foundation.db.r r2 = r5.i     // Catch: java.lang.Throwable -> L74
            r2.a(r6)     // Catch: java.lang.Throwable -> L74
        L63:
            android.os.Handler r6 = r5.k     // Catch: java.lang.Throwable -> L70
            android.os.Handler r1 = r5.k     // Catch: java.lang.Throwable -> L70
            r2 = 2
            android.os.Message r1 = r1.obtainMessage(r2)     // Catch: java.lang.Throwable -> L70
            r6.sendMessage(r1)     // Catch: java.lang.Throwable -> L70
            goto L7f
        L70:
            r6 = move-exception
            goto L76
        L72:
            r0 = r1
            goto L7f
        L74:
            r6 = move-exception
            r0 = r1
        L76:
            java.lang.String r1 = r6.getMessage()
            java.lang.String r2 = "LoopTimer"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r6)
        L7f:
            return r0
    }

    static long b(com.mbridge.msdk.e.a r2) {
            long r0 = r2.a
            return r0
    }

    static void c(com.mbridge.msdk.e.a r3) {
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.c     // Catch: java.lang.Throwable -> L70
            r1 = 1
            if (r0 == 0) goto L39
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.c     // Catch: java.lang.Throwable -> L70
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L70
            if (r0 <= 0) goto L39
            int r0 = r3.e     // Catch: java.lang.Throwable -> L70
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r3.c     // Catch: java.lang.Throwable -> L70
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L70
            if (r0 >= r2) goto L39
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.c     // Catch: java.lang.Throwable -> L70
            int r2 = r3.e     // Catch: java.lang.Throwable -> L70
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L70
            com.mbridge.msdk.foundation.entity.k r0 = (com.mbridge.msdk.foundation.entity.k) r0     // Catch: java.lang.Throwable -> L70
            int r2 = r3.e     // Catch: java.lang.Throwable -> L70
            int r2 = r2 + r1
            r3.e = r2     // Catch: java.lang.Throwable -> L70
            boolean r1 = r3.a(r0)     // Catch: java.lang.Throwable -> L70
            if (r1 == 0) goto L7a
            java.lang.String r1 = r0.b()     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L70
            r2 = 0
            r3.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L70
            goto L7a
        L39:
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.d     // Catch: java.lang.Throwable -> L70
            if (r0 == 0) goto L7a
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.d     // Catch: java.lang.Throwable -> L70
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L70
            if (r0 <= 0) goto L7a
            int r0 = r3.f     // Catch: java.lang.Throwable -> L70
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r2 = r3.d     // Catch: java.lang.Throwable -> L70
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L70
            if (r0 >= r2) goto L7a
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.d     // Catch: java.lang.Throwable -> L70
            int r2 = r3.f     // Catch: java.lang.Throwable -> L70
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L70
            com.mbridge.msdk.foundation.entity.k r0 = (com.mbridge.msdk.foundation.entity.k) r0     // Catch: java.lang.Throwable -> L70
            int r2 = r3.f     // Catch: java.lang.Throwable -> L70
            int r2 = r2 + r1
            r3.f = r2     // Catch: java.lang.Throwable -> L70
            boolean r2 = r3.a(r0)     // Catch: java.lang.Throwable -> L70
            if (r2 == 0) goto L7a
            java.lang.String r2 = r0.b()     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L70
            r3.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L70
            goto L7a
        L70:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "LoopTimer"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r3)
        L7a:
            return
    }

    static android.os.Handler d(com.mbridge.msdk.e.a r0) {
            android.os.Handler r0 = r0.k
            return r0
    }

    public final void a(long r4) {
            r3 = this;
            com.mbridge.msdk.foundation.db.i r0 = r3.j
            if (r0 != 0) goto L12
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            r3.j = r0
        L12:
            com.mbridge.msdk.foundation.db.r r0 = r3.i
            if (r0 != 0) goto L1e
            com.mbridge.msdk.foundation.db.i r0 = r3.j
            com.mbridge.msdk.foundation.db.r r0 = com.mbridge.msdk.foundation.db.r.a(r0)
            r3.i = r0
        L1e:
            com.mbridge.msdk.foundation.db.r r0 = r3.i
            r1 = 287(0x11f, float:4.02E-43)
            java.util.List r0 = r0.a(r1)
            if (r0 == 0) goto L49
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r3.d
            r1.addAll(r0)
            java.util.Iterator r0 = r0.iterator()
        L31:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L49
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.k r1 = (com.mbridge.msdk.foundation.entity.k) r1
            java.lang.String r2 = r1.b()
            java.lang.String r1 = r1.a()
            r3.b(r2, r1)
            goto L31
        L49:
            com.mbridge.msdk.foundation.db.r r0 = r3.i
            r1 = 94
            java.util.List r0 = r0.a(r1)
            if (r0 == 0) goto L74
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r1 = r3.c
            r1.addAll(r0)
            java.util.Iterator r0 = r0.iterator()
        L5c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L74
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.k r1 = (com.mbridge.msdk.foundation.entity.k) r1
            java.lang.String r2 = r1.b()
            java.lang.String r1 = r1.a()
            r3.a(r2, r1)
            goto L5c
        L74:
            com.mbridge.msdk.foundation.db.f r0 = r3.g
            if (r0 != 0) goto L80
            com.mbridge.msdk.foundation.db.i r0 = r3.j
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            r3.g = r0
        L80:
            com.mbridge.msdk.videocommon.d.a r0 = r3.h
            if (r0 != 0) goto L8e
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.videocommon.d.a r0 = r0.b()
            r3.h = r0
        L8e:
            r3.a = r4
            r4 = 0
            r3.b = r4
            android.os.Handler r4 = r3.k
            r5 = 1
            android.os.Message r5 = r4.obtainMessage(r5)
            long r0 = r3.a
            r4.sendMessageDelayed(r5, r0)
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.c
            boolean r0 = r0.contains(r5)
            if (r0 != 0) goto L1b
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.c
            com.mbridge.msdk.foundation.entity.k r1 = new com.mbridge.msdk.foundation.entity.k
            r2 = 94
            r1.<init>(r4, r5, r2)
            r0.add(r1)
            com.mbridge.msdk.foundation.db.r r0 = r3.i
            if (r0 == 0) goto L1b
            r0.a(r4, r5, r2)
        L1b:
            return
    }

    public final void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.d
            boolean r0 = r0.contains(r5)
            if (r0 != 0) goto L1b
            java.util.LinkedList<com.mbridge.msdk.foundation.entity.k> r0 = r3.d
            com.mbridge.msdk.foundation.entity.k r1 = new com.mbridge.msdk.foundation.entity.k
            r2 = 287(0x11f, float:4.02E-43)
            r1.<init>(r4, r5, r2)
            r0.add(r1)
            com.mbridge.msdk.foundation.db.r r0 = r3.i
            if (r0 == 0) goto L1b
            r0.a(r4, r5, r2)
        L1b:
            return
    }
}
