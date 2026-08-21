package com.czhj.wire;

/* JADX INFO: loaded from: classes.dex */
public final class Wire {
    private Wire() {
    }

    public static <T> T get(T t, T t2) {
        return t != null ? t : t2;
    }
}
