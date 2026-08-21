package com.google.gson.internal;

public final class $Gson$Preconditions {
    private $Gson$Preconditions() {
            r1 = this;
            r1.<init>()
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    public static void checkArgument(boolean r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
    }

    public static <T> T checkNotNull(T r1) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            r0.<init>()
            throw r0
    }
}
