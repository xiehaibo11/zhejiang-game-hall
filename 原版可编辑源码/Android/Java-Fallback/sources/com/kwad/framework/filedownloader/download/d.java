package com.kwad.framework.filedownloader.download;

public final class d implements android.os.Handler.Callback {
    private volatile java.lang.Thread abS;
    private volatile long acQ;
    private final com.kwad.framework.filedownloader.b.a acr;
    private final com.kwad.framework.filedownloader.d.c acw;
    private final com.kwad.framework.filedownloader.download.d.a ade;
    private final int adf;
    private final int adg;
    private final int adh;
    private long adi;
    private android.os.HandlerThread adj;
    private volatile boolean adk;
    private final java.util.concurrent.atomic.AtomicLong adl;
    private volatile boolean adm;
    private boolean adn;
    private android.os.Handler handler;

    public static class a {
        private boolean ado;
        private java.lang.Exception adp;
        private int adq;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        final void aX(boolean r1) {
                r0 = this;
                r0.ado = r1
                return
        }

        final void bp(int r1) {
                r0 = this;
                r0.adq = r1
                return
        }

        final void f(java.lang.Exception r1) {
                r0 = this;
                r0.adp = r1
                return
        }

        public final java.lang.Exception getException() {
                r1 = this;
                java.lang.Exception r0 = r1.adp
                return r0
        }

        public final int tb() {
                r1 = this;
                int r0 = r1.adq
                return r0
        }

        public final boolean uR() {
                r1 = this;
                boolean r0 = r1.ado
                return r0
        }
    }

    d(com.kwad.framework.filedownloader.d.c r3, int r4, int r5, int r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.adk = r0
            r0 = 0
            r2.acQ = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.adl = r0
            r0 = 1
            r2.adn = r0
            r2.acw = r3
            com.kwad.framework.filedownloader.download.b r3 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.b.a r3 = r3.ur()
            r2.acr = r3
            r3 = 5
            if (r5 >= r3) goto L24
            r5 = r3
        L24:
            r2.adg = r5
            r2.adh = r6
            com.kwad.framework.filedownloader.download.d$a r3 = new com.kwad.framework.filedownloader.download.d$a
            r3.<init>()
            r2.ade = r3
            r2.adf = r4
            return
    }

