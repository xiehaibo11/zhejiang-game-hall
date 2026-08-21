package com.mbridge.msdk.c;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public final class d {
    public static String a;
    private long A;
    private long B;
    private int D;
    private int E;
    private int F;
    private int O;
    private int P;
    private String Q;
    private String R;
    private int b;
    private int c;
    private int d;
    private String f;
    private String g;
    private List<Integer> h;
    private long i;
    private int k;
    private List<Integer> l;
    private int m;
    private int n;
    private int o;
    private int p;
    private String r;
    private int s;
    private int v;
    private int w;
    private long x;
    private String y;
    private int z;
    private int e = 30;
    private int j = 1;
    private double q = 1.0d;
    private int t = 1;
    private int u = 5000;
    private int C = 60;
    private String G = "";
    private int H = 10;
    private int I = 60;
    private String J = "";
    private String K = "";
    private int L = 1;
    private int M = 100;
    private int N = 0;

    public final String a() {
        return this.J;
    }

    public final void a(int i) {
        this.E = i;
    }

    public final void b(int i) {
        this.F = i;
    }

    public final int b() {
        return this.C;
    }

    public final int c() {
        return this.D;
    }

    public final int d() {
        return this.P;
    }

    public final double e() {
        return this.q;
    }

    public final int f() {
        return this.M;
    }

    public final int g() {
        return this.N;
    }

    public final int h() {
        return this.O;
    }

    public final long i() {
        return this.x;
    }

    public final int j() {
        return this.v;
    }

    public final void c(int i) {
        this.v = i;
    }

    public final int k() {
        return this.w;
    }

    public static d l() {
        return new d();
    }

    public final int m() {
        return this.p;
    }

    public final int n() {
        return this.t;
    }

    public final int o() {
        return this.u;
    }

    public final int p() {
        return this.n;
    }

    public final int q() {
        return this.o;
    }

    public final String toString() {
        List<Integer> list = this.h;
        String str = "";
        if (list != null && list.size() > 0) {
            Iterator<Integer> it = this.h.iterator();
            while (it.hasNext()) {
                str = str + it.next() + Constants.ACCEPT_TIME_SEPARATOR_SP;
            }
        }
        return "offset = " + this.j + " unitId = " + this.f + " fbPlacementId = " + this.g + str;
    }

    public final void a(String str) {
        this.f = str;
    }

    public final List<Integer> r() {
        return this.h;
    }

    public final List<Integer> s() {
        return this.l;
    }

    public static d b(String str) {
        d dVar = null;
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            d dVar2 = new d();
            try {
                JSONObject jSONObject = new JSONObject(str);
                dVar2.f = jSONObject.optString("unitId");
                a = jSONObject.optString("atzu");
                String strOptString = jSONObject.optString(com.tkay.expressad.d.a.b.dI);
                dVar2.J = strOptString;
                com.mbridge.msdk.foundation.controller.a.b.put(dVar2.f, strOptString);
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("adSourceList");
                if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                    ArrayList arrayList = new ArrayList();
                    for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                        arrayList.add(Integer.valueOf(jSONArrayOptJSONArray.optInt(i)));
                    }
                    dVar2.h = arrayList;
                }
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("ad_source_timeout");
                if (jSONArrayOptJSONArray2 != null && jSONArrayOptJSONArray2.length() > 0) {
                    ArrayList arrayList2 = new ArrayList();
                    for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                        arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray2.optInt(i2)));
                    }
                    dVar2.l = arrayList2;
                }
                dVar2.m = jSONObject.optInt(com.tkay.expressad.d.a.b.J);
                dVar2.n = jSONObject.optInt("aqn");
                dVar2.o = jSONObject.optInt("acn");
                dVar2.p = jSONObject.optInt(com.tkay.expressad.d.a.b.R);
                int i3 = 1;
                dVar2.t = jSONObject.optInt(com.tkay.expressad.d.a.b.S, 1);
                dVar2.u = jSONObject.optInt(com.tkay.expressad.d.a.b.T, 5000);
                dVar2.k = jSONObject.optInt("ttc_type");
                dVar2.g = jSONObject.optString(com.tkay.expressad.d.a.b.s);
                dVar2.i = jSONObject.optLong("current_time");
                dVar2.j = jSONObject.optInt("offset");
                dVar2.Q = jSONObject.optString(com.tkay.expressad.d.a.b.V);
                dVar2.R = jSONObject.optString(com.tkay.expressad.d.a.b.W);
                dVar2.x = jSONObject.optLong("dlct", com.tkay.expressad.d.a.b.P);
                dVar2.v = jSONObject.optInt(com.tkay.expressad.d.a.b.aX, 0);
                dVar2.w = jSONObject.optInt("dlnet", 2);
                dVar2.y = jSONObject.optString(com.tkay.expressad.d.a.b.aL);
                dVar2.z = jSONObject.optInt(com.tkay.expressad.d.a.b.aM);
                dVar2.A = jSONObject.optLong(com.tkay.expressad.d.a.b.aN, 86400L);
                dVar2.B = jSONObject.optLong(com.tkay.expressad.d.a.b.aO, 300L);
                dVar2.M = jSONObject.optInt("ready_rate", 100);
                dVar2.N = jSONObject.optInt("cd_rate", 0);
                dVar2.O = jSONObject.optInt("content", 1);
                dVar2.P = jSONObject.optInt(com.tkay.expressad.d.a.b.bC, 0);
                dVar2.q = jSONObject.optDouble("cbp", 1.0d);
                dVar2.s = jSONObject.optInt(com.tkay.expressad.d.a.b.cf, 1);
                dVar2.r = jSONObject.optString(com.tkay.expressad.d.a.b.cd, "");
                dVar2.b = jSONObject.optInt("playclosebtn_tm", -1);
                dVar2.c = jSONObject.optInt("play_ctdown", 0);
                dVar2.d = jSONObject.optInt("close_alert", 0);
                dVar2.e = jSONObject.optInt(com.tkay.expressad.d.a.b.cr, 30);
                dVar2.C = jSONObject.optInt(com.tkay.expressad.d.a.b.db, 60);
                dVar2.D = jSONObject.optInt(com.tkay.expressad.d.a.b.dd, 0);
                int iOptInt = jSONObject.optInt("tmorl", 1);
                if (iOptInt <= 2 && iOptInt > 0) {
                    i3 = iOptInt;
                }
                dVar2.L = i3;
                dVar2.G = jSONObject.optString("placementid", "");
                dVar2.H = jSONObject.optInt("ltafemty", 10);
                dVar2.I = jSONObject.optInt("ltorwc", 60);
                dVar2.K = jSONObject.optString("vtag", "");
                return dVar2;
            } catch (Exception e) {
                e = e;
                dVar = dVar2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return dVar;
    }

    public final JSONObject t() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.h != null && this.h.size() > 0) {
                int size = this.h.size();
                JSONArray jSONArray = new JSONArray();
                for (int i = 0; i < size; i++) {
                    jSONArray.put(this.h.get(i));
                }
                jSONObject.put("adSourceList", jSONArray);
            }
            if (this.l != null && this.l.size() > 0) {
                int size2 = this.l.size();
                JSONArray jSONArray2 = new JSONArray();
                for (int i2 = 0; i2 < size2; i2++) {
                    jSONArray2.put(this.l.get(i2));
                }
                jSONObject.put("ad_source_timeout", jSONArray2);
            }
            jSONObject.put(com.tkay.expressad.d.a.b.J, this.m);
            jSONObject.put("aqn", this.n);
            jSONObject.put("acn", this.o);
            jSONObject.put(com.tkay.expressad.d.a.b.R, this.p);
            jSONObject.put("ttc_type", this.k);
            jSONObject.put(com.tkay.expressad.d.a.b.s, this.g);
            jSONObject.put("current_time", this.i);
            jSONObject.put("offset", this.j);
            jSONObject.put(com.tkay.expressad.d.a.b.V, this.Q);
            jSONObject.put(com.tkay.expressad.d.a.b.W, this.R);
            jSONObject.put("dlct", this.x);
            jSONObject.put(com.tkay.expressad.d.a.b.aX, this.v);
            jSONObject.put("dlnet", this.w);
            jSONObject.put(com.tkay.expressad.d.a.b.aL, this.y);
            jSONObject.put(com.tkay.expressad.d.a.b.aM, this.z);
            jSONObject.put(com.tkay.expressad.d.a.b.aN, this.A);
            jSONObject.put(com.tkay.expressad.d.a.b.aO, this.B);
            jSONObject.put("ready_rate", this.M);
            jSONObject.put("content", this.O);
            jSONObject.put(com.tkay.expressad.d.a.b.bC, this.P);
            jSONObject.put("cbp", this.q);
            jSONObject.put(com.tkay.expressad.d.a.b.cf, this.s);
            jSONObject.put(com.tkay.expressad.d.a.b.cd, this.r);
            jSONObject.put("playclosebtn_tm", this.b);
            jSONObject.put("play_ctdown", this.c);
            jSONObject.put("close_alert", this.d);
            jSONObject.put(com.tkay.expressad.d.a.b.dd, this.D);
            jSONObject.put(com.tkay.expressad.d.a.b.db, this.C);
            jSONObject.put(com.tkay.expressad.d.a.b.dk, this.F);
            jSONObject.put(com.tkay.expressad.d.a.b.dm, this.E);
            jSONObject.put("tmorl", this.L);
            jSONObject.put("unitId", this.f);
            jSONObject.put("placementid", this.G);
            jSONObject.put("ltafemty", this.H);
            jSONObject.put("ltorwc", this.I);
            jSONObject.put("vtag", this.K);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public final long u() {
        return this.i;
    }

    public final int v() {
        return this.j;
    }

    public static d c(String str) {
        d dVarL = l();
        dVarL.v = 0;
        return dVarL;
    }

    public static d d(String str) {
        d dVar = new d();
        ArrayList arrayList = new ArrayList();
        arrayList.add(1);
        ArrayList arrayList2 = new ArrayList();
        arrayList2.add(8);
        arrayList2.add(8);
        dVar.k = 2;
        dVar.j = 1;
        dVar.f = str;
        dVar.h = arrayList;
        dVar.l = arrayList2;
        dVar.m = 1;
        dVar.o = -2;
        dVar.n = -2;
        dVar.p = 5;
        dVar.x = com.tkay.expressad.d.a.b.P;
        dVar.w = 2;
        dVar.v = 1;
        dVar.M = 100;
        dVar.N = 0;
        dVar.O = 1;
        dVar.P = 0;
        dVar.C = 60;
        dVar.H = 10;
        dVar.I = 60;
        return dVar;
    }

    public static d e(String str) {
        d dVar = new d();
        try {
            ArrayList arrayList = new ArrayList();
            arrayList.add(1);
            dVar.h = arrayList;
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(30);
            dVar.l = arrayList2;
            dVar.f = str;
            dVar.k = 2;
            dVar.j = 1;
            dVar.m = 1;
            dVar.o = -2;
            dVar.n = -2;
            dVar.p = 5;
            dVar.x = com.tkay.expressad.d.a.b.P;
            dVar.w = 2;
            dVar.v = 3;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return dVar;
    }

    public static d f(String str) {
        d dVar = new d();
        try {
            dVar.f = str;
            dVar.k = 2;
            dVar.j = 1;
            dVar.m = 1;
            dVar.p = 5;
            dVar.k = 2;
            dVar.o = 1;
            dVar.n = 1;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return dVar;
    }

    public final void g(String str) {
        this.G = str;
    }

    public final int w() {
        return this.H;
    }

    public final int x() {
        return this.I;
    }

    public final String y() {
        return this.K;
    }
}
