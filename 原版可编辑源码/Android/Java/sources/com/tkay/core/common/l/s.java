package com.tkay.core.common.l;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.ad;
import com.tkay.core.common.f.aj;
import java.util.Map;
import org.json.JSONObject;

public final class s {
    public static com.tkay.core.common.f.d a(String str, String str2, String str3, com.tkay.core.c.d dVar, String str4, int i, int i2, int i3, Map<String, Object> map) {
        com.tkay.core.common.f.d dVar2 = new com.tkay.core.common.f.d();
        dVar2.x(str2);
        dVar2.y(str);
        dVar2.p(str3);
        dVar2.m(str4);
        dVar2.s(i);
        dVar2.t(i2);
        dVar2.r = 0;
        dVar2.q = 2;
        dVar2.s = 0;
        a(dVar2, dVar);
        dVar2.R();
        dVar2.C(com.tkay.core.common.b.m.a().i());
        dVar2.D(i3);
        a(map, dVar2);
        return dVar2;
    }

    public static void a(Map<String, Object> map, com.tkay.core.common.f.d dVar) {
        if (map != null) {
            Object obj = map.get(TYAdConst.KEY.CP_PLACEMENT_ID);
            if (obj != null) {
                dVar.u(obj.toString());
            }
            Object obj2 = map.get(TYAdConst.KEY.CP_LOAD_MODE);
            if (obj2 instanceof Integer) {
                dVar.B(Integer.parseInt(obj2.toString()));
            }
        }
    }

    public static com.tkay.core.common.f.d a(TYBaseAdAdapter tYBaseAdAdapter, com.tkay.core.common.f.d dVar, aj ajVar) {
        tYBaseAdAdapter.setUnitGroupInfo(ajVar);
        tYBaseAdAdapter.setRefresh(dVar.F() == 1);
        try {
            dVar.u = tYBaseAdAdapter.getNetworkSDKVersion();
        } catch (Throwable unused) {
        }
        if (TextUtils.isEmpty(dVar.T())) {
            dVar.v(tYBaseAdAdapter.getNetworkName());
        }
        dVar.e(tYBaseAdAdapter.getClass().getName());
        tYBaseAdAdapter.setTrackingInfo(dVar);
        return dVar;
    }

