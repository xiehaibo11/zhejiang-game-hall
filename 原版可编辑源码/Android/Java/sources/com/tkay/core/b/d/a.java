package com.tkay.core.b.d;

import com.tkay.core.c.d;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.l;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class a {
    static final String a = a.class.getSimpleName();

    public static void a(final String str, final d dVar, final String str2, final int i, final List<aj> list, final long j, final int i2, final int i3) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                String str3 = a.a;
                JSONArray jSONArray = new JSONArray();
                com.tkay.core.common.f.d dVar2 = new com.tkay.core.common.f.d();
                dVar2.x(str);
                dVar2.y(str2);
                StringBuilder sb = new StringBuilder();
                sb.append(dVar.Y());
                dVar2.z(sb.toString());
                dVar2.w(dVar.V());
                dVar2.t(i);
                dVar2.e(j);
                dVar2.f(System.currentTimeMillis());
                dVar2.E(dVar.P());
                dVar2.v(dVar.af());
                dVar2.D(i2);
                dVar2.q = i3;
                for (int i4 = 0; i4 < list.size(); i4++) {
                    aj ajVar = (aj) list.get(i4);
                    if (ajVar.l() != 7 && ajVar.j()) {
                        try {
                            int iO = ajVar.o();
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("sorttype", iO);
                            jSONObject.put("unit_id", ajVar.t());
                            jSONObject.put("bidresult", ajVar.O());
                            jSONObject.put("bidprice", ajVar.L() ? String.valueOf(ajVar.x()) : "0");
                            jSONObject.put(l.am, ajVar.L() ? String.valueOf(ajVar.af()) : "0");
                            jSONObject.put("nw_firm_id", String.valueOf(ajVar.c()));
                            jSONObject.put("tp_bid_id", ajVar.M() != null ? ajVar.M().g : null);
                            jSONObject.put("rl_bid_status", ajVar.N());
                            jSONObject.put("errormsg", ajVar.z());
                            jSONArray.put(jSONObject);
                        } catch (Exception unused) {
                        }
                    }
                }
                dVar2.s(jSONArray.toString());
                JSONObject jSONObjectAx = dVar.ax();
                if (jSONObjectAx != null) {
                    dVar2.a(jSONObjectAx);
                }
                com.tkay.core.common.k.a.a(m.a().f()).a(11, dVar2);
            }
        });
    }
}
