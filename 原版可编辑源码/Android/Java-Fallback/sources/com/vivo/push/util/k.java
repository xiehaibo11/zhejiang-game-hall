package com.vivo.push.util;

public final class k extends android.os.AsyncTask<java.lang.String, java.lang.Void, java.util.List<android.graphics.Bitmap>> {
    private android.content.Context a;
    private com.vivo.push.model.InsideNotificationItem b;
    private long c;
    private boolean d;
    private int e;
    private com.vivo.push.d.r.a f;

    public k(android.content.Context r2, com.vivo.push.model.InsideNotificationItem r3, long r4, boolean r6, com.vivo.push.d.r.a r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            r1.d = r6
            r1.f = r7
            return
    }

    static com.vivo.push.model.InsideNotificationItem a(com.vivo.push.util.k r0) {
            com.vivo.push.model.InsideNotificationItem r0 = r0.b
            return r0
    }

    private java.util.List<android.graphics.Bitmap> a(java.lang.String... r10) {
            r9 = this;
            com.vivo.push.model.InsideNotificationItem r0 = r9.b
            int r0 = r0.getNotifyDisplayStatus()
            r9.e = r0
            boolean r0 = r9.d
            r1 = 0
            java.lang.String r2 = "ImageDownTask"
            if (r0 != 0) goto L15
            java.lang.String r10 = "bitmap is not display by forbid net"
            com.vivo.push.util.p.d(r2, r10)
            return r1
        L15:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3 = 0
            r4 = r3
        L1c:
            r5 = 2
            if (r4 >= r5) goto Lad
            r5 = r10[r4]
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "imgUrl="
            r6.<init>(r7)
            r6.append(r5)
            java.lang.String r7 = " i="
            r6.append(r7)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            com.vivo.push.util.p.d(r2, r6)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto La4
            java.net.URL r6 = new java.net.URL     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            java.net.URLConnection r5 = r6.openConnection()     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r6 = 30000(0x7530, float:4.2039E-41)
            r5.setConnectTimeout(r6)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r6 = 1
            r5.setDoInput(r6)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r5.setUseCaches(r3)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r5.connect()     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            int r6 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            java.lang.String r7 = "code="
            java.lang.String r8 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            java.lang.String r7 = r7.concat(r8)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            com.vivo.push.util.p.c(r2, r7)     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            r7 = 200(0xc8, float:2.8E-43)
            if (r6 != r7) goto L78
            java.io.InputStream r5 = r5.getInputStream()     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82 java.net.MalformedURLException -> L8e
            android.graphics.Bitmap r6 = android.graphics.BitmapFactory.decodeStream(r5)     // Catch: java.io.IOException -> L83 java.net.MalformedURLException -> L8f java.lang.Throwable -> L9c
            goto L7a
        L78:
            r5 = r1
            r6 = r5
        L7a:
            if (r5 == 0) goto L98
            r5.close()     // Catch: java.lang.Exception -> L98
            goto L98
        L80:
            r10 = move-exception
            goto L9e
        L82:
            r5 = r1
        L83:
            java.lang.String r6 = "IOException"
            com.vivo.push.util.p.a(r2, r6)     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L97
        L8a:
            r5.close()     // Catch: java.lang.Exception -> L97
            goto L97
        L8e:
            r5 = r1
        L8f:
            java.lang.String r6 = "MalformedURLException"
            com.vivo.push.util.p.a(r2, r6)     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L97
            goto L8a
        L97:
            r6 = r1
        L98:
            r0.add(r6)
            goto La9
        L9c:
            r10 = move-exception
            r1 = r5
        L9e:
            if (r1 == 0) goto La3
            r1.close()     // Catch: java.lang.Exception -> La3
        La3:
            throw r10
        La4:
            if (r4 != 0) goto La9
            r0.add(r1)
        La9:
            int r4 = r4 + 1
            goto L1c
        Lad:
            return r0
    }

    static long b(com.vivo.push.util.k r2) {
            long r0 = r2.c
            return r0
    }

    static android.content.Context c(com.vivo.push.util.k r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static int d(com.vivo.push.util.k r0) {
            int r0 = r0.e
            return r0
    }

    static com.vivo.push.d.r.a e(com.vivo.push.util.k r0) {
            com.vivo.push.d.r$a r0 = r0.f
            return r0
    }

    @Override
    protected final java.util.List<android.graphics.Bitmap> doInBackground(java.lang.String[] r1) {
            r0 = this;
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.util.List r1 = r0.a(r1)
            return r1
    }

    @Override
    protected final void onPostExecute(java.util.List<android.graphics.Bitmap> r3) {
            r2 = this;
            java.util.List r3 = (java.util.List) r3
            super.onPostExecute(r3)
            java.lang.String r0 = "ImageDownTask"
            java.lang.String r1 = "onPostExecute"
            com.vivo.push.util.p.c(r0, r1)
            com.vivo.push.util.l r0 = new com.vivo.push.util.l
            r0.<init>(r2, r3)
            com.vivo.push.m.c(r0)
            return
    }
}
