package com.kwad.sdk.core.report;

public final class z extends com.kwad.sdk.core.network.b {
    int asG;
    private final com.kwad.sdk.core.report.z.b asH;
    private final org.json.JSONObject asI;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int asJ;
        public java.lang.String asK;
        public int asL;
        public int asM;
        public int asN;
        public org.json.JSONObject asO;
        public int asP;
        public int asQ;
        public com.kwad.sdk.core.report.AdTrackLog asR;
        public long duration;
        public int showLiveStatus;
        public int showLiveStyle;
        public java.lang.String templateId;

        public a() {
                r3 = this;
                r3.<init>()
                r0 = -1
                r3.asJ = r0
                r1 = -1
                r3.duration = r1
                r3.showLiveStatus = r0
                r3.showLiveStyle = r0
                return
        }

        @Override
        public void afterToJson(org.json.JSONObject r7) {
                r6 = this;
                super.afterToJson(r7)
                int r0 = r6.asJ
                r1 = -1
                if (r0 == r1) goto Ld
                java.lang.String r2 = "shield_reason"
                com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            Ld:
                long r2 = r6.duration
                r4 = -1
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 == 0) goto L1a
                java.lang.String r0 = "duration"
                com.kwad.sdk.utils.t.putValue(r7, r0, r2)
            L1a:
                int r0 = r6.showLiveStatus
                if (r0 == r1) goto L23
                java.lang.String r2 = "show_live_status"
                com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            L23:
                int r0 = r6.showLiveStyle
                if (r0 == r1) goto L2c
                java.lang.String r1 = "show_live_style"
                com.kwad.sdk.utils.t.putValue(r7, r1, r0)
            L2c:
                com.kwad.sdk.core.report.AdTrackLog r0 = r6.asR
                if (r0 == 0) goto L3d
                org.json.JSONObject r0 = r0.toJson()
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "ad_track_log"
                com.kwad.sdk.utils.t.putValue(r7, r1, r0)
            L3d:
                org.json.JSONObject r0 = r6.asO
                if (r0 == 0) goto L5b
                java.util.Iterator r0 = r0.keys()     // Catch: java.lang.Throwable -> L5b
            L45:
                boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L5b
                if (r1 == 0) goto L5b
                java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L5b
                org.json.JSONObject r2 = r6.asO     // Catch: java.lang.Throwable -> L5b
                java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L5b
                r7.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L5b
                goto L45
            L5b:
                return
        }

        public final com.kwad.sdk.core.report.AdTrackLog c(com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4, java.lang.String r5) {
                r2 = this;
                r0 = 0
                if (r3 != 0) goto L4
                return r0
            L4:
                java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
                java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
                com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1
                if (r1 == 0) goto L21
                boolean r1 = r1.xN()
                if (r1 == 0) goto L21
                com.kwad.sdk.core.report.AdTrackLog r0 = new com.kwad.sdk.core.report.AdTrackLog
                r0.<init>(r4, r5)
                r2.asR = r0
                r0.bindABParams(r3)
                com.kwad.sdk.core.report.AdTrackLog r3 = r2.asR
                return r3
            L21:
                return r0
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public long Kh;
        public java.lang.String UP;
        public java.lang.String adnName;
        public int adnType;
        public int adxResult;
        public int arz;
        public int asS;
        public int asT;
        public int asU;
        public int asV;
        public java.lang.String asW;
        public long asX;
        public int asY;
        public long asZ;
        public int atA;
        public int atB;
        public int atC;
        public int atD;
        public int atE;
        public java.lang.String atF;
        public int ata;
        public int atb;
        public int atc;
        public java.lang.String atd;
        public int ate;
        public int atf;
        public java.lang.String atg;
        public java.lang.String ath;
        public int ati;
        public java.lang.String atj;
        public java.lang.String atk;
        public int atl;
        public int atm;
        public long atn;
        public long ato;
        public int atp;
        public int atq;
        public int atr;
        public int ats;
        public com.kwad.sdk.core.report.z.a att;
        public int atu;
        public int atv;
        public int atw;
        public int atx;
        public java.lang.String aty;
        public int atz;
        public int downloadSource;
        public int jG;
        public com.kwad.sdk.utils.ac.a jI;
        public double jJ;
        public long vy;

        public b() {
                r3 = this;
                r3.<init>()
                r0 = -1
                r3.asX = r0
                r2 = -1
                r3.asY = r2
                r3.asZ = r0
                r3.ata = r2
                r0 = 0
                r3.atb = r0
                java.lang.String r1 = ""
                r3.atg = r1
                r3.atp = r2
                r3.atq = r2
                r3.atr = r0
                r3.atw = r2
                r3.atx = r2
                r3.atz = r2
                r3.adxResult = r2
                r3.atD = r2
                r3.atE = r0
                return
        }

        public final void a(com.kwad.sdk.core.report.k r1) {
                r0 = this;
                if (r1 == 0) goto L8
                java.lang.String r1 = r1.Cc()
                r0.atF = r1
            L8:
                return
        }

        public final void cu(int r3) {
                r2 = this;
                r0 = 1
                if (r3 == 0) goto L10
                r1 = 2
                if (r3 == r0) goto Ld
                if (r3 == r1) goto L9
                goto Lc
            L9:
                r3 = 3
                r2.atB = r3
            Lc:
                return
            Ld:
                r2.atB = r1
                return
            L10:
                r2.atB = r0
                return
        }
    }

    z(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, com.kwad.sdk.core.report.z.b r3, org.json.JSONObject r4) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            r0.asG = r2
            r0.asH = r3
            r0.asI = r4
            return
    }

    private void B(org.json.JSONObject r4) {
            r3 = this;
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = "clientTimestamp"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L11
            r4.put(r0, r1)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L15:
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "extData"
            r3.putBody(r0, r4)
            return
    }

    private void a(java.lang.String r3, com.kwad.sdk.core.report.z.b r4) {
            r2 = this;
            if (r4 == 0) goto L8c
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto La
            goto L8c
        La:
            int r3 = r4.atw
            if (r3 < 0) goto L15
            int r3 = r4.atw
            java.lang.String r0 = "adOrder"
            r2.putBody(r0, r3)
        L15:
            int r3 = r4.atx
            if (r3 < 0) goto L20
            int r3 = r4.atx
            java.lang.String r0 = "adInterstitialSource"
            r2.putBody(r0, r3)
        L20:
            java.lang.String r3 = r4.asW
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L2f
            java.lang.String r3 = r4.asW
            java.lang.String r0 = "adRenderArea"
            r2.putBody(r0, r3)
        L2f:
            int r3 = r4.adxResult
            java.lang.String r0 = "adxResult"
            r2.putBody(r0, r3)
            int r3 = r4.atB
            if (r3 == 0) goto L41
            int r3 = r4.atB
            java.lang.String r0 = "fingerSwipeType"
            r2.putBody(r0, r3)
        L41:
            int r3 = r4.atC
            if (r3 == 0) goto L4c
            int r3 = r4.atC
            java.lang.String r0 = "fingerSwipeDistance"
            r2.putBody(r0, r3)
        L4c:
            int r3 = r4.atq
            r0 = -1
            if (r3 == r0) goto L58
            int r3 = r4.atq
            java.lang.String r1 = "installStatus"
            r2.putBody(r1, r3)
        L58:
            com.kwad.sdk.core.report.z$a r3 = r4.att
            if (r3 == 0) goto L6b
            com.kwad.sdk.core.report.z$a r3 = r4.att
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "clientExtData"
            r2.putBody(r1, r3)
        L6b:
            java.lang.String r3 = r4.atF
            if (r3 == 0) goto L76
            java.lang.String r3 = r4.atF
            java.lang.String r1 = "clientPkFailAdInfo"
            r2.putBody(r1, r3)
        L76:
            int r3 = r4.atD
            if (r3 == r0) goto L81
            int r3 = r4.atD
            java.lang.String r0 = "triggerType"
            r2.putBody(r0, r3)
        L81:
            int r3 = r4.atb
            if (r3 == 0) goto L8c
            int r3 = r4.atb
            java.lang.String r4 = "photoSizeStyle"
            r2.putBody(r4, r3)
        L8c:
            return
    }

    private void a(java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.sdk.core.report.z.b r5) {
            r2 = this;
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L43
            if (r4 != 0) goto L9
            goto L43
        L9:
            int r3 = r4.mInitVoiceStatus
            if (r3 == 0) goto L14
            int r3 = r4.mInitVoiceStatus
            java.lang.String r4 = "initVoiceStatus"
            r2.putBody(r4, r3)
        L14:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            long r3 = r3.mBidEcpm
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            java.lang.String r4 = "ecpmType"
            if (r3 != 0) goto L22
            r3 = 2
            goto L23
        L22:
            r3 = 1
        L23:
            r2.putBody(r4, r3)
            if (r5 != 0) goto L29
            return
        L29:
            int r3 = r5.arz
            if (r3 == 0) goto L34
            int r3 = r5.arz
            java.lang.String r4 = "adAggPageSource"
            r2.putBody(r4, r3)
        L34:
            java.lang.String r3 = r5.UP
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L43
            java.lang.String r3 = r5.UP
            java.lang.String r4 = "payload"
            r2.putBody(r4, r3)
        L43:
            return
    }

    private void b(java.lang.String r6, com.kwad.sdk.core.report.z.b r7) {
            r5 = this;
            if (r7 == 0) goto Le5
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto La
            goto Le5
        La:
            int r6 = r7.jG
            if (r6 == 0) goto L15
            int r6 = r7.jG
            java.lang.String r0 = "itemClickType"
            r5.putBody(r0, r6)
        L15:
            java.lang.String r6 = r7.UP
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L24
            java.lang.String r6 = r7.UP
            java.lang.String r0 = "payload"
            r5.putBody(r0, r6)
        L24:
            int r6 = r7.arz
            if (r6 == 0) goto L2f
            int r6 = r7.arz
            java.lang.String r0 = "adAggPageSource"
            r5.putBody(r0, r6)
        L2f:
            int r6 = r7.atw
            if (r6 < 0) goto L3a
            int r6 = r7.atw
            java.lang.String r0 = "adOrder"
            r5.putBody(r0, r6)
        L3a:
            int r6 = r7.atx
            if (r6 < 0) goto L45
            int r6 = r7.atx
            java.lang.String r0 = "adInterstitialSource"
            r5.putBody(r0, r6)
        L45:
            int r6 = r7.atD
            r0 = -1
            if (r6 == r0) goto L51
            int r6 = r7.atD
            java.lang.String r1 = "triggerType"
            r5.putBody(r1, r6)
        L51:
            int r6 = r7.atE
            if (r6 == 0) goto L5c
            int r6 = r7.atE
            java.lang.String r1 = "cardCloseType"
            r5.putBody(r1, r6)
        L5c:
            int r6 = r7.adxResult
            java.lang.String r1 = "adxResult"
            r5.putBody(r1, r6)
            double r1 = r7.jJ
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L72
            double r1 = r7.jJ
            java.lang.String r6 = "splashShakeAcceleration"
            r5.putBody(r6, r1)
        L72:
            java.lang.String r6 = r7.aty
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L81
            java.lang.String r6 = r7.aty
            java.lang.String r1 = "splashInteractionRotateAngle"
            r5.putBody(r1, r6)
        L81:
            int r6 = r7.atB
            if (r6 == 0) goto L8c
            int r6 = r7.atB
            java.lang.String r1 = "fingerSwipeType"
            r5.putBody(r1, r6)
        L8c:
            int r6 = r7.atC
            if (r6 == 0) goto L97
            int r6 = r7.atC
            java.lang.String r1 = "fingerSwipeDistance"
            r5.putBody(r1, r6)
        L97:
            long r1 = r7.vy
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto La6
            long r1 = r7.vy
            java.lang.String r6 = "playedDuration"
            r5.putBody(r6, r1)
        La6:
            int r6 = r7.atv
            if (r6 <= 0) goto Lb1
            int r6 = r7.atv
            java.lang.String r1 = "playedRate"
            r5.putBody(r1, r6)
        Lb1:
            java.lang.String r6 = r7.atF
            if (r6 == 0) goto Lbc
            java.lang.String r6 = r7.atF
            java.lang.String r1 = "clientPkFailAdInfo"
            r5.putBody(r1, r6)
        Lbc:
            int r6 = r7.ata
            if (r6 == r0) goto Lc7
            int r6 = r7.ata
            java.lang.String r0 = "retainCodeType"
            r5.putBody(r0, r6)
        Lc7:
            com.kwad.sdk.core.report.z$a r6 = r7.att
            if (r6 == 0) goto Lda
            com.kwad.sdk.core.report.z$a r6 = r7.att
            org.json.JSONObject r6 = r6.toJson()
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "clientExtData"
            r5.putBody(r0, r6)
        Lda:
            int r6 = r7.atb
            if (r6 == 0) goto Le5
            int r6 = r7.atb
            java.lang.String r7 = "photoSizeStyle"
            r5.putBody(r7, r6)
        Le5:
            return
    }

    private void c(java.lang.String r9, com.kwad.sdk.core.report.z.b r10) {
            r8 = this;
            if (r10 == 0) goto L1f5
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto La
            goto L1f5
        La:
            int r9 = r10.asU
            if (r9 == 0) goto L15
            int r9 = r10.asU
            java.lang.String r0 = "itemCloseType"
            r8.putBody(r0, r9)
        L15:
            int r9 = r10.asS
            if (r9 <= 0) goto L20
            int r9 = r10.asS
            java.lang.String r0 = "photoPlaySecond"
            r8.putBody(r0, r9)
        L20:
            int r9 = r10.asT
            if (r9 == 0) goto L2b
            int r9 = r10.asT
            java.lang.String r0 = "awardReceiveStage"
            r8.putBody(r0, r9)
        L2b:
            int r9 = r10.asV
            if (r9 == 0) goto L36
            int r9 = r10.asV
            java.lang.String r0 = "elementType"
            r8.putBody(r0, r9)
        L36:
            java.lang.String r9 = r10.UP
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L45
            java.lang.String r9 = r10.UP
            java.lang.String r0 = "payload"
            r8.putBody(r0, r9)
        L45:
            com.kwad.sdk.core.report.z$a r9 = r10.att
            if (r9 == 0) goto L58
            com.kwad.sdk.core.report.z$a r9 = r10.att
            org.json.JSONObject r9 = r9.toJson()
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "clientExtData"
            r8.putBody(r0, r9)
        L58:
            int r9 = r10.atc
            if (r9 <= 0) goto L63
            int r9 = r10.atc
            java.lang.String r0 = "deeplinkType"
            r8.putBody(r0, r9)
        L63:
            java.lang.String r9 = r10.atd
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L72
            java.lang.String r9 = r10.atd
            java.lang.String r0 = "deeplinkAppName"
            r8.putBody(r0, r9)
        L72:
            int r9 = r10.ate
            if (r9 == 0) goto L7d
            int r9 = r10.ate
            java.lang.String r0 = "deeplinkFailedReason"
            r8.putBody(r0, r9)
        L7d:
            int r9 = r10.downloadSource
            if (r9 <= 0) goto L88
            int r9 = r10.downloadSource
            java.lang.String r0 = "downloadSource"
            r8.putBody(r0, r9)
        L88:
            int r9 = r10.atE
            if (r9 == 0) goto L93
            int r9 = r10.atE
            java.lang.String r0 = "cardCloseType"
            r8.putBody(r0, r9)
        L93:
            int r9 = r10.atf
            if (r9 <= 0) goto L9e
            int r9 = r10.atf
            java.lang.String r0 = "isPackageChanged"
            r8.putBody(r0, r9)
        L9e:
            java.lang.String r9 = r10.atg
            java.lang.String r0 = "installedFrom"
            r8.putBody(r0, r9)
            int r9 = r10.ati
            java.lang.String r0 = "isChangedEndcard"
            r8.putBody(r0, r9)
            int r9 = r10.arz
            if (r9 == 0) goto Lb7
            int r9 = r10.arz
            java.lang.String r0 = "adAggPageSource"
            r8.putBody(r0, r9)
        Lb7:
            java.lang.String r9 = r10.ath
            if (r9 == 0) goto Lc2
            java.lang.String r9 = r10.ath
            java.lang.String r0 = "downloadFailedReason"
            r8.putBody(r0, r9)
        Lc2:
            java.lang.String r9 = r10.atk
            boolean r9 = com.kwad.sdk.utils.bc.isNullString(r9)
            if (r9 != 0) goto Ld1
            java.lang.String r9 = r10.atk
            java.lang.String r0 = "installedPackageName"
            r8.putBody(r0, r9)
        Ld1:
            java.lang.String r9 = r10.atj
            boolean r9 = com.kwad.sdk.utils.bc.isNullString(r9)
            if (r9 != 0) goto Le0
            java.lang.String r9 = r10.atj
            java.lang.String r0 = "serverPackageName"
            r8.putBody(r0, r9)
        Le0:
            int r9 = r10.atm
            if (r9 <= 0) goto Leb
            int r9 = r10.atm
            java.lang.String r0 = "closeButtonClickTime"
            r8.putBody(r0, r9)
        Leb:
            int r9 = r10.atl
            if (r9 <= 0) goto Lf6
            int r9 = r10.atl
            java.lang.String r0 = "closeButtonImpressionTime"
            r8.putBody(r0, r9)
        Lf6:
            int r9 = r10.atr
            if (r9 < 0) goto L101
            int r9 = r10.atr
            java.lang.String r0 = "downloadStatus"
            r8.putBody(r0, r9)
        L101:
            long r0 = r10.atn
            r2 = 0
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 <= 0) goto L110
            long r0 = r10.atn
            java.lang.String r9 = "landingPageLoadedDuration"
            r8.putBody(r9, r0)
        L110:
            long r0 = r10.Kh
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 <= 0) goto L11d
            long r0 = r10.Kh
            java.lang.String r9 = "leaveTime"
            r8.putBody(r9, r0)
        L11d:
            long r0 = r10.ato
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 <= 0) goto L12a
            long r0 = r10.ato
            java.lang.String r9 = "adItemClickBackDuration"
            r8.putBody(r9, r0)
        L12a:
            int r9 = r10.ata
            r0 = -1
            if (r9 == r0) goto L136
            int r9 = r10.ata
            java.lang.String r1 = "retainCodeType"
            r8.putBody(r1, r9)
        L136:
            long r4 = r10.asX
            r6 = -1
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 <= 0) goto L145
            long r4 = r10.asX
            java.lang.String r9 = "highestLossPrice"
            r8.putBody(r9, r4)
        L145:
            int r9 = r10.asY
            if (r9 < 0) goto L150
            int r9 = r10.asY
            java.lang.String r1 = "impFailReason"
            r8.putBody(r1, r9)
        L150:
            long r4 = r10.asZ
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 <= 0) goto L15d
            long r4 = r10.asZ
            java.lang.String r9 = "winEcpm"
            r8.putBody(r9, r4)
        L15d:
            int r9 = r10.adnType
            if (r9 <= 0) goto L168
            int r9 = r10.adnType
            java.lang.String r1 = "adnType"
            r8.putBody(r1, r9)
        L168:
            java.lang.String r9 = r10.adnName
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L177
            java.lang.String r9 = r10.adnName
            java.lang.String r1 = "adnName"
            r8.putBody(r1, r9)
        L177:
            int r9 = r10.ats
            java.lang.String r1 = "downloadCardType"
            r8.putBody(r1, r9)
            int r9 = r10.atu
            java.lang.String r1 = "landingPageType"
            r8.putBody(r1, r9)
            int r9 = r10.atx
            if (r9 < 0) goto L190
            int r9 = r10.atx
            java.lang.String r1 = "adInterstitialSource"
            r8.putBody(r1, r9)
        L190:
            int r9 = r10.atz
            if (r9 <= 0) goto L19b
            int r9 = r10.atz
            java.lang.String r1 = "downloadInstallType"
            r8.putBody(r1, r9)
        L19b:
            int r9 = r10.atB
            if (r9 == 0) goto L1a6
            int r9 = r10.atB
            java.lang.String r1 = "fingerSwipeType"
            r8.putBody(r1, r9)
        L1a6:
            int r9 = r10.atC
            if (r9 == 0) goto L1b1
            int r9 = r10.atC
            java.lang.String r1 = "fingerSwipeDistance"
            r8.putBody(r1, r9)
        L1b1:
            int r9 = r10.atA
            if (r9 <= 0) goto L1bc
            int r9 = r10.atA
            java.lang.String r1 = "businessSceneType"
            r8.putBody(r1, r9)
        L1bc:
            long r4 = r10.vy
            int r9 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r9 <= 0) goto L1c9
            long r1 = r10.vy
            java.lang.String r9 = "playedDuration"
            r8.putBody(r9, r1)
        L1c9:
            int r9 = r10.atv
            if (r9 <= 0) goto L1d4
            int r9 = r10.atv
            java.lang.String r1 = "playedRate"
            r8.putBody(r1, r9)
        L1d4:
            int r9 = r10.atp
            if (r9 == r0) goto L1df
            int r9 = r10.atp
            java.lang.String r1 = "appStorePageType"
            r8.putBody(r1, r9)
        L1df:
            int r9 = r10.atD
            if (r9 == r0) goto L1ea
            int r9 = r10.atD
            java.lang.String r0 = "triggerType"
            r8.putBody(r0, r9)
        L1ea:
            int r9 = r10.atb
            if (r9 == 0) goto L1f5
            int r9 = r10.atb
            java.lang.String r10 = "photoSizeStyle"
            r8.putBody(r10, r9)
        L1f5:
            return
    }

    final java.util.List<java.lang.String> Cp() {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo> r2 = r1.adTrackInfoList
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L69
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo> r2 = r1.adTrackInfoList
            java.util.Iterator r2 = r2.iterator()
        L19:
            boolean r3 = r2.hasNext()
            r4 = 0
            if (r3 == 0) goto L31
            java.lang.Object r3 = r2.next()
            com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo r3 = (com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo) r3
            int r5 = r3.type
            int r6 = r7.asG
            if (r5 != r6) goto L19
            java.util.List<java.lang.String> r5 = r3.urls
            if (r5 == 0) goto L19
            goto L32
        L31:
            r3 = r4
        L32:
            if (r3 == 0) goto L69
            int r2 = r3.type
            r5 = 2
            if (r2 != r5) goto L3f
            com.kwad.sdk.core.report.z$b r2 = r7.asH
            if (r2 == 0) goto L3f
            com.kwad.sdk.utils.ac$a r4 = r2.jI
        L3f:
            java.util.List<java.lang.String> r2 = r3.urls
            java.util.Iterator r2 = r2.iterator()
        L45:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L69
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Class<com.kwad.sdk.service.a.e> r5 = com.kwad.sdk.service.a.e.class
            java.lang.Object r5 = com.kwad.sdk.service.ServiceProvider.get(r5)
            com.kwad.sdk.service.a.e r5 = (com.kwad.sdk.service.a.e) r5
            android.content.Context r5 = r5.getContext()
            boolean r6 = com.kwad.sdk.core.response.b.a.at(r1)
            java.lang.String r3 = com.kwad.sdk.utils.ab.a(r5, r3, r4, r6)
            r0.add(r3)
            goto L45
        L69:
            return r0
    }

    @Override
    public final void buildBaseBody() {
            r0 = this;
            return
    }

    @Override
    public final void buildBaseHeader() {
            r0 = this;
            return
    }

    public final int getActionType() {
            r1 = this;
            int r0 = r1.asG
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public final org.json.JSONObject getBody() {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r9 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r1 = r9.asG
            java.lang.String r2 = "__BEHAVIOR__"
            java.lang.String r3 = "__TYPE__"
            java.lang.String r4 = "__PR__"
            r5 = 1
            if (r1 != r5) goto L6a
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.showUrl
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            long r5 = r1.mBidEcpm
            r7 = 0
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 != 0) goto L3c
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1
            boolean r1 = r1.xC()
            if (r1 == 0) goto L3c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            int r1 = com.kwad.sdk.core.response.b.a.aJ(r1)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            goto L44
        L3c:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            long r5 = r1.mBidEcpm
            java.lang.String r1 = java.lang.String.valueOf(r5)
        L44:
            java.lang.String r0 = r0.replaceFirst(r4, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerType
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r3, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerBehavior
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r2, r1)
            com.kwad.sdk.core.report.z$b r1 = r9.asH
            r9.a(r0, r1)
            goto Lc5
        L6a:
            r5 = 2
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            if (r1 != r5) goto Lcd
            java.lang.String r0 = r0.clickUrl
            com.kwad.sdk.core.report.z$b r1 = r9.asH
            if (r1 == 0) goto L88
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            r1.getContext()
            com.kwad.sdk.core.report.z$b r1 = r9.asH
            com.kwad.sdk.utils.ac$a r1 = r1.jI
            java.lang.String r0 = com.kwad.sdk.utils.ac.a(r0, r1)
        L88:
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            java.lang.String r0 = com.kwad.sdk.utils.ac.aj(r1, r0)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            long r5 = r1.mBidEcpm
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r0 = r0.replaceFirst(r4, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerType
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r3, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerBehavior
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r2, r1)
            com.kwad.sdk.core.report.z$b r1 = r9.asH
            r9.b(r0, r1)
        Lc5:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.report.z$b r2 = r9.asH
            r9.a(r0, r1, r2)
            goto L108
        Lcd:
            java.lang.String r0 = r0.convUrl
            int r1 = r9.asG
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r5 = "__ACTION__"
            java.lang.String r0 = r0.replaceFirst(r5, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            long r5 = r1.mBidEcpm
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r0 = r0.replaceFirst(r4, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerType
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r3, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            int r1 = r1.mVideoPlayerBehavior
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r0.replaceFirst(r2, r1)
            com.kwad.sdk.core.report.z$b r1 = r9.asH
            r9.c(r0, r1)
        L108:
            org.json.JSONObject r1 = r9.asI
            r9.B(r1)
            return r0
    }
}
