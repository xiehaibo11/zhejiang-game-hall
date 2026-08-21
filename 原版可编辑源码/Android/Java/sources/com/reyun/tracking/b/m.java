package com.reyun.tracking.b;

import android.content.Context;
import java.lang.reflect.Method;

final class m {
    private static Object e;
    private static Class f;
    private static Method g;
    private static Method h;
    private static Method i;
    private static Method j;
    final String a;
    final String b;
    final String c;
    final String d;

    static {
        try {
            Class<?> cls = Class.forName("com.android.id.impl.IdProviderImpl");
            f = cls;
            e = cls.newInstance();
            g = f.getMethod("getUDID", Context.class);
            h = f.getMethod("getOAID", Context.class);
            i = f.getMethod("getVAID", Context.class);
            j = f.getMethod("getAAID", Context.class);
        } catch (Throwable unused) {
        }
    }

    m(Context context) {
        this.a = a(context, g);
        this.b = a(context, h);
        this.c = a(context, i);
        this.d = a(context, j);
    }

    private static String a(Context context, Method method) {
        Object obj = e;
        if (obj == null || method == null) {
            return null;
        }
        try {
            Object objInvoke = method.invoke(obj, context);
            if (objInvoke != null) {
                return (String) objInvoke;
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }
}
