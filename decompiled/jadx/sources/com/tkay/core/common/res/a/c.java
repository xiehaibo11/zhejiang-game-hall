package com.tkay.core.common.res.a;

import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile c f6296a;
    private final Map<String, a> b = new HashMap();

    private c() {
    }

    public static c a() {
        if (f6296a == null) {
            synchronized (c.class) {
                if (f6296a == null) {
                    f6296a = new c();
                }
            }
        }
        return f6296a;
    }

    public final a a(String str) {
        a aVar = this.b.get(str);
        if (aVar != null) {
            return aVar;
        }
        a aVar2 = new a(str);
        this.b.put(str, aVar2);
        return aVar2;
    }

    public final void b(String str) {
        if (this.b == null || TextUtils.isEmpty(str)) {
            return;
        }
        this.b.remove(str);
    }
}
