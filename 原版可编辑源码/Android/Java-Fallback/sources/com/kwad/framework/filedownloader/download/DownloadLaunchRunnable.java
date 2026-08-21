package com.kwad.framework.filedownloader.download;

public final class DownloadLaunchRunnable implements com.kwad.framework.filedownloader.download.f, java.lang.Runnable {
    private static final java.util.concurrent.ThreadPoolExecutor acH = null;
    private final com.kwad.framework.filedownloader.y acA;
    private boolean acB;
    int acC;
    private final boolean acD;
    private final java.util.ArrayList<com.kwad.framework.filedownloader.download.c> acE;
    private com.kwad.framework.filedownloader.download.e acF;
    private boolean acG;
    private boolean acI;
    private boolean acJ;
    private boolean acK;
    private final java.util.concurrent.atomic.AtomicBoolean acL;
    private volatile boolean acM;
    private volatile java.lang.Exception acN;
    private java.lang.String acO;
    private long acP;
    private long acQ;
    private long acR;
    private long acS;
    private final com.kwad.framework.filedownloader.b.a acr;
    private final com.kwad.framework.filedownloader.download.d acu;
    private final int acv;
    private final com.kwad.framework.filedownloader.d.c acw;
    private final com.kwad.framework.filedownloader.d.b acx;
    private final boolean acy;
    private final boolean acz;
    private volatile boolean kT;

    class DiscardSafely extends java.lang.Throwable {
        private static final long serialVersionUID = 4243896780616180062L;
        final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable this$0;

