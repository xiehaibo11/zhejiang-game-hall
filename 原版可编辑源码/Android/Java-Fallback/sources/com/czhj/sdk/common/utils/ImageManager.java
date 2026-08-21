package com.czhj.sdk.common.utils;

public class ImageManager {
    private static com.czhj.sdk.common.utils.ImageManager a;
    private android.content.Context b;
    private final java.lang.String c;
    private java.util.concurrent.ExecutorService d;
    private android.util.LruCache<java.lang.String, android.graphics.Bitmap> e;
    private android.os.Handler f;
    private java.io.File g;
    private android.widget.ImageView h;


    public interface BitmapLoadedListener {
        void onBitmapLoadFailed();

        void onBitmapLoaded(android.graphics.Bitmap r1);
    }

    public class RequestCreatorRunnable implements java.lang.Runnable {
        java.lang.String a;
        int b;
        int c;
        android.widget.ImageView d;
        final com.czhj.sdk.common.utils.ImageManager e;



        public RequestCreatorRunnable(com.czhj.sdk.common.utils.ImageManager r1, java.lang.String r2) {
                r0 = this;
                r0.e = r1
                r0.<init>()
                r0.a = r2
                return
        }

        private android.graphics.Bitmap a() {
                r6 = this;
                java.lang.String r0 = r6.a
                java.lang.String r1 = "/"
                int r1 = r0.lastIndexOf(r1)
                int r1 = r1 + 1
                java.lang.String r0 = r0.substring(r1)
                java.io.File r1 = new java.io.File
                com.czhj.sdk.common.utils.ImageManager r2 = r6.e
                java.io.File r2 = com.czhj.sdk.common.utils.ImageManager.c(r2)
                java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
                r1.<init>(r2, r0)
                boolean r0 = r1.exists()
                if (r0 == 0) goto L36
                long r2 = r1.length()
                r4 = 0
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 <= 0) goto L36
                java.lang.String r0 = r1.getAbsolutePath()
                android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeFile(r0)
                return r0
            L36:
                r0 = 0
                return r0
        }

        private void b() {
                r2 = this;
                com.czhj.sdk.common.utils.ImageManager r0 = r2.e
                android.os.Handler r0 = com.czhj.sdk.common.utils.ImageManager.a(r0)
                com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable$2 r1 = new com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable$2
                r1.<init>(r2)
                r0.post(r1)
                return
        }

