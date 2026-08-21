package com.kwad.sdk.core.report;

public class r extends com.kwad.sdk.core.report.g {
    public java.lang.String HR;
    public java.lang.String HS;
    public long HU;
    public transient com.kwad.sdk.internal.api.SceneImpl PN;
    public java.lang.String Pp;
    public long Pv;
    public long Pw;
    public long Px;
    public long Qr;
    public java.lang.String UP;
    public int UQ;
    public java.lang.String Uj;
    public int Ul;
    public long Xf;
    public int adStyle;
    public long ant;
    public com.kwad.sdk.core.scene.URLPackage arA;
    public java.lang.String arB;
    public org.json.JSONArray arC;
    public org.json.JSONArray arD;
    public com.kwad.sdk.core.report.r.a arE;
    public int arF;
    public int arG;
    public int arH;
    public int arI;
    public java.lang.String arJ;
    public int arK;
    public int arL;
    public java.lang.String arM;
    public org.json.JSONObject arN;
    public org.json.JSONArray arO;
    public int arP;
    public int arQ;
    public int arR;
    public long arS;
    public org.json.JSONArray arT;
    public boolean arU;
    public java.lang.String arV;
    public int arW;
    public int arX;
    public long arY;
    public int arZ;
    public long aro;
    public long arp;
    public org.json.JSONObject arq;
    public org.json.JSONObject arr;
    public long ars;
    public long art;
    public long aru;
    public long arv;
    public long arw;
    public long arx;
    public long ary;
    public int arz;
    public java.lang.String asa;
    public long asb;
    public long asc;
    public long asd;
    public long ase;
    public java.lang.String asf;
    public int asg;
    public org.json.JSONArray ash;
    public long asi;
    public long asj;
    public org.json.JSONArray ask;
    public java.lang.String asl;
    public java.lang.String asm;
    public java.lang.String asn;
    public java.lang.String aso;
    public java.lang.String asp;
    public int asq;
    public java.lang.String asr;
    public java.lang.String ass;
    public int ast;
    public int asu;
    public long asv;
    public long asw;
    public java.lang.String asx;
    public long blockDuration;
    public long clickTime;
    public int contentSourceType;
    public int contentType;
    public long creativeId;
    public long downloadDuration;
    public java.lang.String entryPageSource;
    public int errorCode;
    public java.lang.String errorMsg;
    public long llsid;
    public transient com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    public int pageType;
    public long photoId;
    public long posId;
    public long position;
    public int realShowType;
    public java.lang.String sdkVersion;
    public java.lang.String sessionId;
    public long timestamp;
    public java.lang.String trace;
    public com.kwad.sdk.core.scene.URLPackage urlPackage;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public int asy;
        public int asz;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.kwad.sdk.core.report.r.a Cg() {
                com.kwad.sdk.core.report.r$a r0 = new com.kwad.sdk.core.report.r$a
                r0.<init>()
                int r1 = com.kwad.sdk.core.report.r.b.asy
                r0.asy = r1
                int r1 = com.kwad.sdk.core.report.r.b.asz
                r0.asz = r1
                return r0
        }
    }

    public static class b {
        public static int asy;
        public static int asz;
    }

    public r(long r5) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.adStyle = r0
            r1 = 0
            r4.contentType = r1
            r4.realShowType = r1
            r2 = -1
            r4.arx = r2
            r4.arz = r1
            r2 = 0
            r4.arS = r2
            r4.arW = r1
            r4.arX = r0
            r4.asq = r1
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r4.asu = r0
            java.lang.String r0 = "3.3.42"
            r4.sdkVersion = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L30
            r0 = r1
            goto L3c
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
        L3c:
            r4.Uj = r0
            r0 = 1
            r4.Ul = r0
            r4.asx = r1
            r4.arp = r5
            return
    }

    public r(long r5, com.kwad.sdk.core.response.model.AdTemplate r7) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.adStyle = r0
            r1 = 0
            r4.contentType = r1
            r4.realShowType = r1
            r2 = -1
            r4.arx = r2
            r4.arz = r1
            r2 = 0
            r4.arS = r2
            r4.arW = r1
            r4.arX = r0
            r4.asq = r1
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r4.asu = r0
            java.lang.String r0 = "3.3.42"
            r4.sdkVersion = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L30
            r0 = r1
            goto L3c
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
        L3c:
            r4.Uj = r0
            r0 = 1
            r4.Ul = r0
            r4.asx = r1
            r4.arp = r5
            r4.mAdTemplate = r7
            return
    }

    public r(long r5, com.kwad.sdk.core.response.model.AdTemplate r7, java.lang.String r8) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.adStyle = r0
            r1 = 0
            r4.contentType = r1
            r4.realShowType = r1
            r2 = -1
            r4.arx = r2
            r4.arz = r1
            r2 = 0
            r4.arS = r2
            r4.arW = r1
            r4.arX = r0
            r4.asq = r1
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r4.asu = r0
            java.lang.String r0 = "3.3.42"
            r4.sdkVersion = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L30
            r0 = r1
            goto L3c
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
        L3c:
            r4.Uj = r0
            r0 = 1
            r4.Ul = r0
            r4.asx = r1
            r4.arp = r5
            r4.mAdTemplate = r7
            r4.UP = r8
            return
    }

    public r(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    public r(java.lang.String r5, boolean r6) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.adStyle = r0
            r1 = 0
            r4.contentType = r1
            r4.realShowType = r1
            r2 = -1
            r4.arx = r2
            r4.arz = r1
            r2 = 0
            r4.arS = r2
            r4.arW = r1
            r4.arX = r0
            r4.asq = r1
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r4.asu = r0
            java.lang.String r0 = "3.3.42"
            r4.sdkVersion = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L30
            r0 = r1
            goto L3c
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
        L3c:
            r4.Uj = r0
            r0 = 1
            r4.Ul = r0
            r4.asx = r1
            if (r6 == 0) goto L53
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4e
            r6.<init>(r5)     // Catch: org.json.JSONException -> L4e
            r4.parseJson(r6)     // Catch: org.json.JSONException -> L4e
            return
        L4e:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)
            return
        L53:
            r4.asx = r5
            return
    }

    public r(org.json.JSONObject r5) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.adStyle = r0
            r1 = 0
            r4.contentType = r1
            r4.realShowType = r1
            r2 = -1
            r4.arx = r2
            r4.arz = r1
            r2 = 0
            r4.arS = r2
            r4.arW = r1
            r4.arX = r0
            r4.asq = r1
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r4.asu = r0
            java.lang.String r0 = "3.3.42"
            r4.sdkVersion = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L30
            r0 = r1
            goto L3c
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
        L3c:
            r4.Uj = r0
            r0 = 1
            r4.Ul = r0
            r4.asx = r1
            r4.parseJson(r5)
            return
    }

    private void aL(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            r0 = 3
            r3.arG = r0
            java.lang.Class<com.kwad.sdk.core.report.w> r0 = com.kwad.sdk.core.report.w.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.core.report.w r0 = (com.kwad.sdk.core.report.w) r0
            if (r0 == 0) goto L13
            int r0 = r0.sC()
            r3.arW = r0
        L13:
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r3.actionId = r0
            long r0 = java.lang.System.currentTimeMillis()
            r3.timestamp = r0
            java.lang.String r0 = com.kwad.sdk.core.report.x.Cl()
            r3.sessionId = r0
            long r0 = com.kwad.sdk.core.report.x.Cm()     // Catch: java.lang.Exception -> L30
            r3.HU = r0     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L34:
            long r0 = com.kwad.sdk.core.report.x.Cn()
            r3.aro = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = r3.PN
            if (r0 == 0) goto L55
        L3e:
            long r0 = r0.getPosId()
            r3.posId = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = r3.PN
            com.kwad.sdk.core.scene.URLPackage r0 = r0.getUrlPackage()
            r3.urlPackage = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = r3.PN
            int r0 = r0.getAdStyle()
            r3.adStyle = r0
            goto L60
        L55:
            if (r4 == 0) goto L60
            com.kwad.sdk.internal.api.SceneImpl r0 = r4.mAdScene
            if (r0 == 0) goto L60
            com.kwad.sdk.internal.api.SceneImpl r0 = r4.mAdScene
            r3.PN = r0
            goto L3e
        L60:
            if (r4 == 0) goto Lf6
            int r0 = r4.getShowPosition()
            int r0 = r0 + 1
            long r0 = (long) r0
            r3.position = r0
            int r0 = r4.getServerPosition()
            int r0 = r0 + 1
            long r0 = (long) r0
            r3.ars = r0
            long r0 = com.kwad.sdk.core.response.b.d.cd(r4)
            r3.llsid = r0
            java.lang.String r0 = com.kwad.sdk.core.response.b.d.ce(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L90
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L8c
            r1.<init>(r0)     // Catch: java.lang.Exception -> L8c
            r3.arq = r1     // Catch: java.lang.Exception -> L8c
            goto L90
        L8c:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L90:
            java.lang.String r0 = com.kwad.sdk.core.response.b.d.cf(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto La6
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> La2
            r1.<init>(r0)     // Catch: java.lang.Exception -> La2
            r3.arr = r1     // Catch: java.lang.Exception -> La2
            goto La6
        La2:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        La6:
            long r0 = com.kwad.sdk.core.response.b.d.bZ(r4)
            r3.posId = r0
            int r0 = com.kwad.sdk.core.response.b.d.cc(r4)
            r3.contentType = r0
            int r0 = r4.realShowType
            r3.realShowType = r0
            long r0 = com.kwad.sdk.core.response.b.d.cm(r4)
            r3.photoId = r0
            int r0 = r3.realShowType
            r1 = 2
            if (r0 != r1) goto Lda
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r0.adBaseInfo
            long r1 = r1.creativeId
            r3.creativeId = r1
            int r1 = com.kwad.sdk.core.response.b.a.G(r0)
            int r1 = r1 * 1000
            long r1 = (long) r1
            r3.art = r1
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r0.advertiserInfo
            long r0 = r0.userId
            r3.Qr = r0
        Lda:
            int r0 = r4.mMediaPlayerType
            r3.arF = r0
            int r0 = r4.mIsLeftSlipStatus
            r3.arH = r0
            int r0 = r4.mPhotoResponseType
            r3.arI = r0
            com.kwad.sdk.core.response.model.PageInfo r0 = r4.mPageInfo
            if (r0 == 0) goto Lf0
            com.kwad.sdk.core.response.model.PageInfo r0 = r4.mPageInfo
            int r0 = r0.pageType
            r3.pageType = r0
        Lf0:
            int r0 = com.kwad.sdk.core.response.b.d.cn(r4)
            r3.contentSourceType = r0
        Lf6:
            com.kwad.sdk.core.report.r$a r0 = com.kwad.sdk.core.report.r.a.Cg()
            r3.arE = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = r3.PN
            if (r0 != 0) goto L106
            if (r4 == 0) goto L106
            com.kwad.sdk.internal.api.SceneImpl r4 = r4.mAdScene
            r3.PN = r4
        L106:
            com.kwad.sdk.internal.api.SceneImpl r4 = r3.PN
            if (r4 == 0) goto L118
            long r0 = r4.getPosId()
            r3.posId = r0
            com.kwad.sdk.internal.api.SceneImpl r4 = r3.PN
            com.kwad.sdk.core.scene.URLPackage r4 = r4.getUrlPackage()
            r3.urlPackage = r4
        L118:
            return
    }

    public final com.kwad.sdk.core.report.r Ce() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r1.aL(r0)
            return r1
    }

    public final void Cf() {
            r2 = this;
            java.lang.Class<com.kwad.sdk.service.a.h> r0 = com.kwad.sdk.service.a.h.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.h r0 = (com.kwad.sdk.service.a.h) r0
            boolean r1 = r0.pM()
            r2.arP = r1
            int r1 = r0.pN()
            r2.arQ = r1
            int r0 = r0.pO()
            r2.arR = r0
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r4) {
            r3 = this;
            super.afterParseJson(r4)
            if (r4 != 0) goto L6
            return
        L6:
            r0 = 3
            r3.arG = r0
            r0 = -1
            java.lang.String r1 = "adStyle"
            int r1 = r4.optInt(r1, r0)
            r3.adStyle = r1
            java.lang.String r1 = "num"
            int r1 = r4.optInt(r1)
            r3.arL = r1
            java.lang.String r1 = "state"
            int r1 = r4.optInt(r1)
            r3.arK = r1
            java.lang.String r1 = "timeSpend"
            long r1 = r4.optLong(r1)
            r3.arS = r1
            java.lang.String r1 = "loadingDuration"
            long r1 = r4.optLong(r1)
            r3.asi = r1
            java.lang.String r1 = "loadingDurationLimt"
            long r1 = r4.optLong(r1)
            r3.asj = r1
            java.lang.String r1 = "playerTypeInfo"
            int r0 = r4.optInt(r1, r0)
            r3.arX = r0
            java.lang.String r0 = "actionId"
            boolean r1 = r4.has(r0)
            if (r1 == 0) goto L50
            java.lang.String r4 = r4.optString(r0)
            r3.actionId = r4
        L50:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r6) {
            r5 = this;
            super.afterToJson(r6)
            java.lang.String r0 = r5.actionId
            java.lang.String r1 = "actionId"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            int r0 = r5.adStyle
            if (r0 <= 0) goto L13
            java.lang.String r1 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L13:
            int r0 = r5.arL
            if (r0 <= 0) goto L1c
            java.lang.String r1 = "num"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L1c:
            int r0 = r5.arK
            if (r0 == 0) goto L25
            java.lang.String r1 = "state"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L25:
            long r0 = r5.arS
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L32
            java.lang.String r4 = "timeSpend"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L32:
            long r0 = r5.asi
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L3d
            java.lang.String r4 = "loadingDuration"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L3d:
            long r0 = r5.asj
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L48
            java.lang.String r2 = "loadingDurationLimt"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L48:
            int r0 = r5.arX
            java.lang.String r1 = "playerTypeInfo"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            return
    }
}
