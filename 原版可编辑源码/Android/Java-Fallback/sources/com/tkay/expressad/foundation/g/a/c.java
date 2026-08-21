package com.tkay.expressad.foundation.g.a;

public final class c implements com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> {
    private final java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> a;
    private final int b;
    private int c;

    public c(int r4) {
            r3 = this;
            r3.<init>()
            if (r4 <= 0) goto L13
            r3.b = r4
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r0 = 0
            r1 = 1061158912(0x3f400000, float:0.75)
            r2 = 1
            r4.<init>(r0, r1, r2)
            r3.a = r4
            return
        L13:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "maxSize <= 0"
            r4.<init>(r0)
            throw r4
    }

    private static int a(android.graphics.Bitmap r1) {
            int r0 = r1.getRowBytes()
            int r1 = r1.getHeight()
            int r0 = r0 * r1
            return r0
    }

    private android.graphics.Bitmap a(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L1b
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r1.a     // Catch: java.lang.Throwable -> L18
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L18
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2     // Catch: java.lang.Throwable -> L18
            if (r2 == 0) goto L15
            boolean r0 = r2.isRecycled()     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L15
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            return r2
        L15:
            monitor-exit(r1)
            r2 = 0
            return r2
        L18:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1b:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    private void a(int r4) {
            r3 = this;
        L0:
            monitor-enter(r3)
            int r0 = r3.c     // Catch: java.lang.Throwable -> L75
            if (r0 < 0) goto L56
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r3.a     // Catch: java.lang.Throwable -> L75
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L11
            int r0 = r3.c     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L56
        L11:
            int r0 = r3.c     // Catch: java.lang.Throwable -> L75
            if (r0 <= r4) goto L54
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r3.a     // Catch: java.lang.Throwable -> L75
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L1e
            goto L54
        L1e:
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r3.a     // Catch: java.lang.Throwable -> L75
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L75
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L75
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Throwable -> L75
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L32
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L75
            return
        L32:
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L75
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> L75
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0     // Catch: java.lang.Throwable -> L75
            int r0 = a(r0)     // Catch: java.lang.Throwable -> L52
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r2 = r3.a     // Catch: java.lang.Throwable -> L52
            java.lang.Object r1 = r2.remove(r1)     // Catch: java.lang.Throwable -> L52
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1     // Catch: java.lang.Throwable -> L52
            r1.recycle()     // Catch: java.lang.Throwable -> L52
            int r1 = r3.c     // Catch: java.lang.Throwable -> L52
            int r1 = r1 - r0
            r3.c = r1     // Catch: java.lang.Throwable -> L52
        L52:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L75
            goto L0
        L54:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L75
            return
        L56:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L75
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r0.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.Class r1 = r3.getClass()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L75
            r0.append(r1)     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = ".sizeOf() is reporting inconsistent results!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L75
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L75
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L75
            throw r4     // Catch: java.lang.Throwable -> L75
        L75:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private boolean a(java.lang.String r3, android.graphics.Bitmap r4) {
            r2 = this;
            if (r3 == 0) goto L2c
            if (r4 == 0) goto L2c
            monitor-enter(r2)
            int r0 = r2.c     // Catch: java.lang.Throwable -> L29
            int r1 = a(r4)     // Catch: java.lang.Throwable -> L29
            int r0 = r0 + r1
            r2.c = r0     // Catch: java.lang.Throwable -> L29
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r2.a     // Catch: java.lang.Throwable -> L29
            java.lang.Object r3 = r0.put(r3, r4)     // Catch: java.lang.Throwable -> L29
            android.graphics.Bitmap r3 = (android.graphics.Bitmap) r3     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L21
            int r4 = r2.c     // Catch: java.lang.Throwable -> L29
            int r3 = a(r3)     // Catch: java.lang.Throwable -> L29
            int r4 = r4 - r3
            r2.c = r4     // Catch: java.lang.Throwable -> L29
        L21:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L29
            int r3 = r2.b
            r2.a(r3)
            r3 = 1
            return r3
        L29:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L2c:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "key == null || value == null"
            r3.<init>(r4)
            throw r3
    }

    private void b(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L1b
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r1.a     // Catch: java.lang.Throwable -> L18
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L18
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2     // Catch: java.lang.Throwable -> L18
            if (r2 == 0) goto L16
            int r0 = r1.c     // Catch: java.lang.Throwable -> L18
            int r2 = a(r2)     // Catch: java.lang.Throwable -> L18
            int r0 = r0 - r2
            r1.c = r0     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1b:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final java.util.Collection<java.lang.String> a() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> Le
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r1 = r2.a     // Catch: java.lang.Throwable -> Le
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L1d
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, android.graphics.Bitmap> r0 = r1.a     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L1a
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L18
            int r0 = r1.c     // Catch: java.lang.Throwable -> L1a
            int r2 = a(r2)     // Catch: java.lang.Throwable -> L1a
            int r0 = r0 - r2
            r1.c = r0     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1d:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final boolean a(java.lang.String r1, android.graphics.Bitmap r2) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            boolean r1 = r0.a(r1, r2)
            return r1
    }

    @Override
    public final android.graphics.Bitmap b(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            android.graphics.Bitmap r1 = r0.a(r1)
            return r1
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = -1
            r1.a(r0)
            return
    }

    public final synchronized java.lang.String toString() {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "LruCache[maxSize=%d]"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L15
            r2 = 0
            int r3 = r4.b     // Catch: java.lang.Throwable -> L15
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L15
            r1[r2] = r3     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
