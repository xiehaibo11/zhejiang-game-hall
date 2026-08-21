package com.tkay.core.b.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.c;
import com.tkay.core.common.n;
import com.tkay.core.common.p;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import okhttp3.HttpUrl;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class a extends com.tkay.core.common.h.a {
    public static final int a = 0;
    public static final int b = 1;
    public static final String c = "ex_pkg";
    String d;
    String e;
    String f;
    String g;
    String h;
    String i;
    String j;
    int k;
    int l;
    int p;
    String q;
    String r;
    String s;
    private int t;
    private final String u = d.a.j;
    private final String v = TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID;
    private final String w = "ch_info";
    private final String x = "wf";
    private final String y = "np";
    private final String z = "hb_size";
    private final String A = "last_wf";
    private final String B = "co";
    private final String C = d.a.T;
    private final String D = "debug";

    @Override
    protected final int a() {
        return 1;
    }

    @Override
    protected final void a(AdError adError) {
    }

    @Override
    protected final boolean a(int i) {
        return false;
    }

    @Override
    protected final void b(AdError adError) {
    }

    @Override
    protected final String h() {
        return null;
    }

    @Override
    protected final Context i() {
        return null;
    }

    @Override
    protected final String j() {
        return null;
    }

    @Override
    protected final String k() {
        return null;
    }

    @Override
    protected final Map<String, Object> l() {
        return null;
    }

    @Override
    protected final int m() {
        return 6;
    }

    public a(String str, String str2, String str3, List<JSONObject> list, int i) {
        this.t = 0;
        this.d = str3;
        this.g = str;
        this.h = str2;
        this.t = i;
        JSONArray jSONArray = new JSONArray();
        Iterator<JSONObject> it = list.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next());
        }
        this.e = c.a(jSONArray.toString().getBytes());
        d dVarA = e.a(m.a().f()).a(str2);
        if (dVarA != null) {
            this.k = dVarA.P();
            this.l = dVarA.af();
        }
    }

    private void a(String str, String str2, String str3) {
        if (str != null) {
            this.f = c.a(str.getBytes());
        }
        if (!TextUtils.isEmpty(str2) && !TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, str2)) {
            this.i = c.a(str2.getBytes());
        }
        if (TextUtils.isEmpty(str3) || TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, str3)) {
            return;
        }
        this.j = c.a(str3.getBytes());
    }

    public final void a(b bVar) {
        if (bVar.a != null) {
            this.f = c.a(bVar.a.getBytes());
        }
        this.p = bVar.f;
        if (!TextUtils.isEmpty(bVar.b) && !TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, bVar.b)) {
            this.i = c.a(bVar.b.getBytes());
        }
        if (!TextUtils.isEmpty(bVar.c) && !TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, bVar.c)) {
            this.j = c.a(bVar.c.getBytes());
        }
        if (!TextUtils.isEmpty(bVar.d) && !TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, bVar.d)) {
            this.q = c.a(bVar.d.getBytes());
        }
        if (!TextUtils.isEmpty(bVar.e) && !TextUtils.equals(HttpUrl.PATH_SEGMENT_ENCODE_SET_URI, bVar.e)) {
            this.r = c.a(bVar.e.getBytes());
        }
        this.s = "";
        if (TextUtils.isEmpty(bVar.g)) {
            return;
        }
        this.s = c.a(bVar.g.getBytes());
    }

    private void d(int i) {
        this.p = i;
    }

    @Override
    protected final String b() {
        return this.g;
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        if (this.t == 0) {
            map.put("Accept-Encoding", "gzip");
        }
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final byte[] d() {
        return g().getBytes();
    }

    @Override
    protected final JSONObject e() {
        d dVarB;
        JSONObject jSONObjectAx;
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", m.a().o());
            jSONObjectE.put("pl_id", this.h);
            jSONObjectE.put("session_id", m.a().g(this.h));
            jSONObjectE.put("t_g_id", this.k);
            jSONObjectE.put("gro_id", this.l);
            String strX = m.a().x();
            if (!TextUtils.isEmpty(strX)) {
                jSONObjectE.put("sy_id", strX);
            }
            String strY = m.a().y();
            if (!TextUtils.isEmpty(strY)) {
                jSONObjectE.put("bk_id", strY);
            } else {
                m.a().j(m.a().w());
                jSONObjectE.put("bk_id", m.a().w());
            }
            if (m.a().b() != null) {
                jSONObjectE.put("deny", com.tkay.core.common.l.d.o(m.a().f()));
            }
            if (this.t == 0) {
                jSONObjectE.put("misk_spt", p.a().c());
                p.a();
                jSONObjectE.put("misk_pt_det", p.b());
            }
            jSONObjectE.put(com.tkay.core.common.h.c.ap, n.a().c());
            JSONObject jSONObjectA = com.tkay.core.common.h.c.a(this.h);
            if (jSONObjectA != null) {
                jSONObjectE.put("customs", jSONObjectA);
            }
            com.tkay.core.common.h.c.a(jSONObjectE);
            e eVarA = e.a(m.a().f());
            String str = this.h;
            if (jSONObjectE != null && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str) && (dVarB = eVarA.b(str)) != null && (jSONObjectAx = dVarB.ax()) != null) {
                jSONObjectE.put("p_c", jSONObjectAx);
            }
        } catch (Exception unused) {
        }
        return jSONObjectE;
    }

    @Override
    protected final JSONObject f() {
        JSONObject jSONObjectF = super.f();
        try {
            if (m.a().b() != null) {
                jSONObjectF.put("btts", com.tkay.core.common.l.d.g());
            }
        } catch (JSONException unused) {
        }
        return jSONObjectF;
    }

    @Override
    protected final String g() {
        HashMap map = new HashMap();
        String strA = c.a(e().toString());
        String strA2 = c.a(f().toString());
        map.put("p", strA);
        map.put(com.tkay.core.common.h.c.X, strA2);
        map.put(d.a.j, this.e);
        map.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
        int i = this.p;
        if (i > 0) {
            map.put("hb_size", Integer.valueOf(i));
        }
        if (this.t == 0) {
            if (!TextUtils.isEmpty(this.f)) {
                map.put("ch_info", this.f);
            }
            if (!TextUtils.isEmpty(this.i)) {
                map.put("wf", this.i);
            }
            if (!TextUtils.isEmpty(this.j)) {
                map.put("np", this.j);
            }
            if (!TextUtils.isEmpty(this.q)) {
                map.put("last_wf", this.q);
            }
            if (!TextUtils.isEmpty(this.r)) {
                map.put("co", this.r);
            }
            map.put(d.a.T, this.s);
            if (m.a().k() != null) {
                map.put(c, c.a(m.a().k().toString()));
            }
            if (m.a().z() && m.a().t()) {
                map.put("debug", 1);
            }
        }
        Set<String> setKeySet = map.keySet();
        JSONObject jSONObject = new JSONObject();
        try {
            for (String str : setKeySet) {
                jSONObject.put(str, map.get(str));
            }
            return jSONObject.toString();
        } catch (Exception unused) {
            return null;
        } catch (OutOfMemoryError unused2) {
            System.gc();
            return null;
        }
    }

    @Override
    protected final Object a(String str) {
        try {
            return new JSONObject(str);
        } catch (Exception unused) {
            return null;
        }
    }
}
