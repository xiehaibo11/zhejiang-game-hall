package com.kwad.sdk.core.request.model;

import android.content.Context;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.InstalledAppInfoManager;
import com.kwad.sdk.utils.ae;
import com.kwad.sdk.utils.ap;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.k;
import com.kwad.sdk.utils.y;
import org.json.JSONArray;

public class b extends com.kwad.sdk.core.response.a.a {
    private static boolean atK;
    private static JSONArray atL;
    public String Qb;
    public String Uo;
    public int Up;
    public int Ur;
    public String Us;
    public int Uu;
    public int Uv;
    public String amD;
    public String amE;
    public String atM;
    public String atN;
    public String atO;
    public String atP;
    public String atQ;
    public String atR;
    public int atS;
    public int atT;
    public String atU;
    public String atV;
    public String atW;
    public int atX;
    public String atY;
    public String atZ;
    public String aua;
    public JSONArray aub;
    public String auc;
    public String aue;
    public String auf;
    public String aug;
    public String aui;
    public String auj;
    public int aud = 0;
    public long auh = 0;

    public static b Ct() {
        b bVar = new b();
        bVar.amE = au.getOaid();
        bVar.atV = au.getDeviceId();
        bVar.atY = be.JJ();
        bVar.Up = 1;
        bVar.Ur = be.JV();
        bVar.atR = be.getOsVersion();
        bVar.aua = y.Iz();
        com.kwad.sdk.components.f fVar = (com.kwad.sdk.components.f) com.kwad.sdk.components.c.f(com.kwad.sdk.components.f.class);
        if (fVar != null) {
            bVar.atZ = fVar.nQ();
        }
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        if (eVar != null) {
            bVar.amD = au.cu(eVar.getContext());
        }
        return bVar;
    }

    private static synchronized JSONArray bf(Context context) {
        if (!atK) {
            atK = true;
            InstalledAppInfoManager.a(context, new com.kwad.sdk.g.a<JSONArray>() {
                private static void g(JSONArray jSONArray) {
                    JSONArray unused = b.atL = jSONArray;
                }

                @Override
                public final void accept(JSONArray jSONArray) {
                    g(jSONArray);
                }
            });
        }
        JSONArray jSONArray = atL;
        if (jSONArray == null) {
            return null;
        }
        atL = null;
        return jSONArray;
    }

    public static b g(boolean z, int i) {
        b bVar = new b();
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        Context context = eVar.getContext();
        bVar.amD = au.cu(context);
        bVar.atM = au.cx(context);
        bVar.atN = au.cy(context);
        bVar.atO = be.dc(context);
        bVar.amE = au.getOaid();
        bVar.atY = be.JJ();
        bVar.Uo = be.JL();
        bVar.Up = 1;
        bVar.Ur = be.JV();
        bVar.atR = be.getOsVersion();
        bVar.Us = k.getLanguage();
        bVar.Uv = k.getScreenHeight(context);
        bVar.Uu = k.getScreenWidth(context);
        bVar.atS = k.bS(context);
        bVar.atT = k.bT(context);
        bVar.atU = au.cv(context);
        if (z) {
            bVar.aub = bf(context);
        }
        bVar.atV = au.getDeviceId();
        bVar.auh = be.JK();
        bVar.atW = be.JS();
        bVar.aua = y.Iz();
        com.kwad.sdk.components.f fVar = (com.kwad.sdk.components.f) com.kwad.sdk.components.c.f(com.kwad.sdk.components.f.class);
        if (fVar != null) {
            bVar.atZ = fVar.nQ();
        }
        bVar.atX = be.JT();
        StringBuilder sb = new StringBuilder("DeviceInfo i=");
        sb.append(eVar.getAppId());
        sb.append(",n=");
        sb.append(eVar.getAppName());
        sb.append(",external:");
        sb.append(eVar.getIsExternal());
        sb.append(",v1:");
        sb.append(eVar.getApiVersion());
        sb.append(",v2:3.3.42");
        sb.append(",d:");
        sb.append(bVar.atV);
        sb.append(",dh:");
        String str = bVar.atV;
        sb.append(str != null ? Integer.valueOf(str.hashCode()) : "");
        sb.append(",o:");
        sb.append(bVar.amE);
        sb.append(",b:471");
        sb.append(",p:");
        sb.append(ap.isInMainProcess(context));
        sb.append(",dy:");
        sb.append(com.kwad.framework.a.a.aae);
        com.kwad.sdk.core.e.c.cW(sb.toString());
        bVar.auc = be.JU();
        bVar.aud = i;
        if (xB()) {
            bVar.aue = com.kwad.sdk.b.b.yB().getVersion(context, "com.smile.gifmaker");
            bVar.auf = com.kwad.sdk.b.b.yB().getVersion(context, "com.kuaishou.nebula");
            bVar.aug = com.kwad.sdk.b.b.yB().getVersion(context, "com.tencent.mm");
        }
        bVar.Qb = be.JQ();
        bVar.atQ = ae.ch(context);
        bVar.aui = be.JZ();
        bVar.auj = be.fP("/data/data");
        return bVar;
    }

    private static boolean xB() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xB();
    }
}
