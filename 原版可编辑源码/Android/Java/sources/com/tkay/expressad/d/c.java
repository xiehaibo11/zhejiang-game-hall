package com.tkay.expressad.d;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import org.json.JSONArray;
import org.json.JSONObject;

public final class c {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 3;
    private String A;
    private int B;
    private long C;
    private long D;
    private int F;
    private int G;
    private int H;
    private int N;
    private int P;
    private int Q;
    private int e;
    private int f;
    private int g;
    private String i;
    private String j;
    private List<Integer> k;
    private long l;
    private int n;
    private List<Integer> o;
    private int p;
    private int q;
    private int r;
    private int s;
    private String t;
    private int u;
    private int x;
    private int y;
    private long z;
    private int h = 30;
    private int m = 1;
    private int v = 1;
    private int w = 5000;
    private int E = 60;
    private String I = "";
    private int J = 10;
    private int K = 60;
    private double L = 1.0d;
    private int M = 1;
    private int O = 0;

    public final double a() {
        return this.L;
    }

    private void a(double d2) {
        this.L = d2;
    }

    private int z() {
        return this.G;
    }

    public final void a(int i) {
        this.G = i;
    }

    private int A() {
        return this.H;
    }

    public final void b(int i) {
        this.H = i;
    }

    private int B() {
        return this.M;
    }

    private void e(int i) {
        this.M = i;
    }

    public final int b() {
        return this.E;
    }

    public final void c() {
        this.E = 60;
    }

    public final int d() {
        return this.F;
    }

    private void f(int i) {
        this.F = i;
    }

    private int C() {
        return this.Q;
    }

    public final void e() {
        this.Q = 0;
    }

    private String D() {
        return this.t;
    }

    private void f(String str) {
        this.t = str;
    }

    private int E() {
        return this.u;
    }

    private void g(int i) {
        this.u = i;
    }

    public final int f() {
        return this.N;
    }

    public final void c(int i) {
        try {
            this.N = i;
        } catch (Exception unused) {
            this.N = 100;
        }
    }

    public final int g() {
        return this.O;
    }

    public final void d(int i) {
        try {
            this.O = i;
        } catch (Exception unused) {
            this.O = 0;
        }
    }

    private int F() {
        return this.P;
    }

    public final void h() {
        this.P = 1;
    }

    private long G() {
        return this.C;
    }

    private void a(long j) {
        this.C = j;
    }

    private long H() {
        return this.D;
    }

    private void b(long j) {
        this.D = j;
    }

    private String I() {
        return this.A;
    }

    private void g(String str) {
        this.A = str;
    }

    private int J() {
        return this.B;
    }

    private void h(int i) {
        this.B = i;
    }

    public final long i() {
        return this.z;
    }

    public final void j() {
        this.y = 2;
    }

    public final int k() {
        return this.x;
    }

    public final void l() {
        this.x = 1;
    }

    public final int m() {
        return this.y;
    }

    public final void n() {
        this.z = com.tkay.expressad.d.a.b.P;
    }

    private int K() {
        return this.e;
    }

    private void i(int i) {
        this.e = i;
    }

    private int L() {
        return this.f;
    }

    private void j(int i) {
        this.f = i;
    }

    private int M() {
        return this.g;
    }

    private void k(int i) {
        this.g = i;
    }

    private int N() {
        int i = this.h;
        if (i <= 0 || i > 100) {
            this.h = 30;
        }
        return this.h;
    }

    private void l(int i) {
        this.h = i;
    }

    private static c O() {
        return new c();
    }

    private int P() {
        return this.s;
    }

    public final void o() {
        this.s = 5;
    }

    private int Q() {
        return this.v;
    }

    private void m(int i) {
        this.v = i;
    }

    private int R() {
        return this.w;
    }

    private void n(int i) {
        this.w = i;
    }

    private int S() {
        return this.p;
    }

    public final void p() {
        this.p = 1;
    }

    private int T() {
        return this.q;
    }

    public final void q() {
        this.q = -2;
    }

    private int U() {
        return this.r;
    }

    public final void r() {
        this.r = -2;
    }

    public final String toString() {
        List<Integer> list = this.k;
        String str = "";
        if (list != null && list.size() > 0) {
            Iterator<Integer> it = this.k.iterator();
            while (it.hasNext()) {
                str = str + it.next() + Constants.ACCEPT_TIME_SEPARATOR_SP;
            }
        }
        return "offset = " + this.m + " unitId = " + this.i + " fbPlacementId = " + this.j + str;
    }

    private String V() {
        return this.i;
    }

