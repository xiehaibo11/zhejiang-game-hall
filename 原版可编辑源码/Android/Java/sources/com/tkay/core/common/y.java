package com.tkay.core.common;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.common.f.am;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class y {
    private static final String c = y.class.getSimpleName();
    private static volatile y d;
    Map<String, am> a;
    Context b;

    private static void b() {
    }

    public static y a(Context context) {
        if (d == null) {
            synchronized (y.class) {
                if (d == null) {
                    d = new y(context);
                }
            }
        }
        return d;
    }

    private y(Context context) {
        this.b = context.getApplicationContext();
        a();
    }

    private void a() {
        if (this.a == null) {
            this.a = new ConcurrentHashMap(5);
            try {
                Map<String, ?> mapA = com.tkay.core.common.l.p.a(this.b, com.tkay.core.common.b.f.B);
                if (mapA != null) {
                    for (Map.Entry<String, ?> entry : mapA.entrySet()) {
                        String key = entry.getKey();
                        Object value = entry.getValue();
                        if (value instanceof String) {
                            this.a.put(key, am.a((String) value));
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    public final void a(String str, String str2, am.a aVar, am.a aVar2) {
        Map<String, am> map = this.a;
        if (map == null) {
            return;
        }
        am amVar = map.get(str);
        if (amVar == null) {
            synchronized (this) {
                amVar = this.a.get(str);
                if (amVar == null) {
                    amVar = new am();
                    amVar.b(str2);
                    this.a.put(str, amVar);
                }
            }
        }
        if (TextUtils.equals(str2, amVar.b())) {
            if (aVar != null) {
                amVar.a(aVar);
                amVar.a(System.currentTimeMillis());
            }
            if (aVar2 != null) {
                amVar.b(aVar2);
            }
        }
    }

    private am b(String str) {
        Map<String, am> map = this.a;
        if (map != null) {
            return map.remove(str);
        }
        return null;
    }

    public final void a(String str) {
        Map<String, am> map = this.a;
        if (map == null) {
            return;
        }
        try {
            am amVar = map.get(str);
            if (amVar != null) {
                com.tkay.core.common.l.p.a(this.b, com.tkay.core.common.b.f.B, str, amVar.a().toString());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
