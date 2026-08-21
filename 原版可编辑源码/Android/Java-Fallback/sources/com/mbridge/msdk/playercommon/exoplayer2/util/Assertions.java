package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class Assertions {
    private Assertions() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkArgument(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
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

    public static int checkIndex(int r0, int r1, int r2) {
            if (r0 < r1) goto L5
            if (r0 >= r2) goto L5
            return r0
        L5:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public static void checkMainThread() {
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

    public static java.lang.String checkNotEmpty(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    public static java.lang.String checkNotEmpty(java.lang.String r1, java.lang.Object r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            throw r1
    }

    public static <T> T checkNotNull(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            r0 = 0
            throw r0
    }

    public static <T> T checkNotNull(T r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void checkState(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
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