    public final void a(String str) {
        this.i = str;
    }

    private List<Integer> W() {
        return this.k;
    }

    public final void a(List<Integer> list) {
        this.k = list;
    }

    private List<Integer> X() {
        return this.o;
    }

    public final void b(List<Integer> list) {
        this.o = list;
    }

    public static c b(String str) {
        c cVar = null;
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            c cVar2 = new c();
            try {
                JSONObject jSONObject = new JSONObject(str);
                cVar2.i = jSONObject.optString("unitId");
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("adSourceList");
                if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                    ArrayList arrayList = new ArrayList();
                    for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                        arrayList.add(Integer.valueOf(jSONArrayOptJSONArray.optInt(i)));
                    }
                    cVar2.k = arrayList;
                }
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("ad_source_timeout");
                if (jSONArrayOptJSONArray2 != null && jSONArrayOptJSONArray2.length() > 0) {
                    ArrayList arrayList2 = new ArrayList();
                    for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                        arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray2.optInt(i2)));
                    }
                    cVar2.o = arrayList2;
                }
                cVar2.p = jSONObject.optInt(com.tkay.expressad.d.a.b.J);
                cVar2.q = jSONObject.optInt("aqn");
                cVar2.r = jSONObject.optInt("acn");
                cVar2.s = jSONObject.optInt(com.tkay.expressad.d.a.b.R);
                int i3 = 1;
                cVar2.v = jSONObject.optInt(com.tkay.expressad.d.a.b.S, 1);
                cVar2.w = jSONObject.optInt(com.tkay.expressad.d.a.b.T, 5000);
                cVar2.l = jSONObject.optLong("current_time");
                cVar2.m = jSONObject.optInt("offset");
                cVar2.z = jSONObject.optLong("dlct", com.tkay.expressad.d.a.b.P);
                cVar2.x = jSONObject.optInt(com.tkay.expressad.d.a.b.aX, 0);
                cVar2.y = jSONObject.optInt("dlnet", 2);
                cVar2.A = jSONObject.optString(com.tkay.expressad.d.a.b.aL);
                cVar2.B = jSONObject.optInt(com.tkay.expressad.d.a.b.aM);
                cVar2.C = jSONObject.optLong(com.tkay.expressad.d.a.b.aN, 86400L);
                cVar2.D = jSONObject.optLong(com.tkay.expressad.d.a.b.aO, 300L);
                cVar2.c(jSONObject.optInt("ready_rate", 100));
                cVar2.d(jSONObject.optInt("cd_rate", 0));
                cVar2.P = jSONObject.optInt("content", 1);
                cVar2.Q = jSONObject.optInt(com.tkay.expressad.d.a.b.bC, 0);
                cVar2.u = jSONObject.optInt(com.tkay.expressad.d.a.b.cf, 1);
                cVar2.t = jSONObject.optString(com.tkay.expressad.d.a.b.cd, "");
                cVar2.e = jSONObject.optInt("playclosebtn_tm", -1);
                cVar2.f = jSONObject.optInt("play_ctdown", 0);
                cVar2.g = jSONObject.optInt("close_alert", 0);
                cVar2.h = jSONObject.optInt(com.tkay.expressad.d.a.b.cr, 30);
                cVar2.E = jSONObject.optInt(com.tkay.expressad.d.a.b.db, 60);
                cVar2.F = jSONObject.optInt(com.tkay.expressad.d.a.b.dd, 0);
                int iOptInt = jSONObject.optInt("tmorl", 1);
                if (iOptInt <= 2 && iOptInt > 0) {
                    i3 = iOptInt;
                }
                cVar2.M = i3;
                cVar2.I = jSONObject.optString("placementid", "");
                cVar2.J = jSONObject.optInt("ltafemty", 10);
                cVar2.K = jSONObject.optInt("ltorwc", 60);
                return cVar2;
            } catch (Exception e) {
                e = e;
                cVar = cVar2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return cVar;
    }

    public final JSONObject s() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.k != null && this.k.size() > 0) {
                int size = this.k.size();
                JSONArray jSONArray = new JSONArray();
                for (int i = 0; i < size; i++) {
                    jSONArray.put(this.k.get(i));
                }
                jSONObject.put("adSourceList", jSONArray);
            }
            if (this.o != null && this.o.size() > 0) {
                int size2 = this.o.size();
                JSONArray jSONArray2 = new JSONArray();
                for (int i2 = 0; i2 < size2; i2++) {
                    jSONArray2.put(this.o.get(i2));
                }
                jSONObject.put("ad_source_timeout", jSONArray2);
            }
            jSONObject.put(com.tkay.expressad.d.a.b.J, this.p);
            jSONObject.put("aqn", this.q);
            jSONObject.put("acn", this.r);
            jSONObject.put(com.tkay.expressad.d.a.b.R, this.s);
            jSONObject.put("current_time", this.l);
            jSONObject.put("offset", this.m);
            jSONObject.put("dlct", this.z);
            jSONObject.put(com.tkay.expressad.d.a.b.aX, this.x);
            jSONObject.put("dlnet", this.y);
            jSONObject.put(com.tkay.expressad.d.a.b.aL, this.A);
            jSONObject.put(com.tkay.expressad.d.a.b.aM, this.B);
            jSONObject.put(com.tkay.expressad.d.a.b.aN, this.C);
            jSONObject.put(com.tkay.expressad.d.a.b.aO, this.D);
            jSONObject.put("ready_rate", this.N);
            jSONObject.put("content", this.P);
            jSONObject.put(com.tkay.expressad.d.a.b.bC, this.Q);
            jSONObject.put(com.tkay.expressad.d.a.b.cf, this.u);
            jSONObject.put(com.tkay.expressad.d.a.b.cd, this.t);
            jSONObject.put("playclosebtn_tm", this.e);
            jSONObject.put("play_ctdown", this.f);
            jSONObject.put("close_alert", this.g);
            jSONObject.put(com.tkay.expressad.d.a.b.dd, this.F);
            jSONObject.put(com.tkay.expressad.d.a.b.db, this.E);
            jSONObject.put(com.tkay.expressad.d.a.b.dk, this.H);
            jSONObject.put(com.tkay.expressad.d.a.b.dm, this.G);
            jSONObject.put("tmorl", this.M);
            jSONObject.put("unitId", this.i);
            jSONObject.put("placementid", this.I);
            jSONObject.put("ltafemty", this.J);
            jSONObject.put("ltorwc", this.K);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private long Y() {
        return this.l;
    }

    private void c(long j) {
        this.l = j;
    }

    public final int t() {
        return this.m;
    }

    public final void u() {
        this.m = 1;
    }

    private int Z() {
        return this.n;
    }

    public final void v() {
        this.n = 2;
    }

    public static c c(String str) {
        c cVar = new c();
        ArrayList arrayList = new ArrayList();
        arrayList.add(1);
        ArrayList arrayList2 = new ArrayList();
        arrayList2.add(8);
        arrayList2.add(8);
        cVar.m = 1;
        cVar.i = str;
        cVar.k = arrayList;
        cVar.o = arrayList2;
        cVar.p = 1;
        cVar.r = -2;
        cVar.q = -2;
        cVar.s = 5;
        cVar.z = com.tkay.expressad.d.a.b.P;
        cVar.y = 2;
        cVar.x = 1;
        cVar.c(100);
        cVar.d(0);
        cVar.P = 1;
        cVar.Q = 0;
        cVar.E = 60;
        cVar.J = 10;
        cVar.K = 60;
        return cVar;
    }

    public static c d(String str) {
        c cVar = new c();
        try {
            ArrayList arrayList = new ArrayList();
            arrayList.add(1);
            cVar.k = arrayList;
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(30);
            cVar.o = arrayList2;
            cVar.i = str;
            cVar.m = 1;
            cVar.p = 1;
            cVar.r = -2;
            cVar.q = -2;
            cVar.s = 5;
            cVar.z = com.tkay.expressad.d.a.b.P;
            cVar.y = 2;
            cVar.x = 3;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return cVar;
    }

    private static Queue<Integer> c(List<Integer> list) {
        LinkedList linkedList = new LinkedList();
        if (list != null) {
            try {
                if (list.size() > 0) {
                    for (Integer num : list) {
                        if (num != null) {
                            linkedList.add(num);
                        }
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return linkedList;
    }

    private Queue<Integer> d(List<Integer> list) {
        LinkedList linkedList = new LinkedList();
        try {
            if (this.k != null && this.k.size() > 0) {
                for (Integer num : list) {
                    if (num != null) {
                        linkedList.add(Integer.valueOf(num.intValue() * 1000));
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return linkedList;
    }

    private String aa() {
        return this.I;
    }

    public final void e(String str) {
        this.I = str;
    }

    private int ab() {
        return this.J;
    }

    public final void w() {
        this.J = 10;
    }

    private int ac() {
        return this.K;
    }

    public final void x() {
        this.K = 60;
    }

    public static c y() {
        c cVar = new c();
        cVar.x = 0;
        return cVar;
    }
}
