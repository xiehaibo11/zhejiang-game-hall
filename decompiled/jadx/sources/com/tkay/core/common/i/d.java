package com.tkay.core.common.i;

import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h.k;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class d implements com.tkay.core.common.g.c {
    @Override // com.tkay.core.common.g.c
    public final void a(final long j, final long j2, final TYBaseAdAdapter tYBaseAdAdapter, final com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.i.d.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    if (tYBaseAdAdapter.getUnitGroupInfo().R() != 1) {
                        return;
                    }
                    long jElapsedRealtime = SystemClock.elapsedRealtime();
                    if (j2 != 0 && jElapsedRealtime >= j2) {
                        jElapsedRealtime = j2;
                    }
                    long j3 = jElapsedRealtime;
                    final String strW = dVar.W();
                    com.tkay.core.c.d dVarA = e.a(m.a().f()).a(strW);
                    JSONObject jSONObject = new JSONObject(a.a(dVarA.v()));
                    int iOptInt = jSONObject.optInt("a");
                    b bVarA = a.a(jSONObject.optString("b"), d.b(j, j3, dVar, tYBaseAdAdapter));
                    if (TextUtils.isEmpty(bVarA.a())) {
                        com.tkay.core.common.k.c.a(dVar, dVarA, "", bVarA.b());
                    } else {
                        new c(m.a().f(), iOptInt, bVarA.a(), dVar, dVarA).a(0, new k() { // from class: com.tkay.core.common.i.d.1.1
                            @Override // com.tkay.core.common.h.k
                            public final void onLoadCanceled(int i) {
                            }

                            @Override // com.tkay.core.common.h.k
                            public final void onLoadStart(int i) {
                            }

                            @Override // com.tkay.core.common.h.k
                            public final void onLoadFinish(int i, Object obj) {
                                if (m.a().z()) {
                                    Log.i("tkay_s2s_reward", "S2S reward succeeded. PlacementId: " + strW);
                                }
                            }

                            @Override // com.tkay.core.common.h.k
                            public final void onLoadError(int i, String str, AdError adError) {
                                Log.e("tkay_s2s_reward", "S2S reward error! PlacementId: " + strW + ", " + adError.printStackTrace());
                            }
                        });
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(long j, long j2, com.tkay.core.common.f.d dVar, TYBaseAdAdapter tYBaseAdAdapter) {
        Map<String, Object> networkInfoMap;
        try {
            networkInfoMap = tYBaseAdAdapter.getNetworkInfoMap();
        } catch (Throwable unused) {
        }
        String string = networkInfoMap != null ? new JSONObject(networkInfoMap).toString() : "";
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("pl_id", dVar.W());
            jSONObject.put("req_id", dVar.X());
            jSONObject.put("show_id", dVar.l());
            jSONObject.put("unit_id", dVar.x());
            jSONObject.put("nw_firm_id", dVar.H());
            jSONObject.put("scenario_id", dVar.C);
            jSONObject.put("rv_start_ts", j);
            jSONObject.put("r_callback_ts", j2);
            jSONObject.put("rv_play_dur", j2 - j);
            jSONObject.put("tp_bid_id", dVar.e());
            jSONObject.put("extra_info", string);
            jSONObject.put("user_id", tYBaseAdAdapter.getUserId());
            jSONObject.put("extra_data", tYBaseAdAdapter.getUserCustomData());
            jSONObject.put("curr_ts", System.currentTimeMillis());
            jSONObject.put(d.a.i, i.a(dVar, tYBaseAdAdapter).toString());
            return jSONObject.toString();
        } catch (Throwable unused2) {
            return "";
        }
    }
}
