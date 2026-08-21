package com.tencent.open.utils;

public class c {
    private static java.lang.String c;
    private java.lang.String a;
    private com.tencent.open.utils.d b;
    private long d;
    private android.os.Handler e;
    private java.lang.ref.WeakReference<android.app.Activity> f;
    private java.lang.Runnable g;



    public c(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            com.tencent.open.utils.c$2 r0 = new com.tencent.open.utils.c$2
            r0.<init>(r1)
            r1.g = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.f = r0
            com.tencent.open.utils.c$1 r0 = new com.tencent.open.utils.c$1
            android.os.Looper r2 = r2.getMainLooper()
            r0.<init>(r1, r2)
            r1.e = r0
            return
    }

    public static android.graphics.Bitmap a(java.lang.String r6) {
            java.lang.String r0 = "getbitmap bmp fail---"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getbitmap:"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AsynLoadImg"
            com.tencent.open.log.SLog.v(r2, r1)
            r1 = 0
            java.net.URL r3 = new java.net.URL     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r3.<init>(r6)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.net.URLConnection r3 = r3.openConnection()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r4 = 1
            r3.setDoInput(r4)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r3.connect()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.io.InputStream r3 = r3.getInputStream()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeStream(r3)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r3.close()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r3.<init>()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.lang.String r5 = "image download finished."
            r3.append(r5)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            r3.append(r6)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            java.lang.String r6 = r3.toString()     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            com.tencent.open.log.SLog.v(r2, r6)     // Catch: java.io.IOException -> L4b java.lang.OutOfMemoryError -> L53
            return r4
        L4b:
            r6 = move-exception
            r6.printStackTrace()
            com.tencent.open.log.SLog.v(r2, r0)
            return r1
        L53:
            r6 = move-exception
            r6.printStackTrace()
            com.tencent.open.log.SLog.v(r2, r0)
            return r1
    }

    static com.tencent.open.utils.d a(com.tencent.open.utils.c r0) {
            com.tencent.open.utils.d r0 = r0.b
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tencent.open.utils.c.c
            return r0
    }

    static java.lang.String b(com.tencent.open.utils.c r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static android.os.Handler c(com.tencent.open.utils.c r0) {
            android.os.Handler r0 = r0.e
            return r0
    }

    static long d(com.tencent.open.utils.c r2) {
            long r0 = r2.d
            return r0
    }

    public void a(java.lang.String r7, com.tencent.open.utils.d r8) {
            r6 = this;
            java.lang.String r0 = "AsynLoadImg"
            java.lang.String r1 = "--save---"
            com.tencent.open.log.SLog.v(r0, r1)
            r1 = 0
            if (r7 == 0) goto L7a
            java.lang.String r2 = ""
            boolean r2 = r7.equals(r2)
            if (r2 == 0) goto L13
            goto L7a
        L13:
            boolean r2 = com.tencent.open.utils.m.a()
            r3 = 2
            if (r2 != 0) goto L1e
            r8.a(r3, r1)
            return
        L1e:
            java.lang.ref.WeakReference<android.app.Activity> r2 = r6.f
            java.lang.Object r2 = r2.get()
            if (r2 == 0) goto L65
            java.lang.ref.WeakReference<android.app.Activity> r2 = r6.f
            java.lang.Object r2 = r2.get()
            android.app.Activity r2 = (android.app.Activity) r2
            java.lang.String r4 = "Images"
            java.io.File r4 = com.tencent.open.utils.m.h(r2, r4)
            java.io.File r5 = android.os.Environment.getExternalStorageDirectory()
            if (r4 != 0) goto L43
            java.lang.String r7 = "externalImageFile is null"
            com.tencent.open.log.SLog.e(r0, r7)
            r8.a(r3, r1)
            return
        L43:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = com.tencent.open.utils.k.d(r2)
            if (r1 == 0) goto L53
            java.lang.String r1 = r4.getAbsolutePath()
            goto L57
        L53:
            java.lang.String r1 = r5.getAbsolutePath()
        L57:
            r0.append(r1)
            java.lang.String r1 = "/tmp/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tencent.open.utils.c.c = r0
        L65:
            long r0 = java.lang.System.currentTimeMillis()
            r6.d = r0
            r6.a = r7
            r6.b = r8
            java.lang.Thread r7 = new java.lang.Thread
            java.lang.Runnable r8 = r6.g
            r7.<init>(r8)
            r7.start()
            return
        L7a:
            r7 = 1
            r8.a(r7, r1)
            return
    }

    public boolean a(android.graphics.Bitmap r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "AsynLoadImg"
            java.lang.String r1 = com.tencent.open.utils.c.c
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            if (r4 != 0) goto L13
            r3.mkdir()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
        L13:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.<init>()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.append(r1)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.append(r7)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.<init>()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.lang.String r4 = "saveFile:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.append(r7)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            com.tencent.open.log.SLog.v(r0, r7)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L5f java.io.IOException -> L61
            android.graphics.Bitmap$CompressFormat r7 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5c
            r2 = 80
            r6.compress(r7, r2, r1)     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5c
            r1.flush()     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5c
            r1.close()     // Catch: java.io.IOException -> L53
            goto L57
        L53:
            r6 = move-exception
            r6.printStackTrace()
        L57:
            r6 = 1
            return r6
        L59:
            r6 = move-exception
            r2 = r1
            goto L76
        L5c:
            r6 = move-exception
            r2 = r1
            goto L62
        L5f:
            r6 = move-exception
            goto L76
        L61:
            r6 = move-exception
        L62:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r7 = "saveFile bmp fail---"
            com.tencent.open.log.SLog.e(r0, r7, r6)     // Catch: java.lang.Throwable -> L5f
            r6 = 0
            if (r2 == 0) goto L75
            r2.close()     // Catch: java.io.IOException -> L71
            goto L75
        L71:
            r7 = move-exception
            r7.printStackTrace()
        L75:
            return r6
        L76:
            if (r2 == 0) goto L80
            r2.close()     // Catch: java.io.IOException -> L7c
            goto L80
        L7c:
            r7 = move-exception
            r7.printStackTrace()
        L80:
            throw r6
    }
}