    public static void a(com.tkay.core.common.f.d dVar, aj ajVar, int i, boolean z) {
        com.tkay.core.common.f.l lVarM;
        com.tkay.core.common.f.r rVarE;
        ad.a aVarA = z ? com.tkay.core.a.a.a(com.tkay.core.common.b.m.a().f()).a(dVar.W(), ajVar.t()) : null;
        dVar.c(ajVar.l());
        dVar.u(ajVar.c());
        dVar.l(ajVar.t());
        dVar.l(ajVar.C());
        dVar.m(ajVar.D());
        dVar.f(ajVar.T());
        dVar.o(i);
        dVar.n(ajVar.g());
        dVar.q(aVarA != null ? aVarA.e : 0);
        dVar.r(aVarA != null ? aVarA.d : 0);
        if (ajVar.L()) {
            if (ajVar.Z()) {
                com.tkay.core.common.f.l lVarM2 = ajVar.M();
                if (lVarM2 != null) {
                    dVar.d(lVarM2.o);
                    dVar.a(lVarM2.o);
                }
            } else {
                dVar.d(ajVar.x());
                dVar.a(ajVar.af());
            }
        } else {
            dVar.d(0.0d);
            dVar.a(0.0d);
        }
        if (ajVar.j()) {
            if (ajVar.U() != 2) {
                if (ajVar.Z()) {
                    com.tkay.core.common.f.l lVarM3 = ajVar.M();
                    if (lVarM3 != null) {
                        dVar.b(lVarM3.o * dVar.g());
                        dVar.i(lVarM3.p);
                    }
                } else {
                    dVar.b(ajVar.x() * dVar.g());
                    dVar.i("exact");
                }
            }
        } else {
            dVar.b(ajVar.I());
            String strF = ajVar.F();
            if (TextUtils.isEmpty(strF)) {
                strF = "publisher_defined";
            }
            dVar.i(strF);
        }
        dVar.n(ajVar.i());
        dVar.f(ajVar.y());
        dVar.ao = ajVar.u();
        dVar.ap = ajVar.v();
        dVar.aq = ajVar.w();
        dVar.k(ajVar.E());
        dVar.e(ajVar.U());
        try {
            JSONObject jSONObject = new JSONObject(ajVar.g());
            JSONObject jSONObject2 = new JSONObject();
            if (35 == ajVar.c()) {
                String strOptString = jSONObject.optString("my_oid");
                com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(dVar.W());
                if (dVarA != null && (rVarE = dVarA.e(strOptString)) != null) {
                    jSONObject2.put("o_id", strOptString);
                    jSONObject2.put("c_id", rVarE.q());
                }
            }
            if ("0".equals(dVar.Y()) && (3 == ajVar.l() || 7 == ajVar.l())) {
                String strOptString2 = jSONObject.optString(MBridgeConstans.PROPERTIES_LAYOUT_TYPE);
                if (TextUtils.isEmpty(strOptString2) || strOptString2.equals("0")) {
                    strOptString2 = "2";
                }
                jSONObject2.put("tpl_type", strOptString2);
            }
            if (28 == ajVar.c() && (lVarM = ajVar.M()) != null) {
                jSONObject2.put("origin_price", lVarM.originPrice);
            }
            dVar.q(jSONObject2.toString());
        } catch (Throwable unused) {
        }
        com.tkay.core.common.f.l lVarM4 = ajVar.M();
        dVar.c(lVarM4 != null ? lVarM4.g : "");
        dVar.w(ajVar.X());
        dVar.v(ajVar.d());
    }

    public static void a(com.tkay.core.common.f.d dVar, com.tkay.core.c.d dVar2) {
        if (dVar == null || dVar2 == null) {
            return;
        }
        if (dVar2.Y() == Integer.parseInt("1")) {
            dVar.o("1");
        } else {
            dVar.o("0");
        }
        dVar.E(dVar2.P());
        dVar.w(dVar2.V());
        dVar.v(dVar2.af());
        dVar.z(String.valueOf(dVar2.Y()));
        dVar.j(dVar2.L());
        dVar.k(dVar2.K());
        dVar.c(dVar2.y());
        dVar.d(dVar2.z());
        dVar.b(dVar2.J());
        dVar.a(dVar2.M());
        dVar.c(dVar2.N());
        dVar.a(dVar2.l());
        dVar.b(dVar2.m());
        dVar.t(dVar2.d());
        JSONObject jSONObjectAx = dVar2.ax();
        if (jSONObjectAx != null) {
            dVar.a(jSONObjectAx);
        }
    }

    public static void a(Context context, com.tkay.core.common.f.d dVar) {
        ad adVar;
        int i;
        int i2;
        long jCurrentTimeMillis = System.currentTimeMillis();
        Map<String, ad> mapA = com.tkay.core.a.a.a(context).a(Integer.parseInt(dVar.Y()));
        if (mapA != null) {
            i = 0;
            i2 = 0;
            for (ad adVar2 : mapA.values()) {
                i += adVar2.c;
                i2 += adVar2.d;
            }
            adVar = mapA.get(dVar.W());
        } else {
            adVar = null;
            i = 0;
            i2 = 0;
        }
        dVar.g(i + 1);
        dVar.h(i2 + 1);
        dVar.i((adVar != null ? adVar.c : 0) + 1);
        dVar.j((adVar != null ? adVar.d : 0) + 1);
        new StringBuilder("Check cap waite time:").append(System.currentTimeMillis() - jCurrentTimeMillis);
    }
}
