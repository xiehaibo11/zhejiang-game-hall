package com.qihoo360.replugin;

import android.os.IBinder;
import android.text.TextUtils;
import java.util.concurrent.ConcurrentHashMap;

public class g {
    private static g a;
    private ConcurrentHashMap<String, IBinder> b = new ConcurrentHashMap<>();

    public static g a() {
        g gVar = a;
        if (gVar != null) {
            return gVar;
        }
        synchronized (g.class) {
            if (a == null) {
                a = new g();
            }
        }
        return a;
    }

    public IBinder a(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("service name can not value null");
        }
        IBinder iBinder = this.b.get(str);
        if (iBinder == null) {
            return null;
        }
        if (iBinder.isBinderAlive() && iBinder.pingBinder()) {
            return iBinder;
        }
        this.b.remove(str);
        return null;
    }

    public void a(String str, IBinder iBinder) {
        this.b.put(str, iBinder);
    }
}
