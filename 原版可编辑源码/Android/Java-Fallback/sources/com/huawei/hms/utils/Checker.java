package com.huawei.hms.utils;

public final class Checker {
    public Checker() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void assertHandlerThread(android.os.Handler r1) {
            java.lang.String r0 = "Must be called on the handler thread"
            assertHandlerThread(r1, r0)
            return
    }

    public static void assertHandlerThread(android.os.Handler r1, java.lang.String r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = r1.getLooper()
            if (r0 != r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r2)
            throw r1
    }

    public static void assertNonEmpty(java.lang.String r1) {
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "Given String is empty or null"
            r1.<init>(r0)
            throw r1
    }

    public static void assertNonEmpty(java.lang.String r0, java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static <T> T assertNonNull(T r1) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "Null reference"
            r1.<init>(r0)
            throw r1
    }

    public static <T> T assertNonNull(T r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void assertNotUiThread(java.lang.String r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r2)
            throw r0
    }

    public static void assertUiThread(java.lang.String r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r2)
            throw r0
    }

    public static java.lang.String checkNonEmpty(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Given String is empty or null"
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String checkNonEmpty(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            throw r1
    }

    public static <T> T checkNonNull(T r1) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "Null reference"
            r1.<init>(r0)
            throw r1
    }

    public static <T> T checkNonNull(T r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static int checkNonZero(int r1) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Given Integer is zero"
            r1.<init>(r0)
            throw r1
    }

    public static int checkNonZero(int r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static long checkNotZero(long r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Given Long is zero"
            r2.<init>(r3)
            throw r2
    }

    public static long checkNotZero(long r2, java.lang.String r4) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = java.lang.String.valueOf(r4)
            r2.<init>(r3)
            throw r2
    }
}
