package com.kwad.sdk.core.report;

import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.scene.URLPackage;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.service.ServiceProvider;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.util.UUID;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class r extends g {
    public String HR;
    public String HS;
    public long HU;
    public transient SceneImpl PN;
    public String Pp;
    public long Pv;
    public long Pw;
    public long Px;
    public long Qr;
    public String UP;
    public int UQ;
    public String Uj;
    public int Ul;
    public long Xf;
    public int adStyle;
    public long ant;
    public URLPackage arA;
    public String arB;
    public JSONArray arC;
    public JSONArray arD;
    public a arE;
    public int arF;
    public int arG;
    public int arH;
    public int arI;
    public String arJ;
    public int arK;
    public int arL;
    public String arM;
    public JSONObject arN;
    public JSONArray arO;
    public int arP;
    public int arQ;
    public int arR;
    public long arS;
    public JSONArray arT;
    public boolean arU;
    public String arV;
    public int arW;
    public int arX;
    public long arY;
    public int arZ;
    public long aro;
    public long arp;
    public JSONObject arq;
    public JSONObject arr;
    public long ars;
    public long art;
    public long aru;
    public long arv;
    public long arw;
    public long arx;
    public long ary;
    public int arz;
    public String asa;
    public long asb;
    public long asc;
    public long asd;
    public long ase;
    public String asf;
    public int asg;
    public JSONArray ash;
    public long asi;
    public long asj;
    public JSONArray ask;
    public String asl;
    public String asm;
    public String asn;
    public String aso;
    public String asp;
    public int asq;
    public String asr;
    public String ass;
    public int ast;
    public int asu;
    public long asv;
    public long asw;
    public String asx;
    public long blockDuration;
    public long clickTime;
    public int contentSourceType;
    public int contentType;
    public long creativeId;
    public long downloadDuration;
    public String entryPageSource;
    public int errorCode;
    public String errorMsg;
    public long llsid;
    public transient AdTemplate mAdTemplate;
    public int pageType;
    public long photoId;
    public long posId;
    public long position;
    public int realShowType;
    public String sdkVersion;
    public String sessionId;
    public long timestamp;
    public String trace;
    public URLPackage urlPackage;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public int asy;
        public int asz;

        public static a Cg() {
            a aVar = new a();
            aVar.asy = b.asy;
            aVar.asz = b.asz;
            return aVar;
        }
    }

    public static class b {
        public static int asy;
        public static int asz;
    }

    public r(long j) {
        this.adStyle = -1;
        this.contentType = 0;
        this.realShowType = 0;
        this.arx = -1L;
        this.arz = 0;
        this.arS = 0L;
        this.arW = 0;
        this.arX = -1;
        this.asq = 0;
        this.asu = BuildConfig.VERSION_CODE;
        this.sdkVersion = BuildConfig.VERSION_NAME;
        this.Uj = ServiceProvider.get(com.kwad.sdk.service.a.e.class) == null ? "" : ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
        this.Ul = 1;
        this.asx = "";
        this.arp = j;
    }

    public r(long j, AdTemplate adTemplate) {
        this.adStyle = -1;
        this.contentType = 0;
        this.realShowType = 0;
        this.arx = -1L;
        this.arz = 0;
        this.arS = 0L;
        this.arW = 0;
        this.arX = -1;
        this.asq = 0;
        this.asu = BuildConfig.VERSION_CODE;
        this.sdkVersion = BuildConfig.VERSION_NAME;
        this.Uj = ServiceProvider.get(com.kwad.sdk.service.a.e.class) == null ? "" : ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
        this.Ul = 1;
        this.asx = "";
        this.arp = j;
        this.mAdTemplate = adTemplate;
    }

    public r(long j, AdTemplate adTemplate, String str) {
        this.adStyle = -1;
        this.contentType = 0;
        this.realShowType = 0;
        this.arx = -1L;
        this.arz = 0;
        this.arS = 0L;
        this.arW = 0;
        this.arX = -1;
        this.asq = 0;
        this.asu = BuildConfig.VERSION_CODE;
        this.sdkVersion = BuildConfig.VERSION_NAME;
        this.Uj = ServiceProvider.get(com.kwad.sdk.service.a.e.class) == null ? "" : ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
        this.Ul = 1;
        this.asx = "";
        this.arp = j;
        this.mAdTemplate = adTemplate;
        this.UP = str;
    }

    public r(String str) {
        this(str, true);
    }

    public r(String str, boolean z) {
        this.adStyle = -1;
        this.contentType = 0;
        this.realShowType = 0;
        this.arx = -1L;
        this.arz = 0;
        this.arS = 0L;
        this.arW = 0;
        this.arX = -1;
        this.asq = 0;
        this.asu = BuildConfig.VERSION_CODE;
        this.sdkVersion = BuildConfig.VERSION_NAME;
        this.Uj = ServiceProvider.get(com.kwad.sdk.service.a.e.class) == null ? "" : ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
        this.Ul = 1;
        this.asx = "";
        if (!z) {
            this.asx = str;
            return;
        }
        try {
            parseJson(new JSONObject(str));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    public r(JSONObject jSONObject) {
        this.adStyle = -1;
        this.contentType = 0;
        this.realShowType = 0;
        this.arx = -1L;
        this.arz = 0;
        this.arS = 0L;
        this.arW = 0;
        this.arX = -1;
        this.asq = 0;
        this.asu = BuildConfig.VERSION_CODE;
        this.sdkVersion = BuildConfig.VERSION_NAME;
        this.Uj = ServiceProvider.get(com.kwad.sdk.service.a.e.class) == null ? "" : ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
        this.Ul = 1;
        this.asx = "";
        parseJson(jSONObject);
    }

    private void aL(AdTemplate adTemplate) {
        this.arG = 3;
        w wVar = (w) ServiceProvider.get(w.class);
        if (wVar != null) {
            this.arW = wVar.sC();
        }
        this.actionId = UUID.randomUUID().toString();
        this.timestamp = System.currentTimeMillis();
        this.sessionId = x.Cl();
        try {
            this.HU = x.Cm();
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        this.aro = x.Cn();
        SceneImpl sceneImpl = this.PN;
        if (sceneImpl != null) {
            this.posId = sceneImpl.getPosId();
            this.urlPackage = this.PN.getUrlPackage();
            this.adStyle = this.PN.getAdStyle();
        } else if (adTemplate != null && adTemplate.mAdScene != null) {
            sceneImpl = adTemplate.mAdScene;
            this.PN = sceneImpl;
            this.posId = sceneImpl.getPosId();
            this.urlPackage = this.PN.getUrlPackage();
            this.adStyle = this.PN.getAdStyle();
        }
        if (adTemplate != null) {
            this.position = adTemplate.getShowPosition() + 1;
            this.ars = adTemplate.getServerPosition() + 1;
            this.llsid = com.kwad.sdk.core.response.b.d.cd(adTemplate);
            String strCe = com.kwad.sdk.core.response.b.d.ce(adTemplate);
            if (!TextUtils.isEmpty(strCe)) {
                try {
                    this.arq = new JSONObject(strCe);
                } catch (Exception e2) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e2);
                }
            }
            String strCf = com.kwad.sdk.core.response.b.d.cf(adTemplate);
            if (!TextUtils.isEmpty(strCf)) {
                try {
                    this.arr = new JSONObject(strCf);
                } catch (Exception e3) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e3);
                }
            }
            this.posId = com.kwad.sdk.core.response.b.d.bZ(adTemplate);
            this.contentType = com.kwad.sdk.core.response.b.d.cc(adTemplate);
            this.realShowType = adTemplate.realShowType;
            this.photoId = com.kwad.sdk.core.response.b.d.cm(adTemplate);
            if (this.realShowType == 2) {
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
                this.creativeId = adInfoCg.adBaseInfo.creativeId;
                this.art = com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000;
                this.Qr = adInfoCg.advertiserInfo.userId;
            }
            this.arF = adTemplate.mMediaPlayerType;
            this.arH = adTemplate.mIsLeftSlipStatus;
            this.arI = adTemplate.mPhotoResponseType;
            if (adTemplate.mPageInfo != null) {
                this.pageType = adTemplate.mPageInfo.pageType;
            }
            this.contentSourceType = com.kwad.sdk.core.response.b.d.cn(adTemplate);
        }
        this.arE = a.Cg();
        if (this.PN == null && adTemplate != null) {
            this.PN = adTemplate.mAdScene;
        }
        SceneImpl sceneImpl2 = this.PN;
        if (sceneImpl2 != null) {
            this.posId = sceneImpl2.getPosId();
            this.urlPackage = this.PN.getUrlPackage();
        }
    }

    public final r Ce() {
        aL(this.mAdTemplate);
        return this;
    }

    public final void Cf() {
        com.kwad.sdk.service.a.h hVar = (com.kwad.sdk.service.a.h) ServiceProvider.get(com.kwad.sdk.service.a.h.class);
        this.arP = hVar.pM() ? 1 : 0;
        this.arQ = hVar.pN();
        this.arR = hVar.pO();
    }

    @Override
    public void afterParseJson(JSONObject jSONObject) {
        super.afterParseJson(jSONObject);
        if (jSONObject == null) {
            return;
        }
        this.arG = 3;
        this.adStyle = jSONObject.optInt("adStyle", -1);
        this.arL = jSONObject.optInt(com.tkay.expressad.foundation.d.l.d);
        this.arK = jSONObject.optInt(CallMraidJS.b);
        this.arS = jSONObject.optLong("timeSpend");
        this.asi = jSONObject.optLong("loadingDuration");
        this.asj = jSONObject.optLong("loadingDurationLimt");
        this.arX = jSONObject.optInt("playerTypeInfo", -1);
        if (jSONObject.has("actionId")) {
            this.actionId = jSONObject.optString("actionId");
        }
    }

    @Override
    public void afterToJson(JSONObject jSONObject) {
        super.afterToJson(jSONObject);
        com.kwad.sdk.utils.t.putValue(jSONObject, "actionId", this.actionId);
        int i = this.adStyle;
        if (i > 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", i);
        }
        int i2 = this.arL;
        if (i2 > 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.l.d, i2);
        }
        int i3 = this.arK;
        if (i3 != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, CallMraidJS.b, i3);
        }
        long j = this.arS;
        if (j > 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "timeSpend", j);
        }
        long j2 = this.asi;
        if (j2 > 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadingDuration", j2);
        }
        long j3 = this.asj;
        if (j3 > 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadingDurationLimt", j3);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "playerTypeInfo", this.arX);
    }
}
