package com.tkay.expressad.out;

public class r {
    private static com.tkay.expressad.e.b a;

    private r() {
    }

    public static com.tkay.expressad.e.b a() {
        if (a == null) {
            synchronized (r.class) {
                if (a == null) {
                    a = new com.tkay.expressad.e.b();
                }
            }
        }
        return a;
    }
}
