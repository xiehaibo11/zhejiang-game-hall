package com.czhj.volley.toolbox;

public class FileDownloader {
    final com.czhj.volley.RequestQueue a;
    private final int b;
    private final java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader.DownloadController> c;

    public class DownloadController {
        public static final int STATUS_DISCARD = 4;
        public static final int STATUS_DOWNLOADING = 1;
        public static final int STATUS_PAUSE = 2;
        public static final int STATUS_SUCCESS = 3;
        public static final int STATUS_WAITING = 0;
        com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener a;
        int b;
        final com.czhj.volley.toolbox.FileDownloader c;
        private com.czhj.volley.toolbox.FileDownloadRequest d;
        private com.czhj.volley.toolbox.DownloadItem e;


        DownloadController(com.czhj.volley.toolbox.FileDownloader r1, com.czhj.volley.toolbox.DownloadItem r2, com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r3) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                r0.a = r3
                r0.e = r2
                return
        }

        boolean a() {
                r4 = this;
                int r0 = r4.b
                r1 = 0
                if (r0 == 0) goto L6
                return r1
            L6:
                com.czhj.volley.toolbox.FileDownloader$DownloadController$1 r0 = new com.czhj.volley.toolbox.FileDownloader$DownloadController$1
                r0.<init>(r4)
                com.czhj.volley.toolbox.FileDownloader r2 = r4.c
                com.czhj.volley.toolbox.DownloadItem r3 = r4.e
                com.czhj.volley.toolbox.FileDownloadRequest r0 = r2.buildRequest(r3, r0)
                r4.d = r0
                r0 = 1
                r4.b = r0
                com.czhj.volley.toolbox.FileDownloader r2 = r4.c
                com.czhj.volley.RequestQueue r2 = r2.a
                if (r2 != 0) goto L1f
                return r1
            L1f:
                com.czhj.volley.toolbox.FileDownloader r1 = r4.c
                com.czhj.volley.RequestQueue r1 = r1.a
                com.czhj.volley.toolbox.FileDownloadRequest r2 = r4.d
                r1.add(r2)
                return r0
        }

        public boolean discard() {
                r5 = this;
                int r0 = r5.b
                r1 = 1
                r2 = 4
                if (r0 != 0) goto L17
                r5.b = r2
                com.czhj.volley.toolbox.FileDownloader r0 = r5.c
                r0.a(r5)
                com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r0 = r5.a
                if (r0 == 0) goto L16
                com.czhj.volley.toolbox.DownloadItem r2 = r5.e
                r0.onCancel(r2)
            L16:
                return r1
            L17:
                r3 = 0
                if (r0 != r2) goto L1b
                return r3
            L1b:
                r4 = 3
                if (r0 != r4) goto L1f
                return r3
            L1f:
                if (r0 != r1) goto L26
                com.czhj.volley.toolbox.FileDownloadRequest r0 = r5.d
                r0.cancel()
            L26:
                r5.b = r2
                com.czhj.volley.toolbox.FileDownloader r0 = r5.c
                r0.a(r5)
                return r1
        }

        public com.czhj.volley.toolbox.DownloadItem getDownloadItem() {
                r1 = this;
                com.czhj.volley.toolbox.DownloadItem r0 = r1.e
                return r0
        }

        public com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener getDownloadListener() {
                r1 = this;
                com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r0 = r1.a
                return r0
        }

        public int getStatus() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        public java.lang.String getStorePath() {
                r1 = this;
                com.czhj.volley.toolbox.DownloadItem r0 = r1.e
                java.lang.String r0 = r0.filePath
                return r0
        }

        public java.lang.String getUrl() {
                r1 = this;
                com.czhj.volley.toolbox.DownloadItem r0 = r1.e
                java.lang.String r0 = r0.url
                return r0
        }

        public boolean isDownloading() {
                r2 = this;
                int r0 = r2.b
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }

        public boolean pause() {
                r2 = this;
                int r0 = r2.b
                r1 = 1
                if (r0 != r1) goto L13
                r0 = 2
                r2.b = r0
                com.czhj.volley.toolbox.FileDownloadRequest r0 = r2.d
                r0.cancel()
                com.czhj.volley.toolbox.FileDownloader r0 = r2.c
                r0.a()
                return r1
            L13:
                r0 = 0
                return r0
        }

        public boolean resume() {
                r3 = this;
                int r0 = r3.b
                r1 = 0
                r2 = 2
                if (r0 != r2) goto Lf
                r3.b = r1
                com.czhj.volley.toolbox.FileDownloader r0 = r3.c
                r0.a()
                r0 = 1
                return r0
            Lf:
                return r1
        }

