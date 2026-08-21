package com.bytedance.pangle.d;

import android.os.Handler;
import android.os.Looper;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.util.MethodUtils;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Class f1503a;
    private static Object b;

    public static final Object a() {
        if (b == null) {
            try {
                synchronized (a.class) {
                    if (b == null) {
                        if (f1503a == null) {
                            f1503a = Class.forName("android.app.ActivityThread");
                        }
                        b = MethodUtils.invokeStaticMethod(f1503a, "currentActivityThread", new Object[0]);
                    }
                    if (b == null && Looper.myLooper() != Looper.getMainLooper()) {
                        final Object obj = new Object();
                        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.bytedance.pangle.d.a.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                try {
                                    try {
                                        Object unused = a.b = MethodUtils.invokeStaticMethod(a.f1503a, "currentActivityThread", new Object[0]);
                                        synchronized (obj) {
                                            obj.notify();
                                        }
                                    } catch (Exception e) {
                                        ZeusLogger.errReport(ZeusLogger.TAG, "ActivityThreadHelper main looper invoke currentActivityThread failed.", e);
                                        synchronized (obj) {
                                            obj.notify();
                                        }
                                    }
                                } catch (Throwable th) {
                                    synchronized (obj) {
                                        obj.notify();
                                        throw th;
                                    }
                                }
                            }
                        });
                        if (b == null) {
                            synchronized (obj) {
                                try {
                                    obj.wait(5000L);
                                } catch (InterruptedException e) {
                                    ZeusLogger.errReport(ZeusLogger.TAG, "ActivityThreadHelper currentActivityThread interruptedException failed.", e);
                                }
                            }
                        }
                    }
                }
            } catch (Exception e2) {
                ZeusLogger.errReport(ZeusLogger.TAG, "ActivityThreadHelper currentActivityThread failed.", e2);
            }
        }
        return b;
    }
}
