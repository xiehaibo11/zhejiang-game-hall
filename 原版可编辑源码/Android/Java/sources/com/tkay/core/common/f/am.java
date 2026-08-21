package com.tkay.core.common.f;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

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
    String a;
    long b;
    List<a> c = new ArrayList(3);
    List<a> d = new ArrayList(3);

    public final synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        try {
            jSONObject.put(e, this.a);
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
        this.a = str;
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
        return this.a;
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
                    aVar.a = jSONObject.getInt(l);
                    if (jSONObject.has(m)) {
                        aVar.e = jSONObject.getString(m);
                    }
                    arrayList.add(aVar);
                }
                Collections.sort(arrayList, new Comparator<a>() {
                    @Override
                    public final int compare(a aVar2, a aVar3) {
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
        public int a;
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
        */
        public a(aj ajVar) {
            this.b = ajVar.t();
            l lVarA = com.tkay.core.b.c.a().a(ajVar);
            if (lVarA != null) {
                if (ajVar.Z()) {
                    this.d = lVarA.o;
                } else if (ajVar.j()) {
                    this.d = lVarA.price;
                }
            } else {
                this.d = ajVar.x();
            }
            this.c = ajVar.c();
            int iL = ajVar.l();
            if (iL == 0) {
                this.a = 1;
            } else if (iL == 1) {
                this.a = 2;
            } else if (iL == 2) {
                this.a = 3;
            } else if (iL == 3) {
                this.a = 4;
            } else if (iL != 4 && iL != 7) {
                if (iL == 8) {
                }
            }
            if (35 == ajVar.c()) {
                this.a = 2;
            }
            this.e = lVarA != null ? lVarA.g : "";
        }

        public final synchronized JSONObject a() {
            JSONObject jSONObject;
            jSONObject = new JSONObject();
            try {
                jSONObject.put(am.i, this.b);
                jSONObject.put("price", this.d);
                jSONObject.put(am.k, this.c);
                jSONObject.put(am.l, this.a);
                jSONObject.put(am.m, this.e);
            } catch (Throwable th) {
                th.printStackTrace();
            }
            return jSONObject;
        }
    }
}
