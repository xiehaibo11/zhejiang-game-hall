package com.reyun.tracking.sdk;

import android.os.Handler;
import java.util.Enumeration;
import java.util.concurrent.ConcurrentHashMap;

public class a {
    private static ConcurrentHashMap a = new ConcurrentHashMap();
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
            if (a == null) {
                a = new ConcurrentHashMap();
            }
        }
        if (!a.containsKey(str)) {
            a.put(str, new a());
        }
        return (a) a.get(str);
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
                if (a != null) {
                    Enumeration enumerationKeys = a.keys();
                    while (true) {
                        if (!enumerationKeys.hasMoreElements()) {
                            break;
                        }
                        String str = (String) enumerationKeys.nextElement();
                        if (((a) a.get(str)) == this) {
                            a.remove(str);
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