        DiscardSafely(com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    class RetryDirectly extends java.lang.Throwable {
        private static final long serialVersionUID = -4127585119566978768L;
        final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable this$0;

        RetryDirectly(com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    public static class a {
        private com.kwad.framework.filedownloader.y acA;
        private java.lang.Integer acT;
        private java.lang.Integer acU;
        private java.lang.Boolean acV;
        private java.lang.Boolean acW;
        private java.lang.Integer acX;
        private com.kwad.framework.filedownloader.d.b acd;
        private com.kwad.framework.filedownloader.d.c acw;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a a(com.kwad.framework.filedownloader.y r1) {
                r0 = this;
                r0.acA = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a a(java.lang.Boolean r1) {
                r0 = this;
                r0.acV = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a a(java.lang.Integer r1) {
                r0 = this;
                r0.acT = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a b(com.kwad.framework.filedownloader.d.b r1) {
                r0 = this;
                r0.acd = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a b(java.lang.Boolean r1) {
                r0 = this;
                r0.acW = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a b(java.lang.Integer r1) {
                r0 = this;
                r0.acU = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a c(java.lang.Integer r1) {
                r0 = this;
                r0.acX = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.a e(com.kwad.framework.filedownloader.d.c r1) {
                r0 = this;
                r0.acw = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.DownloadLaunchRunnable uF() {
                r11 = this;
                com.kwad.framework.filedownloader.d.c r0 = r11.acw
                if (r0 == 0) goto L48
                com.kwad.framework.filedownloader.y r0 = r11.acA
                if (r0 == 0) goto L48
                java.lang.Integer r0 = r11.acT
                if (r0 == 0) goto L48
                java.lang.Integer r0 = r11.acU
                if (r0 == 0) goto L48
                java.lang.Boolean r0 = r11.acV
                if (r0 == 0) goto L48
                java.lang.Boolean r0 = r11.acW
                if (r0 == 0) goto L48
                java.lang.Integer r0 = r11.acX
                if (r0 == 0) goto L48
                com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable
                com.kwad.framework.filedownloader.d.c r2 = r11.acw
                com.kwad.framework.filedownloader.d.b r3 = r11.acd
                com.kwad.framework.filedownloader.y r4 = r11.acA
                java.lang.Integer r1 = r11.acT
                int r5 = r1.intValue()
                java.lang.Integer r1 = r11.acU
                int r6 = r1.intValue()
                java.lang.Boolean r1 = r11.acV
                boolean r7 = r1.booleanValue()
                java.lang.Boolean r1 = r11.acW
                boolean r8 = r1.booleanValue()
                java.lang.Integer r1 = r11.acX
                int r9 = r1.intValue()
                r10 = 0
                r1 = r0
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r0
            L48:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r0.<init>()
                throw r0
        }
    }

    static {
            java.lang.String r0 = "ConnectionBlock"
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.bl(r0)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.acH = r0
            return
    }

    private DownloadLaunchRunnable(com.kwad.framework.filedownloader.d.c r3, com.kwad.framework.filedownloader.d.b r4, com.kwad.framework.filedownloader.y r5, int r6, int r7, boolean r8, boolean r9, int r10) {
            r2 = this;
            r2.<init>()
            r0 = 5
            r2.acv = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2.acE = r1
            r0 = 0
            r2.acP = r0
            r2.acQ = r0
            r2.acR = r0
            r2.acS = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            r2.acL = r0
            r0 = 0
            r2.kT = r0
            r2.acB = r0
            r2.acw = r3
            r2.acx = r4
            r2.acy = r8
            r2.acz = r9
            com.kwad.framework.filedownloader.download.b r4 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.b.a r4 = r4.ur()
            r2.acr = r4
            com.kwad.framework.filedownloader.download.b r4 = com.kwad.framework.filedownloader.download.b.up()
            boolean r4 = r4.ut()
            r2.acD = r4
            r2.acA = r5
            r2.acC = r10
            com.kwad.framework.filedownloader.download.d r4 = new com.kwad.framework.filedownloader.download.d
            r4.<init>(r3, r10, r6, r7)
            r2.acu = r4
            return
    }

    DownloadLaunchRunnable(com.kwad.framework.filedownloader.d.c r1, com.kwad.framework.filedownloader.d.b r2, com.kwad.framework.filedownloader.y r3, int r4, int r5, boolean r6, boolean r7, int r8, byte r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private void a(int r3, java.util.List<com.kwad.framework.filedownloader.d.a> r4) {
            r2 = this;
            r0 = 1
            if (r3 <= r0) goto L13
            int r0 = r4.size()
            if (r0 != r3) goto L13
            com.kwad.framework.filedownloader.d.c r3 = r2.acw
            long r0 = r3.getTotal()
            r2.b(r4, r0)
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    private void a(long r10, java.lang.String r12) {
            r9 = this;
            r0 = -1
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L3e
            com.kwad.framework.filedownloader.d.c r0 = r9.acw     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = r0.uE()     // Catch: java.lang.Throwable -> L37
            com.kwad.framework.filedownloader.e.a r1 = com.kwad.framework.filedownloader.f.f.bv(r0)     // Catch: java.lang.Throwable -> L37
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L37
            r0.<init>(r12)     // Catch: java.lang.Throwable -> L37
            long r7 = r0.length()     // Catch: java.lang.Throwable -> L37
            long r5 = r10 - r7
            long r3 = com.kwad.sdk.crash.utils.h.getAvailableBytes(r12)     // Catch: java.lang.Throwable -> L37
            int r12 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r12 < 0) goto L30
            com.kwad.framework.filedownloader.f.e r12 = com.kwad.framework.filedownloader.f.e.vO()     // Catch: java.lang.Throwable -> L37
            boolean r12 = r12.aeO     // Catch: java.lang.Throwable -> L37
            if (r12 != 0) goto L3e
            r1.setLength(r10)     // Catch: java.lang.Throwable -> L37
            goto L3e
        L30:
            com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException r10 = new com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException     // Catch: java.lang.Throwable -> L37
            r2 = r10
            r2.<init>(r3, r5, r7)     // Catch: java.lang.Throwable -> L37
            throw r10     // Catch: java.lang.Throwable -> L37
        L37:
            r10 = move-exception
            if (r1 == 0) goto L3d
            r1.close()
        L3d:
            throw r10
        L3e:
            if (r1 == 0) goto L43
            r1.close()
        L43:
            return
    }

    private void a(com.kwad.framework.filedownloader.download.a r13, com.kwad.framework.filedownloader.a.b r14) {
            r12 = this;
            boolean r0 = r12.acJ
            if (r0 != 0) goto L1a
            com.kwad.framework.filedownloader.d.c r0 = r12.acw
            r1 = 0
            r0.L(r1)
            com.kwad.framework.filedownloader.download.a r0 = new com.kwad.framework.filedownloader.download.a
            r4 = 0
            r6 = 0
            long r8 = r13.acm
            long r10 = r13.contentLength
            r3 = r0
            r3.<init>(r4, r6, r8, r10)
            r13 = r0
        L1a:
            com.kwad.framework.filedownloader.download.e$a r0 = new com.kwad.framework.filedownloader.download.e$a
            r0.<init>()
            com.kwad.framework.filedownloader.download.e$a r1 = r0.b(r12)
            com.kwad.framework.filedownloader.d.c r2 = r12.acw
            int r2 = r2.getId()
            com.kwad.framework.filedownloader.download.e$a r1 = r1.br(r2)
            r2 = -1
            com.kwad.framework.filedownloader.download.e$a r1 = r1.bq(r2)
            boolean r2 = r12.acz
            com.kwad.framework.filedownloader.download.e$a r1 = r1.aY(r2)
            com.kwad.framework.filedownloader.download.e$a r14 = r1.d(r14)
            com.kwad.framework.filedownloader.download.e$a r13 = r14.c(r13)
            com.kwad.framework.filedownloader.d.c r14 = r12.acw
            java.lang.String r14 = r14.uE()
            r13.bg(r14)
            com.kwad.framework.filedownloader.d.c r13 = r12.acw
            r14 = 1
            r13.by(r14)
            com.kwad.framework.filedownloader.b.a r13 = r12.acr
            com.kwad.framework.filedownloader.d.c r1 = r12.acw
            int r1 = r1.getId()
            r13.q(r1, r14)
            com.kwad.framework.filedownloader.download.e r13 = r0.uT()
            r12.acF = r13
            boolean r13 = r12.kT
            if (r13 == 0) goto L70
            com.kwad.framework.filedownloader.d.c r13 = r12.acw
            r14 = -2
            r13.d(r14)
            com.kwad.framework.filedownloader.download.e r13 = r12.acF
            r13.pause()
            return
        L70:
            com.kwad.framework.filedownloader.download.e r13 = r12.acF
            r13.run()
            return
    }

    private void a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r17, com.kwad.framework.filedownloader.download.ConnectTask r18, com.kwad.framework.filedownloader.a.b r19) {
            r16 = this;
            r0 = r16
            r1 = r19
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            int r4 = r2.getId()
            int r2 = r19.getResponseCode()
            r3 = 0
            r5 = 1
            r6 = 206(0xce, float:2.89E-43)
            if (r2 == r6) goto L19
            if (r2 != r5) goto L17
            goto L19
        L17:
            r6 = r3
            goto L1a
        L19:
            r6 = r5
        L1a:
            r0.acJ = r6
            r6 = 200(0xc8, float:2.8E-43)
            r7 = 201(0xc9, float:2.82E-43)
            if (r2 == r6) goto L29
            if (r2 == r7) goto L29
            if (r2 != 0) goto L27
            goto L29
        L27:
            r6 = r3
            goto L2a
        L29:
            r6 = r5
        L2a:
            com.kwad.framework.filedownloader.d.c r8 = r0.acw
            java.lang.String r8 = r8.vn()
            java.lang.String r13 = com.kwad.framework.filedownloader.f.f.a(r4, r1)
            r9 = 412(0x19c, float:5.77E-43)
            r10 = 0
            if (r2 != r9) goto L3c
        L3a:
            r7 = r5
            goto L64
        L3c:
            if (r8 == 0) goto L4b
            boolean r9 = r8.equals(r13)
            if (r9 != 0) goto L4b
            if (r6 != 0) goto L3a
            boolean r9 = r0.acJ
            if (r9 == 0) goto L4b
            goto L3a
        L4b:
            if (r2 != r7) goto L54
            boolean r7 = r18.ul()
            if (r7 == 0) goto L54
            goto L3a
        L54:
            r7 = 416(0x1a0, float:5.83E-43)
            if (r2 != r7) goto L63
            com.kwad.framework.filedownloader.d.c r7 = r0.acw
            long r14 = r7.vm()
            int r7 = (r14 > r10 ? 1 : (r14 == r10 ? 0 : -1))
            if (r7 <= 0) goto L63
            goto L3a
        L63:
            r7 = r3
        L64:
            r9 = 0
            if (r7 == 0) goto Lf8
            boolean r1 = r0.acI
            r6 = 3
            r7 = 2
            r12 = 4
            if (r1 == 0) goto L85
            java.lang.Object[] r1 = new java.lang.Object[r12]
            java.lang.Integer r14 = java.lang.Integer.valueOf(r4)
            r1[r3] = r14
            r1[r5] = r8
            r1[r7] = r13
            java.lang.Integer r14 = java.lang.Integer.valueOf(r2)
            r1[r6] = r14
            java.lang.String r14 = "there is precondition failed on this request[%d] with old etag[%s]、new etag[%s]、response requestHttpCode is %d"
            com.kwad.framework.filedownloader.f.d.d(r0, r14, r1)
        L85:
            com.kwad.framework.filedownloader.b.a r1 = r0.acr
            com.kwad.framework.filedownloader.d.c r14 = r0.acw
            int r14 = r14.getId()
            r1.bh(r14)
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            java.lang.String r1 = r1.getTargetFilePath()
            com.kwad.framework.filedownloader.d.c r14 = r0.acw
            java.lang.String r14 = r14.uE()
            com.kwad.framework.filedownloader.f.f.s(r1, r14)
            r0.acI = r3
            if (r8 == 0) goto Lc1
            boolean r1 = r8.equals(r13)
            if (r1 == 0) goto Lc1
            java.lang.Object[] r1 = new java.lang.Object[r12]
            r1[r3] = r8
            r1[r5] = r13
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r7] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)
            r1[r6] = r2
            java.lang.String r2 = "the old etag[%s] is the same to the new etag[%s], but the response status requestHttpCode is %d not Partial(206), so wo have to start this task from very beginning for task[%d]!"
            com.kwad.framework.filedownloader.f.d.d(r0, r2, r1)
            r13 = r9
        Lc1:
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r1.L(r10)
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r1.N(r10)
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r1.bi(r13)
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r1.vq()
            com.kwad.framework.filedownloader.b.a r3 = r0.acr
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            java.lang.String r5 = r1.vn()
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            long r6 = r1.vm()
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            long r8 = r1.getTotal()
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            int r10 = r1.vp()
            r3.a(r4, r5, r6, r8, r10)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$RetryDirectly r1 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$RetryDirectly
            r1.<init>(r0)
            throw r1
        Lf8:
            java.lang.String r7 = r18.um()
            r0.acO = r7
            boolean r7 = r0.acJ
            if (r7 != 0) goto L111
            if (r6 == 0) goto L105
            goto L111
        L105:
            com.kwad.framework.filedownloader.exception.FileDownloadHttpException r3 = new com.kwad.framework.filedownloader.exception.FileDownloadHttpException
            java.util.Map r1 = r19.uf()
            r4 = r17
            r3.<init>(r2, r4, r1)
            throw r3
        L111:
            long r6 = com.kwad.framework.filedownloader.f.f.b(r4, r1)
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            boolean r2 = r2.sT()
            if (r2 == 0) goto L129
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            java.lang.String r2 = r2.getUrl()
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.a(r1, r2)
            r14 = r1
            goto L12a
        L129:
            r14 = r9
        L12a:
            r1 = -1
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 != 0) goto L132
            r1 = r5
            goto L133
        L132:
            r1 = r3
        L133:
            r0.acK = r1
            if (r1 != 0) goto L140
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            long r1 = r1.vm()
            long r1 = r1 + r6
            r11 = r1
            goto L141
        L140:
            r11 = r6
        L141:
            com.kwad.framework.filedownloader.download.d r9 = r0.acu
            boolean r1 = r0.acI
            if (r1 == 0) goto L14d
            boolean r1 = r0.acJ
            if (r1 == 0) goto L14d
            r10 = r5
            goto L14e
        L14d:
            r10 = r3
        L14e:
            r9.a(r10, r11, r13, r14)
            return
    }

    private void b(long r18, int r20) {
            r17 = this;
            r0 = r17
            r1 = r18
            r3 = r20
            long r4 = (long) r3
            long r4 = r1 / r4
            com.kwad.framework.filedownloader.d.c r6 = r0.acw
            int r6 = r6.getId()
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r8 = 0
            r10 = 0
            r11 = r8
        L18:
            if (r10 >= r3) goto L45
            int r13 = r3 + (-1)
            if (r10 != r13) goto L20
            r13 = r8
            goto L25
        L20:
            long r13 = r11 + r4
            r15 = 1
            long r13 = r13 - r15
        L25:
            com.kwad.framework.filedownloader.d.a r15 = new com.kwad.framework.filedownloader.d.a
            r15.<init>()
            r15.setId(r6)
            r15.setIndex(r10)
            r15.setStartOffset(r11)
            r15.J(r11)
            r15.K(r13)
            r7.add(r15)
            com.kwad.framework.filedownloader.b.a r13 = r0.acr
            r13.a(r15)
            long r11 = r11 + r4
            int r10 = r10 + 1
            goto L18
        L45:
            com.kwad.framework.filedownloader.d.c r4 = r0.acw
            r4.by(r3)
            com.kwad.framework.filedownloader.b.a r4 = r0.acr
            r4.q(r6, r3)
            r0.b(r7, r1)
            return
    }

    private void b(java.util.List<com.kwad.framework.filedownloader.d.a> r28, long r29) {
            r27 = this;
            r0 = r27
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            int r1 = r1.getId()
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            java.lang.String r2 = r2.vn()
            java.lang.String r3 = r0.acO
            if (r3 == 0) goto L13
            goto L19
        L13:
            com.kwad.framework.filedownloader.d.c r3 = r0.acw
            java.lang.String r3 = r3.getUrl()
        L19:
            com.kwad.framework.filedownloader.d.c r4 = r0.acw
            java.lang.String r4 = r4.uE()
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI
            r6 = 3
            r7 = 2
            r8 = 1
            r9 = 0
            if (r5 == 0) goto L44
            java.lang.Object[] r5 = new java.lang.Object[r6]
            int r10 = r28.size()
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r5[r9] = r10
            java.lang.Integer r10 = java.lang.Integer.valueOf(r1)
            r5[r8] = r10
            java.lang.Long r10 = java.lang.Long.valueOf(r29)
            r5[r7] = r10
            java.lang.String r10 = "fetch data with multiple connection(count: [%d]) for task[%d] totalLength[%d]"
            com.kwad.framework.filedownloader.f.d.c(r0, r10, r5)
        L44:
            boolean r5 = r0.acI
            java.util.Iterator r10 = r28.iterator()
            r11 = 0
            r13 = r11
        L4d:
            boolean r15 = r10.hasNext()
            if (r15 == 0) goto L110
            java.lang.Object r15 = r10.next()
            com.kwad.framework.filedownloader.d.a r15 = (com.kwad.framework.filedownloader.d.a) r15
            long r16 = r15.vj()
            int r16 = (r16 > r11 ? 1 : (r16 == r11 ? 0 : -1))
            if (r16 != 0) goto L68
            long r16 = r15.vi()
            long r16 = r29 - r16
            goto L76
        L68:
            long r16 = r15.vj()
            long r18 = r15.vi()
            long r16 = r16 - r18
            r18 = 1
            long r16 = r16 + r18
        L76:
            r25 = r16
            long r16 = r15.vi()
            long r18 = r15.getStartOffset()
            long r16 = r16 - r18
            long r13 = r13 + r16
            int r16 = (r25 > r11 ? 1 : (r25 == r11 ? 0 : -1))
            if (r16 != 0) goto La8
            boolean r16 = com.kwad.framework.filedownloader.f.d.aeI
            if (r16 == 0) goto L10b
            java.lang.Object[] r11 = new java.lang.Object[r7]
            int r12 = r15.getId()
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)
            r11[r9] = r12
            int r12 = r15.getIndex()
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)
            r11[r8] = r12
            java.lang.String r12 = "pass connection[%d-%d], because it has been completed"
            com.kwad.framework.filedownloader.f.d.c(r0, r12, r11)
            goto L10b
        La8:
            com.kwad.framework.filedownloader.download.c$a r11 = new com.kwad.framework.filedownloader.download.c$a
            r11.<init>()
            com.kwad.framework.filedownloader.download.a r12 = new com.kwad.framework.filedownloader.download.a
            long r19 = r15.getStartOffset()
            long r21 = r15.vi()
            long r23 = r15.vj()
            r18 = r12
            r18.<init>(r19, r21, r23, r25)
            com.kwad.framework.filedownloader.download.c$a r11 = r11.bo(r1)
            int r18 = r15.getIndex()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r18)
            com.kwad.framework.filedownloader.download.c$a r6 = r11.d(r6)
            com.kwad.framework.filedownloader.download.c$a r6 = r6.a(r0)
            com.kwad.framework.filedownloader.download.c$a r6 = r6.bd(r3)
            if (r5 == 0) goto Ldc
            r11 = r2
            goto Ldd
        Ldc:
            r11 = 0
        Ldd:
            com.kwad.framework.filedownloader.download.c$a r6 = r6.be(r11)
            com.kwad.framework.filedownloader.d.b r11 = r0.acx
            com.kwad.framework.filedownloader.download.c$a r6 = r6.c(r11)
            boolean r11 = r0.acz
            com.kwad.framework.filedownloader.download.c$a r6 = r6.aW(r11)
            com.kwad.framework.filedownloader.download.c$a r6 = r6.b(r12)
            com.kwad.framework.filedownloader.download.c$a r6 = r6.bf(r4)
            com.kwad.framework.filedownloader.download.c r6 = r6.uG()
            boolean r11 = com.kwad.framework.filedownloader.f.d.aeI
            if (r11 == 0) goto L106
            java.lang.Object[] r11 = new java.lang.Object[r8]
            r11[r9] = r15
            java.lang.String r12 = "enable multiple connection: %s"
            com.kwad.framework.filedownloader.f.d.c(r0, r12, r11)
        L106:
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r11 = r0.acE
            r11.add(r6)
        L10b:
            r6 = 3
            r11 = 0
            goto L4d
        L110:
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            long r2 = r2.vm()
            int r2 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r2 == 0) goto L138
            java.lang.Object[] r2 = new java.lang.Object[r7]
            com.kwad.framework.filedownloader.d.c r3 = r0.acw
            long r3 = r3.vm()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r9] = r3
            java.lang.Long r3 = java.lang.Long.valueOf(r13)
            r2[r8] = r3
            java.lang.String r3 = "correct the sofar[%d] from connection table[%d]"
            com.kwad.framework.filedownloader.f.d.d(r0, r3, r2)
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            r2.L(r13)
        L138:
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r3 = r0.acE
            int r3 = r3.size()
            r2.<init>(r3)
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r3 = r0.acE
            java.util.Iterator r3 = r3.iterator()
        L149:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L165
            java.lang.Object r4 = r3.next()
            com.kwad.framework.filedownloader.download.c r4 = (com.kwad.framework.filedownloader.download.c) r4
            boolean r5 = r0.kT
            if (r5 == 0) goto L15d
            r4.pause()
            goto L149
        L15d:
            java.util.concurrent.Callable r4 = java.util.concurrent.Executors.callable(r4)
            r2.add(r4)
            goto L149
        L165:
            boolean r3 = r0.kT
            if (r3 == 0) goto L170
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r2 = -2
            r1.d(r2)
            return
        L170:
            java.util.concurrent.ThreadPoolExecutor r3 = com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.acH
            java.util.List r2 = r3.invokeAll(r2)
            boolean r3 = com.kwad.framework.filedownloader.f.d.aeI
            if (r3 == 0) goto L1ad
            java.util.Iterator r2 = r2.iterator()
        L17e:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L1ad
            java.lang.Object r3 = r2.next()
            java.util.concurrent.Future r3 = (java.util.concurrent.Future) r3
            r4 = 3
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r1)
            r5[r9] = r6
            boolean r6 = r3.isDone()
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r5[r8] = r6
            boolean r3 = r3.isCancelled()
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r5[r7] = r3
            java.lang.String r3 = "finish sub-task for [%d] %B %B"
            com.kwad.framework.filedownloader.f.d.c(r0, r3, r5)
            goto L17e
        L1ad:
            return
    }

    private com.kwad.framework.filedownloader.download.a n(java.util.List<com.kwad.framework.filedownloader.d.a> r21) {
            r20 = this;
            r0 = r20
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            int r1 = r1.vp()
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            java.lang.String r2 = r2.uE()
            com.kwad.framework.filedownloader.d.c r3 = r0.acw
            java.lang.String r3 = r3.getTargetFilePath()
            r4 = 0
            r5 = 1
            if (r1 <= r5) goto L1a
            r6 = r5
            goto L1b
        L1a:
            r6 = r4
        L1b:
            r7 = 0
            if (r6 == 0) goto L23
            boolean r9 = r0.acD
            if (r9 == 0) goto L54
        L23:
            com.kwad.framework.filedownloader.d.c r9 = r0.acw
            int r9 = r9.getId()
            com.kwad.framework.filedownloader.d.c r10 = r0.acw
            boolean r9 = com.kwad.framework.filedownloader.f.f.b(r9, r10)
            if (r9 == 0) goto L54
            boolean r9 = r0.acD
            if (r9 != 0) goto L40
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            long r9 = r1.length()
        L3e:
            r14 = r9
            goto L55
        L40:
            if (r6 == 0) goto L4d
            int r6 = r21.size()
            if (r1 != r6) goto L54
            long r9 = com.kwad.framework.filedownloader.d.a.o(r21)
            goto L3e
        L4d:
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            long r9 = r1.vm()
            goto L3e
        L54:
            r14 = r7
        L55:
            com.kwad.framework.filedownloader.d.c r1 = r0.acw
            r1.L(r14)
            int r1 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
            if (r1 <= 0) goto L5f
            r4 = r5
        L5f:
            r0.acI = r4
            if (r4 != 0) goto L71
            com.kwad.framework.filedownloader.b.a r1 = r0.acr
            com.kwad.framework.filedownloader.d.c r4 = r0.acw
            int r4 = r4.getId()
            r1.bh(r4)
            com.kwad.framework.filedownloader.f.f.s(r3, r2)
        L71:
            com.kwad.framework.filedownloader.download.a r1 = new com.kwad.framework.filedownloader.download.a
            r12 = 0
            r16 = 0
            com.kwad.framework.filedownloader.d.c r2 = r0.acw
            long r2 = r2.getTotal()
            long r18 = r2 - r14
            r11 = r1
            r11.<init>(r12, r14, r16, r18)
            return r1
    }

    private boolean uA() {
            r3 = this;
            boolean r0 = r3.acI
            r1 = 0
            r2 = 1
            if (r0 == 0) goto Lf
            com.kwad.framework.filedownloader.d.c r0 = r3.acw
            int r0 = r0.vp()
            if (r0 > r2) goto Lf
            return r1
        Lf:
            boolean r0 = r3.acJ
            if (r0 == 0) goto L1c
            boolean r0 = r3.acD
            if (r0 == 0) goto L1c
            boolean r0 = r3.acK
            if (r0 != 0) goto L1c
            return r2
        L1c:
            return r1
    }

    private void uC() {
            r5 = this;
            boolean r0 = r5.acz
            if (r0 == 0) goto L2c
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r1 = com.kwad.framework.filedownloader.f.f.bt(r0)
            if (r1 == 0) goto Ld
            goto L2c
        Ld:
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r1 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            com.kwad.framework.filedownloader.d.c r4 = r5.acw
            int r4 = r4.getId()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r2[r3] = r4
            r3 = 1
            r2[r3] = r0
            java.lang.String r0 = "Task[%d] can't start the download runnable, because this task require wifi, but user application nor current process has %s, so we can't check whether the network type connection."
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r0, r2)
            r1.<init>(r0)
            throw r1
        L2c:
            boolean r0 = r5.acz
            if (r0 == 0) goto L3d
            boolean r0 = com.kwad.framework.filedownloader.f.f.vT()
            if (r0 != 0) goto L37
            goto L3d
        L37:
            com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException
            r0.<init>()
            throw r0
        L3d:
            return
    }

    private void uD() {
            r7 = this;
            com.kwad.framework.filedownloader.d.c r0 = r7.acw
            int r0 = r0.getId()
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            boolean r1 = r1.sT()
            if (r1 == 0) goto Le8
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            java.lang.String r5 = r1.getTargetFilePath()
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            java.lang.String r1 = r1.getUrl()
            int r1 = com.kwad.framework.filedownloader.f.f.r(r1, r5)
            boolean r2 = r7.acy
            r3 = 0
            boolean r2 = com.kwad.framework.filedownloader.f.c.a(r0, r5, r2, r3)
            if (r2 != 0) goto Ld8
            com.kwad.framework.filedownloader.b.a r2 = r7.acr
            com.kwad.framework.filedownloader.d.c r2 = r2.bf(r1)
            if (r2 == 0) goto Lb2
            com.kwad.framework.filedownloader.y r4 = r7.acA
            boolean r3 = com.kwad.framework.filedownloader.f.c.a(r0, r2, r4, r3)
            if (r3 != 0) goto La2
            com.kwad.framework.filedownloader.b.a r3 = r7.acr
            java.util.List r3 = r3.bg(r1)
            com.kwad.framework.filedownloader.b.a r4 = r7.acr
            r4.bi(r1)
            com.kwad.framework.filedownloader.b.a r4 = r7.acr
            r4.bh(r1)
            com.kwad.framework.filedownloader.d.c r4 = r7.acw
            java.lang.String r4 = r4.getTargetFilePath()
            com.kwad.framework.filedownloader.f.f.bx(r4)
            boolean r1 = com.kwad.framework.filedownloader.f.f.b(r1, r2)
            if (r1 == 0) goto Lb2
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            long r4 = r2.vm()
            r1.L(r4)
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            long r4 = r2.getTotal()
            r1.N(r4)
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            java.lang.String r4 = r2.vn()
            r1.bi(r4)
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            int r2 = r2.vp()
            r1.by(r2)
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            com.kwad.framework.filedownloader.d.c r2 = r7.acw
            r1.b(r2)
            if (r3 == 0) goto L9c
            java.util.Iterator r1 = r3.iterator()
        L87:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L9c
            java.lang.Object r2 = r1.next()
            com.kwad.framework.filedownloader.d.a r2 = (com.kwad.framework.filedownloader.d.a) r2
            r2.setId(r0)
            com.kwad.framework.filedownloader.b.a r3 = r7.acr
            r3.a(r2)
            goto L87
        L9c:
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$RetryDirectly r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$RetryDirectly
            r0.<init>(r7)
            throw r0
        La2:
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bi(r0)
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bh(r0)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely
            r0.<init>(r7)
            throw r0
        Lb2:
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            long r2 = r1.vm()
            com.kwad.framework.filedownloader.d.c r1 = r7.acw
            java.lang.String r4 = r1.uE()
            com.kwad.framework.filedownloader.y r6 = r7.acA
            r1 = r0
            boolean r1 = com.kwad.framework.filedownloader.f.c.a(r1, r2, r4, r5, r6)
            if (r1 != 0) goto Lc8
            goto Le8
        Lc8:
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bi(r0)
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bh(r0)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely
            r0.<init>(r7)
            throw r0
        Ld8:
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bi(r0)
            com.kwad.framework.filedownloader.b.a r1 = r7.acr
            r1.bh(r0)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$DiscardSafely
            r0.<init>(r7)
            throw r0
        Le8:
            return
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.download.c r10, long r11, long r13) {
            r9 = this;
            boolean r0 = r9.kT
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L1e
            boolean r10 = com.kwad.framework.filedownloader.f.d.aeI
            if (r10 == 0) goto L1d
            java.lang.Object[] r10 = new java.lang.Object[r2]
            com.kwad.framework.filedownloader.d.c r11 = r9.acw
            int r11 = r11.getId()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r10[r1] = r11
            java.lang.String r11 = "the task[%d] has already been paused, so pass the completed callback"
            com.kwad.framework.filedownloader.f.d.c(r9, r11, r10)
        L1d:
            return
        L1e:
            if (r10 != 0) goto L22
            r0 = -1
            goto L24
        L22:
            int r0 = r10.adb
        L24:
            boolean r3 = com.kwad.framework.filedownloader.f.d.aeI
            r4 = 3
            r5 = 2
            r6 = 4
            if (r3 == 0) goto L50
            java.lang.Object[] r3 = new java.lang.Object[r6]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r3[r1] = r0
            java.lang.Long r0 = java.lang.Long.valueOf(r11)
            r3[r2] = r0
            java.lang.Long r0 = java.lang.Long.valueOf(r13)
            r3[r5] = r0
            com.kwad.framework.filedownloader.d.c r0 = r9.acw
            long r7 = r0.getTotal()
            java.lang.Long r0 = java.lang.Long.valueOf(r7)
            r3[r4] = r0
            java.lang.String r0 = "the connection has been completed(%d): [%d, %d)  %d"
            com.kwad.framework.filedownloader.f.d.c(r9, r0, r3)
        L50:
            boolean r0 = r9.acG
            if (r0 == 0) goto L90
            r7 = 0
            int r10 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
            if (r10 == 0) goto L8f
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            long r7 = r10.getTotal()
            int r10 = (r13 > r7 ? 1 : (r13 == r7 ? 0 : -1))
            if (r10 == 0) goto L8f
            java.lang.Object[] r10 = new java.lang.Object[r6]
            java.lang.Long r11 = java.lang.Long.valueOf(r11)
            r10[r1] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r13)
            r10[r2] = r11
            com.kwad.framework.filedownloader.d.c r11 = r9.acw
            long r11 = r11.getTotal()
            java.lang.Long r11 = java.lang.Long.valueOf(r11)
            r10[r5] = r11
            com.kwad.framework.filedownloader.d.c r11 = r9.acw
            int r11 = r11.getId()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r10[r4] = r11
            java.lang.String r11 = "the single task not completed corrected(%d, %d != %d) for task(%d)"
            com.kwad.framework.filedownloader.f.d.a(r9, r11, r10)
        L8f:
            return
        L90:
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r11 = r9.acE
            monitor-enter(r11)
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r12 = r9.acE     // Catch: java.lang.Throwable -> L9a
            r12.remove(r10)     // Catch: java.lang.Throwable -> L9a
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L9a
            return
        L9a:
            r10 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L9a
            throw r10
    }

