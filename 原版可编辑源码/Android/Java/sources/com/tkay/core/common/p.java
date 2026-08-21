package com.tkay.core.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public final class p {
    public static final String b = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ=";
    public static final String c = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ=";
    public static final String d = "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT";
    public static final String e = "Y29udGVudDovL2NvbS54aWFvbWkubWFya2V0LnByb3ZpZGVyLkRpcmVjdE1haWxQcm92aWRlcg==";
    private static final String f = "code";
    private static final String g = "packageName";
    private static volatile String j;
    private static volatile p n;
    BroadcastReceiver a;
    private CopyOnWriteArrayList<com.tkay.core.common.f.h> h = new CopyOnWriteArrayList<>();
    private final AtomicBoolean i = new AtomicBoolean(false);
    private volatile Boolean k;
    private com.tkay.core.common.f.h l;
    private Context m;

    private p() {
    }

    public static p a() {
        if (n == null) {
            synchronized (p.class) {
                if (n == null) {
                    n = new p();
                }
            }
        }
        return n;
    }

    public final void a(com.tkay.core.common.f.h hVar) {
        if (this.k == null || hVar == null || !this.k.booleanValue()) {
            return;
        }
        this.l = hVar;
        this.h.add(hVar);
    }

    public final void b(com.tkay.core.common.f.h hVar) {
        if (this.k == null || hVar == null || !this.k.booleanValue()) {
            return;
        }
        this.l = null;
        try {
            this.h.remove(hVar);
        } catch (Exception unused) {
        }
    }

    private com.tkay.core.common.f.h e() {
        return this.l;
    }

    public final void a(Context context) {
        this.m = context;
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if (p.this.i.compareAndSet(false, true)) {
                    try {
                        p.this.k = p.g();
                        p.b(p.this);
                    } catch (Throwable unused) {
                    }
                }
            }
        });
    }

    private void f() {
        if (this.k == null || !this.k.booleanValue() || this.m == null) {
            return;
        }
        try {
            this.a = new 2();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(com.tkay.core.common.l.c.b(b));
            intentFilter.addAction(com.tkay.core.common.l.c.b(c));
            intentFilter.addAction(com.tkay.core.common.l.c.b(d));
            this.m.registerReceiver(this.a, intentFilter);
        } catch (Throwable unused) {
        }
    }

    final class 2 extends BroadcastReceiver {
        2() {
        }

        @Override
        public final void onReceive(Context context, Intent intent) {
            Bundle extras;
            com.tkay.core.common.f.h hVar;
            String action = intent.getAction();
            if (TextUtils.isEmpty(action) || action.equals(com.tkay.core.common.l.c.b(p.b)) || action.equals(com.tkay.core.common.l.c.b(p.c)) || !action.equals(com.tkay.core.common.l.c.b(p.d)) || (extras = intent.getExtras()) == null) {
                return;
            }
            int i = extras.getInt("code", -1);
            String string = extras.getString("packageName", "");
            if (i == -1 || TextUtils.isEmpty(string)) {
                return;
            }
            if (p.this.l == null || !TextUtils.equals(p.this.l.B(), string)) {
                if (p.this.h == null || p.this.h.size() <= 0) {
                    hVar = null;
                } else {
                    for (com.tkay.core.common.f.h hVar2 : p.this.h) {
                        if (hVar2 != null && TextUtils.equals(hVar2.B(), string)) {
                            hVar = hVar2;
                            break;
                        }
                    }
                    hVar = null;
                }
            } else {
                hVar = p.this.l;
            }
            if (hVar == null) {
                return;
            }
            if (i == 4) {
                p.this.b(hVar);
            }
            com.tkay.core.common.k.c.a(hVar.j(), hVar.p(), "", i, "", 0L, 0L);
        }

        private com.tkay.core.common.f.h a(String str) {
            if (p.this.l == null || !TextUtils.equals(p.this.l.B(), str)) {
                if (p.this.h == null || p.this.h.size() <= 0) {
                    return null;
                }
                for (com.tkay.core.common.f.h hVar : p.this.h) {
                    if (hVar != null && TextUtils.equals(hVar.B(), str)) {
                        return hVar;
                    }
                }
                return null;
            }
            return p.this.l;
        }
    }

    private void b(Context context) {
        BroadcastReceiver broadcastReceiver = this.a;
        if (broadcastReceiver == null || context == null) {
            return;
        }
        try {
            context.unregisterReceiver(broadcastReceiver);
        } catch (Throwable unused) {
        }
        this.l = null;
        this.h.clear();
        this.h = null;
        this.a = null;
        this.m = null;
    }

    private static Boolean g() {
        Cursor cursorQuery;
        Context contextF = com.tkay.core.common.b.m.a().f();
        Boolean boolValueOf = null;
        if (contextF != null && contextF.getContentResolver() != null) {
            try {
                cursorQuery = contextF.getContentResolver().query(Uri.parse(com.tkay.core.common.l.c.b(e)), null, null, null, null);
            } catch (Throwable unused) {
                cursorQuery = null;
            }
            if (cursorQuery != null) {
                while (cursorQuery.moveToNext()) {
                    try {
                        String string = cursorQuery.getString(cursorQuery.getColumnIndex("support"));
                        if (!TextUtils.isEmpty(string) && !string.equalsIgnoreCase("null") && (string.equalsIgnoreCase("false") || string.equalsIgnoreCase("true"))) {
                            boolValueOf = Boolean.valueOf(Boolean.parseBoolean(string));
                        }
                    } catch (Throwable unused2) {
                    }
                    try {
                        j = cursorQuery.getString(cursorQuery.getColumnIndex("detailStyle"));
                    } catch (Exception unused3) {
                    }
                }
                try {
                    cursorQuery.close();
                } catch (Throwable unused4) {
                }
            }
        }
        return boolValueOf;
    }

    public static String b() {
        try {
            return j == null ? "" : String.format("[%s]", j);
        } catch (Throwable unused) {
            return "";
        }
    }

    public final int c() {
        if (this.k != null) {
            return this.k.booleanValue() ? 1 : 0;
        }
        return -1;
    }

    static void b(p pVar) {
        if (pVar.k == null || !pVar.k.booleanValue() || pVar.m == null) {
            return;
        }
        try {
            pVar.a = pVar.new 2();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(com.tkay.core.common.l.c.b(b));
            intentFilter.addAction(com.tkay.core.common.l.c.b(c));
            intentFilter.addAction(com.tkay.core.common.l.c.b(d));
            pVar.m.registerReceiver(pVar.a, intentFilter);
        } catch (Throwable unused) {
        }
    }
}