    private boolean I(long r8) {
            r7 = this;
            boolean r0 = r7.adn
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L9
            r7.adn = r2
            return r1
        L9:
            long r3 = r7.acQ
            long r8 = r8 - r3
            long r3 = r7.adi
            r5 = -1
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 == 0) goto L28
            java.util.concurrent.atomic.AtomicLong r0 = r7.adl
            long r3 = r0.get()
            long r5 = r7.adi
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L28
            int r0 = r7.adg
            long r3 = (long) r0
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r8 < 0) goto L28
            return r1
        L28:
            return r2
    }

    private void a(android.database.sqlite.SQLiteFullException r5) {
            r4 = this;
            com.kwad.framework.filedownloader.d.c r0 = r4.acw
            int r0 = r0.getId()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L20
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            r1[r2] = r3
            r2 = 1
            java.lang.String r3 = r5.toString()
            r1[r2] = r3
            java.lang.String r2 = "the data of the task[%d] is dirty, because the SQLite full exception[%s], so remove it from the database directly."
            com.kwad.framework.filedownloader.f.d.c(r4, r2, r1)
        L20:
            com.kwad.framework.filedownloader.d.c r1 = r4.acw
            java.lang.String r5 = r5.toString()
            r1.bj(r5)
            com.kwad.framework.filedownloader.d.c r5 = r4.acw
            r1 = -1
            r5.d(r1)
            com.kwad.framework.filedownloader.b.a r5 = r4.acr
            r5.bi(r0)
            com.kwad.framework.filedownloader.b.a r5 = r4.acr
            r5.bh(r0)
            return
    }

    private void a(java.lang.Exception r3, int r4) {
            r2 = this;
            java.lang.Exception r3 = r2.d(r3)
            com.kwad.framework.filedownloader.download.d$a r0 = r2.ade
            r0.f(r3)
            com.kwad.framework.filedownloader.download.d$a r0 = r2.ade
            int r1 = r2.adf
            int r1 = r1 - r4
            r0.bp(r1)
            com.kwad.framework.filedownloader.d.c r4 = r2.acw
            r0 = 5
            r4.d(r0)
            com.kwad.framework.filedownloader.d.c r4 = r2.acw
            java.lang.String r1 = r3.toString()
            r4.bj(r1)
            com.kwad.framework.filedownloader.b.a r4 = r2.acr
            com.kwad.framework.filedownloader.d.c r1 = r2.acw
            int r1 = r1.getId()
            r4.a(r1, r3)
            r2.c(r0)
            return
    }

    private void b(long r5, boolean r7) {
            r4 = this;
            com.kwad.framework.filedownloader.d.c r0 = r4.acw
            long r0 = r0.vm()
            com.kwad.framework.filedownloader.d.c r2 = r4.acw
            long r2 = r2.getTotal()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L22
            com.kwad.framework.filedownloader.b.a r5 = r4.acr
            com.kwad.framework.filedownloader.d.c r6 = r4.acw
            int r6 = r6.getId()
            com.kwad.framework.filedownloader.d.c r7 = r4.acw
            long r0 = r7.vm()
            r5.c(r6, r0)
            return
        L22:
            boolean r0 = r4.adm
            r1 = 3
            if (r0 == 0) goto L2f
            r0 = 0
            r4.adm = r0
            com.kwad.framework.filedownloader.d.c r0 = r4.acw
            r0.d(r1)
        L2f:
            if (r7 == 0) goto L3d
            r4.acQ = r5
            r4.c(r1)
            java.util.concurrent.atomic.AtomicLong r5 = r4.adl
            r6 = 0
            r5.set(r6)
        L3d:
            return
    }

    private synchronized void b(android.os.Message r5) {
            r4 = this;
            monitor-enter(r4)
            android.os.HandlerThread r0 = r4.adj     // Catch: java.lang.Throwable -> L48
            boolean r0 = r0.isAlive()     // Catch: java.lang.Throwable -> L48
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L20
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L1e
            java.lang.String r0 = "require callback %d but the host thread of the flow has already dead, what is occurred because of there are several reason can final this flow on different thread."
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L48
            int r5 = r5.what     // Catch: java.lang.Throwable -> L48
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L48
            r2[r1] = r5     // Catch: java.lang.Throwable -> L48
            com.kwad.framework.filedownloader.f.d.c(r4, r0, r2)     // Catch: java.lang.Throwable -> L48
        L1e:
            monitor-exit(r4)
            return
        L20:
            android.os.Handler r0 = r4.handler     // Catch: java.lang.IllegalStateException -> L27 java.lang.Throwable -> L48
            r0.sendMessage(r5)     // Catch: java.lang.IllegalStateException -> L27 java.lang.Throwable -> L48
            monitor-exit(r4)
            return
        L27:
            r0 = move-exception
            android.os.HandlerThread r3 = r4.adj     // Catch: java.lang.Throwable -> L48
            boolean r3 = r3.isAlive()     // Catch: java.lang.Throwable -> L48
            if (r3 != 0) goto L47
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L45
            java.lang.String r0 = "require callback %d but the host thread of the flow has already dead, what is occurred because of there are several reason can final this flow on different thread."
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L48
            int r5 = r5.what     // Catch: java.lang.Throwable -> L48
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L48
            r2[r1] = r5     // Catch: java.lang.Throwable -> L48
            com.kwad.framework.filedownloader.f.d.c(r4, r0, r2)     // Catch: java.lang.Throwable -> L48
            monitor-exit(r4)
            return
        L45:
            monitor-exit(r4)
            return
        L47:
            throw r0     // Catch: java.lang.Throwable -> L48
        L48:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private void c(byte r4) {
            r3 = this;
            r0 = -2
            if (r4 != r0) goto L1d
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L1c
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            com.kwad.framework.filedownloader.d.c r1 = r3.acw
            int r1 = r1.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r4[r0] = r1
            java.lang.String r0 = "High concurrent cause, Already paused and we don't need to call-back to Task in here, %d"
            com.kwad.framework.filedownloader.f.d.c(r3, r0, r4)
        L1c:
            return
        L1d:
            com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.vg()
            com.kwad.framework.filedownloader.d.c r1 = r3.acw
            com.kwad.framework.filedownloader.download.d$a r2 = r3.ade
            com.kwad.framework.filedownloader.message.MessageSnapshot r4 = com.kwad.framework.filedownloader.message.f.a(r4, r1, r2)
            r0.s(r4)
            return
    }

    private java.lang.Exception d(java.lang.Exception r11) {
            r10 = this;
            com.kwad.framework.filedownloader.d.c r0 = r10.acw
            java.lang.String r0 = r0.uE()
            com.kwad.framework.filedownloader.d.c r1 = r10.acw
            boolean r1 = r1.isChunked()
            if (r1 != 0) goto L16
            com.kwad.framework.filedownloader.f.e r1 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r1 = r1.aeO
            if (r1 == 0) goto L64
        L16:
            boolean r1 = r11 instanceof java.io.IOException
            if (r1 == 0) goto L64
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r1 = r1.exists()
            if (r1 == 0) goto L64
            long r3 = com.kwad.sdk.crash.utils.h.getAvailableBytes(r0)
            r1 = 4096(0x1000, double:2.0237E-320)
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 > 0) goto L64
            r1 = 0
            java.io.File r5 = new java.io.File
            r5.<init>(r0)
            boolean r0 = r5.exists()
            if (r0 != 0) goto L46
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r5 = "Exception with: free space isn't enough, and the target file not exist."
            com.kwad.framework.filedownloader.f.d.a(r10, r11, r5, r0)
            r7 = r1
            goto L4b
        L46:
            long r0 = r5.length()
            r7 = r0
        L4b:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 9
            if (r0 < r1) goto L5c
            com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException
            r5 = 4096(0x1000, double:2.0237E-320)
            r2 = r0
            r9 = r11
            r2.<init>(r3, r5, r7, r9)
            r11 = r0
            goto L64
        L5c:
            com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException r11 = new com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException
            r5 = 4096(0x1000, double:2.0237E-320)
            r2 = r11
            r2.<init>(r3, r5, r7)
        L64:
            return r11
    }

    private void e(java.lang.Exception r6) {
            r5 = this;
            java.lang.Exception r0 = r5.d(r6)
            boolean r1 = r0 instanceof android.database.sqlite.SQLiteFullException
            r2 = -1
            if (r1 == 0) goto La
            goto L2c
        La:
            com.kwad.framework.filedownloader.d.c r1 = r5.acw     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            r1.d(r2)     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            com.kwad.framework.filedownloader.d.c r1 = r5.acw     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            java.lang.String r6 = r6.toString()     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            r1.bj(r6)     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            com.kwad.framework.filedownloader.b.a r6 = r5.acr     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            com.kwad.framework.filedownloader.d.c r1 = r5.acw     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            int r1 = r1.getId()     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            com.kwad.framework.filedownloader.d.c r3 = r5.acw     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            long r3 = r3.vm()     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            r6.a(r1, r0, r3)     // Catch: android.database.sqlite.SQLiteFullException -> L2a
            goto L32
        L2a:
            r6 = move-exception
            r0 = r6
        L2c:
            r6 = r0
            android.database.sqlite.SQLiteFullException r6 = (android.database.sqlite.SQLiteFullException) r6
            r5.a(r6)
        L32:
            com.kwad.framework.filedownloader.download.d$a r6 = r5.ade
            r6.f(r0)
            r5.c(r2)
            return
    }

    private static long f(long r5, long r7) {
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r3 = -1
            if (r2 > 0) goto L9
            return r3
        L9:
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            r3 = 1
            if (r2 != 0) goto L10
            return r3
        L10:
            long r7 = r7 + r3
            long r5 = r5 / r7
            int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r7 > 0) goto L17
            return r3
        L17:
            return r5
    }

    private void uN() {
            r12 = this;
            java.lang.String r0 = "delete the temp file(%s) failed, on completed downloading."
            com.kwad.framework.filedownloader.d.c r1 = r12.acw
            java.lang.String r1 = r1.uE()
            com.kwad.framework.filedownloader.d.c r2 = r12.acw
            java.lang.String r2 = r2.getTargetFilePath()
            java.io.File r3 = new java.io.File
            r3.<init>(r1)
            r4 = 0
            r5 = 1
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L88
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L88
            boolean r7 = r6.exists()     // Catch: java.lang.Throwable -> L88
            r8 = 2
            if (r7 == 0) goto L5c
            long r9 = r6.length()     // Catch: java.lang.Throwable -> L88
            boolean r7 = r6.delete()     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L46
            java.lang.String r7 = "The target file([%s], [%d]) will be replaced with the new downloaded file[%d]"
            r11 = 3
            java.lang.Object[] r11 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L88
            r11[r4] = r2     // Catch: java.lang.Throwable -> L88
            java.lang.Long r9 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Throwable -> L88
            r11[r5] = r9     // Catch: java.lang.Throwable -> L88
            long r9 = r3.length()     // Catch: java.lang.Throwable -> L88
            java.lang.Long r9 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Throwable -> L88
            r11[r8] = r9     // Catch: java.lang.Throwable -> L88
            com.kwad.framework.filedownloader.f.d.d(r12, r7, r11)     // Catch: java.lang.Throwable -> L88
            goto L5c
        L46:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "Can't delete the old file([%s], [%d]), so can't replace it with the new downloaded one."
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L88
            r8[r4] = r2     // Catch: java.lang.Throwable -> L88
            java.lang.Long r2 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Throwable -> L88
            r8[r5] = r2     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r7, r8)     // Catch: java.lang.Throwable -> L88
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L88
            throw r6     // Catch: java.lang.Throwable -> L88
        L5c:
            boolean r6 = r3.renameTo(r6)     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L76
            boolean r2 = r3.exists()
            if (r2 == 0) goto L75
            boolean r2 = r3.delete()
            if (r2 != 0) goto L75
            java.lang.Object[] r2 = new java.lang.Object[r5]
            r2[r4] = r1
            com.kwad.framework.filedownloader.f.d.d(r12, r0, r2)
        L75:
            return
        L76:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "Can't rename the  temp downloaded file(%s) to the target file(%s)"
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L88
            r8[r4] = r1     // Catch: java.lang.Throwable -> L88
            r8[r5] = r2     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r7, r8)     // Catch: java.lang.Throwable -> L88
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L88
            throw r6     // Catch: java.lang.Throwable -> L88
        L88:
            r2 = move-exception
            boolean r6 = r3.exists()
            if (r6 == 0) goto L9c
            boolean r3 = r3.delete()
            if (r3 != 0) goto L9c
            java.lang.Object[] r3 = new java.lang.Object[r5]
            r3[r4] = r1
            com.kwad.framework.filedownloader.f.d.d(r12, r0, r3)
        L9c:
            throw r2
    }

    private void uO() {
            r5 = this;
            r5.uN()
            com.kwad.framework.filedownloader.d.c r0 = r5.acw
            r1 = -3
            r0.d(r1)
            com.kwad.framework.filedownloader.b.a r0 = r5.acr
            com.kwad.framework.filedownloader.d.c r2 = r5.acw
            int r2 = r2.getId()
            com.kwad.framework.filedownloader.d.c r3 = r5.acw
            long r3 = r3.getTotal()
            r0.d(r2, r3)
            com.kwad.framework.filedownloader.b.a r0 = r5.acr
            com.kwad.framework.filedownloader.d.c r2 = r5.acw
            int r2 = r2.getId()
            r0.bh(r2)
            r5.c(r1)
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r0 = r0.aeP
            if (r0 == 0) goto L35
            com.kwad.framework.filedownloader.d.c r0 = r5.acw
            com.kwad.framework.filedownloader.services.f.f(r0)
        L35:
            return
    }

    private boolean uP() {
            r6 = this;
            com.kwad.framework.filedownloader.d.c r0 = r6.acw
            boolean r0 = r0.isChunked()
            r1 = 0
            if (r0 == 0) goto L13
            com.kwad.framework.filedownloader.d.c r0 = r6.acw
            long r2 = r0.vm()
            r0.N(r2)
            goto L4e
        L13:
            com.kwad.framework.filedownloader.d.c r0 = r6.acw
            long r2 = r0.vm()
            com.kwad.framework.filedownloader.d.c r0 = r6.acw
            long r4 = r0.getTotal()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L4e
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.kwad.framework.filedownloader.d.c r3 = r6.acw
            long r3 = r3.vm()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r1] = r3
            com.kwad.framework.filedownloader.d.c r1 = r6.acw
            long r3 = r1.getTotal()
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r3 = 1
            r2[r3] = r1
            java.lang.String r1 = "sofar[%d] not equal total[%d]"
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.b(r1, r2)
            r0.<init>(r1)
            r6.c(r0)
            return r3
        L4e:
            return r1
    }

    private void uQ() {
            r5 = this;
            com.kwad.framework.filedownloader.d.c r0 = r5.acw
            r1 = -2
            r0.d(r1)
            com.kwad.framework.filedownloader.b.a r0 = r5.acr
            com.kwad.framework.filedownloader.d.c r2 = r5.acw
            int r2 = r2.getId()
            com.kwad.framework.filedownloader.d.c r3 = r5.acw
            long r3 = r3.vm()
            r0.e(r2, r3)
            r5.c(r1)
            return
    }

    final void a(java.lang.Exception r4, int r5, long r6) {
            r3 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r3.adl
            r1 = 0
            r0.set(r1)
            com.kwad.framework.filedownloader.d.c r0 = r3.acw
            long r6 = -r6
            r0.M(r6)
            android.os.Handler r6 = r3.handler
            if (r6 != 0) goto L15
            r3.a(r4, r5)
            return
        L15:
            r7 = 5
            r0 = 0
            android.os.Message r4 = r6.obtainMessage(r7, r5, r0, r4)
            r3.b(r4)
            return
    }

    final void a(boolean r10, long r11, java.lang.String r13, java.lang.String r14) {
            r9 = this;
            com.kwad.framework.filedownloader.d.c r0 = r9.acw
            java.lang.String r0 = r0.vn()
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L24
            boolean r3 = r0.equals(r13)
            if (r3 == 0) goto L11
            goto L24
        L11:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.Object[] r11 = new java.lang.Object[r2]
            r12 = 0
            r11[r12] = r13
            r11[r1] = r0
            java.lang.String r12 = "callback onConnected must with precondition succeed, but the etag is changes(%s != %s)"
            java.lang.String r11 = com.kwad.framework.filedownloader.f.f.b(r12, r11)
            r10.<init>(r11)
            throw r10
        L24:
            com.kwad.framework.filedownloader.download.d$a r0 = r9.ade
            r0.aX(r10)
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            r10.d(r2)
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            r10.N(r11)
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            r10.bi(r13)
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            r10.bk(r14)
            com.kwad.framework.filedownloader.b.a r3 = r9.acr
            com.kwad.framework.filedownloader.d.c r10 = r9.acw
            int r4 = r10.getId()
            r5 = r11
            r7 = r13
            r8 = r14
            r3.a(r4, r5, r7, r8)
            r9.c(r2)
            int r10 = r9.adh
            long r13 = (long) r10
            long r10 = f(r11, r13)
            r9.adi = r10
            r9.adm = r1
            return
    }

    final void c(java.lang.Exception r1) {
            r0 = this;
            r0.e(r1)
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r5) {
            r4 = this;
            r0 = 1
            r4.adk = r0
            int r1 = r5.what
            r2 = 3
            r3 = 0
            if (r1 == r2) goto L17
            r2 = 5
            if (r1 == r2) goto Ld
            goto L1e
        Ld:
            java.lang.Object r1 = r5.obj     // Catch: java.lang.Throwable -> L2a
            java.lang.Exception r1 = (java.lang.Exception) r1     // Catch: java.lang.Throwable -> L2a
            int r5 = r5.arg1     // Catch: java.lang.Throwable -> L2a
            r4.a(r1, r5)     // Catch: java.lang.Throwable -> L2a
            goto L1e
        L17:
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L2a
            r4.b(r1, r0)     // Catch: java.lang.Throwable -> L2a
        L1e:
            r4.adk = r3
            java.lang.Thread r5 = r4.abS
            if (r5 == 0) goto L29
            java.lang.Thread r5 = r4.abS
            java.util.concurrent.locks.LockSupport.unpark(r5)
        L29:
            return r0
        L2a:
            r5 = move-exception
            r4.adk = r3
            java.lang.Thread r0 = r4.abS
            if (r0 == 0) goto L36
            java.lang.Thread r0 = r4.abS
            java.util.concurrent.locks.LockSupport.unpark(r0)
        L36:
            throw r5
    }

    public final boolean isAlive() {
            r1 = this;
            android.os.HandlerThread r0 = r1.adj
            if (r0 == 0) goto Lc
            boolean r0 = r0.isAlive()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    final void onProgress(long r3) {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.adl
            r0.addAndGet(r3)
            com.kwad.framework.filedownloader.d.c r0 = r2.acw
            r0.M(r3)
            long r3 = android.os.SystemClock.elapsedRealtime()
            boolean r0 = r2.I(r3)
            android.os.Handler r1 = r2.handler
            if (r1 != 0) goto L1a
            r2.b(r3, r0)
            return
        L1a:
            if (r0 == 0) goto L24
            r3 = 3
            android.os.Message r3 = r1.obtainMessage(r3)
            r2.b(r3)
        L24:
            return
    }

    final void uH() {
            r4 = this;
            android.os.Handler r0 = r4.handler
            if (r0 == 0) goto L25
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.os.HandlerThread r0 = r4.adj
            r0.quit()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r4.abS = r0
        L13:
            boolean r0 = r4.adk
            if (r0 == 0) goto L23
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 100
            long r2 = r0.toNanos(r2)
            java.util.concurrent.locks.LockSupport.parkNanos(r2)
            goto L13
        L23:
            r4.abS = r1
        L25:
            return
    }

    public final void uI() {
            r3 = this;
            com.kwad.framework.filedownloader.d.c r0 = r3.acw
            r1 = 1
            r0.d(r1)
            com.kwad.framework.filedownloader.b.a r0 = r3.acr
            com.kwad.framework.filedownloader.d.c r2 = r3.acw
            int r2 = r2.getId()
            r0.bj(r2)
            r3.c(r1)
            return
    }

    final void uJ() {
            r2 = this;
            com.kwad.framework.filedownloader.d.c r0 = r2.acw
            r1 = 6
            r0.d(r1)
            r2.c(r1)
            com.kwad.framework.filedownloader.b.a r0 = r2.acr
            com.kwad.framework.filedownloader.d.c r1 = r2.acw
            int r1 = r1.getId()
            r0.be(r1)
            return
    }

    final void uK() {
            r3 = this;
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "source-status-callback"
            r2 = 10
            r0.<init>(r1, r2)
            r3.adj = r0
            r0.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.HandlerThread r1 = r3.adj
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1, r3)
            r3.handler = r0
            return
    }

    final void uL() {
            r0 = this;
            r0.uQ()
            return
    }

    final void uM() {
            r1 = this;
            boolean r0 = r1.uP()
            if (r0 == 0) goto L7
            return
        L7:
            r1.uO()
            return
    }
}
