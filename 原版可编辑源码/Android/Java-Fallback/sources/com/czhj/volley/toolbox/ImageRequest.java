package com.czhj.volley.toolbox;

public class ImageRequest extends com.czhj.volley.Request<android.graphics.Bitmap> {
    public static final float DEFAULT_IMAGE_BACKOFF_MULT = 2.0f;
    public static final int DEFAULT_IMAGE_MAX_RETRIES = 2;
    public static final int DEFAULT_IMAGE_TIMEOUT_MS = 1000;
    private static final java.lang.Object a = null;
    private final java.lang.Object b;
    private final android.graphics.Bitmap.Config c;
    private final int d;
    private final int e;
    private final android.widget.ImageView.ScaleType f;
    private com.czhj.volley.Response.Listener<android.graphics.Bitmap> g;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.czhj.volley.toolbox.ImageRequest.a = r0
            return
    }

    @java.lang.Deprecated
    public ImageRequest(java.lang.String r9, com.czhj.volley.Response.Listener<android.graphics.Bitmap> r10, int r11, int r12, android.graphics.Bitmap.Config r13, com.czhj.volley.Response.ErrorListener r14) {
            r8 = this;
            android.widget.ImageView$ScaleType r5 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r6 = r13
            r7 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public ImageRequest(java.lang.String r3, com.czhj.volley.Response.Listener<android.graphics.Bitmap> r4, int r5, int r6, android.widget.ImageView.ScaleType r7, android.graphics.Bitmap.Config r8, com.czhj.volley.Response.ErrorListener r9) {
            r2 = this;
            r0 = 0
            r2.<init>(r0, r3, r9)
            java.lang.Object r3 = new java.lang.Object
            r3.<init>()
            r2.b = r3
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r9 = 1000(0x3e8, float:1.401E-42)
            r0 = 2
            r1 = 1073741824(0x40000000, float:2.0)
            r3.<init>(r9, r0, r1)
            r2.setRetryPolicy(r3)
            r2.g = r4
            r2.c = r8
            r2.d = r5
            r2.e = r6
            r2.f = r7
            return
    }

    static int a(int r4, int r5, int r6, int r7) {
            double r0 = (double) r4
            double r2 = (double) r6
            double r0 = r0 / r2
            double r4 = (double) r5
            double r6 = (double) r7
            double r4 = r4 / r6
            double r4 = java.lang.Math.min(r0, r4)
            r6 = 1065353216(0x3f800000, float:1.0)
        Lc:
            r7 = 1073741824(0x40000000, float:2.0)
            float r7 = r7 * r6
            double r0 = (double) r7
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 > 0) goto L16
            r6 = r7
            goto Lc
        L16:
            int r4 = (int) r6
            return r4
    }

    private static int a(int r4, int r5, int r6, int r7, android.widget.ImageView.ScaleType r8) {
            if (r4 != 0) goto L5
            if (r5 != 0) goto L5
            return r6
        L5:
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY
            if (r8 != r0) goto Ld
            if (r4 != 0) goto Lc
            return r6
        Lc:
            return r4
        Ld:
            if (r4 != 0) goto L16
            double r4 = (double) r5
            double r7 = (double) r7
            double r4 = r4 / r7
            double r6 = (double) r6
            double r6 = r6 * r4
            int r4 = (int) r6
            return r4
        L16:
            if (r5 != 0) goto L19
            return r4
        L19:
            double r0 = (double) r7
            double r6 = (double) r6
            double r0 = r0 / r6
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.CENTER_CROP
            if (r8 != r6) goto L2a
            double r6 = (double) r4
            double r6 = r6 * r0
            double r2 = (double) r5
            int r5 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r5 >= 0) goto L29
            double r2 = r2 / r0
            int r4 = (int) r2
        L29:
            return r4
        L2a:
            double r6 = (double) r4
            double r6 = r6 * r0
            double r2 = (double) r5
            int r5 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r5 <= 0) goto L33
            double r2 = r2 / r0
            int r4 = (int) r2
        L33:
            return r4
    }

    private com.czhj.volley.Response<android.graphics.Bitmap> a(com.czhj.volley.NetworkResponse r11) {
            r10 = this;
            byte[] r0 = r11.data
            android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options
            r1.<init>()
            int r2 = r10.d
            r3 = 0
            if (r2 != 0) goto L1a
            int r2 = r10.e
            if (r2 != 0) goto L1a
            android.graphics.Bitmap$Config r2 = r10.c
            r1.inPreferredConfig = r2
            int r2 = r0.length
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeByteArray(r0, r3, r2, r1)
            goto L5c
        L1a:
            r2 = 1
            r1.inJustDecodeBounds = r2
            int r4 = r0.length
            android.graphics.BitmapFactory.decodeByteArray(r0, r3, r4, r1)
            int r4 = r1.outWidth
            int r5 = r1.outHeight
            int r6 = r10.d
            int r7 = r10.e
            android.widget.ImageView$ScaleType r8 = r10.f
            int r6 = a(r6, r7, r4, r5, r8)
            int r7 = r10.e
            int r8 = r10.d
            android.widget.ImageView$ScaleType r9 = r10.f
            int r7 = a(r7, r8, r5, r4, r9)
            r1.inJustDecodeBounds = r3
            int r4 = a(r4, r5, r6, r7)
            r1.inSampleSize = r4
            int r4 = r0.length
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeByteArray(r0, r3, r4, r1)
            if (r0 == 0) goto L5c
            int r1 = r0.getWidth()
            if (r1 > r6) goto L54
            int r1 = r0.getHeight()
            if (r1 <= r7) goto L5c
        L54:
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createScaledBitmap(r0, r6, r7, r2)
            r0.recycle()
            r0 = r1
        L5c:
            if (r0 != 0) goto L68
            com.czhj.volley.ParseError r0 = new com.czhj.volley.ParseError
            r0.<init>(r11)
            com.czhj.volley.Response r11 = com.czhj.volley.Response.error(r0)
            return r11
        L68:
            com.czhj.volley.Cache$Entry r11 = com.czhj.volley.toolbox.HttpHeaderParser.parseCacheHeaders(r11)
            com.czhj.volley.Response r11 = com.czhj.volley.Response.success(r0, r11)
            return r11
    }

    @Override
    public void cancel() {
            r2 = this;
            super.cancel()
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            r1 = 0
            r2.g = r1     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r1
    }

    protected void deliverResponse(android.graphics.Bitmap r3) {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            com.czhj.volley.Response$Listener<android.graphics.Bitmap> r1 = r2.g     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto Lb
            r1.onResponse(r3)
        Lb:
            return
        Lc:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3
    }

    @Override
    protected void deliverResponse(android.graphics.Bitmap r1) {
            r0 = this;
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            r0.deliverResponse(r1)
            return
    }

    @Override
    public com.czhj.volley.Request.Priority getPriority() {
            r1 = this;
            com.czhj.volley.Request$Priority r0 = com.czhj.volley.Request.Priority.LOW
            return r0
    }

    @Override
    protected com.czhj.volley.Response<android.graphics.Bitmap> parseNetworkResponse(com.czhj.volley.NetworkResponse r6) {
            r5 = this;
            java.lang.Object r0 = com.czhj.volley.toolbox.ImageRequest.a
            monitor-enter(r0)
            com.czhj.volley.Response r6 = r5.a(r6)     // Catch: java.lang.Throwable -> L9 java.lang.OutOfMemoryError -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r6
        L9:
            r6 = move-exception
            goto L30
        Lb:
            r1 = move-exception
            java.lang.String r2 = "Caught OOM for %d byte image, url=%s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L9
            r4 = 0
            byte[] r6 = r6.data     // Catch: java.lang.Throwable -> L9
            int r6 = r6.length     // Catch: java.lang.Throwable -> L9
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L9
            r3[r4] = r6     // Catch: java.lang.Throwable -> L9
            r6 = 1
            java.lang.String r4 = r5.getUrl()     // Catch: java.lang.Throwable -> L9
            r3[r6] = r4     // Catch: java.lang.Throwable -> L9
            com.czhj.volley.VolleyLog.e(r2, r3)     // Catch: java.lang.Throwable -> L9
            com.czhj.volley.ParseError r6 = new com.czhj.volley.ParseError     // Catch: java.lang.Throwable -> L9
            r6.<init>(r1)     // Catch: java.lang.Throwable -> L9
            com.czhj.volley.Response r6 = com.czhj.volley.Response.error(r6)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r6
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r6
    }
}
