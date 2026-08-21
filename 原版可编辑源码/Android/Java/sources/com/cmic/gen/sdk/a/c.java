package com.cmic.gen.sdk.a;

import android.content.Context;
import android.text.TextUtils;
import com.cmic.gen.sdk.a.b;
import com.cmic.gen.sdk.e.k;

public class c implements b.a {
    private static c a;
    private a b;
    private a c;
    private b d;
    private Context e;

    private c(Context context) {
        this.e = context;
        b();
    }

    private void b() {
        String strB = k.b("sdk_config_version", "");
        if (!TextUtils.isEmpty(strB) && com.cmic.gen.sdk.auth.c.SDK_VERSION.equals(strB)) {
            b bVarA = b.a(false);
            this.d = bVarA;
            this.b = bVarA.b();
        } else {
            b bVarA2 = b.a(true);
            this.d = bVarA2;
            this.b = bVarA2.a();
            if (!TextUtils.isEmpty(strB)) {
                c();
            }
        }
        this.d.a(this);
        this.c = this.d.a();
    }

    public static c a(Context context) {
        if (a == null) {
            synchronized (c.class) {
                if (a == null) {
                    a = new c(context);
                }
            }
        }
        return a;
    }

    public a a() {
        try {
            return this.b.clone();
        } catch (CloneNotSupportedException unused) {
            return this.c;
        }
    }

    @Override
    public void a(a aVar) {
        this.b = aVar;
    }

    public void a(com.cmic.gen.sdk.a aVar) {
        this.d.a(aVar);
    }

    private void c() {
        com.cmic.gen.sdk.e.c.b("UmcConfigManager", "delete localConfig");
        this.d.c();
    }
}
