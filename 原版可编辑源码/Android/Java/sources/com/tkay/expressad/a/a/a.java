package com.tkay.expressad.a.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.h.x;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;

public final class a {
    public static String a = "mtg_retry_report=1";
    public static int b = 10000;
    public static final int c = 1;
    public static final int d = 2;
    public static int e = 3;
    public static int f = 50;
    public static int g = 600000;
    public static int h = 0;
    public static int i = 1;
    public static int j = 2;
    public static int k = 3;
    public static int l = 4;
    public static int m = 5;
    private static String n = "RetryReportControl";
    private static int q;
    private static int r;
    private ConcurrentHashMap<String, com.tkay.expressad.a.a.b> o;
    private c p;
    private BroadcastReceiver s;
    private final Handler t;

    a(byte b2) {
        this();
    }

    private a() {
        this.o = new ConcurrentHashMap<>();
        this.p = new c(f);
        this.t = new b(Looper.getMainLooper());
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        e = aVarB.U();
        b = aVarB.W() * 1000;
        g = aVarB.V() * 1000;
        q = aVarB.T();
        r = aVarB.S();
        try {
            if (this.s == null) {
                this.s = new 1();
                Context contextF = m.a().f();
                if (contextF != null) {
                    contextF.registerReceiver(this.s, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private static class a {
        private static a a = new a(0);

        private a() {
        }
    }

    public static a a() {
        return a.a;
    }

    private static class b extends Handler {
        public b(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                a.a(a.a());
            } else {
                Object obj = message.obj;
                if (obj instanceof String) {
                    a.a().a((String) obj, com.tkay.expressad.a.a.b.a);
                }
            }
        }
    }

    private void a(String str, com.tkay.expressad.a.a.b bVar) {
        if (this.p == null) {
            this.p = new c(f);
        }
        this.p.a(str, bVar);
    }

    private void a(String str) {
        Message messageObtainMessage = this.t.obtainMessage();
        messageObtainMessage.what = 1;
        messageObtainMessage.obj = str;
        this.t.sendMessageDelayed(messageObtainMessage, b);
    }

    private void b() {
        c cVar = this.p;
        if (cVar != null) {
            Iterator<String> it = cVar.a().iterator();
            while (it.hasNext()) {
                a(it.next(), com.tkay.expressad.a.a.b.b);
            }
        }
    }

    private void a(String str, int i2) {
        String str2;
        c cVar = this.p;
        if (cVar != null) {
            com.tkay.expressad.a.a.b bVarB = cVar.b(str);
            this.p.a(str);
            if (bVarB == null) {
                com.tkay.expressad.a.a.b bVar = this.o.get(str);
                if (bVar == null || System.currentTimeMillis() > bVar.h() + ((long) g) || bVar.g() >= e || i2 == com.tkay.expressad.a.a.b.b) {
                    return;
                }
                a(str);
                return;
            }
            if (System.currentTimeMillis() <= bVarB.h() + ((long) g)) {
                bVarB.a(i2);
                this.o.put(str, bVarB);
                if (x.b(str) == 0) {
                    str2 = str + "?" + a;
                } else {
                    str2 = str + "&" + a;
                }
                com.tkay.expressad.a.a.a(m.a().f(), bVarB.f(), bVarB.e(), str2, bVarB.a(), bVarB.b(), bVarB.d());
                return;
            }
            if (i2 != com.tkay.expressad.a.a.b.b) {
            }
        }
    }

    final class 1 extends BroadcastReceiver {
        1() {
        }

        @Override
        public final void onReceive(Context context, Intent intent) {
            if ("android.net.conn.CONNECTIVITY_CHANGE".equals(intent.getAction())) {
                a.this.t.sendEmptyMessage(2);
            }
        }
    }

    private void c() {
        try {
            if (this.s == null) {
                this.s = new 1();
                Context contextF = m.a().f();
                if (contextF != null) {
                    contextF.registerReceiver(this.s, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void d() {
        Context contextF;
        if (this.s == null || (contextF = m.a().f()) == null) {
            return;
        }
        contextF.unregisterReceiver(this.s);
    }

    private static boolean a(int i2) {
        return i2 == l || i2 == k;
    }

    private static boolean b(int i2) {
        return i2 == i || i2 == j;
    }

    private static boolean c(int i2) {
        return a(i2) || b(i2) || i2 == m;
    }

    public final void a(String str, String str2, com.tkay.expressad.foundation.d.c cVar, String str3, boolean z, boolean z2, int i2) {
        if (!(a(i2) || b(i2) || i2 == m) || TextUtils.isEmpty(str)) {
            return;
        }
        String strReplace = str.replace("?" + a, "").replace("&" + a, "");
        if (this.o == null) {
            this.o = new ConcurrentHashMap<>();
        }
        com.tkay.expressad.a.a.b bVarRemove = this.o.remove(strReplace);
        if (bVarRemove == null) {
            bVarRemove = new com.tkay.expressad.a.a.b(str, str2);
            bVarRemove.b(i2);
            bVarRemove.a(z);
            bVarRemove.b(z2);
            bVarRemove.a(cVar);
            bVarRemove.a(str3);
        } else if (bVarRemove.c() != com.tkay.expressad.a.a.b.b) {
            bVarRemove.b(str2);
        }
        if ((a(i2) && q != 0) || (b(i2) && r != 0) || i2 == m) {
            if (System.currentTimeMillis() >= bVarRemove.h() + ((long) g)) {
                bVarRemove.c();
                int i3 = com.tkay.expressad.a.a.b.a;
                return;
            }
            if (this.p == null) {
                this.p = new c(f);
            }
            this.p.a(strReplace, bVarRemove);
            if (bVarRemove.c() != com.tkay.expressad.a.a.b.a || bVarRemove.g() > e) {
                return;
            }
            a(strReplace);
        }
    }

    static void a(a aVar) {
        c cVar = aVar.p;
        if (cVar != null) {
            Iterator<String> it = cVar.a().iterator();
            while (it.hasNext()) {
                aVar.a(it.next(), com.tkay.expressad.a.a.b.b);
            }
        }
    }
}
