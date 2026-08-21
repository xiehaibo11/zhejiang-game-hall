package com.kwad.sdk.core.b.a;

public final class bl implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.z.b> {
    public bl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.z.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "photoPlaySecond"
            int r0 = r4.optInt(r0)
            r3.asS = r0
            java.lang.String r0 = "awardReceiveStage"
            int r0 = r4.optInt(r0)
            r3.asT = r0
            java.lang.String r0 = "itemClickType"
            int r0 = r4.optInt(r0)
            r3.jG = r0
            java.lang.String r0 = "itemCloseType"
            int r0 = r4.optInt(r0)
            r3.asU = r0
            java.lang.String r0 = "elementType"
            int r0 = r4.optInt(r0)
            r3.asV = r0
            java.lang.String r0 = "adRenderArea"
            java.lang.String r0 = r4.optString(r0)
            r3.asW = r0
            java.lang.String r0 = r3.asW
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L3d
            r3.asW = r2
        L3d:
            java.lang.String r0 = "highestLossPrice"
            long r0 = r4.optLong(r0)
            r3.asX = r0
            java.lang.String r0 = "impFailReason"
            int r0 = r4.optInt(r0)
            r3.asY = r0
            java.lang.String r0 = "winEcpm"
            long r0 = r4.optLong(r0)
            r3.asZ = r0
            java.lang.String r0 = "adnType"
            int r0 = r4.optInt(r0)
            r3.adnType = r0
            java.lang.String r0 = "adnName"
            java.lang.String r0 = r4.optString(r0)
            r3.adnName = r0
            java.lang.String r0 = r3.adnName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.adnName = r2
        L6d:
            java.lang.String r0 = "retainCodeType"
            int r0 = r4.optInt(r0)
            r3.ata = r0
            java.lang.String r0 = "photoSizeStyle"
            int r0 = r4.optInt(r0)
            r3.atb = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = r4.optString(r0)
            r3.UP = r0
            java.lang.String r0 = r3.UP
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8d
            r3.UP = r2
        L8d:
            java.lang.String r0 = "deeplinkType"
            int r0 = r4.optInt(r0)
            r3.atc = r0
            java.lang.String r0 = "deeplinkAppName"
            java.lang.String r0 = r4.optString(r0)
            r3.atd = r0
            java.lang.String r0 = r3.atd
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto La5
            r3.atd = r2
        La5:
            java.lang.String r0 = "deeplinkFailedReason"
            int r0 = r4.optInt(r0)
            r3.ate = r0
            java.lang.String r0 = "downloadSource"
            int r0 = r4.optInt(r0)
            r3.downloadSource = r0
            java.lang.String r0 = "isPackageChanged"
            int r0 = r4.optInt(r0)
            r3.atf = r0
            java.lang.String r0 = "installedFrom"
            java.lang.String r0 = r4.optString(r0)
            r3.atg = r0
            java.lang.String r0 = r3.atg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lcd
            r3.atg = r2
        Lcd:
            java.lang.String r0 = "downloadFailedReason"
            java.lang.String r0 = r4.optString(r0)
            r3.ath = r0
            java.lang.String r0 = r3.ath
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Ldd
            r3.ath = r2
        Ldd:
            java.lang.String r0 = "isChangedEndcard"
            int r0 = r4.optInt(r0)
            r3.ati = r0
            java.lang.String r0 = "adAggPageSource"
            int r0 = r4.optInt(r0)
            r3.arz = r0
            java.lang.String r0 = "serverPackageName"
            java.lang.String r0 = r4.optString(r0)
            r3.atj = r0
            java.lang.String r0 = r3.atj
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lfd
            r3.atj = r2
        Lfd:
            java.lang.String r0 = "installedPackageName"
            java.lang.String r0 = r4.optString(r0)
            r3.atk = r0
            java.lang.String r0 = r3.atk
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L10d
            r3.atk = r2
        L10d:
            java.lang.String r0 = "closeButtonImpressionTime"
            int r0 = r4.optInt(r0)
            r3.atl = r0
            java.lang.String r0 = "closeButtonClickTime"
            int r0 = r4.optInt(r0)
            r3.atm = r0
            java.lang.String r0 = "landingPageLoadedDuration"
            long r0 = r4.optLong(r0)
            r3.atn = r0
            java.lang.String r0 = "leaveTime"
            long r0 = r4.optLong(r0)
            r3.Kh = r0
            java.lang.String r0 = "adItemClickBackDuration"
            long r0 = r4.optLong(r0)
            r3.ato = r0
            java.lang.String r0 = "appStorePageType"
            int r0 = r4.optInt(r0)
            r3.atp = r0
            java.lang.String r0 = "installStatus"
            int r0 = r4.optInt(r0)
            r3.atq = r0
            java.lang.String r0 = "downloadStatus"
            int r0 = r4.optInt(r0)
            r3.atr = r0
            java.lang.String r0 = "downloadCardType"
            int r0 = r4.optInt(r0)
            r3.ats = r0
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            r3.att = r0
            com.kwad.sdk.core.report.z$a r0 = r3.att
            java.lang.String r1 = "clientExtData"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "landingPageType"
            int r0 = r4.optInt(r0)
            r3.atu = r0
            java.lang.String r0 = "playedDuration"
            long r0 = r4.optLong(r0)
            r3.vy = r0
            java.lang.String r0 = "playedRate"
            int r0 = r4.optInt(r0)
            r3.atv = r0
            java.lang.String r0 = "adOrder"
            int r0 = r4.optInt(r0)
            r3.atw = r0
            java.lang.String r0 = "adInterstitialSource"
            int r0 = r4.optInt(r0)
            r3.atx = r0
            java.lang.String r0 = "splashShakeAcceleration"
            double r0 = r4.optDouble(r0)
            r3.jJ = r0
            java.lang.String r0 = "splashInteractionRotateAngle"
            java.lang.String r0 = r4.optString(r0)
            r3.aty = r0
            java.lang.String r0 = r3.aty
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L1a7
            r3.aty = r2
        L1a7:
            java.lang.String r0 = "downloadInstallType"
            int r0 = r4.optInt(r0)
            r3.atz = r0
            java.lang.String r0 = "businessSceneType"
            int r0 = r4.optInt(r0)
            r3.atA = r0
            java.lang.String r0 = "adxResult"
            int r0 = r4.optInt(r0)
            r3.adxResult = r0
            java.lang.String r0 = "fingerSwipeType"
            int r0 = r4.optInt(r0)
            r3.atB = r0
            java.lang.String r0 = "fingerSwipeDistance"
            int r0 = r4.optInt(r0)
            r3.atC = r0
            java.lang.String r0 = "triggerType"
            int r0 = r4.optInt(r0)
            r3.atD = r0
            java.lang.String r0 = "cardCloseType"
            int r0 = r4.optInt(r0)
            r3.atE = r0
            java.lang.String r0 = "clientPkFailAdInfo"
            java.lang.String r4 = r4.optString(r0)
            r3.atF = r4
            java.lang.String r4 = r3.atF
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L1ef
            r3.atF = r2
        L1ef:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.z.b r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.asS
            if (r0 == 0) goto L12
            int r0 = r6.asS
            java.lang.String r1 = "photoPlaySecond"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            int r0 = r6.asT
            if (r0 == 0) goto L1d
            int r0 = r6.asT
            java.lang.String r1 = "awardReceiveStage"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1d:
            int r0 = r6.jG
            if (r0 == 0) goto L28
            int r0 = r6.jG
            java.lang.String r1 = "itemClickType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L28:
            int r0 = r6.asU
            if (r0 == 0) goto L33
            int r0 = r6.asU
            java.lang.String r1 = "itemCloseType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L33:
            int r0 = r6.asV
            if (r0 == 0) goto L3e
            int r0 = r6.asV
            java.lang.String r1 = "elementType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L3e:
            java.lang.String r0 = r6.asW
            java.lang.String r1 = ""
            if (r0 == 0) goto L53
            java.lang.String r0 = r6.asW
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L53
            java.lang.String r0 = r6.asW
            java.lang.String r2 = "adRenderArea"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L53:
            long r2 = r6.asX
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L62
            long r2 = r6.asX
            java.lang.String r0 = "highestLossPrice"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L62:
            int r0 = r6.asY
            if (r0 == 0) goto L6d
            int r0 = r6.asY
            java.lang.String r2 = "impFailReason"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L6d:
            long r2 = r6.asZ
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L7a
            long r2 = r6.asZ
            java.lang.String r0 = "winEcpm"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L7a:
            int r0 = r6.adnType
            if (r0 == 0) goto L85
            int r0 = r6.adnType
            java.lang.String r2 = "adnType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L85:
            java.lang.String r0 = r6.adnName
            if (r0 == 0) goto L98
            java.lang.String r0 = r6.adnName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L98
            java.lang.String r0 = r6.adnName
            java.lang.String r2 = "adnName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L98:
            int r0 = r6.ata
            if (r0 == 0) goto La3
            int r0 = r6.ata
            java.lang.String r2 = "retainCodeType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        La3:
            int r0 = r6.atb
            if (r0 == 0) goto Lae
            int r0 = r6.atb
            java.lang.String r2 = "photoSizeStyle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lae:
            java.lang.String r0 = r6.UP
            if (r0 == 0) goto Lc1
            java.lang.String r0 = r6.UP
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lc1
            java.lang.String r0 = r6.UP
            java.lang.String r2 = "payload"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lc1:
            int r0 = r6.atc
            if (r0 == 0) goto Lcc
            int r0 = r6.atc
            java.lang.String r2 = "deeplinkType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lcc:
            java.lang.String r0 = r6.atd
            if (r0 == 0) goto Ldf
            java.lang.String r0 = r6.atd
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ldf
            java.lang.String r0 = r6.atd
            java.lang.String r2 = "deeplinkAppName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Ldf:
            int r0 = r6.ate
            if (r0 == 0) goto Lea
            int r0 = r6.ate
            java.lang.String r2 = "deeplinkFailedReason"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lea:
            int r0 = r6.downloadSource
            if (r0 == 0) goto Lf5
            int r0 = r6.downloadSource
            java.lang.String r2 = "downloadSource"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lf5:
            int r0 = r6.atf
            if (r0 == 0) goto L100
            int r0 = r6.atf
            java.lang.String r2 = "isPackageChanged"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L100:
            java.lang.String r0 = r6.atg
            if (r0 == 0) goto L113
            java.lang.String r0 = r6.atg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L113
            java.lang.String r0 = r6.atg
            java.lang.String r2 = "installedFrom"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L113:
            java.lang.String r0 = r6.ath
            if (r0 == 0) goto L126
            java.lang.String r0 = r6.ath
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L126
            java.lang.String r0 = r6.ath
            java.lang.String r2 = "downloadFailedReason"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L126:
            int r0 = r6.ati
            if (r0 == 0) goto L131
            int r0 = r6.ati
            java.lang.String r2 = "isChangedEndcard"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L131:
            int r0 = r6.arz
            if (r0 == 0) goto L13c
            int r0 = r6.arz
            java.lang.String r2 = "adAggPageSource"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L13c:
            java.lang.String r0 = r6.atj
            if (r0 == 0) goto L14f
            java.lang.String r0 = r6.atj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L14f
            java.lang.String r0 = r6.atj
            java.lang.String r2 = "serverPackageName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L14f:
            java.lang.String r0 = r6.atk
            if (r0 == 0) goto L162
            java.lang.String r0 = r6.atk
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L162
            java.lang.String r0 = r6.atk
            java.lang.String r2 = "installedPackageName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L162:
            int r0 = r6.atl
            if (r0 == 0) goto L16d
            int r0 = r6.atl
            java.lang.String r2 = "closeButtonImpressionTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L16d:
            int r0 = r6.atm
            if (r0 == 0) goto L178
            int r0 = r6.atm
            java.lang.String r2 = "closeButtonClickTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L178:
            long r2 = r6.atn
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L185
            long r2 = r6.atn
            java.lang.String r0 = "landingPageLoadedDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L185:
            long r2 = r6.Kh
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L192
            long r2 = r6.Kh
            java.lang.String r0 = "leaveTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L192:
            long r2 = r6.ato
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L19f
            long r2 = r6.ato
            java.lang.String r0 = "adItemClickBackDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L19f:
            int r0 = r6.atp
            if (r0 == 0) goto L1aa
            int r0 = r6.atp
            java.lang.String r2 = "appStorePageType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1aa:
            int r0 = r6.atq
            if (r0 == 0) goto L1b5
            int r0 = r6.atq
            java.lang.String r2 = "installStatus"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1b5:
            int r0 = r6.atr
            if (r0 == 0) goto L1c0
            int r0 = r6.atr
            java.lang.String r2 = "downloadStatus"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c0:
            int r0 = r6.ats
            if (r0 == 0) goto L1cb
            int r0 = r6.ats
            java.lang.String r2 = "downloadCardType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1cb:
            com.kwad.sdk.core.report.z$a r0 = r6.att
            java.lang.String r2 = "clientExtData"
            com.kwad.sdk.utils.t.a(r7, r2, r0)
            int r0 = r6.atu
            if (r0 == 0) goto L1dd
            int r0 = r6.atu
            java.lang.String r2 = "landingPageType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1dd:
            long r2 = r6.vy
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L1ea
            long r2 = r6.vy
            java.lang.String r0 = "playedDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L1ea:
            int r0 = r6.atv
            if (r0 == 0) goto L1f5
            int r0 = r6.atv
            java.lang.String r2 = "playedRate"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1f5:
            int r0 = r6.atw
            if (r0 == 0) goto L200
            int r0 = r6.atw
            java.lang.String r2 = "adOrder"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L200:
            int r0 = r6.atx
            if (r0 == 0) goto L20b
            int r0 = r6.atx
            java.lang.String r2 = "adInterstitialSource"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L20b:
            double r2 = r6.jJ
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L21a
            double r2 = r6.jJ
            java.lang.String r0 = "splashShakeAcceleration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L21a:
            java.lang.String r0 = r6.aty
            if (r0 == 0) goto L22d
            java.lang.String r0 = r6.aty
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L22d
            java.lang.String r0 = r6.aty
            java.lang.String r2 = "splashInteractionRotateAngle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L22d:
            int r0 = r6.atz
            if (r0 == 0) goto L238
            int r0 = r6.atz
            java.lang.String r2 = "downloadInstallType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L238:
            int r0 = r6.atA
            if (r0 == 0) goto L243
            int r0 = r6.atA
            java.lang.String r2 = "businessSceneType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L243:
            int r0 = r6.adxResult
            if (r0 == 0) goto L24e
            int r0 = r6.adxResult
            java.lang.String r2 = "adxResult"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L24e:
            int r0 = r6.atB
            if (r0 == 0) goto L259
            int r0 = r6.atB
            java.lang.String r2 = "fingerSwipeType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L259:
            int r0 = r6.atC
            if (r0 == 0) goto L264
            int r0 = r6.atC
            java.lang.String r2 = "fingerSwipeDistance"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L264:
            int r0 = r6.atD
            if (r0 == 0) goto L26f
            int r0 = r6.atD
            java.lang.String r2 = "triggerType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L26f:
            int r0 = r6.atE
            if (r0 == 0) goto L27a
            int r0 = r6.atE
            java.lang.String r2 = "cardCloseType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L27a:
            java.lang.String r0 = r6.atF
            if (r0 == 0) goto L28d
            java.lang.String r0 = r6.atF
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L28d
            java.lang.String r6 = r6.atF
            java.lang.String r0 = "clientPkFailAdInfo"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L28d:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.z$b r1 = (com.kwad.sdk.core.report.z.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.z$b r1 = (com.kwad.sdk.core.report.z.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