    @Override
    public final void a(java.lang.Exception r5, long r6) {
            r4 = this;
            boolean r0 = r4.kT
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L1e
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI
            if (r5 == 0) goto L1d
            java.lang.Object[] r5 = new java.lang.Object[r2]
            com.kwad.framework.filedownloader.d.c r6 = r4.acw
            int r6 = r6.getId()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5[r1] = r6
            java.lang.String r6 = "the task[%d] has already been paused, so pass the retry callback"
            com.kwad.framework.filedownloader.f.d.c(r4, r6, r5)
        L1d:
            return
        L1e:
            int r0 = r4.acC
            int r3 = r0 + (-1)
            r4.acC = r3
            if (r0 >= 0) goto L40
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r1] = r3
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            int r1 = r1.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r2] = r1
            java.lang.String r1 = "valid retry times is less than 0(%d) for download task(%d)"
            com.kwad.framework.filedownloader.f.d.a(r4, r1, r0)
        L40:
            com.kwad.framework.filedownloader.download.d r0 = r4.acu
            int r1 = r4.acC
            r0.a(r5, r1, r6)
            return
    }

    @Override
    public final boolean a(java.lang.Exception r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.kwad.framework.filedownloader.exception.FileDownloadHttpException
            r1 = 1
            if (r0 == 0) goto L2a
            r0 = r4
            com.kwad.framework.filedownloader.exception.FileDownloadHttpException r0 = (com.kwad.framework.filedownloader.exception.FileDownloadHttpException) r0
            int r0 = r0.getCode()
            boolean r2 = r3.acG
            if (r2 == 0) goto L2a
            r2 = 416(0x1a0, float:5.83E-43)
            if (r0 != r2) goto L2a
            boolean r0 = r3.acB
            if (r0 != 0) goto L2a
            com.kwad.framework.filedownloader.d.c r4 = r3.acw
            java.lang.String r4 = r4.getTargetFilePath()
            com.kwad.framework.filedownloader.d.c r0 = r3.acw
            java.lang.String r0 = r0.uE()
            com.kwad.framework.filedownloader.f.f.s(r4, r0)
            r3.acB = r1
            return r1
        L2a:
            int r0 = r3.acC
            if (r0 <= 0) goto L33
            boolean r4 = r4 instanceof com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            if (r4 != 0) goto L33
            return r1
        L33:
            r4 = 0
            return r4
    }

    @Override
    public final void b(java.lang.Exception r3) {
            r2 = this;
            r0 = 1
            r2.acM = r0
            r2.acN = r3
            boolean r3 = r2.kT
            if (r3 == 0) goto L22
            boolean r3 = com.kwad.framework.filedownloader.f.d.aeI
            if (r3 == 0) goto L21
            java.lang.Object[] r3 = new java.lang.Object[r0]
            r0 = 0
            com.kwad.framework.filedownloader.d.c r1 = r2.acw
            int r1 = r1.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r0] = r1
            java.lang.String r0 = "the task[%d] has already been paused, so pass the error callback"
            com.kwad.framework.filedownloader.f.d.c(r2, r0, r3)
        L21:
            return
        L22:
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r3 = r2.acE
            java.lang.Object r3 = r3.clone()
            java.util.ArrayList r3 = (java.util.ArrayList) r3
            java.util.Iterator r3 = r3.iterator()
        L2e:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L40
            java.lang.Object r0 = r3.next()
            com.kwad.framework.filedownloader.download.c r0 = (com.kwad.framework.filedownloader.download.c) r0
            if (r0 == 0) goto L2e
            r0.tM()
            goto L2e
        L40:
            return
    }

    public final int getId() {
            r1 = this;
            com.kwad.framework.filedownloader.d.c r0 = r1.acw
            int r0 = r0.getId()
            return r0
    }

    public final boolean isAlive() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.acL
            boolean r0 = r0.get()
            if (r0 != 0) goto L13
            com.kwad.framework.filedownloader.download.d r0 = r1.acu
            boolean r0 = r0.isAlive()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    @Override
    public final void onProgress(long r2) {
            r1 = this;
            boolean r0 = r1.kT
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.framework.filedownloader.download.d r0 = r1.acu
            r0.onProgress(r2)
            return
    }

    public final void pause() {
            r2 = this;
            r0 = 1
            r2.kT = r0
            com.kwad.framework.filedownloader.download.e r0 = r2.acF
            if (r0 == 0) goto La
            r0.pause()
        La:
            java.util.ArrayList<com.kwad.framework.filedownloader.download.c> r0 = r2.acE
            java.lang.Object r0 = r0.clone()
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()
            com.kwad.framework.filedownloader.download.c r1 = (com.kwad.framework.filedownloader.download.c) r1
            if (r1 == 0) goto L16
            r1.pause()
            goto L16
        L28:
            return
    }

    @Override
    public final void run() {
            r19 = this;
            r1 = r19
            r2 = 10
            r3 = 0
            android.os.Process.setThreadPriority(r2)     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.d.c r2 = r1.acw     // Catch: java.lang.Throwable -> L28f
            byte r2 = r2.sX()     // Catch: java.lang.Throwable -> L28f
            java.lang.String r4 = "High concurrent cause, start runnable but already paused %d"
            r5 = -2
            r6 = 1
            if (r2 == r6) goto L90
            com.kwad.framework.filedownloader.d.c r2 = r1.acw     // Catch: java.lang.Throwable -> L28f
            byte r2 = r2.sX()     // Catch: java.lang.Throwable -> L28f
            if (r2 != r5) goto L32
            boolean r2 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L28f
            if (r2 == 0) goto L62
            java.lang.Object[] r2 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.d.c r5 = r1.acw     // Catch: java.lang.Throwable -> L28f
            int r5 = r5.getId()     // Catch: java.lang.Throwable -> L28f
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L28f
            r2[r3] = r5     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.f.d.c(r1, r4, r2)     // Catch: java.lang.Throwable -> L28f
            goto L62
        L32:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L28f
            java.lang.String r4 = "Task[%d] can't start the download runnable, because its status is %d not %d"
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.d.c r7 = r1.acw     // Catch: java.lang.Throwable -> L28f
            int r7 = r7.getId()     // Catch: java.lang.Throwable -> L28f
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L28f
            r5[r3] = r7     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.d.c r7 = r1.acw     // Catch: java.lang.Throwable -> L28f
            byte r7 = r7.sX()     // Catch: java.lang.Throwable -> L28f
            java.lang.Byte r7 = java.lang.Byte.valueOf(r7)     // Catch: java.lang.Throwable -> L28f
            r5[r6] = r7     // Catch: java.lang.Throwable -> L28f
            r7 = 2
            java.lang.Byte r6 = java.lang.Byte.valueOf(r6)     // Catch: java.lang.Throwable -> L28f
            r5[r7] = r6     // Catch: java.lang.Throwable -> L28f
            java.lang.String r4 = com.kwad.framework.filedownloader.f.f.b(r4, r5)     // Catch: java.lang.Throwable -> L28f
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L28f
            r1.b(r2)     // Catch: java.lang.Throwable -> L28f
        L62:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto L71
        L6b:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uL()
            goto L8a
        L71:
            boolean r2 = r1.acM
            if (r2 == 0) goto L7d
        L75:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            java.lang.Exception r4 = r1.acN
            r2.c(r4)
            goto L8a
        L7d:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> L83
            r2.uM()     // Catch: java.io.IOException -> L83
            goto L8a
        L83:
            r0 = move-exception
            r2 = r0
        L85:
            com.kwad.framework.filedownloader.download.d r4 = r1.acu
            r4.c(r2)
        L8a:
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.acL
            r2.set(r3)
            return
        L90:
            boolean r2 = r1.kT     // Catch: java.lang.Throwable -> L28f
            if (r2 != 0) goto L99
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.lang.Throwable -> L28f
            r2.uJ()     // Catch: java.lang.Throwable -> L28f
        L99:
            boolean r2 = r1.kT     // Catch: java.lang.Throwable -> L28f
            if (r2 == 0) goto Lca
            boolean r2 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L28f
            if (r2 == 0) goto Lb2
            java.lang.Object[] r2 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.d.c r5 = r1.acw     // Catch: java.lang.Throwable -> L28f
            int r5 = r5.getId()     // Catch: java.lang.Throwable -> L28f
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L28f
            r2[r3] = r5     // Catch: java.lang.Throwable -> L28f
            com.kwad.framework.filedownloader.f.d.c(r1, r4, r2)     // Catch: java.lang.Throwable -> L28f
        Lb2:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto Lbc
            goto L6b
        Lbc:
            boolean r2 = r1.acM
            if (r2 == 0) goto Lc1
            goto L75
        Lc1:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> Lc7
            r2.uM()     // Catch: java.io.IOException -> Lc7
            goto L8a
        Lc7:
            r0 = move-exception
            r2 = r0
            goto L85
        Lca:
            com.kwad.framework.filedownloader.b.a r2 = r1.acr     // Catch: java.lang.Throwable -> L28f
            if (r2 == 0) goto L273
            r2 = 0
            r19.uC()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.b.a r7 = r1.acr     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.d.c r8 = r1.acw     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            int r8 = r8.getId()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            java.util.List r7 = r7.bg(r8)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.a r8 = r1.n(r7)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r9 = new com.kwad.framework.filedownloader.download.ConnectTask$a     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            r9.<init>()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            int r10 = r10.getId()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r9 = r9.bn(r10)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            java.lang.String r10 = r10.getUrl()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r9 = r9.ba(r10)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            java.lang.String r10 = r10.vn()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r9 = r9.bb(r10)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.d.b r10 = r1.acx     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r9 = r9.a(r10)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask$a r8 = r9.a(r8)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.download.ConnectTask r8 = r8.uo()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            com.kwad.framework.filedownloader.a.b r9 = r8.uk()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            java.util.Map r10 = r8.getRequestHeader()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r1.a(r10, r8, r9)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            boolean r10 = r1.kT     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r10 == 0) goto L148
            com.kwad.framework.filedownloader.d.c r2 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r2.d(r5)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r9 == 0) goto L12c
            r9.ug()     // Catch: java.lang.Throwable -> L28f
        L12c:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto L137
            goto L6b
        L137:
            boolean r2 = r1.acM
            if (r2 == 0) goto L13d
            goto L75
        L13d:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> L144
            r2.uM()     // Catch: java.io.IOException -> L144
            goto L8a
        L144:
            r0 = move-exception
            r2 = r0
            goto L85
        L148:
            r19.uD()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            long r14 = r10.getTotal()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            java.lang.String r10 = r10.uE()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r1.a(r14, r10)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            boolean r10 = r19.uA()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r10 == 0) goto L18d
            boolean r10 = r1.acI     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r10 == 0) goto L16d
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            int r10 = r10.vp()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r17 = r14
            goto L190
        L16d:
            com.kwad.framework.filedownloader.download.b r11 = com.kwad.framework.filedownloader.download.b.up()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            int r12 = r10.getId()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            java.lang.String r13 = r10.getUrl()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            com.kwad.framework.filedownloader.d.c r10 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            java.lang.String r10 = r10.getPath()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r17 = r14
            r14 = r10
            r15 = r17
            int r10 = r11.a(r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            goto L190
        L18d:
            r17 = r14
            r10 = r6
        L190:
            if (r10 <= 0) goto L1ee
            boolean r11 = r1.kT     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r11 == 0) goto L1bc
            com.kwad.framework.filedownloader.d.c r2 = r1.acw     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r2.d(r5)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r9 == 0) goto L1a0
            r9.ug()     // Catch: java.lang.Throwable -> L28f
        L1a0:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto L1ab
            goto L6b
        L1ab:
            boolean r2 = r1.acM
            if (r2 == 0) goto L1b1
            goto L75
        L1b1:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> L1b8
            r2.uM()     // Catch: java.io.IOException -> L1b8
            goto L8a
        L1b8:
            r0 = move-exception
            r2 = r0
            goto L85
        L1bc:
            if (r10 != r6) goto L1c0
            r11 = r6
            goto L1c1
        L1c0:
            r11 = r3
        L1c1:
            r1.acG = r11     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            if (r11 == 0) goto L1cd
            com.kwad.framework.filedownloader.download.a r2 = r8.un()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r1.a(r2, r9)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            goto L1e7
        L1cd:
            if (r9 == 0) goto L1d3
            r9.ug()     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            goto L1d4
        L1d3:
            r2 = r9
        L1d4:
            com.kwad.framework.filedownloader.download.d r8 = r1.acu     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            r8.uK()     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            boolean r8 = r1.acI     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            if (r8 == 0) goto L1e1
            r1.a(r10, r7)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
            goto L1e6
        L1e1:
            r7 = r17
            r1.b(r7, r10)     // Catch: java.lang.Throwable -> L217 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L21a com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L227 java.lang.ArrayIndexOutOfBoundsException -> L248 java.lang.NullPointerException -> L24a com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L24c java.lang.IllegalArgumentException -> L24e java.lang.InterruptedException -> L250 java.lang.IllegalAccessException -> L252 java.io.IOException -> L254
        L1e6:
            r9 = r2
        L1e7:
            if (r9 == 0) goto L273
            r9.ug()     // Catch: java.lang.Throwable -> L28f
            goto L273
        L1ee:
            java.lang.IllegalAccessException r2 = new java.lang.IllegalAccessException     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            java.lang.String r7 = "invalid connection count %d, the connection count must be larger than 0"
            java.lang.Object[] r8 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r8[r3] = r9     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            java.lang.String r7 = com.kwad.framework.filedownloader.f.f.b(r7, r8)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
            throw r2     // Catch: java.lang.Throwable -> L1fe com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.RetryDirectly -> L203 com.kwad.framework.filedownloader.download.DownloadLaunchRunnable.DiscardSafely -> L205 java.lang.ArrayIndexOutOfBoundsException -> L207 java.lang.NullPointerException -> L209 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L20b java.lang.IllegalArgumentException -> L20d java.lang.InterruptedException -> L20f java.lang.IllegalAccessException -> L211 java.io.IOException -> L213
        L1fe:
            r0 = move-exception
            r4 = r0
            r2 = r9
            goto L26d
        L203:
            r2 = r9
            goto L21a
        L205:
            r2 = r9
            goto L227
        L207:
            r0 = move-exception
            goto L214
        L209:
            r0 = move-exception
            goto L214
        L20b:
            r0 = move-exception
            goto L214
        L20d:
            r0 = move-exception
            goto L214
        L20f:
            r0 = move-exception
            goto L214
        L211:
            r0 = move-exception
            goto L214
        L213:
            r0 = move-exception
        L214:
            r7 = r0
            r2 = r9
            goto L256
        L217:
            r0 = move-exception
            r4 = r0
            goto L26d
        L21a:
            com.kwad.framework.filedownloader.d.c r7 = r1.acw     // Catch: java.lang.Throwable -> L217
            r8 = 5
            r7.d(r8)     // Catch: java.lang.Throwable -> L217
            if (r2 == 0) goto L99
        L222:
            r2.ug()     // Catch: java.lang.Throwable -> L28f
            goto L99
        L227:
            if (r2 == 0) goto L22c
            r2.ug()     // Catch: java.lang.Throwable -> L28f
        L22c:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto L237
            goto L6b
        L237:
            boolean r2 = r1.acM
            if (r2 == 0) goto L23d
            goto L75
        L23d:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> L244
            r2.uM()     // Catch: java.io.IOException -> L244
            goto L8a
        L244:
            r0 = move-exception
            r2 = r0
            goto L85
        L248:
            r0 = move-exception
            goto L255
        L24a:
            r0 = move-exception
            goto L255
        L24c:
            r0 = move-exception
            goto L255
        L24e:
            r0 = move-exception
            goto L255
        L250:
            r0 = move-exception
            goto L255
        L252:
            r0 = move-exception
            goto L255
        L254:
            r0 = move-exception
        L255:
            r7 = r0
        L256:
            boolean r8 = r1.a(r7)     // Catch: java.lang.Throwable -> L217
            if (r8 == 0) goto L264
            r8 = 0
            r1.a(r7, r8)     // Catch: java.lang.Throwable -> L217
            if (r2 == 0) goto L99
            goto L222
        L264:
            r1.b(r7)     // Catch: java.lang.Throwable -> L217
            if (r2 == 0) goto L273
            r2.ug()     // Catch: java.lang.Throwable -> L28f
            goto L273
        L26d:
            if (r2 == 0) goto L272
            r2.ug()     // Catch: java.lang.Throwable -> L28f
        L272:
            throw r4     // Catch: java.lang.Throwable -> L28f
        L273:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu
            r2.uH()
            boolean r2 = r1.kT
            if (r2 == 0) goto L27e
            goto L6b
        L27e:
            boolean r2 = r1.acM
            if (r2 == 0) goto L284
            goto L75
        L284:
            com.kwad.framework.filedownloader.download.d r2 = r1.acu     // Catch: java.io.IOException -> L28b
            r2.uM()     // Catch: java.io.IOException -> L28b
            goto L8a
        L28b:
            r0 = move-exception
            r2 = r0
            goto L85
        L28f:
            r0 = move-exception
            r2 = r0
            com.kwad.framework.filedownloader.download.d r4 = r1.acu
            r4.uH()
            boolean r4 = r1.kT
            if (r4 != 0) goto L2b4
            boolean r4 = r1.acM
            if (r4 == 0) goto L2a6
            com.kwad.framework.filedownloader.download.d r4 = r1.acu
            java.lang.Exception r5 = r1.acN
            r4.c(r5)
            goto L2b9
        L2a6:
            com.kwad.framework.filedownloader.download.d r4 = r1.acu     // Catch: java.io.IOException -> L2ac
            r4.uM()     // Catch: java.io.IOException -> L2ac
            goto L2b9
        L2ac:
            r0 = move-exception
            r4 = r0
            com.kwad.framework.filedownloader.download.d r5 = r1.acu
            r5.c(r4)
            goto L2b9
        L2b4:
            com.kwad.framework.filedownloader.download.d r4 = r1.acu
            r4.uL()
        L2b9:
            java.util.concurrent.atomic.AtomicBoolean r4 = r1.acL
            r4.set(r3)
            throw r2
    }

    @Override
    public final void uB() {
            r4 = this;
            com.kwad.framework.filedownloader.b.a r0 = r4.acr
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            int r1 = r1.getId()
            com.kwad.framework.filedownloader.d.c r2 = r4.acw
            long r2 = r2.vm()
            r0.c(r1, r2)
            return
    }

    public final java.lang.String uE() {
            r1 = this;
            com.kwad.framework.filedownloader.d.c r0 = r1.acw
            java.lang.String r0 = r0.uE()
            return r0
    }

    public final void uz() {
            r4 = this;
            com.kwad.framework.filedownloader.d.c r0 = r4.acw
            int r0 = r0.vp()
            r1 = 1
            if (r0 <= r1) goto L3d
            com.kwad.framework.filedownloader.b.a r0 = r4.acr
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            int r1 = r1.getId()
            java.util.List r0 = r0.bg(r1)
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            int r1 = r1.vp()
            int r2 = r0.size()
            if (r1 != r2) goto L2b
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            long r2 = com.kwad.framework.filedownloader.d.a.o(r0)
            r1.L(r2)
            goto L3d
        L2b:
            com.kwad.framework.filedownloader.d.c r0 = r4.acw
            r1 = 0
            r0.L(r1)
            com.kwad.framework.filedownloader.b.a r0 = r4.acr
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            int r1 = r1.getId()
            r0.bh(r1)
        L3d:
            com.kwad.framework.filedownloader.download.d r0 = r4.acu
            r0.uI()
            return
    }
}
