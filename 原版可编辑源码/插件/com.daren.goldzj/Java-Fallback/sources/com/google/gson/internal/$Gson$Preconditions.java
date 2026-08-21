package com.google.gson.internal;

public final class $Gson$Preconditions {
    private $Gson$Preconditions() {
        throw new UnsupportedOperationException();
    }

    @Deprecated
    public static <T> T checkNotNull(T r0) {
        if (r0 == null) goto L5;
        return r0;
    L5:
        throw new NullPointerException();
    }

    public static void checkArgument(boolean r0) {
        if (r0 == false) goto L5;
        return;
    L5:
        throw new IllegalArgumentException();
    }
}
