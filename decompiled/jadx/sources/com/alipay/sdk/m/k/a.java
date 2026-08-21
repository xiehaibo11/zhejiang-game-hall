package com.alipay.sdk.m.k;

import android.content.Context;
import android.text.TextUtils;
import com.alipay.sdk.m.u.j;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: com.alipay.sdk.m.k.a$a, reason: collision with other inner class name */
    public static final class C0011a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f1200a = "RecordPref";
        public static final String b = "alipay_cashier_statistic_record";

        public static synchronized String a(Context context, String str, String str2) {
            com.alipay.sdk.m.u.e.b(f1200a, "stat append " + str2 + " , " + str);
            if (context != null && !TextUtils.isEmpty(str)) {
                if (TextUtils.isEmpty(str2)) {
                    str2 = UUID.randomUUID().toString();
                }
                C0012a c0012aA = a(context);
                if (c0012aA.f1201a.size() > 20) {
                    c0012aA.f1201a.clear();
                }
                c0012aA.f1201a.put(str2, str);
                a(context, c0012aA);
                return str2;
            }
            return null;
        }

        public static synchronized String b(Context context) {
            com.alipay.sdk.m.u.e.b(f1200a, "stat peek");
            if (context == null) {
                return null;
            }
            C0012a c0012aA = a(context);
            if (c0012aA.f1201a.isEmpty()) {
                return null;
            }
            try {
                return c0012aA.f1201a.entrySet().iterator().next().getValue();
            } catch (Throwable th) {
                com.alipay.sdk.m.u.e.a(th);
                return null;
            }
        }

        /* JADX INFO: renamed from: com.alipay.sdk.m.k.a$a$a, reason: collision with other inner class name */
        public static final class C0012a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final LinkedHashMap<String, String> f1201a = new LinkedHashMap<>();

            public C0012a() {
            }

            public String a() {
                try {
                    JSONArray jSONArray = new JSONArray();
                    for (Map.Entry<String, String> entry : this.f1201a.entrySet()) {
                        JSONArray jSONArray2 = new JSONArray();
                        jSONArray2.put(entry.getKey()).put(entry.getValue());
                        jSONArray.put(jSONArray2);
                    }
                    return jSONArray.toString();
                } catch (Throwable th) {
                    com.alipay.sdk.m.u.e.a(th);
                    return new JSONArray().toString();
                }
            }

            public C0012a(String str) {
                try {
                    JSONArray jSONArray = new JSONArray(str);
                    for (int i = 0; i < jSONArray.length(); i++) {
                        JSONArray jSONArray2 = jSONArray.getJSONArray(i);
                        this.f1201a.put(jSONArray2.getString(0), jSONArray2.getString(1));
                    }
                } catch (Throwable th) {
                    com.alipay.sdk.m.u.e.a(th);
                }
            }
        }

        public static synchronized int a(Context context, String str) {
            com.alipay.sdk.m.u.e.b(f1200a, "stat remove " + str);
            if (context != null && !TextUtils.isEmpty(str)) {
                C0012a c0012aA = a(context);
                if (c0012aA.f1201a.isEmpty()) {
                    return 0;
                }
                try {
                    ArrayList arrayList = new ArrayList();
                    for (Map.Entry<String, String> entry : c0012aA.f1201a.entrySet()) {
                        if (str.equals(entry.getValue())) {
                            arrayList.add(entry.getKey());
                        }
                    }
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        c0012aA.f1201a.remove((String) it.next());
                    }
                    a(context, c0012aA);
                    return arrayList.size();
                } catch (Throwable th) {
                    com.alipay.sdk.m.u.e.a(th);
                    int size = c0012aA.f1201a.size();
                    a(context, new C0012a());
                    return size;
                }
            }
            return 0;
        }

        public static synchronized C0012a a(Context context) {
            try {
                String strA = j.a(null, context, "alipay_cashier_statistic_record", null);
                if (TextUtils.isEmpty(strA)) {
                    return new C0012a();
                }
                return new C0012a(strA);
            } catch (Throwable th) {
                com.alipay.sdk.m.u.e.a(th);
                return new C0012a();
            }
        }

        public static synchronized void a(Context context, C0012a c0012a) {
            if (c0012a == null) {
                try {
                    c0012a = new C0012a();
                } catch (Throwable th) {
                    com.alipay.sdk.m.u.e.a(th);
                }
            }
            j.b(null, context, "alipay_cashier_statistic_record", c0012a.a());
        }
    }

    public static final class b {

        /* JADX INFO: renamed from: com.alipay.sdk.m.k.a$b$a, reason: collision with other inner class name */
        public static class RunnableC0013a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ String f1202a;
            public final /* synthetic */ Context b;

            public RunnableC0013a(String str, Context context) {
                this.f1202a = str;
                this.b = context;
            }

            @Override // java.lang.Runnable
            public void run() {
                if (TextUtils.isEmpty(this.f1202a) || b.b(this.b, this.f1202a)) {
                    for (int i = 0; i < 4; i++) {
                        String strB = C0011a.b(this.b);
                        if (TextUtils.isEmpty(strB) || !b.b(this.b, strB)) {
                            return;
                        }
                    }
                }
            }
        }

        public static synchronized boolean b(Context context, String str) {
            com.alipay.sdk.m.u.e.b(com.alipay.sdk.m.l.a.A, "stat sub " + str);
            try {
                if ((com.alipay.sdk.m.m.a.D().e() ? new com.alipay.sdk.m.q.d() : new com.alipay.sdk.m.q.e()).a((com.alipay.sdk.m.s.a) null, context, str) == null) {
                    return false;
                }
                C0011a.a(context, str);
                return true;
            } catch (Throwable th) {
                com.alipay.sdk.m.u.e.a(th);
                return false;
            }
        }

        public static synchronized void a(Context context, com.alipay.sdk.m.k.b bVar, String str, String str2) {
            if (context == null || bVar == null || str == null) {
                return;
            }
            a(context, bVar.a(str), str2);
        }

        public static synchronized void a(Context context) {
            a(context, null, null);
        }

        public static synchronized void a(Context context, String str, String str2) {
            if (context == null) {
                return;
            }
            if (!TextUtils.isEmpty(str)) {
                C0011a.a(context, str, str2);
            }
            new Thread(new RunnableC0013a(str, context)).start();
        }
    }

    public static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f1203a = "alipay_cashier_ap_seq_v";

        public static synchronized long a(Context context) {
            return d.a(context, f1203a);
        }
    }

    public static final class d {
        public static synchronized long a(Context context, String str) {
            long j;
            String strA;
            try {
                strA = j.a(null, context, str, null);
            } catch (Throwable unused) {
            }
            j = (!TextUtils.isEmpty(strA) ? Long.parseLong(strA) : 0L) + 1;
            try {
                j.b(null, context, str, Long.toString(j));
            } catch (Throwable unused2) {
            }
            return j;
        }
    }

    public static final class e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f1204a = "alipay_cashier_statistic_v";

        public static synchronized long a(Context context) {
            return d.a(context, f1204a);
        }
    }

    public static synchronized void a(Context context, com.alipay.sdk.m.s.a aVar, String str, String str2) {
        if (context == null || aVar == null) {
            return;
        }
        try {
            C0011a.a(context, aVar.l.a(str), str2);
        } catch (Throwable th) {
            com.alipay.sdk.m.u.e.a(th);
        }
    }

    public static synchronized void b(Context context, com.alipay.sdk.m.s.a aVar, String str, String str2) {
        if (context == null || aVar == null) {
            return;
        }
        b.a(context, aVar.l, str, str2);
    }

    public static void b(com.alipay.sdk.m.s.a aVar, String str, String str2, String str3) {
        if (aVar == null) {
            return;
        }
        aVar.l.b(str, str2, str3);
    }

    public static synchronized void a(Context context) {
        b.a(context);
    }

    public static void a(com.alipay.sdk.m.s.a aVar, String str, Throwable th) {
        if (aVar == null || th == null || th.getClass() == null) {
            return;
        }
        aVar.l.a(str, th.getClass().getSimpleName(), th);
    }

    public static void a(com.alipay.sdk.m.s.a aVar, String str, String str2, Throwable th, String str3) {
        if (aVar == null) {
            return;
        }
        aVar.l.a(str, str2, th, str3);
    }

    public static void a(com.alipay.sdk.m.s.a aVar, String str, String str2, Throwable th) {
        if (aVar == null) {
            return;
        }
        aVar.l.a(str, str2, th);
    }

    public static void a(com.alipay.sdk.m.s.a aVar, String str, String str2, String str3) {
        if (aVar == null) {
            return;
        }
        aVar.l.a(str, str2, str3);
    }

    public static void a(com.alipay.sdk.m.s.a aVar, String str, String str2) {
        if (aVar == null) {
            return;
        }
        aVar.l.a(str, str2);
    }
}
