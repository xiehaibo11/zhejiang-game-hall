package com.mbridge.msdk.dycreator.binding;

/* JADX INFO: compiled from: ViewDataFactory.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile c f3279a;

    private c() {
    }

    public static c a() {
        if (f3279a == null) {
            synchronized (c.class) {
                if (f3279a == null) {
                    f3279a = new c();
                }
            }
        }
        return f3279a;
    }
}
