package com.mbridge.msdk.foundation.same.net;

public class d implements com.mbridge.msdk.foundation.same.net.c {
    private final java.lang.String a;
    private final java.util.concurrent.Executor b;








    private class a implements java.lang.Runnable {
        final com.mbridge.msdk.foundation.same.net.d a;
        private final com.mbridge.msdk.foundation.same.net.i b;
        private final com.mbridge.msdk.foundation.same.net.k c;

        public a(com.mbridge.msdk.foundation.same.net.d r1, com.mbridge.msdk.foundation.same.net.i r2, com.mbridge.msdk.foundation.same.net.k r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                boolean r0 = r0.c()
                if (r0 == 0) goto L15
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                java.lang.String r1 = "canceled-at-delivery"
                r0.a(r1)
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                r0.n()
                return
            L15:
                com.mbridge.msdk.foundation.same.net.k r0 = r2.c
                com.mbridge.msdk.foundation.same.net.a.a r0 = r0.b
                if (r0 != 0) goto L1d
                r0 = 1
                goto L1e
            L1d:
                r0 = 0
            L1e:
                if (r0 == 0) goto L28
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                com.mbridge.msdk.foundation.same.net.k r1 = r2.c
                r0.a(r1)
                goto L31
            L28:
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                com.mbridge.msdk.foundation.same.net.k r1 = r2.c
                com.mbridge.msdk.foundation.same.net.a.a r1 = r1.b
                r0.a(r1)
            L31:
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                java.lang.String r1 = "done"
                r0.a(r1)
                com.mbridge.msdk.foundation.same.net.i r0 = r2.b
                r0.p()
                return
        }
    }

    public d(android.os.Handler r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.mbridge.msdk.foundation.same.net.d> r0 = com.mbridge.msdk.foundation.same.net.d.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            com.mbridge.msdk.foundation.same.net.d$1 r0 = new com.mbridge.msdk.foundation.same.net.d$1
            r0.<init>(r1, r2)
            r1.b = r0
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.same.net.i<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postFinish request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.same.net.d$2 r1 = new com.mbridge.msdk.foundation.same.net.d$2
            r1.<init>(r3, r4)
            r0.execute(r1)
        L26:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.same.net.i<?> r10, long r11, long r13) {
            r9 = this;
            java.lang.String r0 = r9.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postDownloadProgress downloadedSize="
            r1.append(r2)
            r1.append(r13)
            java.lang.String r2 = "/ fileSize="
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r9.b
            if (r0 == 0) goto L2f
            com.mbridge.msdk.foundation.same.net.d$7 r8 = new com.mbridge.msdk.foundation.same.net.d$7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r6 = r13
            r1.<init>(r2, r3, r4, r6)
            r0.execute(r8)
        L2f:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.same.net.i<?> r4, com.mbridge.msdk.foundation.same.net.a.a r5) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postError error="
            r1.append(r2)
            int r2 = r5.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L2a
            com.mbridge.msdk.foundation.same.net.k r5 = com.mbridge.msdk.foundation.same.net.k.a(r5)
            java.util.concurrent.Executor r0 = r3.b
            com.mbridge.msdk.foundation.same.net.d$a r1 = new com.mbridge.msdk.foundation.same.net.d$a
            r1.<init>(r3, r4, r5)
            r0.execute(r1)
        L2a:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.same.net.i<?> r4, com.mbridge.msdk.foundation.same.net.k<?> r5) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postResponse response="
            r1.append(r2)
            T r2 = r5.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L24
            com.mbridge.msdk.foundation.same.net.d$a r1 = new com.mbridge.msdk.foundation.same.net.d$a
            r1.<init>(r3, r4, r5)
            r0.execute(r1)
        L24:
            return
    }

    @Override
    public final void b(com.mbridge.msdk.foundation.same.net.i<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postCancel request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.same.net.d$3 r1 = new com.mbridge.msdk.foundation.same.net.d$3
            r1.<init>(r3, r4)
            r0.execute(r1)
        L26:
            return
    }

    @Override
    public final void c(com.mbridge.msdk.foundation.same.net.i<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postPreExecute request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.same.net.d$4 r1 = new com.mbridge.msdk.foundation.same.net.d$4
            r1.<init>(r3, r4)
            r0.execute(r1)
        L26:
            return
    }

    @Override
    public final void d(com.mbridge.msdk.foundation.same.net.i<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postNetworking request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.same.net.d$5 r1 = new com.mbridge.msdk.foundation.same.net.d$5
            r1.<init>(r3, r4)
            r0.execute(r1)
        L26:
            return
    }

    @Override
    public final void e(com.mbridge.msdk.foundation.same.net.i<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postRetry request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.Executor r0 = r3.b
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.same.net.d$6 r1 = new com.mbridge.msdk.foundation.same.net.d$6
            r1.<init>(r3, r4)
            r0.execute(r1)
        L26:
            return
    }
}
