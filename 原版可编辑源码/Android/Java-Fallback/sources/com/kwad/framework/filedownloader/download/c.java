package com.kwad.framework.filedownloader.download;

public final class c implements java.lang.Runnable {
    private final java.lang.String Tt;
    private final com.kwad.framework.filedownloader.download.ConnectTask acY;
    private final com.kwad.framework.filedownloader.download.f acZ;
    private final int acc;
    private final boolean acz;
    private com.kwad.framework.filedownloader.download.e ada;
    final int adb;
    private volatile boolean kT;

    public static class a {
        private java.lang.String Tt;
        private java.lang.Boolean acW;
        private com.kwad.framework.filedownloader.download.f acZ;
        private final com.kwad.framework.filedownloader.download.ConnectTask.a adc;
        private java.lang.Integer add;

        public a() {
                r1 = this;
                r1.<init>()
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = new com.kwad.framework.filedownloader.download.ConnectTask$a
                r0.<init>()
                r1.adc = r0
                return
        }

        public final com.kwad.framework.filedownloader.download.c.a a(com.kwad.framework.filedownloader.download.f r1) {
                r0 = this;
                r0.acZ = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.c.a aW(boolean r1) {
                r0 = this;
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r0.acW = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.c.a b(com.kwad.framework.filedownloader.download.a r2) {
                r1 = this;
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r1.adc
                r0.a(r2)
                return r1
        }

        public final com.kwad.framework.filedownloader.download.c.a bd(java.lang.String r2) {
                r1 = this;
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r1.adc
                r0.ba(r2)
                return r1
        }

        public final com.kwad.framework.filedownloader.download.c.a be(java.lang.String r2) {
                r1 = this;
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r1.adc
                r0.bb(r2)
                return r1
        }

        public final com.kwad.framework.filedownloader.download.c.a bf(java.lang.String r1) {
                r0 = this;
                r0.Tt = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.c.a bo(int r2) {
                r1 = this;
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r1.adc
                r0.bn(r2)
                return r1
        }

        public final com.kwad.framework.filedownloader.download.c.a c(com.kwad.framework.filedownloader.d.b r2) {
                r1 = this;
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r1.adc
                r0.a(r2)
                return r1
        }

        public final com.kwad.framework.filedownloader.download.c.a d(java.lang.Integer r1) {
                r0 = this;
                r0.add = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.c uG() {
                r9 = this;
                com.kwad.framework.filedownloader.download.f r0 = r9.acZ
                if (r0 == 0) goto L30
                java.lang.String r0 = r9.Tt
                if (r0 == 0) goto L30
                java.lang.Boolean r0 = r9.acW
                if (r0 == 0) goto L30
                java.lang.Integer r0 = r9.add
                if (r0 == 0) goto L30
                com.kwad.framework.filedownloader.download.ConnectTask$a r0 = r9.adc
                com.kwad.framework.filedownloader.download.ConnectTask r4 = r0.uo()
                com.kwad.framework.filedownloader.download.c r0 = new com.kwad.framework.filedownloader.download.c
                int r2 = r4.acc
                java.lang.Integer r1 = r9.add
                int r3 = r1.intValue()
                com.kwad.framework.filedownloader.download.f r5 = r9.acZ
                java.lang.Boolean r1 = r9.acW
                boolean r6 = r1.booleanValue()
                java.lang.String r7 = r9.Tt
                r8 = 0
                r1 = r0
                r1.<init>(r2, r3, r4, r5, r6, r7, r8)
                return r0
            L30:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r1 = 3
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                com.kwad.framework.filedownloader.download.f r3 = r9.acZ
                r1[r2] = r3
                r2 = 1
                java.lang.String r3 = r9.Tt
                r1[r2] = r3
                r2 = 2
                java.lang.Boolean r3 = r9.acW
                r1[r2] = r3
                java.lang.String r2 = "%s %s %B"
                java.lang.String r1 = com.kwad.framework.filedownloader.f.f.b(r2, r1)
                r0.<init>(r1)
                throw r0
        }
    }

    private c(int r1, int r2, com.kwad.framework.filedownloader.download.ConnectTask r3, com.kwad.framework.filedownloader.download.f r4, boolean r5, java.lang.String r6) {
            r0 = this;
            r0.<init>()
            r0.acc = r1
            r0.adb = r2
            r1 = 0
            r0.kT = r1
            r0.acZ = r4
            r0.Tt = r6
            r0.acY = r3
            r0.acz = r5
            return
    }

    c(int r1, int r2, com.kwad.framework.filedownloader.download.ConnectTask r3, com.kwad.framework.filedownloader.download.f r4, boolean r5, java.lang.String r6, byte r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public final void pause() {
            r1 = this;
            r0 = 1
            r1.kT = r0
            com.kwad.framework.filedownloader.download.e r0 = r1.ada
            if (r0 == 0) goto La
            r0.pause()
        La:
            return
    }

    @Override
    public final void run() {
            r14 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            com.kwad.framework.filedownloader.download.ConnectTask r0 = r14.acY
            com.kwad.framework.filedownloader.download.a r0 = r0.un()
            long r0 = r0.acl
            r2 = 0
            r3 = 0
            r4 = r2
        L10:
            r5 = 1
            boolean r4 = r14.kT     // Catch: java.lang.Throwable -> Lfa java.lang.IllegalArgumentException -> Lfc java.lang.ArrayIndexOutOfBoundsException -> Lfe com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> L100 java.io.IOException -> L102 java.lang.IllegalAccessException -> L104
            if (r4 == 0) goto L1b
            if (r3 == 0) goto L1a
            r3.ug()
        L1a:
            return
        L1b:
            com.kwad.framework.filedownloader.download.ConnectTask r4 = r14.acY     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.a.b r3 = r4.uk()     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            int r4 = r3.getResponseCode()     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            boolean r6 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r7 = 3
            r8 = 2
            r9 = 4
            if (r6 == 0) goto L51
            java.lang.String r6 = "the connection[%d] for %d, is connected %s with requestHttpCode[%d]"
            java.lang.Object[] r10 = new java.lang.Object[r9]     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            int r11 = r14.adb     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r10[r2] = r11     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            int r11 = r14.acc     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r10[r5] = r11     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.ConnectTask r11 = r14.acY     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.a r11 = r11.un()     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r10[r8] = r11     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r11 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r10[r7] = r11     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.f.d.c(r14, r6, r10)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
        L51:
            r6 = 206(0xce, float:2.89E-43)
            if (r4 == r6) goto L8d
            r6 = 200(0xc8, float:2.8E-43)
            if (r4 != r6) goto L5a
            goto L8d
        L5a:
            java.net.SocketException r6 = new java.net.SocketException     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.String r10 = "Connection failed with request[%s] response[%s] http-state[%d] on task[%d-%d], which is changed after verify connection, so please try again."
            r11 = 5
            java.lang.Object[] r11 = new java.lang.Object[r11]     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.ConnectTask r12 = r14.acY     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.util.Map r12 = r12.getRequestHeader()     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r11[r2] = r12     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.util.Map r12 = r3.uf()     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r11[r5] = r12     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r11[r8] = r4     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            int r4 = r14.acc     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r11[r7] = r4     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            int r4 = r14.adb     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r11[r9] = r4     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            java.lang.String r4 = com.kwad.framework.filedownloader.f.f.b(r10, r11)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            r6.<init>(r4)     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
            throw r6     // Catch: java.lang.IllegalArgumentException -> Lef java.lang.ArrayIndexOutOfBoundsException -> Lf1 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Lf3 java.io.IOException -> Lf5 java.lang.IllegalAccessException -> Lf7 java.lang.Throwable -> Lfa
        L8d:
            com.kwad.framework.filedownloader.download.e$a r4 = new com.kwad.framework.filedownloader.download.e$a     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            r4.<init>()     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            boolean r6 = r14.kT     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            if (r6 == 0) goto L9c
            if (r3 == 0) goto L9b
            r3.ug()
        L9b:
            return
        L9c:
            int r6 = r14.acc     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.br(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            int r6 = r14.adb     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.bq(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.f r6 = r14.acZ     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.b(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.a(r14)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            boolean r6 = r14.acz     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.aY(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.d(r3)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.ConnectTask r6 = r14.acY     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.a r6 = r6.un()     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.c(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            java.lang.String r6 = r14.Tt     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e$a r4 = r4.bg(r6)     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.e r4 = r4.uT()     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            r14.ada = r4     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            r4.run()     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            boolean r4 = r14.kT     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            if (r4 == 0) goto Lde
            com.kwad.framework.filedownloader.download.e r4 = r14.ada     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
            r4.pause()     // Catch: java.lang.IllegalArgumentException -> Le4 java.lang.ArrayIndexOutOfBoundsException -> Le6 com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException -> Le8 java.io.IOException -> Lea java.lang.IllegalAccessException -> Lec java.lang.Throwable -> Lfa
        Lde:
            if (r3 == 0) goto L14e
            r3.ug()
            return
        Le4:
            r4 = move-exception
            goto Led
        Le6:
            r4 = move-exception
            goto Led
        Le8:
            r4 = move-exception
            goto Led
        Lea:
            r4 = move-exception
            goto Led
        Lec:
            r4 = move-exception
        Led:
            r6 = r5
            goto L108
        Lef:
            r4 = move-exception
            goto Lf8
        Lf1:
            r4 = move-exception
            goto Lf8
        Lf3:
            r4 = move-exception
            goto Lf8
        Lf5:
            r4 = move-exception
            goto Lf8
        Lf7:
            r4 = move-exception
        Lf8:
            r6 = r2
            goto L108
        Lfa:
            r0 = move-exception
            goto L14f
        Lfc:
            r6 = move-exception
            goto L105
        Lfe:
            r6 = move-exception
            goto L105
        L100:
            r6 = move-exception
            goto L105
        L102:
            r6 = move-exception
            goto L105
        L104:
            r6 = move-exception
        L105:
            r13 = r6
            r6 = r4
            r4 = r13
        L108:
            com.kwad.framework.filedownloader.download.f r7 = r14.acZ     // Catch: java.lang.Throwable -> Lfa
            boolean r7 = r7.a(r4)     // Catch: java.lang.Throwable -> Lfa
            if (r7 == 0) goto L144
            if (r6 != 0) goto L11a
            com.kwad.framework.filedownloader.download.f r5 = r14.acZ     // Catch: java.lang.Throwable -> Lfa
            r7 = 0
            r5.a(r4, r7)     // Catch: java.lang.Throwable -> Lfa
            goto L128
        L11a:
            com.kwad.framework.filedownloader.download.e r7 = r14.ada     // Catch: java.lang.Throwable -> Lfa
            if (r7 == 0) goto L130
            com.kwad.framework.filedownloader.download.e r5 = r14.ada     // Catch: java.lang.Throwable -> Lfa
            long r7 = r5.acl     // Catch: java.lang.Throwable -> Lfa
            long r7 = r7 - r0
            com.kwad.framework.filedownloader.download.f r5 = r14.acZ     // Catch: java.lang.Throwable -> Lfa
            r5.a(r4, r7)     // Catch: java.lang.Throwable -> Lfa
        L128:
            if (r3 == 0) goto L12d
            r3.ug()
        L12d:
            r4 = r6
            goto L10
        L130:
            java.lang.String r0 = "it is valid to retry and connection is valid but create fetch-data-task failed, so give up directly with %s"
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lfa
            r1[r2] = r4     // Catch: java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.f.d.d(r14, r0, r1)     // Catch: java.lang.Throwable -> Lfa
            com.kwad.framework.filedownloader.download.f r0 = r14.acZ     // Catch: java.lang.Throwable -> Lfa
            r0.b(r4)     // Catch: java.lang.Throwable -> Lfa
            if (r3 == 0) goto L14e
            r3.ug()
            return
        L144:
            com.kwad.framework.filedownloader.download.f r0 = r14.acZ     // Catch: java.lang.Throwable -> Lfa
            r0.b(r4)     // Catch: java.lang.Throwable -> Lfa
            if (r3 == 0) goto L14e
            r3.ug()
        L14e:
            return
        L14f:
            if (r3 == 0) goto L154
            r3.ug()
        L154:
            throw r0
    }

    public final void tM() {
            r0 = this;
            r0.pause()
            return
    }
}
