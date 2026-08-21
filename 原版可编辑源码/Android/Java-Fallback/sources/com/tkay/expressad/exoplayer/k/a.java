package com.tkay.expressad.exoplayer.k;

public final class a {
    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(int r0, int r1) {
            if (r0 < 0) goto L5
            if (r0 >= r1) goto L5
            return r0
        L5:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public static <T> T a(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            r0 = 0
            throw r0
    }

    private static <T> T a(T r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    private static java.lang.String a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    private static java.lang.String a(java.lang.String r1, java.lang.Object r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            throw r1
    }

    private static void a() {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Not in applications main thread"
            r0.<init>(r1)
            throw r0
    }

    public static void a(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
    }

    public static void a(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void b(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    public static void b(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }
}
