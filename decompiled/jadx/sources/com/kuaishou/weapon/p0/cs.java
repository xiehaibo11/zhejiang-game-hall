package com.kuaishou.weapon.p0;

import android.os.Build;
import com.kuaishou.weapon.p0.jni.Engine;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes2.dex */
public class cs {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f2744a;
    private static boolean b;

    public cs() {
        b();
    }

    private int a(Method method) {
        try {
            if (f2744a <= 1 || method == null) {
                return 0;
            }
            return Engine.mmo(method, f2744a, method.getModifiers());
        } catch (Exception unused) {
            return 0;
        }
    }

    private void b() {
        if (!Engine.loadSuccess || b) {
            return;
        }
        boolean zB = cq.b();
        int i = Build.VERSION.SDK_INT;
        if (zB && i < 29 && i > 22) {
            f2744a = Engine.off();
        }
        b = true;
    }

    private boolean c() {
        return b && f2744a > 1;
    }

    public int a() {
        if (!c()) {
            return -1;
        }
        long jA = cp.b.a();
        long jA2 = cp.f2740a.a();
        if (f2744a == jA) {
            return (int) jA2;
        }
        return -1;
    }

    public int a(int i, Class cls, String str, Object... objArr) {
        Method methodA;
        try {
            if (!c() || (methodA = dh.a(cls, str, objArr)) == null) {
                return 0;
            }
            return Engine.mqc(methodA, i);
        } catch (Exception unused) {
            return 0;
        }
    }

    public int a(Class cls, String str, Object... objArr) {
        try {
            if (c()) {
                return a(dh.a(cls, str, objArr));
            }
            return 0;
        } catch (Exception unused) {
            return 0;
        }
    }
}
