package com.vivo.push;

import android.content.Context;
import android.content.Intent;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.SparseArray;
import com.igexin.sdk.PushConsts;
import com.vivo.push.sdk.PushMessageCallback;
import com.vivo.push.util.ContextDelegate;
import com.vivo.push.util.VivoPushException;
import com.vivo.push.util.t;
import com.vivo.push.util.w;
import com.vivo.push.util.z;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public final class e {
    private static volatile e a;
    private Context h;
    private com.vivo.push.util.b j;
    private String k;
    private String l;
    private Boolean o;
    private Long p;
    private boolean q;
    private int s;
    private long b = -1;
    private long c = -1;
    private long d = -1;
    private long e = -1;
    private long f = -1;
    private long g = -1;
    private boolean i = true;
    private SparseArray<a> m = new SparseArray<>();
    private int n = 0;
    private IPushClientFactory r = new d();

    public final class a {
        private IPushActionListener a;
        private com.vivo.push.b.c b;
        private IPushActionListener c;
        private Runnable d;
        private Object[] e;

        public a(com.vivo.push.b.c cVar, IPushActionListener iPushActionListener) {
            this.b = cVar;
            this.a = iPushActionListener;
        }

        public final void a() {
            Runnable runnable = this.d;
            if (runnable == null) {
                com.vivo.push.util.p.a("PushClientManager", "task is null");
            } else {
                runnable.run();
            }
        }

        public final void a(int i, Object... objArr) {
            this.e = objArr;
            IPushActionListener iPushActionListener = this.c;
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(i);
            }
            IPushActionListener iPushActionListener2 = this.a;
            if (iPushActionListener2 != null) {
                iPushActionListener2.onStateChanged(i);
            }
        }

        public final void a(IPushActionListener iPushActionListener) {
            this.c = iPushActionListener;
        }

        public final void a(Runnable runnable) {
            this.d = runnable;
        }

        public final Object[] b() {
            return this.e;
        }
    }

    private e() {
    }

    private a a(com.vivo.push.b.b bVar, IPushActionListener iPushActionListener) {
        a aVar = new a(bVar, iPushActionListener);
        String strA = a(aVar);
        bVar.b(strA);
        aVar.a(new h(this, bVar, strA));
        return aVar;
    }

    public static synchronized e a() {
        if (a == null) {
            a = new e();
        }
        return a;
    }

    private synchronized String a(a aVar) {
        int i;
        this.m.put(this.n, aVar);
        i = this.n;
        this.n = i + 1;
        return Integer.toString(i);
    }

    private static boolean a(long j) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        return j == -1 || jElapsedRealtime <= j || jElapsedRealtime >= j + 2000;
    }

    private void c(String str) {
        m.c(new f(this, str));
    }

    private synchronized a d(String str) {
        if (str != null) {
            try {
                int i = Integer.parseInt(str);
                a aVar = this.m.get(i);
                this.m.delete(i);
                return aVar;
            } catch (Exception unused) {
            }
        }
        return null;
    }

    private void e(String str) {
        m.a(new k(this, str));
    }

    private void m() {
        this.l = null;
        this.j.b("APP_ALIAS");
    }

    private boolean n() {
        if (this.o == null) {
            this.o = Boolean.valueOf(l() >= 1230 && z.d(this.h));
        }
        return this.o.booleanValue();
    }

    public final synchronized void a(Context context) {
        if (this.h == null) {
            this.h = ContextDelegate.getContext(context);
            this.q = t.c(context, context.getPackageName());
            w.b().a(this.h);
            a(new com.vivo.push.b.g());
            com.vivo.push.util.b bVar = new com.vivo.push.util.b();
            this.j = bVar;
            bVar.a(this.h, "com.vivo.push_preferences.appconfig_v1");
            this.k = f();
            this.l = this.j.b("APP_ALIAS", (String) null);
        }
    }

    public final void a(Intent intent, PushMessageCallback pushMessageCallback) {
        o oVarCreateReceiverCommand = this.r.createReceiverCommand(intent);
        Context context = a().h;
        if (oVarCreateReceiverCommand == null) {
            com.vivo.push.util.p.a("PushClientManager", "sendCommand, null command!");
            if (context != null) {
                com.vivo.push.util.p.c(context, "[执行指令失败]指令空！");
                return;
            }
            return;
        }
        com.vivo.push.d.z zVarCreateReceiveTask = this.r.createReceiveTask(oVarCreateReceiverCommand);
        if (zVarCreateReceiveTask != null) {
            if (context != null && !(oVarCreateReceiverCommand instanceof com.vivo.push.b.n)) {
                com.vivo.push.util.p.a(context, "[接收指令]".concat(String.valueOf(oVarCreateReceiverCommand)));
            }
            zVarCreateReceiveTask.a(pushMessageCallback);
            m.a((l) zVarCreateReceiveTask);
            return;
        }
        com.vivo.push.util.p.a("PushClientManager", "sendCommand, null command task! pushCommand = ".concat(String.valueOf(oVarCreateReceiverCommand)));
        if (context != null) {
            com.vivo.push.util.p.c(context, "[执行指令失败]指令" + oVarCreateReceiverCommand + "任务空！");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0075  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    final void a(IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        String strF = f();
        this.k = strF;
        if (!TextUtils.isEmpty(strF)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        if (!a(this.b)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.b = SystemClock.elapsedRealtime();
        String packageName = this.h.getPackageName();
        a aVarA = null;
        if (this.h != null) {
            com.vivo.push.b.b bVar = new com.vivo.push.b.b(true, packageName);
            bVar.g();
            bVar.d();
            bVar.e();
            bVar.a(100);
            if (this.q) {
                if (n()) {
                    aVarA = a(bVar, iPushActionListener);
                } else if (iPushActionListener != null) {
                    iPushActionListener.onStateChanged(101);
                }
            } else if (bVar.a(this.h) != 2) {
                a(bVar);
                if (iPushActionListener != null) {
                    iPushActionListener.onStateChanged(0);
                }
            }
        } else if (iPushActionListener != null) {
            iPushActionListener.onStateChanged(102);
        }
        if (aVarA == null) {
            return;
        }
        aVarA.a(new g(this, aVarA));
        aVarA.a();
    }

    public final void a(o oVar) {
        Context context = a().h;
        if (oVar == null) {
            com.vivo.push.util.p.a("PushClientManager", "sendCommand, null command!");
            if (context != null) {
                com.vivo.push.util.p.c(context, "[执行指令失败]指令空！");
                return;
            }
            return;
        }
        l lVarCreateTask = this.r.createTask(oVar);
        if (lVarCreateTask != null) {
            com.vivo.push.util.p.d("PushClientManager", "client--sendCommand, command = ".concat(String.valueOf(oVar)));
            m.a(lVarCreateTask);
            return;
        }
        com.vivo.push.util.p.a("PushClientManager", "sendCommand, null command task! pushCommand = ".concat(String.valueOf(oVar)));
        if (context != null) {
            com.vivo.push.util.p.c(context, "[执行指令失败]指令" + oVar + "任务空！");
        }
    }

    public final void a(String str) {
        this.k = str;
        this.j.a("APP_TOKEN", str);
    }

    public final void a(String str, int i) {
        a aVarD = d(str);
        if (aVarD != null) {
            aVarD.a(i, new Object[0]);
        } else {
            com.vivo.push.util.p.d("PushClientManager", "notifyStatusChanged token is null");
        }
    }

    public final void a(String str, int i, Object... objArr) {
        a aVarD = d(str);
        if (aVarD != null) {
            aVarD.a(i, objArr);
        } else {
            com.vivo.push.util.p.d("PushClientManager", "notifyApp token is null");
        }
    }

    final void a(String str, IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        if (!TextUtils.isEmpty(this.l) && this.l.equals(str)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(str);
        com.vivo.push.b.a aVar = new com.vivo.push.b.a(true, this.h.getPackageName(), arrayList);
        aVar.a(100);
        if (!this.q) {
            a(aVar);
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        if (!n()) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(101);
                return;
            }
            return;
        }
        if (!a(this.d)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.d = SystemClock.elapsedRealtime();
        String strA = a(new a(aVar, iPushActionListener));
        aVar.b(strA);
        if (TextUtils.isEmpty(this.k)) {
            a(strA, PushConsts.ALIAS_ERROR_FREQUENCY);
            return;
        }
        if (TextUtils.isEmpty(str)) {
            a(strA, PushConsts.ALIAS_OPERATE_PARAM_ERROR);
        } else if (str.length() > 70) {
            a(strA, PushConsts.ALIAS_REQUEST_FILTER);
        } else {
            a(aVar);
            e(strA);
        }
    }

    final void a(ArrayList<String> arrayList, IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        com.vivo.push.b.z zVar = new com.vivo.push.b.z(true, this.h.getPackageName(), arrayList);
        zVar.a(500);
        if (!this.q) {
            a(zVar);
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        if (!n()) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(101);
                return;
            }
            return;
        }
        if (!a(this.f)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.f = SystemClock.elapsedRealtime();
        String strA = a(new a(zVar, iPushActionListener));
        zVar.b(strA);
        if (TextUtils.isEmpty(this.k)) {
            a(strA, PushConsts.SETTAG_ERROR_COUNT);
            return;
        }
        if (arrayList.size() < 0) {
            a(strA, PushConsts.SETTAG_ERROR_FREQUENCY);
            return;
        }
        if (arrayList.size() + c().size() > 500) {
            a(strA, PushConsts.SETTAG_ERROR_UNBIND);
            return;
        }
        Iterator<String> it = arrayList.iterator();
        while (it.hasNext()) {
            if (it.next().length() > 70) {
                a(strA, PushConsts.SETTAG_ERROR_REPEAT);
                return;
            }
        }
        a(zVar);
        e(strA);
    }

    public final void a(List<String> list) {
        try {
            if (list.size() <= 0) {
                return;
            }
            String strB = this.j.b("APP_TAGS", (String) null);
            JSONObject jSONObject = TextUtils.isEmpty(strB) ? new JSONObject() : new JSONObject(strB);
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                jSONObject.put(it.next(), System.currentTimeMillis());
            }
            String string = jSONObject.toString();
            if (TextUtils.isEmpty(string)) {
                this.j.b("APP_TAGS");
            } else {
                this.j.a("APP_TAGS", string);
            }
        } catch (JSONException e) {
            e.printStackTrace();
            this.j.b("APP_TAGS");
        }
    }

    protected final void a(boolean z) {
        this.i = z;
    }

    protected final void b() throws VivoPushException {
        Context context = this.h;
        if (context != null) {
            z.b(context);
        }
    }

    final void b(IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        if ("".equals(this.k)) {
            iPushActionListener.onStateChanged(0);
            return;
        }
        if (!a(this.c)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.c = SystemClock.elapsedRealtime();
        String packageName = this.h.getPackageName();
        a aVarA = null;
        if (this.h != null) {
            com.vivo.push.b.b bVar = new com.vivo.push.b.b(false, packageName);
            bVar.d();
            bVar.e();
            bVar.g();
            bVar.a(100);
            if (this.q) {
                if (n()) {
                    aVarA = new a(bVar, iPushActionListener);
                    String strA = a(aVarA);
                    bVar.b(strA);
                    aVarA.a(new j(this, bVar, strA));
                } else if (iPushActionListener != null) {
                    iPushActionListener.onStateChanged(101);
                }
            } else if (bVar.a(this.h) == 2) {
                aVarA = a(bVar, iPushActionListener);
            } else {
                a(bVar);
                if (iPushActionListener != null) {
                    iPushActionListener.onStateChanged(0);
                }
            }
        } else if (iPushActionListener != null) {
            iPushActionListener.onStateChanged(102);
        }
        if (aVarA == null) {
            return;
        }
        aVarA.a(new i(this));
        aVarA.a();
    }

    public final void b(String str) {
        this.l = str;
        this.j.a("APP_ALIAS", str);
    }

    final void b(String str, IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        if (TextUtils.isEmpty(this.l)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(str);
        com.vivo.push.b.a aVar = new com.vivo.push.b.a(false, this.h.getPackageName(), arrayList);
        aVar.a(100);
        if (!this.q) {
            a(aVar);
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        if (!n()) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(101);
                return;
            }
            return;
        }
        if (!a(this.e)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.e = SystemClock.elapsedRealtime();
        String strA = a(new a(aVar, iPushActionListener));
        aVar.b(strA);
        if (TextUtils.isEmpty(this.k)) {
            a(strA, PushConsts.ALIAS_ERROR_FREQUENCY);
            return;
        }
        if (TextUtils.isEmpty(str)) {
            a(strA, PushConsts.ALIAS_OPERATE_PARAM_ERROR);
        } else if (str.length() > 70) {
            a(strA, PushConsts.ALIAS_REQUEST_FILTER);
        } else {
            a(aVar);
            e(strA);
        }
    }

    final void b(ArrayList<String> arrayList, IPushActionListener iPushActionListener) {
        if (this.h == null) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(102);
                return;
            }
            return;
        }
        com.vivo.push.b.z zVar = new com.vivo.push.b.z(false, this.h.getPackageName(), arrayList);
        zVar.a(500);
        if (!this.q) {
            a(zVar);
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(0);
                return;
            }
            return;
        }
        if (!n()) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(101);
                return;
            }
            return;
        }
        if (!a(this.g)) {
            if (iPushActionListener != null) {
                iPushActionListener.onStateChanged(1002);
                return;
            }
            return;
        }
        this.g = SystemClock.elapsedRealtime();
        String strA = a(new a(zVar, iPushActionListener));
        zVar.b(strA);
        if (TextUtils.isEmpty(this.k)) {
            a(strA, PushConsts.SETTAG_ERROR_COUNT);
            return;
        }
        if (arrayList.size() < 0) {
            a(strA, PushConsts.SETTAG_ERROR_FREQUENCY);
            return;
        }
        if (arrayList.size() > 500) {
            a(strA, PushConsts.SETTAG_ERROR_UNBIND);
            return;
        }
        Iterator<String> it = arrayList.iterator();
        while (it.hasNext()) {
            if (it.next().length() > 70) {
                a(strA, PushConsts.SETTAG_ERROR_REPEAT);
                return;
            }
        }
        a(zVar);
        e(strA);
    }

    public final void b(List<String> list) {
        try {
            if (list.size() <= 0) {
                return;
            }
            String strB = this.j.b("APP_TAGS", (String) null);
            JSONObject jSONObject = TextUtils.isEmpty(strB) ? new JSONObject() : new JSONObject(strB);
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                jSONObject.remove(it.next());
            }
            String string = jSONObject.toString();
            if (TextUtils.isEmpty(string)) {
                this.j.b("APP_TAGS");
            } else {
                this.j.a("APP_TAGS", string);
            }
        } catch (JSONException e) {
            e.printStackTrace();
            this.j.b("APP_TAGS");
        }
    }

    public final List<String> c() {
        String strB = this.j.b("APP_TAGS", (String) null);
        ArrayList arrayList = new ArrayList();
        try {
            if (TextUtils.isEmpty(strB)) {
                return arrayList;
            }
            Iterator<String> itKeys = new JSONObject(strB).keys();
            while (itKeys.hasNext()) {
                arrayList.add(itKeys.next());
            }
        } catch (JSONException unused) {
            this.j.b("APP_TAGS");
            arrayList.clear();
            com.vivo.push.util.p.d("PushClientManager", "getTags error");
        }
        return arrayList;
    }

    public final void c(List<String> list) {
        if (list.contains(this.l)) {
            m();
        }
    }

    public final boolean d() {
        if (this.h == null) {
            com.vivo.push.util.p.d("PushClientManager", "support:context is null");
            return false;
        }
        Boolean boolValueOf = Boolean.valueOf(n());
        this.o = boolValueOf;
        return boolValueOf.booleanValue();
    }

    public final boolean e() {
        return this.q;
    }

    public final String f() {
        if (!TextUtils.isEmpty(this.k)) {
            return this.k;
        }
        com.vivo.push.util.b bVar = this.j;
        String strB = bVar != null ? bVar.b("APP_TOKEN", (String) null) : "";
        c(strB);
        return strB;
    }

    public final boolean g() {
        return this.i;
    }

    public final Context h() {
        return this.h;
    }

    public final void i() {
        this.j.a();
    }

    public final String j() {
        return this.l;
    }

    public final int k() {
        return this.s;
    }

    public final long l() {
        Context context = this.h;
        if (context == null) {
            return -1L;
        }
        if (this.p == null) {
            this.p = Long.valueOf(z.a(context));
        }
        return this.p.longValue();
    }
}
