package com.tkay.expressad.out;

/* JADX INFO: loaded from: classes3.dex */
public class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static com.tkay.expressad.e.b f7030a;

    private r() {
    }

    public static com.tkay.expressad.e.b a() {
        if (f7030a == null) {
            synchronized (r.class) {
                if (f7030a == null) {
                    f7030a = new com.tkay.expressad.e.b();
                }
            }
        }
        return f7030a;
    }
}
