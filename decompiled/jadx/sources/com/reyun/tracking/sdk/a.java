package com.reyun.tracking.sdk;

import android.os.Handler;
import java.util.Enumeration;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ConcurrentHashMap f4734a = new ConcurrentHashMap();
    private Thread b;
    private Handler c;

    public a() {
        b bVar = new b(this);
        this.b = bVar;
        bVar.start();
    }

    public static a a() {
        return a(Tracking.TAG);
    }

    public static a a(String str) {
        synchronized (a.class) {
            if (f4734a == null) {
                f4734a = new ConcurrentHashMap();
            }
        }
        if (!f4734a.containsKey(str)) {
            f4734a.put(str, new a());
        }
        return (a) f4734a.get(str);
    }

    public void a(Runnable runnable) {
        Handler handler = this.c;
        if (handler == null) {
            new Thread(runnable).start();
        } else {
            handler.post(runnable);
        }
    }

    public void a(Runnable runnable, long j) {
        Handler handler = this.c;
        if (handler == null) {
            new c(this, j, runnable).start();
        } else {
            handler.postDelayed(runnable, j);
        }
    }

    public void b() {
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            try {
                if (f4734a != null) {
                    Enumeration enumerationKeys = f4734a.keys();
                    while (true) {
                        if (!enumerationKeys.hasMoreElements()) {
                            break;
                        }
                        String str = (String) enumerationKeys.nextElement();
                        if (((a) f4734a.get(str)) == this) {
                            f4734a.remove(str);
                            break;
                        }
                    }
                }
                this.c.getLooper().quit();
            } catch (Exception unused) {
            }
        }
    }

    public void b(Runnable runnable) {
        try {
            new Thread(runnable).start();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
