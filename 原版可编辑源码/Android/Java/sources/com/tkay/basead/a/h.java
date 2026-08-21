package com.tkay.basead.a;

import android.content.Context;
import android.content.IntentFilter;
import com.tkay.core.common.m;
import java.util.concurrent.ConcurrentHashMap;

public class h {
    private static volatile h b;
    g a;
    private Context c;
    private ConcurrentHashMap<String, com.tkay.core.common.f.h> d = new ConcurrentHashMap<>();

    private h(Context context) {
        this.c = context;
    }

    public static h a(Context context) {
        if (b == null) {
            synchronized (h.class) {
                if (b == null) {
                    b = new h(context);
                }
            }
        }
        return b;
    }

    public final void a() {
        if (this.c != null && this.a == null) {
            this.a = new g();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(com.tkay.china.common.a.b);
            intentFilter.addAction(com.tkay.china.common.a.c);
            intentFilter.addAction(com.tkay.china.common.a.d);
            intentFilter.addAction(com.tkay.china.common.a.e);
            m.a(this.c).a(this.a, intentFilter);
        }
    }

    private void b() {
        if (this.a != null) {
            m.a(this.c).a(this.a);
            this.a = null;
        }
    }

    public final void a(String str, com.tkay.core.common.f.h hVar) {
        this.d.put(str, hVar);
    }

    public final void a(String str, String str2) {
        com.tkay.core.common.f.h hVar = this.d.get(str);
        if (hVar != null) {
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i("", "");
            iVar.i = new com.tkay.basead.c.b();
            iVar.i.a = str2;
            b.a(18, hVar, iVar);
        }
    }

    public final void b(String str, String str2) {
        com.tkay.core.common.f.h hVar = this.d.get(str);
        if (hVar != null) {
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i("", "");
            iVar.i = new com.tkay.basead.c.b();
            iVar.i.a = str2;
            b.a(19, hVar, iVar);
        }
    }

    public final void c(String str, String str2) {
        com.tkay.core.common.f.h hVar = this.d.get(str);
        if (hVar != null) {
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i("", "");
            iVar.i = new com.tkay.basead.c.b();
            iVar.i.a = str2;
            b.a(20, hVar, iVar);
        }
    }

    public final void d(String str, String str2) {
        com.tkay.core.common.f.h hVarRemove = this.d.remove(str);
        if (hVarRemove != null) {
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i("", "");
            iVar.i = new com.tkay.basead.c.b();
            iVar.i.a = str2;
            b.a(21, hVarRemove, iVar);
        }
        if (this.d.size() != 0 || this.a == null) {
            return;
        }
        m.a(this.c).a(this.a);
        this.a = null;
    }
}
