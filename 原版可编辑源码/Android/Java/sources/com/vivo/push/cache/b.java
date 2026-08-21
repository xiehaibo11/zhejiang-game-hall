package com.vivo.push.cache;

import android.content.Context;
import com.vivo.push.util.p;
import java.lang.reflect.Method;

public final class b {
    private static volatile b a;
    private d b;

    private b() {
    }

    public static synchronized b a() {
        if (a == null) {
            a = new b();
        }
        return a;
    }

    public final d a(Context context) {
        d dVar = this.b;
        if (dVar != null) {
            return dVar;
        }
        try {
            Method method = Class.forName("com.vivo.push.cache.ClientConfigManagerImpl").getMethod("getInstance", Context.class);
            p.d("ConfigManagerFactory", "createConfig success is ".concat("com.vivo.push.cache.ClientConfigManagerImpl"));
            d dVar2 = (d) method.invoke(null, context);
            this.b = dVar2;
            return dVar2;
        } catch (Exception e) {
            e.printStackTrace();
            p.b("ConfigManagerFactory", "createConfig error", e);
            return null;
        }
    }
}
