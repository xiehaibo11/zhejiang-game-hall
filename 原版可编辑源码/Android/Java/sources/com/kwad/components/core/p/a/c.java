package com.kwad.components.core.p.a;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.media.AudioManager;
import android.os.Build;
import com.kwad.sdk.k.a.e;
import com.kwad.sdk.k.a.f;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.bq;
import com.kwad.sdk.utils.n;
import com.kwad.sdk.utils.t;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public final class c implements com.kwad.sdk.core.b {
    private int PQ;
    private String PR;
    private int PS;
    private Long PT;
    private Long PU;
    private Long PV;
    private Long PW;
    private String PX;
    private String PY;
    private long Qa;
    private String Qb;
    private String Qc;
    private long Qd;
    private String Qf;
    private String Qg;
    private boolean Qh;
    private List<a> Qj;
    private f Qk;
    private com.kwad.sdk.k.a.d Ql;
    private com.kwad.sdk.k.a.b Qm;
    private List<e> Qn;
    private List<bq.a> PZ = new ArrayList();
    private int Qe = -1;
    private float screenBrightness = -1.0f;
    private int Qi = -1;

    public static class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int Qo = -1;
        public int Qp = -1;
        public int Qq = -1;
        public int streamType;

        private a(int i) {
            this.streamType = i;
        }

        private static int aD(int i) {
            if (i != 0) {
                if (i == 1) {
                    return 1;
                }
                if (i == 2) {
                    return 2;
                }
                if (i == 3) {
                    return 3;
                }
                if (i == 4) {
                    return 4;
                }
                if (i == 5) {
                    return 5;
                }
            }
            return 0;
        }

        public static List<a> ak(Context context) {
            ArrayList arrayList = new ArrayList();
            if (context == null || com.kwad.sdk.core.config.d.R(256L)) {
                return arrayList;
            }
            try {
                AudioManager audioManager = (AudioManager) context.getSystemService("audio");
                if (audioManager == null) {
                    return arrayList;
                }
                for (int i = 0; i <= 5; i++) {
                    a aVar = new a(i);
                    int iAD = aD(i);
                    aVar.Qq = audioManager.getStreamVolume(iAD);
                    aVar.Qo = audioManager.getStreamMaxVolume(iAD);
                    if (Build.VERSION.SDK_INT >= 28) {
                        aVar.Qp = audioManager.getStreamMinVolume(iAD);
                    }
                    arrayList.add(aVar);
                }
            } catch (Exception unused) {
            }
            return arrayList;
        }
    }

    private void aj(Context context) {
        if (com.kwad.sdk.core.config.d.R(512L)) {
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.ACTION_POWER_CONNECTED");
        intentFilter.addAction("android.intent.action.ACTION_POWER_DISCONNECTED");
        intentFilter.addAction("android.intent.action.BATTERY_CHANGED");
        Intent intentRegisterReceiver = context.registerReceiver(null, intentFilter);
        if (intentRegisterReceiver != null) {
            int intExtra = intentRegisterReceiver.getIntExtra("status", -1);
            this.Qh = intExtra == 2 || intExtra == 5;
            int intExtra2 = intentRegisterReceiver.getIntExtra("plugged", -1);
            if (intExtra2 == 2) {
                this.Qi = 1;
                return;
            }
            if (intExtra2 == 1) {
                this.Qi = 2;
            } else if (intExtra2 == 4) {
                this.Qi = 3;
            } else if (intExtra2 == 0) {
                this.Qi = 0;
            }
        }
    }

    private static Context getContext() {
        return ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
    }

    public static c pK() {
        c cVar = new c();
        cVar.PQ = be.JI();
        cVar.PR = AbiUtil.bD(getContext());
        cVar.PS = be.cZ(getContext());
        cVar.PT = Long.valueOf(be.da(getContext()));
        cVar.PU = Long.valueOf(be.cY(getContext()));
        cVar.PV = Long.valueOf(be.JG());
        cVar.PW = Long.valueOf(be.JH());
        cVar.PX = au.cz(getContext());
        cVar.PY = au.cA(getContext());
        cVar.PZ = au.m(getContext(), 15);
        cVar.Qa = be.JM();
        cVar.Qd = be.JN();
        cVar.Qg = be.JO();
        cVar.Qf = be.JP();
        cVar.Qb = be.JQ();
        cVar.Qc = be.JR();
        Context context = getContext();
        if (context != null) {
            cVar.Qe = be.dh(context);
            cVar.Qj = a.ak(context);
            cVar.aj(context);
        }
        cVar.Ql = n.HV();
        cVar.Qm = au.Hl();
        cVar.Qn = au.Jm();
        cVar.Qk = au.Hm();
        return cVar;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "cpuCount", this.PQ);
        t.putValue(jSONObject, "cpuAbi", this.PR);
        t.putValue(jSONObject, "batteryPercent", this.PS);
        t.putValue(jSONObject, "totalMemorySize", this.PT.longValue());
        t.putValue(jSONObject, "availableMemorySize", this.PU.longValue());
        t.putValue(jSONObject, "totalDiskSize", this.PV.longValue());
        t.putValue(jSONObject, "availableDiskSize", this.PW.longValue());
        t.putValue(jSONObject, "imsi", this.PX);
        t.putValue(jSONObject, "iccid", this.PY);
        t.putValue(jSONObject, "wifiList", this.PZ);
        t.putValue(jSONObject, "bootTime", this.Qa);
        t.putValue(jSONObject, "romName", this.Qb);
        t.putValue(jSONObject, "romVersion", this.Qc);
        t.putValue(jSONObject, "romBuildTimestamp", this.Qd);
        t.putValue(jSONObject, "ringerMode", this.Qe);
        t.putValue(jSONObject, "audioStreamInfo", this.Qj);
        t.putValue(jSONObject, "baseBandVersion", this.Qf);
        t.putValue(jSONObject, "fingerPrint", this.Qg);
        t.putValue(jSONObject, "screenBrightness", this.screenBrightness);
        t.putValue(jSONObject, "isCharging", this.Qh);
        t.putValue(jSONObject, "chargeType", this.Qi);
        f fVar = this.Qk;
        if (fVar != null) {
            t.a(jSONObject, "simCardInfo", fVar);
        }
        com.kwad.sdk.k.a.d dVar = this.Ql;
        if (dVar != null) {
            t.a(jSONObject, "environmentInfo", dVar);
        }
        com.kwad.sdk.k.a.b bVar = this.Qm;
        if (bVar != null) {
            t.a(jSONObject, "baseStationInfo", bVar);
        }
        List<e> list = this.Qn;
        if (list != null) {
            t.putValue(jSONObject, "sensorEventInfoList", list);
        }
        return jSONObject;
    }
}
