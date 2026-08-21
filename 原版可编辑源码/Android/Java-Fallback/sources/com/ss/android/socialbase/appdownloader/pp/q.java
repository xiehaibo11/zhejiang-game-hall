package com.ss.android.socialbase.appdownloader.pp;

public class q {
    private static volatile com.ss.android.socialbase.appdownloader.pp.q df = null;
    private static int rg = 8;
    private com.ss.android.socialbase.appdownloader.pp.q.rg<java.lang.Integer, android.graphics.Bitmap> q;


    private static class rg<K, T> extends java.util.LinkedHashMap<K, T> {
        final int rg;

        public rg(int r3, int r4) {
                r2 = this;
                r0 = 1061158912(0x3f400000, float:0.75)
                r1 = 1
                r2.<init>(r4, r0, r1)
                r2.rg = r3
                return
        }

        @Override
        protected boolean removeEldestEntry(java.util.Map.Entry<K, T> r2) {
                r1 = this;
                int r2 = r1.size()
                int r0 = r1.rg
                if (r2 <= r0) goto La
                r2 = 1
                goto Lb
            La:
                r2 = 0
            Lb:
                return r2
        }
    }

    static {
            return
    }

    private q() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.q = r0
            com.ss.android.socialbase.appdownloader.pp.q$rg r0 = new com.ss.android.socialbase.appdownloader.pp.q$rg
            int r1 = com.ss.android.socialbase.appdownloader.pp.q.rg
            int r2 = r1 / 2
            r0.<init>(r1, r2)
            r3.q = r0
            return
    }

    private static java.io.ByteArrayOutputStream df(java.io.InputStream r4) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]
        L9:
            int r2 = r4.read(r1)
            r3 = -1
            if (r2 <= r3) goto L15
            r3 = 0
            r0.write(r1, r3, r2)
            goto L9
        L15:
            r0.flush()
            return r0
    }

    public static int rg(int r1, int r2, android.graphics.BitmapFactory.Options r3) {
            int r0 = r3.outWidth
            if (r0 > r1) goto Lb
            int r0 = r3.outHeight
            if (r0 <= r2) goto L9
            goto Lb
        L9:
            r1 = 1
            goto L21
        Lb:
            int r0 = r3.outWidth
            float r0 = (float) r0
            float r1 = (float) r1
            float r0 = r0 / r1
            int r1 = java.lang.Math.round(r0)
            int r3 = r3.outHeight
            float r3 = (float) r3
            float r2 = (float) r2
            float r3 = r3 / r2
            int r2 = java.lang.Math.round(r3)
            int r1 = java.lang.Math.min(r1, r2)
        L21:
            return r1
    }

    static com.ss.android.socialbase.appdownloader.pp.q.rg rg(com.ss.android.socialbase.appdownloader.pp.q r0) {
            com.ss.android.socialbase.appdownloader.pp.q$rg<java.lang.Integer, android.graphics.Bitmap> r0 = r0.q
            return r0
    }

    public static com.ss.android.socialbase.appdownloader.pp.q rg() {
            com.ss.android.socialbase.appdownloader.pp.q r0 = com.ss.android.socialbase.appdownloader.pp.q.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.appdownloader.pp.q> r0 = com.ss.android.socialbase.appdownloader.pp.q.class
            monitor-enter(r0)
            com.ss.android.socialbase.appdownloader.pp.q r1 = com.ss.android.socialbase.appdownloader.pp.q.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.appdownloader.pp.q r1 = new com.ss.android.socialbase.appdownloader.pp.q     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.appdownloader.pp.q.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.appdownloader.pp.q r0 = com.ss.android.socialbase.appdownloader.pp.q.df
            return r0
    }

    static java.io.ByteArrayOutputStream rg(java.io.InputStream r0) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = df(r0)
            return r0
    }

    public android.graphics.Bitmap rg(int r2) {
            r1 = this;
            com.ss.android.socialbase.appdownloader.pp.q$rg<java.lang.Integer, android.graphics.Bitmap> r0 = r1.q
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            return r2
    }

    public void rg(int r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L19
            android.graphics.Bitmap r0 = r2.rg(r3)
            if (r0 == 0) goto Ld
            goto L19
        Ld:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIOThreadExecutor()
            com.ss.android.socialbase.appdownloader.pp.q$1 r1 = new com.ss.android.socialbase.appdownloader.pp.q$1
            r1.<init>(r2, r4, r3)
            r0.submit(r1)
        L19:
            return
    }
}
