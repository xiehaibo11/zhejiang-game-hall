package com.tramini.plugin.b;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.tramini.plugin.a.a.a;
import com.tramini.plugin.a.a.c;
import com.tramini.plugin.a.d.d;
import com.tramini.plugin.a.g.g;
import com.tramini.plugin.a.g.i;

public class b {
    private static volatile b b;
    private Context d;
    public static final String a = b.class.getSimpleName();
    private static a c = null;
    private long f = -1;
    private boolean e = false;

    private b(Context context) {
        this.d = context;
    }

    public static b a(Context context) {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b(context);
                }
            }
        }
        return b;
    }

    public final boolean a() {
        if (this.f <= 0) {
            this.f = i.a(this.d, "tramini", a.d.b, (Long) 0L).longValue();
        }
        a aVarB = b();
        if (aVarB != null) {
            return this.f + aVarB.c() <= System.currentTimeMillis();
        }
        return true;
    }

    public final synchronized a b() {
        if (c == null) {
            try {
                if (this.d == null) {
                    this.d = c.a().b();
                }
                c = b(this.d);
            } catch (Exception unused) {
            }
            c.a().a(c);
        }
        return c;
    }

    public static a b(Context context) {
        String strB = i.b(context, "tramini", a.d.a, "");
        if (TextUtils.isEmpty(strB)) {
            return null;
        }
        return a.a(com.tramini.plugin.a.g.c.a(strB));
    }

    private void a(com.tramini.plugin.a.d.b bVar) {
        if (this.e || TextUtils.isEmpty(com.tramini.plugin.a.g.c.a)) {
            return;
        }
        new d().a(0, bVar);
    }

    public final void a(final com.tramini.plugin.a.d.c cVar) {
        com.tramini.plugin.a.d.b bVar = new com.tramini.plugin.a.d.b() {
            @Override
            public final void a() {
                b.this.e = true;
            }

            @Override
            public final void a(Object obj) {
                b.this.e = false;
                if (obj != null) {
                    String string = obj.toString();
                    i.a(b.this.d, "tramini", a.d.a, string);
                    b.this.f = System.currentTimeMillis();
                    Context context = b.this.d;
                    long j = b.this.f;
                    if (context != null) {
                        try {
                            SharedPreferences.Editor editorEdit = context.getSharedPreferences("tramini", 0).edit();
                            editorEdit.putLong(a.d.b, j);
                            editorEdit.apply();
                        } catch (Error | Exception unused) {
                        }
                    }
                    a aVarA = a.a(com.tramini.plugin.a.g.c.a(string));
                    if (aVarA != null) {
                        a unused2 = b.c = aVarA;
                        com.tramini.plugin.a.f.a.a().a(g.a(aVarA), aVarA.b());
                        c.a().a(aVarA);
                        com.tramini.plugin.a.d.c cVar2 = cVar;
                        if (cVar2 != null) {
                            cVar2.a(aVarA);
                        }
                    }
                }
            }

            @Override
            public final void b() {
                b.this.e = false;
            }
        };
        if (this.e || TextUtils.isEmpty(com.tramini.plugin.a.g.c.a)) {
            return;
        }
        new d().a(0, bVar);
    }
}
