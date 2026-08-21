package com.mbridge.msdk.foundation.same.report.c;

public class a {
    public static final String a = a.class.getSimpleName();
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
