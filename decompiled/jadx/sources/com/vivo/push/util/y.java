package com.vivo.push.util;

import android.content.Context;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public final class y implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final HashMap<String, Integer> f7957a = new HashMap<>();
    private static final HashMap<String, Long> b = new HashMap<>();
    private static final HashMap<String, String> c = new HashMap<>();
    private static y d;
    private Context e;
    private d f;
    private boolean g;

    private y(Context context) {
        this.g = false;
        this.e = context;
        this.g = a(context);
        p.d("SystemCache", "init status is " + this.g + ";  curCache is " + this.f);
    }

    public static synchronized y b(Context context) {
        if (d == null) {
            d = new y(context.getApplicationContext());
        }
        return d;
    }

    @Override // com.vivo.push.util.d
    public final String a(String str, String str2) {
        d dVar;
        String str3 = c.get(str);
        return (str3 != null || (dVar = this.f) == null) ? str3 : dVar.a(str, str2);
    }

    public final void a() {
        x xVar = new x();
        if (xVar.a(this.e)) {
            xVar.a();
            p.d("SystemCache", "sp cache is cleared");
        }
    }

    @Override // com.vivo.push.util.d
    public final boolean a(Context context) {
        v vVar = new v();
        this.f = vVar;
        boolean zA = vVar.a(context);
        if (!zA) {
            x xVar = new x();
            this.f = xVar;
            zA = xVar.a(context);
        }
        if (!zA) {
            this.f = null;
        }
        return zA;
    }

    @Override // com.vivo.push.util.d
    public final void b(String str, String str2) {
        d dVar;
        c.put(str, str2);
        if (!this.g || (dVar = this.f) == null) {
            return;
        }
        dVar.b(str, str2);
    }
}
