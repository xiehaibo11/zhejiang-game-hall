package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.i;
import com.tkay.core.common.n;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class d extends com.tkay.core.common.h.a {
    String a;
    String b;
    String c;
    int d;
    int e;
    int f;
    int g;
    String[] h;
    int i;
    int j;
    String k;
    String l = "OnlineOfferLoader";

    @Override
    protected final int a() {
        return 1;
    }

    @Override
    protected final Object a(String str) {
        return str;
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
        return 2;
    }

    public d(i iVar, int i, int i2, String[] strArr, String str) {
        this.a = iVar.d;
        this.b = iVar.b;
        this.c = iVar.c;
        this.i = iVar.e;
        this.f = i;
        this.g = i2;
        this.h = strArr;
        this.d = iVar.h;
        this.e = iVar.i;
        this.j = iVar.j;
        this.k = str;
    }

    @Override
    protected final String b() {
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.h();
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final byte[] d() {
        try {
            return g().getBytes("utf-8");
        } catch (Exception unused) {
            return g().getBytes();
        }
    }

    @Override
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", m.a().o());
            jSONObjectE.put("pl_id", this.b);
            jSONObjectE.put("session_id", m.a().g(this.b));
            jSONObjectE.put("t_g_id", this.d);
            jSONObjectE.put("gro_id", this.e);
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
            jSONObjectE.put(com.tkay.core.common.h.c.ap, n.a().c());
            JSONObject jSONObjectA = com.tkay.core.common.h.c.a(this.b);
            if (jSONObjectA != null) {
                jSONObjectE.put("customs", jSONObjectA);
            }
            com.tkay.core.common.h.c.a(jSONObjectE);
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

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00e1  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final String g() {
        HashMap map = new HashMap();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        String strA2 = com.tkay.core.common.l.c.a(f().toString());
        map.put("p", strA);
        map.put(com.tkay.core.common.h.c.X, strA2);
        map.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.a);
        map.put("ad_source_id", Integer.valueOf(Integer.parseInt(this.c)));
        map.put("ad_num", Integer.valueOf(this.i));
        String[] strArr = this.h;
        byte b = 0;
        if (strArr != null && strArr.length > 0) {
            JSONArray jSONArray = new JSONArray();
            for (String str : this.h) {
                jSONArray.put(str);
            }
            map.put("exclude_offers", jSONArray);
        }
        if (m.a().k() != null) {
            map.put(com.tkay.core.b.a.a.c, com.tkay.core.common.l.c.a(m.a().k().toString()));
        }
        int i = this.f;
        if (i > 0 && this.g > 0) {
            map.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_WIDTH, Integer.valueOf(i));
            map.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_HEIGHT, Integer.valueOf(this.g));
        }
        JSONObject jSONObject = new JSONObject((Map<String, Object>) map);
        try {
            String strValueOf = String.valueOf(this.j);
            switch (strValueOf.hashCode()) {
                case 49:
                    b = strValueOf.equals("1") ? (byte) 3 : (byte) -1;
                    break;
                case 50:
                    if (strValueOf.equals("2")) {
                        break;
                    }
                    break;
                case 51:
                    if (strValueOf.equals("3")) {
                        b = 2;
                        break;
                    }
                    break;
                case 52:
                    if (strValueOf.equals("4")) {
                        b = 1;
                        break;
                    }
                    break;
                default:
                    break;
            }
            if (b == 0 || b == 1 || b == 2 || b == 3) {
                jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.ADP_ACCEPT_TYPE, new JSONArray(TYAdConst.AD_SUPPORT_TYPE_ARRAY));
            }
        } catch (Throwable unused) {
        }
        return jSONObject.toString();
    }

    @Override
    protected final void a(int i, Object obj) {
        if (obj == null) {
            a(i, com.tkay.core.common.h.i.l, "Return Empty Ad.", ErrorCode.getErrorCode(ErrorCode.noADError, "", ""));
            return;
        }
        try {
            if (TextUtils.isEmpty(new JSONObject(obj.toString()).optString("data"))) {
                a(i, com.tkay.core.common.h.i.m, obj.toString(), ErrorCode.getErrorCode(ErrorCode.noADError, "", obj.toString()));
            } else {
                super.a(i, obj);
            }
        } catch (Throwable th) {
            a(i, com.tkay.core.common.h.i.n, obj != null ? obj.toString() : th.getMessage(), ErrorCode.getErrorCode(ErrorCode.noADError, "", obj != null ? obj.toString() : "Online Api Service Error."));
        }
    }
}
