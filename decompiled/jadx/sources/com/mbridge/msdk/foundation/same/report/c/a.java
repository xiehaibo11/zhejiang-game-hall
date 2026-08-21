package com.mbridge.msdk.foundation.same.report.c;

/* JADX INFO: compiled from: LogFileController.java */
/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f3484a = a.class.getSimpleName();
    private static a b = null;

    private a() {
    }

    public static a a() {
        if (b == null) {
            synchronized (a.class) {
                if (b == null) {
                    b = new a();
                }
            }
        }
        return b;
    }
}
