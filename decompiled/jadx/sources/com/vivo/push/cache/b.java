package com.vivo.push.cache;

import android.content.Context;
import com.vivo.push.util.p;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes4.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f7901a;
    private d b;

    private b() {
    }

    public static synchronized b a() {
        if (f7901a == null) {
            f7901a = new b();
        }
        return f7901a;
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
