package com.tkay.core.common.a;

import android.content.Context;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.c.k;
import com.tkay.core.common.l.p;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f6015a;
    private k b;

    private a() {
        if (m.a().f() != null) {
            this.b = k.a(com.tkay.core.common.c.c.a(m.a().f()));
        }
    }

    public static a a() {
        if (f6015a == null) {
            synchronized (a.class) {
                if (f6015a == null) {
                    f6015a = new a();
                }
            }
        }
        return f6015a;
    }

    public final void a(Context context, int i, String str, String str2, String str3) {
        if (this.b == null) {
            this.b = k.a(com.tkay.core.common.c.c.a(context.getApplicationContext()));
        }
        h hVar = new h();
        hVar.a(str2);
        hVar.b(str);
        hVar.a(i);
        hVar.c(str3);
        this.b.a(hVar);
    }

    public final String a(Context context, String str) {
        if (this.b == null) {
            this.b = k.a(com.tkay.core.common.c.c.a(context.getApplicationContext()));
        }
        return this.b.b(str);
    }

    public final void b(final Context context, final String str) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                if (a.this.b == null) {
                    a.this.b = k.a(com.tkay.core.common.c.c.a(context.getApplicationContext()));
                }
                a.this.b.a(str);
            }
        });
        p.a(context, com.tkay.core.common.b.f.y, str + f.o.n);
    }

    public static void c(Context context, String str) {
        p.a(context, com.tkay.core.common.b.f.y, str + f.o.n, 1);
    }

    public static boolean d(Context context, String str) {
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(f.o.n);
        return p.b(context, com.tkay.core.common.b.f.y, sb.toString(), 0) == 1;
    }
}
