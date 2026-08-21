package com.tramini.plugin.a.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.tramini.plugin.a.a.a;
import com.tramini.plugin.a.g.d;
import com.tramini.plugin.a.g.f;
import com.tramini.plugin.a.g.h;
import com.tramini.plugin.a.g.i;
import java.util.List;
import org.json.JSONObject;

public class c {
    private static c b;
    private Context c;
    private BroadcastReceiver e;
    private BroadcastReceiver f;
    private String[] g;
    boolean a = false;
    private Handler d = new Handler(Looper.getMainLooper());

    private static void c() {
    }

    public static c a() {
        if (b == null) {
            synchronized (c.class) {
                b = new c();
            }
        }
        return b;
    }

    private void c(Context context) {
        this.c = context;
    }

    public final Context b() {
        return this.c;
    }

    public final void a(final Context context) {
        if (context == null) {
            return;
        }
        try {
            this.c = context.getApplicationContext();
            com.tramini.plugin.a.g.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    com.tramini.plugin.a.b.c cVarA = com.tramini.plugin.a.b.c.a(context);
                    try {
                        cVarA.b().execSQL("DROP TABLE IF EXISTS 'il'");
                        cVarA.b().execSQL("DROP TABLE IF EXISTS 'il_all'");
                    } catch (Throwable unused) {
                    }
                }
            });
            if (h.a(context)) {
                return;
            }
            try {
                if (this.f != null) {
                    b.a(this.c).a(this.f);
                    this.f = null;
                }
            } catch (Throwable unused) {
            }
            this.f = new com.tramini.plugin.a.c();
            IntentFilter intentFilter = new IntentFilter();
            String packageName = this.c.getPackageName();
            intentFilter.addAction(f.a(packageName + packageName));
            b.a(this.c).a(this.f, intentFilter);
        } catch (Throwable unused2) {
        }
    }

    private void d(Context context) {
        b(com.tramini.plugin.b.b.a(context).b());
        b(context);
    }

    public final synchronized void a(final com.tramini.plugin.b.a aVar) {
        if (this.a) {
            return;
        }
        if (aVar != null) {
            this.a = true;
            com.tramini.plugin.a.g.b.a().a(aVar);
            a().a(new Runnable() {
                @Override
                public final void run() {
                    com.tramini.plugin.a.g.b.a().a(aVar);
                }
            }, 120000L);
        }
    }

    public final void b(final Context context) {
        com.tramini.plugin.a.g.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if (com.tramini.plugin.b.b.a(context).a()) {
                    com.tramini.plugin.b.b.a(context).a(new com.tramini.plugin.a.d.c() {
                        @Override
                        public final void a(com.tramini.plugin.b.a aVar) {
                            c.this.b(aVar);
                        }
                    });
                }
            }
        });
    }

    private void b(final com.tramini.plugin.b.a aVar) {
        b(new Runnable() {
            @Override
            public final void run() {
                int size;
                try {
                    if (c.this.c == null) {
                        return;
                    }
                    try {
                        if (c.this.e != null) {
                            b.a(c.this.c).a(c.this.e);
                            c.this.e = null;
                        }
                    } catch (Throwable unused) {
                    }
                    c.this.e = new com.tramini.plugin.a.b();
                    IntentFilter intentFilter = new IntentFilter();
                    List<String> listD = aVar != null ? aVar.d() : null;
                    if (listD != null && (size = listD.size()) > 0) {
                        for (int i = 0; i < size; i++) {
                            intentFilter.addAction(listD.get(i));
                        }
                    }
                    b.a(c.this.c).a(c.this.e, intentFilter);
                } catch (Throwable unused2) {
                }
            }
        });
    }

    public final void a(String[] strArr) {
        this.g = strArr;
    }

    public final boolean a(String str) {
        String[] strArr = this.g;
        if (strArr == null) {
            return false;
        }
        for (String str2 : strArr) {
            if (TextUtils.equals(str2, str)) {
                return true;
            }
        }
        return false;
    }

    public final void b(final String str) {
        com.tramini.plugin.a.g.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                i.a(c.this.c, "tramini", a.d.c, "");
                com.tramini.plugin.a.g.c.c(str);
                c cVar = c.this;
                c.a(cVar, cVar.c);
            }
        });
    }

    public final void c(final String str) {
        com.tramini.plugin.a.g.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    d.a = new JSONObject(str);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    private void b(Runnable runnable) {
        if (Looper.getMainLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            this.d.post(runnable);
        }
    }

    public static void a(Runnable runnable) {
        com.tramini.plugin.a.g.b.a.a().a(runnable);
    }

    public final void a(Runnable runnable, long j) {
        this.d.postDelayed(runnable, j);
    }

    private void c(Runnable runnable) {
        this.d.removeCallbacks(runnable);
    }

    private static void b(Runnable runnable, long j) {
        com.tramini.plugin.a.g.b.a.a().a(runnable, j);
    }

    static void a(c cVar, Context context) {
        cVar.b(com.tramini.plugin.b.b.a(context).b());
        cVar.b(context);
    }
}