        public com.czhj.sdk.common.utils.ImageManager.RequestCreatorRunnable error(int r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public void into(android.widget.ImageView r3) {
                r2 = this;
                r2.d = r3
                int r0 = r2.b
                if (r0 == 0) goto Lb
                if (r3 == 0) goto Lb
                r3.setImageResource(r0)
            Lb:
                java.lang.String r0 = r2.a
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L14
                return
            L14:
                com.czhj.sdk.common.utils.ImageManager r0 = r2.e
                android.util.LruCache r0 = com.czhj.sdk.common.utils.ImageManager.b(r0)
                java.lang.String r1 = r2.a
                java.lang.Object r0 = r0.get(r1)
                android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
                if (r0 == 0) goto L28
                r3.setImageBitmap(r0)
                return
            L28:
                android.graphics.Bitmap r0 = r2.a()
                if (r0 == 0) goto L3d
                r3.setImageBitmap(r0)
                com.czhj.sdk.common.utils.ImageManager r3 = r2.e
                android.util.LruCache r3 = com.czhj.sdk.common.utils.ImageManager.b(r3)
                java.lang.String r1 = r2.a
                r3.put(r1, r0)
                return
            L3d:
                com.czhj.sdk.common.utils.ImageManager r3 = r2.e
                java.util.concurrent.ExecutorService r3 = com.czhj.sdk.common.utils.ImageManager.d(r3)
                r3.submit(r2)
                return
        }

        public com.czhj.sdk.common.utils.ImageManager.RequestCreatorRunnable placeholder(int r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        @Override
        public void run() {
                r4 = this;
                java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r1 = r4.a     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r0.<init>(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.net.URLConnection r0 = r0.openConnection()     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r1 = "GET"
                r0.setRequestMethod(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r1 = 2000(0x7d0, float:2.803E-42)
                r0.setConnectTimeout(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                int r1 = r0.getResponseCode()     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r2 = 200(0xc8, float:2.8E-43)
                if (r1 != r2) goto L6c
                java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeStream(r0)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                com.czhj.sdk.common.utils.ImageManager r1 = r4.e     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                android.os.Handler r1 = com.czhj.sdk.common.utils.ImageManager.a(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable$1 r2 = new com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable$1     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r2.<init>(r4, r0)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r1.post(r2)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                com.czhj.sdk.common.utils.ImageManager r1 = r4.e     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                android.util.LruCache r1 = com.czhj.sdk.common.utils.ImageManager.b(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r2 = r4.a     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r1.put(r2, r0)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r1 = r4.a     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r2 = r4.a     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r3 = "/"
                int r2 = r2.lastIndexOf(r3)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                int r2 = r2 + 1
                java.lang.String r1 = r1.substring(r2)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                com.czhj.sdk.common.utils.ImageManager r3 = r4.e     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.io.File r3 = com.czhj.sdk.common.utils.ImageManager.c(r3)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.lang.String r1 = com.czhj.sdk.common.utils.Md5Util.md5(r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r2.<init>(r3, r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r1.<init>(r2)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.PNG     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                r3 = 100
                r0.compress(r2, r3, r1)     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                goto L77
            L6c:
                r4.b()     // Catch: java.lang.Exception -> L70 java.io.FileNotFoundException -> L77
                goto L77
            L70:
                r0 = move-exception
                r0.printStackTrace()
                r4.b()
            L77:
                return
        }
    }

    public ImageManager(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "SigImageCache"
            r2.c = r0
            r0 = 4
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r2.d = r0
            android.util.LruCache r0 = new android.util.LruCache
            r1 = 4194304(0x400000, float:5.877472E-39)
            r0.<init>(r1)
            r2.e = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r2.f = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.b = r3
            return
    }

    static android.os.Handler a(com.czhj.sdk.common.utils.ImageManager r0) {
            android.os.Handler r0 = r0.f
            return r0
    }

    private static com.czhj.sdk.common.utils.ImageManager a(android.content.Context r2) {
            com.czhj.sdk.common.utils.ImageManager r0 = com.czhj.sdk.common.utils.ImageManager.a
            if (r0 != 0) goto L17
            java.lang.Class<com.czhj.sdk.common.utils.ImageManager> r0 = com.czhj.sdk.common.utils.ImageManager.class
            monitor-enter(r0)
            com.czhj.sdk.common.utils.ImageManager r1 = com.czhj.sdk.common.utils.ImageManager.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.czhj.sdk.common.utils.ImageManager r1 = new com.czhj.sdk.common.utils.ImageManager     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.czhj.sdk.common.utils.ImageManager.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.czhj.sdk.common.utils.ImageManager r2 = com.czhj.sdk.common.utils.ImageManager.a
            return r2
    }

    private java.io.File a() {
            r3 = this;
            java.io.File r0 = r3.g
            if (r0 == 0) goto L15
            boolean r0 = r0.isDirectory()
            if (r0 == 0) goto L15
            java.io.File r0 = r3.g
            boolean r0 = r0.exists()
            if (r0 == 0) goto L15
            java.io.File r0 = r3.g
            return r0
        L15:
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            java.lang.String r1 = "SigImageCache"
            if (r0 == 0) goto L2f
            java.io.File r0 = new java.io.File
            android.content.Context r2 = r3.b
            java.io.File r2 = r2.getExternalCacheDir()
            r0.<init>(r2, r1)
            goto L3a
        L2f:
            java.io.File r0 = new java.io.File
            android.content.Context r2 = r3.b
            java.io.File r2 = r2.getCacheDir()
            r0.<init>(r2, r1)
        L3a:
            return r0
    }

    static android.util.LruCache b(com.czhj.sdk.common.utils.ImageManager r0) {
            android.util.LruCache<java.lang.String, android.graphics.Bitmap> r0 = r0.e
            return r0
    }

    static java.io.File c(com.czhj.sdk.common.utils.ImageManager r0) {
            java.io.File r0 = r0.a()
            return r0
    }

    static java.util.concurrent.ExecutorService d(com.czhj.sdk.common.utils.ImageManager r0) {
            java.util.concurrent.ExecutorService r0 = r0.d
            return r0
    }

    public static com.czhj.sdk.common.utils.ImageManager with(android.content.Context r0) {
            com.czhj.sdk.common.utils.ImageManager r0 = a(r0)
            return r0
    }

    public void clearCache() {
            r3 = this;
            java.io.File r0 = r3.a()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L2d
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L2d
            r1 = 100
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L1a
            java.lang.String r0 = "native ad file list is null"
        L16:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L2d
            goto L33
        L1a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r1.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "native ad file remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2d
            int r0 = r0.length     // Catch: java.lang.Throwable -> L2d
            r1.append(r0)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L2d
            goto L16
        L2d:
            r0 = move-exception
            java.lang.String r1 = "clean native ad file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L33:
            return
    }

    public com.czhj.sdk.common.utils.ImageManager customCachePath(java.io.File r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public void getBitmap(java.lang.String r8, com.czhj.sdk.common.utils.ImageManager.BitmapLoadedListener r9) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return
        L7:
            android.util.LruCache<java.lang.String, android.graphics.Bitmap> r0 = r7.e
            java.lang.Object r0 = r0.get(r8)
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            r1 = 0
            if (r0 == 0) goto L16
            r9.onBitmapLoaded(r0)
            return
        L16:
            java.lang.String r0 = "/"
            int r0 = r8.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r8.substring(r0)
            java.io.File r2 = new java.io.File
            java.io.File r3 = r7.a()
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
            r2.<init>(r3, r0)
            boolean r0 = r2.exists()
            if (r0 == 0) goto L47
            long r3 = r2.length()
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L47
            java.lang.String r0 = r2.getAbsolutePath()
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeFile(r0)
        L47:
            if (r1 == 0) goto L52
            android.util.LruCache<java.lang.String, android.graphics.Bitmap> r0 = r7.e
            r0.put(r8, r1)
            r9.onBitmapLoaded(r1)
            return
        L52:
            java.util.concurrent.ExecutorService r0 = r7.d
            com.czhj.sdk.common.utils.ImageManager$1 r1 = new com.czhj.sdk.common.utils.ImageManager$1
            r1.<init>(r7, r8, r9)
            r0.submit(r1)
            return
    }

    public com.czhj.sdk.common.utils.ImageManager.RequestCreatorRunnable load(java.lang.String r2) {
            r1 = this;
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r0 = new com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable
            r0.<init>(r1, r2)
            return r0
    }
}
