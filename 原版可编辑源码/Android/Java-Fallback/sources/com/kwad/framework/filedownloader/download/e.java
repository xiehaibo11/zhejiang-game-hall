package com.kwad.framework.filedownloader.download;

public final class e {
    private final java.lang.String Tt;
    private final com.kwad.framework.filedownloader.download.f acZ;
    private final int acc;
    private final long ack;
    long acl;
    private final long acm;
    private final com.kwad.framework.filedownloader.b.a acr;
    private final boolean acz;
    private final int adb;
    private final com.kwad.framework.filedownloader.download.c adr;
    private final com.kwad.framework.filedownloader.a.b ads;
    private com.kwad.framework.filedownloader.e.a adt;
    private volatile long adu;
    private volatile long adv;
    private final long contentLength;
    private volatile boolean kT;

    public static class a {
        java.lang.String Tt;
        java.lang.Boolean acW;
        com.kwad.framework.filedownloader.download.f acZ;
        java.lang.Integer aci;
        com.kwad.framework.filedownloader.download.a acj;
        java.lang.Integer add;
        com.kwad.framework.filedownloader.a.b ads;
        com.kwad.framework.filedownloader.download.c adw;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.framework.filedownloader.download.e.a a(com.kwad.framework.filedownloader.download.c r1) {
                r0 = this;
                r0.adw = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a aY(boolean r1) {
                r0 = this;
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r0.acW = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a b(com.kwad.framework.filedownloader.download.f r1) {
                r0 = this;
                r0.acZ = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a bg(java.lang.String r1) {
                r0 = this;
                r0.Tt = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a bq(int r1) {
                r0 = this;
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0.add = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a br(int r1) {
                r0 = this;
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0.aci = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a c(com.kwad.framework.filedownloader.download.a r1) {
                r0 = this;
                r0.acj = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e.a d(com.kwad.framework.filedownloader.a.b r1) {
                r0 = this;
                r0.ads = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.e uT() {
                r12 = this;
                java.lang.Boolean r0 = r12.acW
                if (r0 == 0) goto L3a
                com.kwad.framework.filedownloader.a.b r2 = r12.ads
                if (r2 == 0) goto L3a
                com.kwad.framework.filedownloader.download.a r3 = r12.acj
                if (r3 == 0) goto L3a
                com.kwad.framework.filedownloader.download.f r0 = r12.acZ
                if (r0 == 0) goto L3a
                java.lang.String r0 = r12.Tt
                if (r0 == 0) goto L3a
                java.lang.Integer r0 = r12.aci
                if (r0 == 0) goto L3a
                java.lang.Integer r1 = r12.add
                if (r1 == 0) goto L3a
                com.kwad.framework.filedownloader.download.e r11 = new com.kwad.framework.filedownloader.download.e
                com.kwad.framework.filedownloader.download.c r4 = r12.adw
                int r5 = r0.intValue()
                java.lang.Integer r0 = r12.add
                int r6 = r0.intValue()
                java.lang.Boolean r0 = r12.acW
                boolean r7 = r0.booleanValue()
                com.kwad.framework.filedownloader.download.f r8 = r12.acZ
                java.lang.String r9 = r12.Tt
                r10 = 0
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r11
            L3a:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r0.<init>()
                throw r0
        }
    }

    private e(com.kwad.framework.filedownloader.a.b r3, com.kwad.framework.filedownloader.download.a r4, com.kwad.framework.filedownloader.download.c r5, int r6, int r7, boolean r8, com.kwad.framework.filedownloader.download.f r9, java.lang.String r10) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.adu = r0
            r2.adv = r0
            r2.acZ = r9
            r2.Tt = r10
            r2.ads = r3
            r2.acz = r8
            r2.adr = r5
            r2.adb = r7
            r2.acc = r6
            com.kwad.framework.filedownloader.download.b r3 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.b.a r3 = r3.ur()
            r2.acr = r3
            long r5 = r4.ack
            r2.ack = r5
            long r5 = r4.acm
            r2.acm = r5
            long r5 = r4.acl
            r2.acl = r5
            long r3 = r4.contentLength
            r2.contentLength = r3
            return
    }

    e(com.kwad.framework.filedownloader.a.b r1, com.kwad.framework.filedownloader.download.a r2, com.kwad.framework.filedownloader.download.c r3, int r4, int r5, boolean r6, com.kwad.framework.filedownloader.download.f r7, java.lang.String r8, byte r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private void sync() {
            r9 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            r2 = 1
            r3 = 0
            com.kwad.framework.filedownloader.e.a r4 = r9.adt     // Catch: java.io.IOException -> Ld
            r4.vJ()     // Catch: java.io.IOException -> Ld
            r4 = r2
            goto L1c
        Ld:
            r4 = move-exception
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI
            if (r5 == 0) goto L1b
            java.lang.Object[] r5 = new java.lang.Object[r2]
            r5[r3] = r4
            java.lang.String r4 = "Because of the system cannot guarantee that all the buffers have been synchronized with physical media, or write to filefailed, we just not flushAndSync process to database too %s"
            com.kwad.framework.filedownloader.f.d.c(r9, r4, r5)
        L1b:
            r4 = r3
        L1c:
            if (r4 == 0) goto L69
            com.kwad.framework.filedownloader.download.c r4 = r9.adr
            if (r4 == 0) goto L24
            r4 = r2
            goto L25
        L24:
            r4 = r3
        L25:
            if (r4 == 0) goto L33
            com.kwad.framework.filedownloader.b.a r4 = r9.acr
            int r5 = r9.acc
            int r6 = r9.adb
            long r7 = r9.acl
            r4.a(r5, r6, r7)
            goto L38
        L33:
            com.kwad.framework.filedownloader.download.f r4 = r9.acZ
            r4.uB()
        L38:
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L69
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]
            int r5 = r9.acc
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r3] = r5
            int r3 = r9.adb
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4[r2] = r3
            r2 = 2
            long r5 = r9.acl
            java.lang.Long r3 = java.lang.Long.valueOf(r5)
            r4[r2] = r3
            r2 = 3
            long r5 = android.os.SystemClock.uptimeMillis()
            long r5 = r5 - r0
            java.lang.Long r0 = java.lang.Long.valueOf(r5)
            r4[r2] = r0
            java.lang.String r0 = "require flushAndSync id[%d] index[%d] offset[%d], consume[%d]"
            com.kwad.framework.filedownloader.f.d.c(r9, r0, r4)
        L69:
            return
    }

    private void uS() {
            r6 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r6.acl
            long r4 = r6.adu
            long r2 = r2 - r4
            long r4 = r6.adv
            long r4 = r0 - r4
            boolean r2 = com.kwad.framework.filedownloader.f.f.g(r2, r4)
            if (r2 == 0) goto L1c
            r6.sync()
            long r2 = r6.acl
            r6.adu = r2
            r6.adv = r0
        L1c:
            return
    }

    public final void pause() {
            r1 = this;
            r0 = 1
            r1.kT = r0
            return
    }

    public final void run() {
            r16 = this;
            r1 = r16
            boolean r0 = r1.kT
            if (r0 == 0) goto L7
            return
        L7:
            int r0 = r1.adb
            com.kwad.framework.filedownloader.a.b r2 = r1.ads
            long r2 = com.kwad.framework.filedownloader.f.f.b(r0, r2)
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r6 = 2
            r7 = 1
            r8 = 0
            if (r0 == 0) goto L18a
            long r9 = r1.contentLength
            int r0 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            r11 = 5
            r12 = 4
            r13 = 3
            if (r0 <= 0) goto L82
            int r0 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r0 == 0) goto L82
            long r9 = r1.acm
            int r0 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r0 != 0) goto L3c
            java.lang.Object[] r0 = new java.lang.Object[r7]
            long r4 = r1.acl
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r0[r8] = r4
            java.lang.String r4 = "range[%d-)"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r4, r0)
            goto L54
        L3c:
            java.lang.Object[] r0 = new java.lang.Object[r6]
            long r4 = r1.acl
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r0[r8] = r4
            long r4 = r1.acm
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r0[r7] = r4
            java.lang.String r4 = "range[%d-%d)"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r4, r0)
        L54:
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r4 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            java.lang.Object[] r5 = new java.lang.Object[r11]
            r5[r8] = r0
            long r8 = r1.contentLength
            java.lang.Long r0 = java.lang.Long.valueOf(r8)
            r5[r7] = r0
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r5[r6] = r0
            int r0 = r1.acc
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r5[r13] = r0
            int r0 = r1.adb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r5[r12] = r0
            java.lang.String r0 = "require %s with contentLength(%d), but the backend response contentLength is %d on downloadId[%d]-connectionIndex[%d], please ask your backend dev to fix such problem."
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r0, r5)
            r4.<init>(r0)
            throw r4
        L82:
            long r4 = r1.acl
            r9 = 0
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()     // Catch: java.lang.Throwable -> L181
            boolean r0 = r0.ut()     // Catch: java.lang.Throwable -> L181
            com.kwad.framework.filedownloader.download.c r10 = r1.adr     // Catch: java.lang.Throwable -> L181
            if (r10 == 0) goto L9c
            if (r0 == 0) goto L94
            goto L9c
        L94:
            java.lang.IllegalAccessException r0 = new java.lang.IllegalAccessException     // Catch: java.lang.Throwable -> L181
            java.lang.String r2 = "can't using multi-download when the output stream can't support seek"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L181
            throw r0     // Catch: java.lang.Throwable -> L181
        L9c:
            java.lang.String r10 = r1.Tt     // Catch: java.lang.Throwable -> L181
            com.kwad.framework.filedownloader.e.a r10 = com.kwad.framework.filedownloader.f.f.bv(r10)     // Catch: java.lang.Throwable -> L181
            r1.adt = r10     // Catch: java.lang.Throwable -> L17f
            if (r0 == 0) goto Lab
            long r14 = r1.acl     // Catch: java.lang.Throwable -> L17f
            r10.seek(r14)     // Catch: java.lang.Throwable -> L17f
        Lab:
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L17f
            if (r0 == 0) goto Ld6
            java.lang.String r0 = "start fetch(%d): range [%d, %d), seek to[%d]"
            java.lang.Object[] r14 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L17f
            int r15 = r1.adb     // Catch: java.lang.Throwable -> L17f
            java.lang.Integer r15 = java.lang.Integer.valueOf(r15)     // Catch: java.lang.Throwable -> L17f
            r14[r8] = r15     // Catch: java.lang.Throwable -> L17f
            long r11 = r1.ack     // Catch: java.lang.Throwable -> L17f
            java.lang.Long r11 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L17f
            r14[r7] = r11     // Catch: java.lang.Throwable -> L17f
            long r11 = r1.acm     // Catch: java.lang.Throwable -> L17f
            java.lang.Long r11 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L17f
            r14[r6] = r11     // Catch: java.lang.Throwable -> L17f
            long r11 = r1.acl     // Catch: java.lang.Throwable -> L17f
            java.lang.Long r11 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L17f
            r14[r13] = r11     // Catch: java.lang.Throwable -> L17f
            com.kwad.framework.filedownloader.f.d.c(r1, r0, r14)     // Catch: java.lang.Throwable -> L17f
        Ld6:
            com.kwad.framework.filedownloader.a.b r0 = r1.ads     // Catch: java.lang.Throwable -> L17f
            java.io.InputStream r9 = r0.getInputStream()     // Catch: java.lang.Throwable -> L17f
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L17f
            boolean r11 = r1.kT     // Catch: java.lang.Throwable -> L17f
            if (r11 == 0) goto Leb
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r10)
            return
        Leb:
            int r11 = r9.read(r0)     // Catch: java.lang.Throwable -> L17f
            r12 = -1
            if (r11 == r12) goto L11c
            r10.write(r0, r8, r11)     // Catch: java.lang.Throwable -> L17f
            long r13 = r1.acl     // Catch: java.lang.Throwable -> L17f
            long r6 = (long) r11     // Catch: java.lang.Throwable -> L17f
            long r13 = r13 + r6
            r1.acl = r13     // Catch: java.lang.Throwable -> L17f
            com.kwad.framework.filedownloader.download.f r11 = r1.acZ     // Catch: java.lang.Throwable -> L17f
            r11.onProgress(r6)     // Catch: java.lang.Throwable -> L17f
            r16.uS()     // Catch: java.lang.Throwable -> L17f
            boolean r6 = r1.kT     // Catch: java.lang.Throwable -> L17f
            if (r6 != 0) goto L11c
            boolean r6 = r1.acz     // Catch: java.lang.Throwable -> L17f
            if (r6 == 0) goto L118
            boolean r6 = com.kwad.framework.filedownloader.f.f.vT()     // Catch: java.lang.Throwable -> L17f
            if (r6 != 0) goto L112
            goto L118
        L112:
            com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException     // Catch: java.lang.Throwable -> L17f
            r0.<init>()     // Catch: java.lang.Throwable -> L17f
            throw r0     // Catch: java.lang.Throwable -> L17f
        L118:
            r6 = 2
            r7 = 1
            r13 = 3
            goto Leb
        L11c:
            if (r10 == 0) goto L121
            r16.sync()     // Catch: java.lang.Throwable -> L17f
        L121:
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r10)
            long r6 = r1.acl
            long r6 = r6 - r4
            r9 = -1
            int r0 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r0 == 0) goto L173
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 != 0) goto L135
            goto L173
        L135:
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            r9 = 6
            java.lang.Object[] r9 = new java.lang.Object[r9]
            java.lang.Long r6 = java.lang.Long.valueOf(r6)
            r9[r8] = r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 1
            r9[r3] = r2
            long r2 = r1.ack
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 2
            r9[r3] = r2
            long r2 = r1.acm
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 3
            r9[r3] = r2
            long r2 = r1.acl
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 4
            r9[r3] = r2
            java.lang.Long r2 = java.lang.Long.valueOf(r4)
            r3 = 5
            r9[r3] = r2
            java.lang.String r2 = "fetched length[%d] != content length[%d], range[%d, %d) offset[%d] fetch begin offset"
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r2, r9)
            r0.<init>(r2)
            throw r0
        L173:
            com.kwad.framework.filedownloader.download.f r3 = r1.acZ
            com.kwad.framework.filedownloader.download.c r4 = r1.adr
            long r5 = r1.ack
            long r7 = r1.acm
            r3.a(r4, r5, r7)
            return
        L17f:
            r0 = move-exception
            goto L183
        L181:
            r0 = move-exception
            r10 = r9
        L183:
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r10)
            throw r0
        L18a:
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r0 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            int r3 = r1.acc
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2[r8] = r3
            int r3 = r1.adb
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4 = 1
            r2[r4] = r3
            java.lang.String r3 = "there isn't any content need to download on %d-%d with the content-length is 0"
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r3, r2)
            r0.<init>(r2)
            throw r0
    }
}