        public void setDownloadListener(com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r1) {
                r0 = this;
                r0.a = r1
                return
        }
    }

    public FileDownloader(com.czhj.volley.RequestQueue r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FileDownloader(com.czhj.volley.RequestQueue r2, int r3) {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.c = r0
            r1.b = r3
            r1.a = r2
            return
    }

    private void b() {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "FileDownloader must be invoked from the main thread."
            r0.<init>(r1)
            throw r0
    }

    void a() {
            r4 = this;
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r0 = r4.c
            monitor-enter(r0)
            r1 = 0
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r2 = r4.c     // Catch: java.lang.Throwable -> L47
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L47
        La:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r3 == 0) goto L1f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L47
            com.czhj.volley.toolbox.FileDownloader$DownloadController r3 = (com.czhj.volley.toolbox.FileDownloader.DownloadController) r3     // Catch: java.lang.Throwable -> L47
            boolean r3 = r3.isDownloading()     // Catch: java.lang.Throwable -> L47
            if (r3 == 0) goto La
            int r1 = r1 + 1
            goto La
        L1f:
            int r2 = r4.b     // Catch: java.lang.Throwable -> L47
            if (r1 < r2) goto L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            return
        L25:
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r2 = r4.c     // Catch: java.lang.Throwable -> L47
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L47
        L2b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r3 == 0) goto L45
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L47
            com.czhj.volley.toolbox.FileDownloader$DownloadController r3 = (com.czhj.volley.toolbox.FileDownloader.DownloadController) r3     // Catch: java.lang.Throwable -> L47
            boolean r3 = r3.a()     // Catch: java.lang.Throwable -> L47
            if (r3 == 0) goto L2b
            int r1 = r1 + 1
            int r3 = r4.b     // Catch: java.lang.Throwable -> L47
            if (r1 != r3) goto L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            return
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            return
        L47:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            throw r1
    }

    void a(com.czhj.volley.toolbox.FileDownloader.DownloadController r3) {
            r2 = this;
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r0 = r2.c
            monitor-enter(r0)
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r1 = r2.c     // Catch: java.lang.Throwable -> Ld
            r1.remove(r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            r2.a()
            return
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    public com.czhj.volley.toolbox.FileDownloader.DownloadController add(com.czhj.volley.toolbox.DownloadItem r3, com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r4) {
            r2 = this;
            java.lang.String r0 = r3.filePath
            java.lang.String r1 = r3.url
            com.czhj.volley.toolbox.FileDownloader$DownloadController r0 = r2.get(r0, r1)
            if (r0 != 0) goto L1f
            com.czhj.volley.toolbox.FileDownloader$DownloadController r0 = new com.czhj.volley.toolbox.FileDownloader$DownloadController
            r0.<init>(r2, r3, r4)
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r3 = r2.c
            monitor-enter(r3)
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r4 = r2.c     // Catch: java.lang.Throwable -> L1c
            r4.add(r0)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1c
            r2.a()
            goto L1f
        L1c:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1c
            throw r4
        L1f:
            return r0
    }

    public com.czhj.volley.toolbox.FileDownloadRequest buildRequest(com.czhj.volley.toolbox.DownloadItem r2, com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r3) {
            r1 = this;
            com.czhj.volley.toolbox.FileDownloadRequest r0 = new com.czhj.volley.toolbox.FileDownloadRequest
            r0.<init>(r2, r3)
            return r0
    }

    public void clearAll() {
            r3 = this;
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r0 = r3.c
            monitor-enter(r0)
        L3:
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r1 = r3.c     // Catch: java.lang.Throwable -> L1a
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L1a
            if (r1 <= 0) goto L18
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r1 = r3.c     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L1a
            com.czhj.volley.toolbox.FileDownloader$DownloadController r1 = (com.czhj.volley.toolbox.FileDownloader.DownloadController) r1     // Catch: java.lang.Throwable -> L1a
            r1.discard()     // Catch: java.lang.Throwable -> L1a
            goto L3
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
    }

    public com.czhj.volley.toolbox.FileDownloader.DownloadController get(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r0 = r4.c
            monitor-enter(r0)
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r1 = r4.c     // Catch: java.lang.Throwable -> L2e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.czhj.volley.toolbox.FileDownloader$DownloadController r2 = (com.czhj.volley.toolbox.FileDownloader.DownloadController) r2     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r2.getStorePath()     // Catch: java.lang.Throwable -> L2e
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L9
            java.lang.String r3 = r2.getUrl()     // Catch: java.lang.Throwable -> L2e
            boolean r3 = r3.equals(r6)     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return r2
        L2b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            r5 = 0
            return r5
        L2e:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r5
    }

    public java.util.List<com.czhj.volley.toolbox.FileDownloader.DownloadController> getAll() {
            r2 = this;
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r0 = r2.c
            monitor-enter(r0)
            java.util.LinkedList<com.czhj.volley.toolbox.FileDownloader$DownloadController> r1 = r2.c     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }
}
