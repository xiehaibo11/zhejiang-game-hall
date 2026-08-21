package com.mbridge.msdk.dycreator.d;

import com.mbridge.msdk.dycreator.g.c;
import com.mbridge.msdk.dycreator.g.d;
import com.mbridge.msdk.dycreator.g.f;
import com.mbridge.msdk.dycreator.g.h;

public final class a {
    private static volatile a a;

    public enum a {
        a,
        b,
        c,
        d
    }

    private a() {
    }

    public static a a() {
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a();
                }
            }
        }
        return a;
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[a.values().length];
            a = iArr;
            try {
                iArr[a.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[a.b.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[a.c.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[a.d.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    public final <T extends com.mbridge.msdk.dycreator.g.a> T a(a aVar) {
        int i = 1.a[aVar.ordinal()];
        if (i == 1) {
            return new d();
        }
        if (i == 2) {
            return new c();
        }
        if (i == 3) {
            return new f();
        }
        if (i != 4) {
            return null;
        }
        return new h();
    }
}
