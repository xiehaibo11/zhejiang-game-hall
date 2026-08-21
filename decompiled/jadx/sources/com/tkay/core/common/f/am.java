package com.tkay.core.common.f;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class am {
    static final String e = "reqId";
    static final String f = "reqDatetime";
    static final String g = "fillOffers";
    static final String h = "bidResps";
    static final String i = "adSourceId";
    static final String j = "price";
    static final String k = "networkFirmId";
    static final String l = "demandType";
    static final String m = "tp_bid_id";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6145a;
    long b;
    List<a> c = new ArrayList(3);
    List<a> d = new ArrayList(3);

    public final synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        try {
            jSONObject.put(e, this.f6145a);
            jSONObject.put(f, this.b);
            jSONObject.put(g, d());
            jSONObject.put(h, e());
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject;
    }

    public static am a(String str) {
        am amVar = new am();
        try {
            JSONObject jSONObject = new JSONObject(str);
            amVar.b(jSONObject.getString(e));
            amVar.a(jSONObject.getLong(f));
            amVar.a(amVar.c(jSONObject.getString(g)));
            amVar.b(amVar.c(jSONObject.getString(h)));
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return amVar;
    }

    public final synchronized void b(String str) {
        this.f6145a = str;
    }

    public final synchronized void a(long j2) {
        this.b = j2;
    }

    private synchronized void a(List<a> list) {
        this.c = list;
    }

    private synchronized void b(List<a> list) {
        this.d = list;
    }

    public final synchronized String b() {
        return this.f6145a;
    }

    private synchronized long c() {
        return this.b;
    }

    public final synchronized void a(a aVar) {
        a(this.c, aVar);
    }

    public final synchronized void b(a aVar) {
        a(this.d, aVar);
    }

    private synchronized void a(List<a> list, a aVar) {
        if (aVar != null) {
            if (list.size() == 0) {
                list.add(aVar);
                return;
            }
            int i2 = 0;
            while (true) {
                if (i2 >= list.size()) {
                    i2 = -1;
                    break;
                } else if (aVar.d > list.get(i2).d) {
                    break;
                } else {
                    i2++;
                }
            }
            if (i2 != -1) {
                list.add(i2, aVar);
                return;
            }
            list.add(aVar);
        }
    }

    private synchronized List<a> c(String str) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONArray jSONArray = new JSONArray(str);
                int length = jSONArray.length();
                for (int i2 = 0; i2 < length; i2++) {
                    a aVar = new a();
                    JSONObject jSONObject = new JSONObject(jSONArray.optString(i2));
                    aVar.b = jSONObject.getString(i);
                    aVar.d = jSONObject.getDouble("price");
                    aVar.c = jSONObject.getInt(k);
                    aVar.f6147a = jSONObject.getInt(l);
                    if (jSONObject.has(m)) {
                        aVar.e = jSONObject.getString(m);
                    }
                    arrayList.add(aVar);
                }
                Collections.sort(arrayList, new Comparator<a>() { // from class: com.tkay.core.common.f.am.1
                    @Override // java.util.Comparator
                    public final /* bridge */ /* synthetic */ int compare(a aVar2, a aVar3) {
                        a aVar4 = aVar2;
                        a aVar5 = aVar3;
                        if (aVar4.d > aVar5.d) {
                            return -1;
                        }
                        return aVar4.d == aVar5.d ? 0 : 1;
                    }

                    private static int a(a aVar2, a aVar3) {
                        if (aVar2.d > aVar3.d) {
                            return -1;
                        }
                        return aVar2.d == aVar3.d ? 0 : 1;
                    }
                });
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return arrayList;
    }

    private synchronized JSONArray d() {
        return c(this.c);
    }

    private synchronized JSONArray e() {
        return c(this.d);
    }

    private synchronized JSONArray c(List<a> list) {
        JSONArray jSONArray;
        jSONArray = new JSONArray();
        if (list != null) {
            Iterator<a> it = list.iterator();
            while (it.hasNext()) {
                try {
                    jSONArray.put(it.next().a());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
        return jSONArray;
    }

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f6147a;
        public String b;
        public int c;
        public double d;
        public String e;

        public a() {
        }

        /* JADX WARN: Removed duplicated region for block: B:26:0x0055  */
        /* JADX WARN: Removed duplicated region for block: B:27:0x0058  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public a(com.tkay.core.common.f.aj r7) {
            /*
                r6 = this;
                r6.<init>()
                java.lang.String r0 = r7.t()
                r6.b = r0
                com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
                com.tkay.core.common.f.l r0 = r0.a(r7)
                if (r0 == 0) goto L29
                boolean r1 = r7.Z()
                if (r1 == 0) goto L1e
                double r1 = r0.o
                r6.d = r1
                goto L2f
            L1e:
                boolean r1 = r7.j()
                if (r1 == 0) goto L2f
                double r1 = r0.price
                r6.d = r1
                goto L2f
            L29:
                double r1 = r7.x()
                r6.d = r1
            L2f:
                int r1 = r7.c()
                r6.c = r1
                int r1 = r7.l()
                r2 = 1
                r3 = 2
                if (r1 == 0) goto L58
                if (r1 == r2) goto L55
                r4 = 3
                if (r1 == r3) goto L52
                r5 = 4
                if (r1 == r4) goto L4f
                if (r1 == r5) goto L55
                r4 = 7
                if (r1 == r4) goto L55
                r4 = 8
                if (r1 == r4) goto L58
                goto L5a
            L4f:
                r6.f6147a = r5
                goto L5a
            L52:
                r6.f6147a = r4
                goto L5a
            L55:
                r6.f6147a = r3
                goto L5a
            L58:
                r6.f6147a = r2
            L5a:
                r1 = 35
                int r7 = r7.c()
                if (r1 != r7) goto L64
                r6.f6147a = r3
            L64:
                if (r0 == 0) goto L69
                java.lang.String r7 = r0.g
                goto L6b
            L69:
                java.lang.String r7 = ""
            L6b:
                r6.e = r7
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.f.am.a.<init>(com.tkay.core.common.f.aj):void");
        }

        public final synchronized JSONObject a() {
            JSONObject jSONObject;
            jSONObject = new JSONObject();
            try {
                jSONObject.put(am.i, this.b);
                jSONObject.put("price", this.d);
                jSONObject.put(am.k, this.c);
                jSONObject.put(am.l, this.f6147a);
                jSONObject.put(am.m, this.e);
            } catch (Throwable th) {
                th.printStackTrace();
            }
            return jSONObject;
        }
    }
}
