package com.tkay.core.b;

import android.text.TextUtils;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.am;
import com.tkay.core.common.f.l;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.t;
import com.tkay.core.common.w;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import okhttp3.HttpUrl;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class i extends b {
    boolean A;
    String w;
    List<aj> x;
    List<aj> y;
    boolean z;

    public i(ag agVar) {
        super(agVar);
        this.w = com.tkay.core.common.l.g.a(agVar.b, this.i, this.j, agVar.f, 0).toString();
        if (agVar.k == null) {
            this.x = new ArrayList(4);
            this.y = new ArrayList(1);
        } else {
            this.x = new ArrayList(agVar.k);
            this.y = new ArrayList(agVar.k);
        }
    }

    @Override // com.tkay.core.b.b
    protected final synchronized void a(List<JSONObject> list, Map<String, aj> map) {
        super.a(list, map);
        w.a(this.f5950a.b).a(this.f5950a.e);
        this.z = false;
        this.A = false;
        try {
            Iterator<Map.Entry<String, aj>> it = map.entrySet().iterator();
            while (it.hasNext()) {
                try {
                    aj value = it.next().getValue();
                    if (value.c() == 66) {
                        this.z = true;
                    } else if (value.c() == 6) {
                        this.A = true;
                    }
                } catch (Throwable unused) {
                }
            }
        } catch (Throwable unused2) {
        }
    }

    @Override // com.tkay.core.b.b
    protected final void a(List<JSONObject> list, k kVar) {
        String string;
        boolean zB;
        String strA;
        Boolean boolC;
        String str;
        JSONArray jSONArray = new JSONArray();
        JSONArray jSONArray2 = new JSONArray();
        a(jSONArray, jSONArray2);
        a(jSONArray);
        com.tkay.core.b.a.b bVar = new com.tkay.core.b.a.b();
        bVar.f5952a = this.w;
        bVar.b = jSONArray2.toString();
        bVar.c = f();
        bVar.f = this.f5950a.o.as();
        String string2 = jSONArray.length() > 0 ? jSONArray.toString() : "";
        if (this.f5950a.x != null) {
            string = this.f5950a.x.a().toString();
            bVar.d = string;
        } else {
            string = "";
        }
        bVar.e = string2;
        bVar.g = this.f5950a.o.f();
        int iB = w.a(this.f5950a.b).b(this.f5950a.e);
        if (this.f5950a.y != null) {
            boolC = this.f5950a.y.c();
            strA = this.f5950a.y.a();
            zB = this.f5950a.y.b();
        } else {
            zB = true;
            strA = "";
            boolC = null;
        }
        com.tkay.core.common.f.d dVar = this.f5950a.t;
        int i = this.f5950a.c.d;
        int i2 = this.f5950a.v;
        boolean z = this.z;
        boolean z2 = this.A;
        boolean zA = com.tkay.core.common.l.h.a(this.f5950a.b);
        com.tkay.core.common.f.g gVar = new com.tkay.core.common.f.g(dVar.Y(), null);
        gVar.f6155a = "1004684";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.k = String.valueOf(i);
        gVar.m = String.valueOf(iB);
        gVar.n = String.valueOf(dVar.Y());
        gVar.o = zB ? "1" : "2";
        gVar.p = String.valueOf(i2);
        if (!TextUtils.isEmpty(string2)) {
            gVar.q = string2;
        }
        if (!TextUtils.isEmpty(string)) {
            gVar.r = string;
        }
        if (boolC == null) {
            str = "0";
        } else {
            str = boolC.booleanValue() ? "1" : "2";
        }
        gVar.s = str;
        gVar.t = strA;
        gVar.u = z ? "1" : "2";
        gVar.v = z2 ? "1" : "2";
        gVar.w = String.valueOf(i);
        gVar.x = zA ? "1" : "2";
        com.tkay.core.common.k.c.b(gVar);
        com.tkay.core.b.a.a aVar = new com.tkay.core.b.a.a(this.k, this.j, this.i, list, 0);
        aVar.a(bVar);
        aVar.a(0, kVar);
    }

    private void a(String str, String str2) {
        String strA;
        boolean zB;
        Boolean boolC;
        String str3;
        int iB = w.a(this.f5950a.b).b(this.f5950a.e);
        if (this.f5950a.y != null) {
            boolC = this.f5950a.y.c();
            strA = this.f5950a.y.a();
            zB = this.f5950a.y.b();
        } else {
            strA = "";
            zB = true;
            boolC = null;
        }
        com.tkay.core.common.f.d dVar = this.f5950a.t;
        int i = this.f5950a.c.d;
        int i2 = this.f5950a.v;
        boolean z = this.z;
        boolean z2 = this.A;
        boolean zA = com.tkay.core.common.l.h.a(this.f5950a.b);
        com.tkay.core.common.f.g gVar = new com.tkay.core.common.f.g(dVar.Y(), null);
        gVar.f6155a = "1004684";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.k = String.valueOf(i);
        gVar.m = String.valueOf(iB);
        gVar.n = String.valueOf(dVar.Y());
        gVar.o = zB ? "1" : "2";
        gVar.p = String.valueOf(i2);
        if (!TextUtils.isEmpty(str2)) {
            gVar.q = str2;
        }
        if (!TextUtils.isEmpty(str)) {
            gVar.r = str;
        }
        if (boolC == null) {
            str3 = "0";
        } else {
            str3 = boolC.booleanValue() ? "1" : "2";
        }
        gVar.s = str3;
        gVar.t = strA;
        gVar.u = z ? "1" : "2";
        gVar.v = z2 ? "1" : "2";
        gVar.w = String.valueOf(i);
        gVar.x = zA ? "1" : "2";
        com.tkay.core.common.k.c.b(gVar);
    }

    @Override // com.tkay.core.b.b
    protected final String e() {
        return this.f5950a.m;
    }

    @Override // com.tkay.core.b.b, com.tkay.core.b.a
    protected final void a(aj ajVar, com.tkay.core.common.f.k kVar, long j) {
        super.a(ajVar, kVar, j);
        if (ajVar.Z()) {
            return;
        }
        com.tkay.core.common.l.g.a(this.x, ajVar, false);
    }

    private String f() {
        if (!this.f5950a.n) {
            return HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
        }
        JSONArray jSONArray = new JSONArray();
        if (this.n != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("ad_source_id", this.n.k);
                jSONObject.put("tp_bid_id", this.n.g);
            } catch (Throwable th) {
                th.printStackTrace();
            }
            jSONArray.put(jSONObject);
        }
        return jSONArray.toString();
    }

    private void a(JSONArray jSONArray) {
        if (this.f5950a.j != null) {
            int size = this.f5950a.j.size();
            for (int i = 0; i < size; i++) {
                aj ajVar = this.f5950a.j.get(i);
                if (t.a(this.j, ajVar)) {
                    jSONArray.put(new am.a(ajVar).a());
                }
            }
        }
    }

    private void a(JSONArray jSONArray, JSONArray jSONArray2) {
        List<aj> list = this.x;
        if (list != null) {
            int size = list.size();
            for (int i = 0; i < size; i++) {
                aj ajVar = list.get(i);
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("ad_source_id", ajVar.t());
                    jSONObject.put("price", ajVar.x());
                    l lVarM = ajVar.M();
                    if (lVarM != null) {
                        jSONObject.put("tp_bid_id", lVarM.g);
                    }
                    jSONObject.put(com.tkay.core.common.l.am, ajVar.af());
                    jSONArray2.put(jSONObject);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
        List<aj> list2 = this.y;
        if (list2 != null) {
            for (aj ajVar2 : list2) {
                if (t.a(this.j, ajVar2)) {
                    jSONArray.put(new am.a(ajVar2).a());
                }
            }
        }
    }
}
