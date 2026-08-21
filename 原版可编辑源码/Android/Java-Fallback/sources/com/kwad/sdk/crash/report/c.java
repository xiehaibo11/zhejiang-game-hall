package com.kwad.sdk.crash.report;

public abstract class c implements com.kwad.sdk.crash.report.e {
    private java.util.ArrayList<com.kwad.sdk.crash.report.c.a> aBj;

    static class a {
        private com.kwad.sdk.crash.model.message.ExceptionMessage aBk;
        private int aBl;

        a(com.kwad.sdk.crash.model.message.ExceptionMessage r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.aBk = r1
                r0.aBl = r2
                return
        }

        static com.kwad.sdk.crash.model.message.ExceptionMessage a(com.kwad.sdk.crash.report.c.a r0) {
                com.kwad.sdk.crash.model.message.ExceptionMessage r0 = r0.aBk
                return r0
        }

        static int b(com.kwad.sdk.crash.report.c.a r0) {
                int r0 = r0.aBl
                return r0
        }
    }

    public c() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aBj = r0
            return
    }

    private void Fg() {
            r4 = this;
            java.util.ArrayList<com.kwad.sdk.crash.report.c$a> r0 = r4.aBj
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2f
            java.util.ArrayList<com.kwad.sdk.crash.report.c$a> r0 = r4.aBj     // Catch: java.lang.Throwable -> L2b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2b
        Le:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.crash.report.c$a r1 = (com.kwad.sdk.crash.report.c.a) r1     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.crash.model.message.ExceptionMessage r2 = com.kwad.sdk.crash.report.c.a.a(r1)     // Catch: java.lang.Throwable -> L2b
            int r1 = com.kwad.sdk.crash.report.c.a.b(r1)     // Catch: java.lang.Throwable -> L2b
            r3 = 0
            r4.b(r2, r1, r3)     // Catch: java.lang.Throwable -> L2b
            r0.remove()     // Catch: java.lang.Throwable -> L2b
            goto Le
        L2a:
            return
        L2b:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L2f:
            return
    }

    private static boolean a(java.lang.String r1, java.util.List<java.lang.String> r2) {
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L4
            r1 = 1
            return r1
        L18:
            r1 = 0
            return r1
    }

    private void b(com.kwad.sdk.crash.model.message.ExceptionMessage r2, int r3, java.util.concurrent.CountDownLatch r4) {
            r1 = this;
            if (r2 == 0) goto L1f
            boolean r0 = r1.c(r2)
            if (r0 != 0) goto L9
            goto L1f
        L9:
            r0 = 3
            if (r3 != r0) goto Lf
            com.kwad.sdk.crash.report.a.b(r2)
        Lf:
            java.util.ArrayList r3 = new java.util.ArrayList
            r0 = 1
            r3.<init>(r0)
            com.kwad.sdk.crash.report.ReportEvent r2 = com.kwad.sdk.crash.report.request.c.d(r2)
            r3.add(r2)
            com.kwad.sdk.crash.report.request.b.a(r3, r4)
        L1f:
            return
    }

    private boolean c(com.kwad.sdk.crash.model.message.ExceptionMessage r10) {
            r9 = this;
            r0 = 1
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Exception -> L7a
            com.kwad.sdk.crash.c r2 = r1.EH()     // Catch: java.lang.Exception -> L7a
            if (r2 == 0) goto L79
            int r2 = r1.EG()     // Catch: java.lang.Exception -> L7a
            r3 = 2
            if (r2 != r3) goto L13
            goto L79
        L13:
            com.kwad.sdk.crash.c r2 = r1.EH()     // Catch: java.lang.Exception -> L7a
            java.util.List<com.kwad.sdk.crash.a> r2 = r2.azJ     // Catch: java.lang.Exception -> L7a
            com.kwad.sdk.crash.c r3 = r1.EH()     // Catch: java.lang.Exception -> L7a
            double r3 = r3.azq     // Catch: java.lang.Exception -> L7a
            java.lang.String r5 = r1.getAppId()     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = r1.getSdkVersion()     // Catch: java.lang.Exception -> L7a
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L7a
        L2b:
            boolean r6 = r2.hasNext()     // Catch: java.lang.Exception -> L7a
            if (r6 == 0) goto L6e
            java.lang.Object r6 = r2.next()     // Catch: java.lang.Exception -> L7a
            com.kwad.sdk.crash.a r6 = (com.kwad.sdk.crash.a) r6     // Catch: java.lang.Exception -> L7a
            if (r6 == 0) goto L2b
            java.util.List<java.lang.String> r7 = r6.azn     // Catch: java.lang.Exception -> L7a
            boolean r7 = com.kwad.sdk.crash.utils.c.b(r7)     // Catch: java.lang.Exception -> L7a
            if (r7 != 0) goto L49
            java.util.List<java.lang.String> r7 = r6.azn     // Catch: java.lang.Exception -> L7a
            boolean r7 = r7.contains(r5)     // Catch: java.lang.Exception -> L7a
            if (r7 == 0) goto L2b
        L49:
            java.util.List<java.lang.String> r7 = r6.azo     // Catch: java.lang.Exception -> L7a
            boolean r7 = com.kwad.sdk.crash.utils.c.b(r7)     // Catch: java.lang.Exception -> L7a
            if (r7 != 0) goto L59
            java.util.List<java.lang.String> r7 = r6.azo     // Catch: java.lang.Exception -> L7a
            boolean r7 = r7.contains(r1)     // Catch: java.lang.Exception -> L7a
            if (r7 == 0) goto L2b
        L59:
            java.util.List<java.lang.String> r7 = r6.azp     // Catch: java.lang.Exception -> L7a
            boolean r7 = com.kwad.sdk.crash.utils.c.b(r7)     // Catch: java.lang.Exception -> L7a
            if (r7 != 0) goto L6b
            java.lang.String r7 = r10.mCrashDetail     // Catch: java.lang.Exception -> L7a
            java.util.List<java.lang.String> r8 = r6.azp     // Catch: java.lang.Exception -> L7a
            boolean r7 = a(r7, r8)     // Catch: java.lang.Exception -> L7a
            if (r7 == 0) goto L2b
        L6b:
            double r3 = r6.azq     // Catch: java.lang.Exception -> L7a
            goto L2b
        L6e:
            double r1 = java.lang.Math.random()     // Catch: java.lang.Exception -> L7a
            int r10 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r10 >= 0) goto L77
            return r0
        L77:
            r10 = 0
            return r10
        L79:
            return r0
        L7a:
            r10 = move-exception
            java.lang.String r10 = android.util.Log.getStackTraceString(r10)
            java.lang.String r1 = "BaseExceptionUploader"
            com.kwad.sdk.core.e.c.w(r1, r10)
            return r0
    }

    public final void a(com.kwad.sdk.crash.model.message.ExceptionMessage r3, int r4, java.util.concurrent.CountDownLatch r5) {
            r2 = this;
            r2.Fg()     // Catch: java.lang.Throwable -> L7
            r2.b(r3, r4, r5)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            java.util.ArrayList<com.kwad.sdk.crash.report.c$a> r0 = r2.aBj
            com.kwad.sdk.crash.report.c$a r1 = new com.kwad.sdk.crash.report.c$a
            r1.<init>(r3, r4)
            r0.add(r1)
            if (r5 == 0) goto L1a
            r5.countDown()
        L1a:
            return
    }
}
