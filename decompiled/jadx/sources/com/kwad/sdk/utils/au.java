package com.kwad.sdk.utils;

import android.content.Context;
import android.location.Location;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.InstalledAppInfoManager;
import com.kwad.sdk.utils.bq;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class au {
    public static String aJe = "";

    public static com.kwad.sdk.k.a.b Hl() {
        return com.kwad.sdk.k.a.b.Hl();
    }

    public static com.kwad.sdk.k.a.f Hm() {
        return com.kwad.sdk.k.a.f.Hm();
    }

    private static String Jk() {
        com.kwad.sdk.k.a.f fVarHm = com.kwad.sdk.k.a.f.Hm();
        int i = fVarHm != null ? fVarHm.aGx : -1;
        if (i >= 0) {
            return com.kwad.sdk.f.b.a(false, String.valueOf(i), 0);
        }
        boolean zXu = ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xu();
        String strValueOf = String.valueOf(i);
        return !zXu ? com.kwad.sdk.f.b.a(false, strValueOf, 1) : com.kwad.sdk.f.b.a(false, strValueOf, 2);
    }

    private static String Jl() {
        com.kwad.sdk.k.a.b bVarHl = com.kwad.sdk.k.a.b.Hl();
        return bVarHl != null ? com.kwad.sdk.f.b.a(false, bVarHl.toJson(), 0) : !((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xw() ? com.kwad.sdk.f.b.a(false, "", 1) : com.kwad.sdk.f.b.a(false, "", 2);
    }

    public static List<com.kwad.sdk.k.a.e> Jm() {
        return ax.Jm();
    }

    private static String Jn() {
        return com.kwad.sdk.f.b.a(false, "1", 0);
    }

    private static String Jo() {
        return com.kwad.sdk.f.b.a(false, String.valueOf(getSdkVersion()), 0);
    }

    private static String Jp() {
        return com.kwad.sdk.f.b.a(false, String.valueOf(getAppId()), 0);
    }

    private static String bF(boolean z) {
        String strBQ = be.bQ(z);
        if (!z) {
            return TextUtils.isEmpty(strBQ) ? "" : strBQ;
        }
        if (TextUtils.isEmpty(strBQ)) {
            return (at.Je() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX)) ? com.kwad.sdk.f.b.a(false, strBQ, 1) : com.kwad.sdk.f.b.a(false, strBQ, 5);
        }
        return com.kwad.sdk.f.b.a(at.Je() && !TextUtils.isEmpty(at.Jf()), strBQ, 0);
    }

    private static String bG(boolean z) {
        if (com.kwad.framework.a.a.ml.booleanValue() && !TextUtils.isEmpty(bf.getDeviceId())) {
            return bf.getDeviceId();
        }
        String deviceId = be.getDeviceId();
        if (!z) {
            return TextUtils.isEmpty(deviceId) ? "" : deviceId;
        }
        if (TextUtils.isEmpty(deviceId)) {
            return (at.IY() || !o.HX()) ? com.kwad.sdk.f.b.a(false, deviceId, 1) : com.kwad.sdk.f.b.a(false, deviceId, 5);
        }
        return com.kwad.sdk.f.b.a(at.IY() && !TextUtils.isEmpty(at.Jb()), deviceId, 0);
    }

    private static String bH(boolean z) {
        String strJW = be.JW();
        return !z ? TextUtils.isEmpty(strJW) ? "" : strJW : !TextUtils.isEmpty(strJW) ? com.kwad.sdk.f.b.a(at.Jg(), strJW, 0) : (at.Jg() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(8L)) ? com.kwad.sdk.f.b.a(false, strJW, 1) : com.kwad.sdk.f.b.a(false, strJW, 2);
    }

    static /* synthetic */ String bI(boolean z) {
        return bF(true);
    }

    static /* synthetic */ String bJ(boolean z) {
        return Jk();
    }

    static /* synthetic */ String bK(boolean z) {
        return Jl();
    }

    static /* synthetic */ String bL(boolean z) {
        return bG(true);
    }

    static /* synthetic */ String bM(boolean z) {
        return bH(true);
    }

    static /* synthetic */ String bN(boolean z) {
        return Jn();
    }

    static /* synthetic */ String bO(boolean z) {
        return Jo();
    }

    static /* synthetic */ String bP(boolean z) {
        return Jp();
    }

    public static Location bU(Context context) {
        return r.bU(context);
    }

    private static String c(Context context, boolean z) {
        String strU = be.u(context, z);
        if (!z) {
            return TextUtils.isEmpty(strU) ? "" : strU;
        }
        if (!TextUtils.isEmpty(strU)) {
            return com.kwad.sdk.f.b.a(at.IY() && !TextUtils.isEmpty(at.IZ()), strU, 0);
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return com.kwad.sdk.f.b.a(false, strU, 4);
        }
        if (at.IY() || !o.Ic()) {
            return com.kwad.sdk.f.b.a(false, strU, 1);
        }
        return com.kwad.sdk.f.b.a(false, strU, SystemUtil.cX(context) ? 3 : 1);
    }

    public static String cA(Context context) {
        return i(context, false);
    }

    public static int cB(Context context) {
        return be.de(context);
    }

    private static String cC(Context context) {
        int iDe = be.de(context);
        if (iDe > 0) {
            return com.kwad.sdk.f.b.a(false, String.valueOf(iDe), 0);
        }
        int i = Build.VERSION.SDK_INT;
        String strValueOf = String.valueOf(iDe);
        return i < 23 ? com.kwad.sdk.f.b.a(false, strValueOf, 1) : com.kwad.sdk.f.b.a(false, strValueOf, 3);
    }

    public static int cD(Context context) {
        return be.df(context);
    }

    private static String cE(Context context) {
        List<bq.a> listM = m(context, 15);
        if (listM != null && listM.size() > 0) {
            return com.kwad.sdk.f.b.a(at.Jg(), t.I(listM), 0);
        }
        if (at.Jg() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(32L)) {
            return com.kwad.sdk.f.b.a(false, "", 1);
        }
        return com.kwad.sdk.f.b.a(false, "", bq.dm(context) ? 1 : 3);
    }

    private static String cF(Context context) {
        Map<String, InstalledAppInfoManager.AppPackageInfo> mapBV = InstalledAppInfoManager.bV(context);
        if (mapBV.size() > 0) {
            return com.kwad.sdk.f.b.a(at.Ji() && at.Jj() != null, InstalledAppInfoManager.f(mapBV), 0);
        }
        if (at.Ji() || !o.Ia()) {
            return com.kwad.sdk.f.b.a(false, "", 1);
        }
        return com.kwad.sdk.f.b.a(false, "", be.dl(context) ? 3 : 1);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static String cG(Context context) {
        Location locationBU = r.bU(context);
        if (locationBU != null) {
            HashMap map = new HashMap();
            map.put("latitude", String.valueOf(locationBU.getLatitude()));
            map.put("longitude", String.valueOf(locationBU.getLongitude()));
            return com.kwad.sdk.f.b.a(at.IW() && at.IX() != null, t.parseMap2JSON(map), 0);
        }
        if (at.IW() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(64L)) {
            return com.kwad.sdk.f.b.a(false, "", 1);
        }
        return com.kwad.sdk.f.b.a(false, "", (ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) == 0) == true ? 3 : 1);
    }

    private static com.kwad.sdk.f.c cH(final Context context) {
        return new com.kwad.sdk.f.c() { // from class: com.kwad.sdk.utils.au.1
            @Override // com.kwad.sdk.f.a
            public final String Fo() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIMEI:" + au.j(context, true));
                return au.j(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fp() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getAndroidID:" + au.k(context, true));
                return au.k(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fq() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getMac:" + au.l(context, true));
                return au.l(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fr() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIMEI2:" + au.m(context, true));
                return au.m(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fs() {
                String strN = au.n(context, true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIMEI2:" + strN);
                return strN;
            }

            @Override // com.kwad.sdk.f.a
            public final String Ft() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIMSI:" + au.o(context, true));
                return au.o(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fu() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getSimCardPhoneCount:" + au.q(context, true));
                return au.q(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String Fv() {
                String strBJ = au.bJ(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getSimCardActivePhoneCount:" + strBJ);
                return strBJ;
            }

            @Override // com.kwad.sdk.f.a
            public final String Fw() {
                String strBK = au.bK(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getBaseStationInfo:" + strBK);
                return strBK;
            }

            @Override // com.kwad.sdk.f.a
            public final String Fx() {
                String strR = au.r(context, true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getWifiList:" + strR);
                return strR;
            }

            @Override // com.kwad.sdk.f.a
            public final String Fy() {
                String strT = au.t(context, true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getAppList:" + strT);
                return strT;
            }

            @Override // com.kwad.sdk.f.a
            public final String Fz() {
                String strBN = au.bN(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getSdkType:" + strBN);
                return strBN;
            }

            @Override // com.kwad.sdk.f.a
            public final String getAppId() {
                String strBP = au.bP(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getAppId:" + strBP);
                return strBP;
            }

            @Override // com.kwad.sdk.f.a
            public final String getDeviceId() {
                String strBL = au.bL(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getDeviceId:" + strBL);
                return strBL;
            }

            @Override // com.kwad.sdk.f.a
            public final String getIccId() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIccId:" + au.p(context, true));
                return au.p(context, true);
            }

            @Override // com.kwad.sdk.f.a
            public final String getIp() {
                String strBM = au.bM(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getIp:" + strBM);
                return strBM;
            }

            @Override // com.kwad.sdk.f.a
            public final String getLocation() {
                String strS = au.s(context, true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getLocation:" + strS);
                return strS;
            }

            @Override // com.kwad.sdk.f.a
            public final String getOaid() {
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getOaid:" + au.bI(true));
                return au.bI(true);
            }

            @Override // com.kwad.sdk.f.a
            public final String getSdkVersion() {
                String strBO = au.bO(true);
                com.kwad.sdk.core.e.c.d("SDKPrivateSafetyDataUtil", "getSdkVersion:" + strBO);
                return strBO;
            }
        };
    }

    public static String cu(Context context) {
        return c(context, false);
    }

    public static String cv(Context context) {
        return d(context, false);
    }

    public static String cw(Context context) {
        return e(context, false);
    }

    public static String cx(Context context) {
        return f(context, false);
    }

    public static String cy(Context context) {
        return g(context, false);
    }

    public static String cz(Context context) {
        return h(context, false);
    }

    private static String d(Context context, boolean z) {
        String strCv = be.cv(context);
        if (!z) {
            return TextUtils.isEmpty(strCv) ? "" : strCv;
        }
        if (TextUtils.isEmpty(strCv)) {
            return (at.IY() || !o.HX()) ? com.kwad.sdk.f.b.a(false, strCv, 1) : com.kwad.sdk.f.b.a(false, strCv, 5);
        }
        return com.kwad.sdk.f.b.a(at.IY() && !TextUtils.isEmpty(at.Jb()), strCv, 0);
    }

    private static String e(Context context, boolean z) {
        String strDj = be.dj(context);
        if (!z) {
            return TextUtils.isEmpty(strDj) ? "" : strDj;
        }
        if (!TextUtils.isEmpty(strDj)) {
            return com.kwad.sdk.f.b.a(at.Jc() && !TextUtils.isEmpty(at.Jd()), strDj.toLowerCase(), 0);
        }
        if (at.Jc() || !o.HY()) {
            return com.kwad.sdk.f.b.a(false, strDj, 0);
        }
        return com.kwad.sdk.f.b.a(false, strDj, al.ao(context, com.kuaishou.weapon.p0.g.d) == 0 ? 3 : 1);
    }

    private static String f(Context context, boolean z) {
        String[] strArrDd = be.dd(context);
        String str = (strArrDd == null || strArrDd.length <= 0) ? null : strArrDd[0];
        if (!z) {
            return TextUtils.isEmpty(str) ? "" : str;
        }
        if (!TextUtils.isEmpty(str)) {
            return com.kwad.sdk.f.b.a(at.IY() && !TextUtils.isEmpty(at.IZ()), str, 0);
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return com.kwad.sdk.f.b.a(false, str, 4);
        }
        if (at.IY() || !o.Ic()) {
            return com.kwad.sdk.f.b.a(false, str, 1);
        }
        return com.kwad.sdk.f.b.a(false, str, SystemUtil.cX(context) ? 3 : 1);
    }

    private static String g(Context context, boolean z) {
        String[] strArrDd = be.dd(context);
        String str = (strArrDd == null || strArrDd.length <= 1) ? null : strArrDd[1];
        if (!z) {
            return TextUtils.isEmpty(str) ? "" : str;
        }
        if (!TextUtils.isEmpty(str)) {
            return com.kwad.sdk.f.b.a(at.IY() && !TextUtils.isEmpty(at.IZ()), str, 0);
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return com.kwad.sdk.f.b.a(false, str, 4);
        }
        if (at.IY() || !o.Ic()) {
            return com.kwad.sdk.f.b.a(false, str, 1);
        }
        return com.kwad.sdk.f.b.a(false, str, SystemUtil.cX(context) ? 3 : 1);
    }

    private static String getAppId() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).getAppId();
    }

    public static String getDeviceId() {
        return bG(false);
    }

    public static String getOaid() {
        return bF(false);
    }

    private static String getSdkVersion() {
        return BuildConfig.VERSION_NAME;
    }

    private static String h(Context context, boolean z) {
        String strCz = be.cz(context);
        if (!z) {
            return TextUtils.isEmpty(strCz) ? "" : strCz;
        }
        if (!TextUtils.isEmpty(strCz)) {
            return com.kwad.sdk.f.b.a(at.IY(), strCz, 0);
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return com.kwad.sdk.f.b.a(false, strCz, 4);
        }
        if (at.IY() || !o.Id()) {
            return com.kwad.sdk.f.b.a(false, strCz, 1);
        }
        return com.kwad.sdk.f.b.a(false, strCz, SystemUtil.cX(context) ? 3 : 1);
    }

    private static String i(Context context, boolean z) {
        String strDg = be.dg(context);
        if (!z) {
            return TextUtils.isEmpty(strDg) ? "" : strDg;
        }
        if (!TextUtils.isEmpty(strDg)) {
            return com.kwad.sdk.f.b.a(at.IY(), strDg, 0);
        }
        if (at.IY() || !o.Ie()) {
            return com.kwad.sdk.f.b.a(false, strDg, 1);
        }
        return com.kwad.sdk.f.b.a(false, strDg, SystemUtil.cX(context) ? 3 : 1);
    }

    public static void init(Context context) {
        com.kwad.sdk.f.b.a(cH(context));
    }

    static /* synthetic */ String j(Context context, boolean z) {
        return c(context, true);
    }

    static /* synthetic */ String k(Context context, boolean z) {
        return d(context, true);
    }

    static /* synthetic */ String l(Context context, boolean z) {
        return e(context, true);
    }

    static /* synthetic */ String m(Context context, boolean z) {
        return f(context, true);
    }

    public static List<bq.a> m(Context context, int i) {
        return bq.m(context, 15);
    }

    static /* synthetic */ String n(Context context, boolean z) {
        return g(context, true);
    }

    static /* synthetic */ String o(Context context, boolean z) {
        return h(context, true);
    }

    static /* synthetic */ String p(Context context, boolean z) {
        return i(context, true);
    }

    static /* synthetic */ String q(Context context, boolean z) {
        return cC(context);
    }

    static /* synthetic */ String r(Context context, boolean z) {
        return cE(context);
    }

    static /* synthetic */ String s(Context context, boolean z) {
        return cG(context);
    }

    static /* synthetic */ String t(Context context, boolean z) {
        return cF(context);
    }
}
