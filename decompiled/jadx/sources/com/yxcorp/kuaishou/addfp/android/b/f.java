package com.yxcorp.kuaishou.addfp.android.b;

import android.os.Build;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes4.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Object f8409a;
    private static Method b;
    public static final /* synthetic */ int c = 0;

    static {
        if (Build.VERSION.SDK_INT >= 28) {
            try {
                Method declaredMethod = Class.class.getDeclaredMethod("forName", String.class);
                Method declaredMethod2 = Class.class.getDeclaredMethod("getDeclaredMethod", String.class, Class[].class);
                Class cls = (Class) declaredMethod.invoke(null, "dalvik.system.VMRuntime");
                Method method = (Method) declaredMethod2.invoke(cls, "getRuntime", null);
                b = (Method) declaredMethod2.invoke(cls, "setHiddenApiExemptions", new Class[]{String[].class});
                f8409a = method.invoke(null, new Object[0]);
            } catch (Throwable unused) {
            }
        }
    }

    public static boolean a() {
        Method method;
        String[] strArr = {"L"};
        Object obj = f8409a;
        if (obj != null && (method = b) != null) {
            try {
                method.invoke(obj, strArr);
                return true;
            } catch (Throwable unused) {
            }
        }
        return false;
    }
}
