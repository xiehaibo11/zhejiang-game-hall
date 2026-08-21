package com.huawei.hms.common.internal;

public final class Preconditions {
    public Preconditions() {
            r2 = this;
            r2.<init>()
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "Cannot use constructor to make a new instance"
            r0.<init>(r1)
            throw r0
    }

    public static boolean a() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static void checkArgument(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void checkHandlerThread(android.os.Handler r1) {
            java.lang.String r0 = "Must be called on the handler thread"
            checkHandlerThread(r1, r0)
            return
    }

    public static void checkHandlerThread(android.os.Handler r1, java.lang.String r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = r1.getLooper()
            if (r0 != r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r2)
            throw r1
    }

    public static void checkMainThread(java.lang.String r1) {
            boolean r0 = a()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }

    public static void checkNotMainThread() {
            boolean r0 = a()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Must not be called on the main application thread"
            r0.<init>(r1)
            throw r0
    }

    public static <O> O checkNotNull(O r1) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "must not refer to a null object"
            r1.<init>(r0)
            throw r1
    }

    public static <O> O checkNotNull(O r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void checkState(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }
}
