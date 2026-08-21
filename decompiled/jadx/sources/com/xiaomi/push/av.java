package com.xiaomi.push;

import android.content.Context;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

/* JADX INFO: loaded from: classes4.dex */
class av implements au, InvocationHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String[][] f8043a = {new String[]{"com.bun.supplier.IIdentifierListener", "com.bun.supplier.IdSupplier"}, new String[]{"com.bun.miitmdid.core.IIdentifierListener", "com.bun.miitmdid.supplier.IdSupplier"}};

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f129a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Class f131a = null;
    private Class b = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Method f133a = null;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private Method f134b = null;
    private Method c = null;
    private Method d = null;
    private Method e = null;
    private Method f = null;
    private Method g = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Object f132a = new Object();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile int f127a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile long f128a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile a f130a = null;

    class a {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        Boolean f135a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f136a;
        String b;
        String c;
        String d;

        private a() {
            this.f135a = null;
            this.f136a = null;
            this.b = null;
            this.c = null;
            this.d = null;
        }

        boolean a() {
            if (!TextUtils.isEmpty(this.f136a) || !TextUtils.isEmpty(this.b) || !TextUtils.isEmpty(this.c) || !TextUtils.isEmpty(this.d)) {
                this.f135a = true;
            }
            return this.f135a != null;
        }
    }

    public av(Context context) {
        this.f129a = context.getApplicationContext();
        a(context);
        b(context);
    }

    private static Class<?> a(Context context, String str) {
        try {
            return v.a(context, str);
        } catch (Throwable unused) {
            return null;
        }
    }

    private static <T> T a(Method method, Object obj, Object... objArr) {
        if (method == null) {
            return null;
        }
        try {
            T t = (T) method.invoke(obj, objArr);
            if (t != null) {
                return t;
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    private static Method a(Class<?> cls, String str, Class<?>... clsArr) {
        if (cls == null) {
            return null;
        }
        try {
            return cls.getMethod(str, clsArr);
        } catch (Throwable unused) {
            return null;
        }
    }

    private void a() {
        synchronized (this.f132a) {
            try {
                this.f132a.notifyAll();
            } catch (Exception unused) {
            }
        }
    }

    private void a(Context context) {
        Class<?> clsA = a(context, "com.bun.miitmdid.core.MdidSdk");
        Class<?> cls = null;
        Class<?> cls2 = null;
        int i = 0;
        while (true) {
            String[][] strArr = f8043a;
            if (i >= strArr.length) {
                break;
            }
            String[] strArr2 = strArr[i];
            Class<?> clsA2 = a(context, strArr2[0]);
            Class<?> clsA3 = a(context, strArr2[1]);
            if (clsA2 != null && clsA3 != null) {
                b("found class in index " + i);
                cls2 = clsA3;
                cls = clsA2;
                break;
            }
            i++;
            cls2 = clsA3;
            cls = clsA2;
        }
        this.f131a = clsA;
        this.f133a = a(clsA, "InitSdk", (Class<?>[]) new Class[]{Context.class, cls});
        this.b = cls;
        this.f134b = a(cls2, "getUDID", (Class<?>[]) new Class[0]);
        this.c = a(cls2, "getOAID", (Class<?>[]) new Class[0]);
        this.d = a(cls2, "getVAID", (Class<?>[]) new Class[0]);
        this.e = a(cls2, "getAAID", (Class<?>[]) new Class[0]);
        this.f = a(cls2, "isSupported", (Class<?>[]) new Class[0]);
        this.g = a(cls2, "shutDown", (Class<?>[]) new Class[0]);
    }

    private void a(String str) {
        if (this.f130a != null) {
            return;
        }
        long j = this.f128a;
        long jElapsedRealtime = SystemClock.elapsedRealtime() - Math.abs(j);
        int i = this.f127a;
        if (jElapsedRealtime > 3000 && i < 3) {
            synchronized (this.f132a) {
                if (this.f128a == j && this.f127a == i) {
                    b("retry, current count is " + i);
                    this.f127a = this.f127a + 1;
                    b(this.f129a);
                    j = this.f128a;
                    jElapsedRealtime = SystemClock.elapsedRealtime() - Math.abs(j);
                }
            }
        }
        if (this.f130a != null || j < 0 || jElapsedRealtime > 3000 || Looper.myLooper() == Looper.getMainLooper()) {
            return;
        }
        synchronized (this.f132a) {
            if (this.f130a == null) {
                try {
                    b(str + " wait...");
                    this.f132a.wait(3000L);
                } catch (Exception unused) {
                }
            }
        }
    }

    private static boolean a(Object obj) {
        return (obj instanceof Boolean) || (obj instanceof Character) || (obj instanceof Byte) || (obj instanceof Short) || (obj instanceof Integer) || (obj instanceof Long) || (obj instanceof Float) || (obj instanceof Double);
    }

    private void b(Context context) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j = -jElapsedRealtime;
        Class cls = this.b;
        if (cls != null) {
            try {
                ClassLoader classLoader = cls.getClassLoader();
                if (classLoader == null) {
                    classLoader = context.getClassLoader();
                }
                a(this.f133a, this.f131a.newInstance(), context, Proxy.newProxyInstance(classLoader, new Class[]{this.b}, this));
            } catch (Throwable th) {
                b("call init sdk error:" + th);
                jElapsedRealtime = j;
            }
        } else {
            jElapsedRealtime = j;
        }
        this.f128a = jElapsedRealtime;
    }

    private static void b(String str) {
        com.xiaomi.channel.commonutils.logger.b.m43a("mdid:" + str);
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public String mo126a() {
        a("getOAID");
        if (this.f130a == null) {
            return null;
        }
        return this.f130a.b;
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public boolean mo127a() {
        a("isSupported");
        return this.f130a != null && Boolean.TRUE.equals(this.f130a.f135a);
    }

    @Override // java.lang.reflect.InvocationHandler
    public Object invoke(Object obj, Method method, Object[] objArr) {
        this.f128a = SystemClock.elapsedRealtime();
        if (objArr != null) {
            a aVar = new a();
            int length = objArr.length;
            int i = 0;
            while (true) {
                if (i >= length) {
                    break;
                }
                Object obj2 = objArr[i];
                if (obj2 != null && !a(obj2)) {
                    aVar.f136a = (String) a(this.f134b, obj2, new Object[0]);
                    aVar.b = (String) a(this.c, obj2, new Object[0]);
                    aVar.c = (String) a(this.d, obj2, new Object[0]);
                    aVar.d = (String) a(this.e, obj2, new Object[0]);
                    aVar.f135a = (Boolean) a(this.f, obj2, new Object[0]);
                    a(this.g, obj2, new Object[0]);
                    if (aVar.a()) {
                        StringBuilder sb = new StringBuilder();
                        sb.append("has get succ, check duplicate:");
                        sb.append(this.f130a != null);
                        b(sb.toString());
                        synchronized (av.class) {
                            if (this.f130a == null) {
                                this.f130a = aVar;
                            }
                        }
                    }
                }
                i++;
            }
        }
        a();
        return null;
    }
}
