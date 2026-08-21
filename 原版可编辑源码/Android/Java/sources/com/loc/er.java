package com.loc;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.location.LocationManager;
import android.net.ConnectivityManager;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Handler;
import android.provider.Settings;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.bianfeng.libuniverse.Device;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.base.mta.PointCategory;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Locale;

public final class er {
    static int C = -1;
    private static boolean M;
    boolean H;
    private Handler P;
    private fd Q;
    private String R;
    private es T;
    public static String[] F = {com.kuaishou.weapon.p0.g.h, com.kuaishou.weapon.p0.g.g};
    public static String G = "android.permission.ACCESS_BACKGROUND_LOCATION";
    private static volatile boolean S = false;
    Context a = null;
    ConnectivityManager b = null;
    ff c = null;
    fb d = null;
    fh e = null;
    fo f = null;
    ArrayList<eg> g = new ArrayList<>();
    a h = null;
    AMapLocationClientOption i = new AMapLocationClientOption();
    ew j = null;
    long k = 0;
    private int K = 0;
    fp l = null;
    boolean m = false;
    private String L = null;
    fm n = null;
    StringBuilder o = new StringBuilder();
    boolean p = true;
    boolean q = true;
    AMapLocationClientOption.GeoLanguage r = AMapLocationClientOption.GeoLanguage.DEFAULT;
    boolean s = true;
    boolean t = false;
    WifiInfo u = null;
    boolean v = true;
    private String N = null;
    StringBuilder w = null;
    boolean x = false;
    public boolean y = false;
    int z = 12;
    private boolean O = true;
    ey A = null;
    boolean B = false;
    ev D = null;
    String E = null;
    IntentFilter I = null;
    LocationManager J = null;

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[AMapLocationClientOption.GeoLanguage.values().length];
            a = iArr;
            try {
                iArr[AMapLocationClientOption.GeoLanguage.DEFAULT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[AMapLocationClientOption.GeoLanguage.ZH.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[AMapLocationClientOption.GeoLanguage.EN.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    class a extends BroadcastReceiver {
        a() {
        }

        @Override
        public final void onReceive(Context context, Intent intent) {
            if (context == null || intent == null) {
                return;
            }
            try {
                String action = intent.getAction();
                if (TextUtils.isEmpty(action)) {
                    return;
                }
                if (!action.equals("android.net.wifi.SCAN_RESULTS")) {
                    if (!action.equals("android.net.wifi.WIFI_STATE_CHANGED") || er.this.c == null) {
                        return;
                    }
                    er.this.c.j();
                    return;
                }
                if (er.this.c != null) {
                    er.this.c.i();
                }
                try {
                    if (intent.getExtras() == null || !intent.getExtras().getBoolean("resultsUpdated", true) || er.this.c == null) {
                        return;
                    }
                    er.this.c.h();
                } catch (Throwable unused) {
                }
            } catch (Throwable th) {
                fr.a(th, "Aps", "onReceive");
            }
        }
    }

    public er(boolean z) {
        this.H = false;
        this.H = z;
    }

    private static ew a(int i, String str) {
        ew ewVar = new ew("");
        ewVar.setErrorCode(i);
        ewVar.setLocationDetail(str);
        if (i == 15) {
            fx.a((String) null, 2151);
        }
        return ewVar;
    }

    private ew a(ew ewVar, bu buVar, eq eqVar) {
        if (buVar != null) {
            try {
                if (buVar.a != null && buVar.a.length != 0) {
                    fo foVar = new fo();
                    String str = new String(buVar.a, "UTF-8");
                    if (str.contains("\"status\":\"0\"")) {
                        ew ewVarA = foVar.a(str, this.a, buVar, eqVar);
                        ewVarA.h(this.w.toString());
                        return ewVarA;
                    }
                    if (!str.contains("</body></html>")) {
                        return null;
                    }
                    ewVar.setErrorCode(5);
                    if (this.c == null || !this.c.a(this.b)) {
                        eqVar.f("#0502");
                        this.o.append("请求可能被劫持了#0502");
                        fx.a((String) null, 2052);
                    } else {
                        eqVar.f("#0501");
                        this.o.append("您连接的是一个需要登录的网络，请确认已经登入网络#0501");
                        fx.a((String) null, 2051);
                    }
                    ewVar.setLocationDetail(this.o.toString());
                    return ewVar;
                }
            } catch (Throwable th) {
                ewVar.setErrorCode(4);
                fr.a(th, "Aps", "checkResponseEntity");
                eqVar.f("#0403");
                this.o.append("check response exception ex is" + th.getMessage() + "#0403");
                ewVar.setLocationDetail(this.o.toString());
                return ewVar;
            }
        }
        ewVar.setErrorCode(4);
        this.o.append("网络异常,请求异常#0403");
        eqVar.f("#0403");
        ewVar.h(this.w.toString());
        ewVar.setLocationDetail(this.o.toString());
        if (buVar != null) {
            fx.a(buVar.d, 2041);
        }
        return ewVar;
    }

    private StringBuilder a(StringBuilder sb) {
        if (sb == null) {
            sb = new StringBuilder(700);
        } else {
            sb.delete(0, sb.length());
        }
        sb.append(this.d.m());
        sb.append(this.c.o());
        return sb;
    }

    private boolean a(long j) {
        if (!this.O) {
            this.O = true;
            return false;
        }
        if (fz.b() - j < 800) {
            if ((fz.a(this.j) ? fz.a() - this.j.getTime() : 0L) <= com.heytap.mcssdk.constant.a.q) {
                return true;
            }
        }
        return false;
    }

    private ew b(boolean z, eq eqVar) {
        StringBuilder sb;
        StringBuilder sb2;
        String str;
        String str2;
        try {
            if (TextUtils.isEmpty(this.R)) {
                this.R = x.b(o.a(this.a) + Constants.ACCEPT_TIME_SEPARATOR_SP + o.f(this.a));
            }
            StringBuilder sb3 = this.o;
            sb3.append("#id:");
            sb3.append(this.R);
        } catch (Throwable unused) {
        }
        ew ewVar = new ew("");
        try {
            byte[] bArrM = m();
            long jB = fz.b();
            this.k = jB;
            eqVar.a(jB);
            try {
                fr.c(this.a);
                fn fnVarA = this.n.a(this.a, bArrM, fr.a(), fr.b(), z);
                fnVarA.b();
                String strC = fnVarA.c();
                m.a(this.a);
                boolean z2 = !TextUtils.isEmpty(strC) && strC.contains("dualstack");
                int i = fk.a;
                if (m.a() && m.c() && z2) {
                    i = fk.b;
                }
                String strA = m.b() ? null : fk.a(this.a).a(fnVarA, i);
                eqVar.a(i == fk.b ? "v6" : "v4");
                bu buVarA = this.n.a(fnVarA);
                long jB2 = fz.b();
                if (!TextUtils.isEmpty(strA)) {
                    if (buVarA.f) {
                        fk.a(this.a).a(false, i);
                        fk.a(this.a).a(i);
                    } else {
                        fk.a(this.a).a(true, i);
                    }
                }
                if (buVarA == null || TextUtils.isEmpty(strA)) {
                    eqVar.d("SUCCESS");
                } else if (buVarA.f) {
                    eqVar.b(strA);
                    eqVar.c("FAIL");
                    eqVar.d("SUCCESS");
                } else {
                    eqVar.b(strA);
                    eqVar.c("SUCCESS");
                }
                if (this.T != null) {
                    this.T.d();
                }
                eqVar.b(jB2);
                if (buVarA != null) {
                    if (!TextUtils.isEmpty(buVarA.c)) {
                        this.o.append("#csid:" + buVarA.c);
                    }
                    str2 = buVarA.d;
                    ewVar.h(this.w.toString());
                } else {
                    str2 = "";
                }
                ew ewVarA = a(ewVar, buVarA, eqVar);
                if (ewVarA != null) {
                    return ewVarA;
                }
                byte[] bArrB = fg.b(buVarA.a);
                if (bArrB == null) {
                    ewVar.setErrorCode(5);
                    eqVar.f("#0503");
                    this.o.append("解密数据失败#0503");
                    ewVar.setLocationDetail(this.o.toString());
                    fx.a(str2, 2053);
                    return ewVar;
                }
                ew ewVarA2 = this.f.a(ewVar, bArrB, eqVar);
                if (fz.a(ewVarA2)) {
                    c(ewVarA2);
                    ewVarA2.setOffset(this.q);
                    ewVarA2.a(this.p);
                    ewVarA2.f(String.valueOf(this.r));
                    ewVarA2.e("new");
                    ewVarA2.setLocationDetail(this.o.toString());
                    this.E = ewVarA2.a();
                    return ewVarA2;
                }
                String strB = ewVarA2.b();
                this.L = strB;
                fx.a(str2, !TextUtils.isEmpty(strB) ? 2062 : 2061);
                ewVarA2.setErrorCode(6);
                eqVar.f("#0601");
                StringBuilder sb4 = this.o;
                StringBuilder sb5 = new StringBuilder("location faile retype:");
                sb5.append(ewVarA2.d());
                sb5.append(" rdesc:");
                sb5.append(TextUtils.isEmpty(this.L) ? "" : this.L);
                sb5.append("#0601");
                sb4.append(sb5.toString());
                ewVarA2.h(this.w.toString());
                ewVarA2.setLocationDetail(this.o.toString());
                return ewVarA2;
            } catch (Throwable th) {
                fz.b();
                eqVar.d("FAIL");
                fk.a(this.a).a(false, fk.a);
                fr.a(th, "Aps", "getApsLoc req");
                fx.a("/mobile/binary", th);
                if (fz.d(this.a)) {
                    if (th instanceof k) {
                        k kVar = th;
                        if (kVar.a().contains("网络异常状态码")) {
                            eqVar.f("#0404");
                            StringBuilder sb6 = this.o;
                            sb6.append("网络异常，状态码错误#0404");
                            sb6.append(kVar.f());
                            ew ewVarA3 = a(4, this.o.toString());
                            ewVarA3.h(this.w.toString());
                            return ewVarA3;
                        }
                        if (kVar.f() == 23 || Math.abs((fz.b() - this.k) - this.i.getHttpTimeOut()) < 500) {
                            eqVar.f("#0402");
                            sb2 = this.o;
                            str = "网络异常，连接超时#0402";
                        } else {
                            sb = new StringBuilder("#0403,");
                        }
                    } else {
                        sb = new StringBuilder("#0403,");
                    }
                    sb.append(th.getMessage());
                    eqVar.f(sb.toString());
                    this.o.append("网络异常,请求异常#0403");
                    ew ewVarA32 = a(4, this.o.toString());
                    ewVarA32.h(this.w.toString());
                    return ewVarA32;
                }
                eqVar.f("#0401");
                sb2 = this.o;
                str = "网络异常，未连接到网络，请连接网络#0401";
                sb2.append(str);
                ew ewVarA322 = a(4, this.o.toString());
                ewVarA322.h(this.w.toString());
                return ewVarA322;
            }
        } catch (Throwable th2) {
            eqVar.f("#0301");
            this.o.append("get parames error:" + th2.getMessage() + "#0301");
            fx.a((String) null, 2031);
            ew ewVarA4 = a(3, this.o.toString());
            ewVarA4.h(this.w.toString());
            return ewVarA4;
        }
    }

    private void b(Context context) {
        try {
            if (context.checkCallingOrSelfPermission(x.c("EYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX1NFQ1VSRV9TRVRUSU5HUw==")) == 0) {
                this.m = true;
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:148:0x037a  */
    /* JADX WARN: Removed duplicated region for block: B:153:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:80:0x01d0  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x0257 A[PHI: r1
      0x0257: PHI (r1v17 java.lang.StringBuilder) = 
      (r1v16 java.lang.StringBuilder)
      (r1v16 java.lang.StringBuilder)
      (r1v18 java.lang.StringBuilder)
      (r1v18 java.lang.StringBuilder)
     binds: [B:97:0x028c, B:99:0x0290, B:91:0x0251, B:93:0x0255] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String c(eq eqVar) {
        String str;
        StringBuilder sb;
        String str2;
        StringBuilder sb2;
        String str3;
        StringBuilder sb3;
        StringBuilder sb4;
        String str4;
        int iH = this.d.h();
        fa faVarE = this.d.e();
        fa faVarF = this.d.f();
        ArrayList<eg> arrayList = this.g;
        boolean z = arrayList == null || arrayList.isEmpty();
        String string = "";
        if (faVarE == null && faVarF == null && z) {
            if (this.b == null) {
                this.b = (ConnectivityManager) fz.a(this.a, "connectivity");
            }
            if (fz.c() >= 31) {
                if (fz.a(this.a) && !this.c.l()) {
                    this.z = 18;
                    this.o.append("飞行模式下关闭了WIFI开关，请关闭飞行模式或者打开WIFI开关#1802");
                    fx.a((String) null, 2132);
                    eqVar.f("#1802");
                    return "";
                }
            } else if (fz.a(this.a) && !this.c.k()) {
                this.z = 18;
                this.o.append("飞行模式下关闭了WIFI开关，请关闭飞行模式或者打开WIFI开关#1801");
                fx.a((String) null, 2132);
                eqVar.f("#1801");
                return "";
            }
            if (fz.c() >= 28) {
                if (this.J == null) {
                    this.J = (LocationManager) this.a.getApplicationContext().getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
                }
                if (!((Boolean) fv.a(this.J, "isLocationEnabled", new Object[0])).booleanValue()) {
                    this.z = 12;
                    this.o.append("定位服务没有开启，请在设置中打开定位服务开关#1206");
                    eqVar.f("#1206");
                    fx.a((String) null, 2121);
                    return "";
                }
            }
            if (!fz.e(this.a)) {
                this.z = 12;
                this.o.append("定位权限被禁用,请授予应用定位权限#1201");
                eqVar.f("#1201");
                fx.a((String) null, 2121);
                return "";
            }
            if (fz.c() >= 24 && fz.c() < 28 && Settings.Secure.getInt(this.a.getContentResolver(), "location_mode", 0) == 0) {
                this.z = 12;
                eqVar.f("#1206");
                this.o.append("定位服务没有开启，请在设置中打开定位服务开关#1206");
                fx.a((String) null, 2121);
                return "";
            }
            String strK = this.d.k();
            String strD = this.c.d();
            if (this.c.a(this.b) && strD != null) {
                this.z = 12;
                eqVar.f("#1202");
                this.o.append("获取基站与获取WIFI的权限都被禁用，请在安全软件中打开应用的定位权限#1202");
                fx.a((String) null, 2121);
                return "";
            }
            if (strK != null) {
                this.z = 12;
                if (this.c.k()) {
                    eqVar.f("#1205");
                    sb4 = this.o;
                    str4 = "获取的WIFI列表为空，并且获取基站权限被禁用，请在安全软件中打开应用的定位权限#1205";
                } else {
                    eqVar.f("#1204");
                    sb4 = this.o;
                    str4 = "WIFI开关关闭，并且获取基站权限被禁用，请在安全软件中打开应用的定位权限或者打开WIFI开关#1204";
                }
                sb4.append(str4);
                fx.a((String) null, 2121);
                return "";
            }
            if (!this.c.k() && !this.d.n()) {
                this.z = 19;
                eqVar.f("#1901");
                this.o.append("没有检查到SIM卡，并且WIFI开关关闭，请打开WIFI开关或者插入SIM卡#1901");
                fx.a((String) null, 2133);
                return "";
            }
            if (this.c.k()) {
                str3 = "#1302";
                eqVar.f("#1302");
                if (this.c.c() != null) {
                    this.o.append("获取到的基站和WIFI信息均为空，请检查是否授予APP定位权限");
                    if (!fz.f(this.a)) {
                        this.o.append("或后台运行没有后台定位权限");
                    }
                    sb3 = this.o;
                } else {
                    this.o.append("获取到的基站和WIFI信息均为空，请移动到有WIFI的区域，若确定当前区域有WIFI，请检查是否授予APP定位权限");
                    if (!fz.f(this.a)) {
                    }
                    sb3 = this.o;
                }
            } else {
                eqVar.f("#1301");
                sb3 = this.o;
                str3 = "获取到的基站为空，并且关闭了WIFI开关，请您打开WIFI开关再发起定位#1301";
            }
            sb3.append(str3);
            this.z = 13;
            fx.a((String) null, 2131);
            return "";
        }
        WifiInfo wifiInfoM = this.c.m();
        this.u = wifiInfoM;
        this.v = ff.a(wifiInfoM);
        str = "cgi";
        if (iH != 0) {
            if (iH != 1) {
                if (iH != 2) {
                    this.z = 11;
                    fx.a((String) null, 2111);
                    eqVar.f("#1101");
                    this.o.append("get cgi failure#1101");
                } else if (faVarE != null) {
                    sb2 = new StringBuilder();
                    sb2.append(faVarE.a);
                    sb2.append("#");
                    sb2.append(faVarE.b);
                    sb2.append("#");
                    sb2.append(faVarE.h);
                    sb2.append("#");
                    sb2.append(faVarE.i);
                    sb2.append("#");
                    sb2.append(faVarE.j);
                    sb2.append("#");
                    sb2.append(PointCategory.NETWORK);
                    sb2.append("#");
                    if (!this.g.isEmpty() || this.v) {
                        str = "cgiwifi";
                    }
                    sb2.append(str);
                }
            } else if (faVarE != null) {
                sb2 = new StringBuilder();
                sb2.append(faVarE.a);
                sb2.append("#");
                sb2.append(faVarE.b);
                sb2.append("#");
                sb2.append(faVarE.c);
                sb2.append("#");
                sb2.append(faVarE.d);
                sb2.append("#");
                sb2.append(PointCategory.NETWORK);
                sb2.append("#");
                if (!this.g.isEmpty() || this.v) {
                }
                sb2.append(str);
            }
            if (TextUtils.isEmpty(string)) {
                return string;
            }
            if (!string.startsWith("#")) {
                string = "#" + string;
            }
            return fz.e() + string;
        }
        boolean z2 = !this.g.isEmpty() || this.v;
        boolean z3 = faVarF != null;
        if (!z3) {
            if (this.v && this.g.isEmpty()) {
                this.z = 2;
                eqVar.f("#0201");
                this.o.append("当前基站为伪基站，并且WIFI权限被禁用，请在安全软件中打开应用的定位权限#0201");
                fx.a((String) null, 2021);
                return "";
            }
            if (this.g.size() == 1) {
                this.z = 2;
                if (!this.v) {
                    eqVar.f("#0202");
                    this.o.append("当前基站为伪基站，并且搜到的WIFI数量不足，请移动到WIFI比较丰富的区域#0202");
                    fx.a((String) null, 2022);
                    return "";
                }
                if (this.g.get(0).h) {
                    eqVar.f("#0202");
                    this.o.append("当前基站为伪基站，并且搜到的WIFI数量不足，请移动到WIFI比较丰富的区域#0202");
                    fx.a((String) null, 2021);
                    return "";
                }
            }
        }
        String str5 = String.format(Locale.US, "#%s#", PointCategory.NETWORK);
        if (z3) {
            sb2 = new StringBuilder();
            sb2.append(faVarF.b());
            str = (!this.g.isEmpty() || this.v) ? "cgiwifi" : "cgi";
            sb2.append(PointCategory.NETWORK);
            sb2.append("#");
            sb2.append(str);
        } else if (z2) {
            sb2 = new StringBuilder();
            sb2.append(str5);
            sb2.append(Device.NETWORN_WIFI);
        } else {
            this.z = 2;
            if (this.c.k()) {
                eqVar.f("#0204");
                sb = this.o;
                str2 = "当前基站为伪基站,并且没有搜索到WIFI，请移动到WIFI比较丰富的区域#0204";
            } else {
                eqVar.f("#0203");
                sb = this.o;
                str2 = "当前基站为伪基站,并且关闭了WIFI开关，请在设置中打开WIFI开关#0203";
            }
            sb.append(str2);
            fx.a((String) null, 2022);
            if (TextUtils.isEmpty(string)) {
            }
        }
        string = sb2.toString();
        if (TextUtils.isEmpty(string)) {
        }
    }

    private static void c(ew ewVar) {
        if (ewVar.getErrorCode() == 0 && ewVar.getLocationType() == 0) {
            if ("-5".equals(ewVar.d()) || "1".equals(ewVar.d()) || "2".equals(ewVar.d()) || com.tencent.connect.common.Constants.VIA_REPORT_TYPE_MAKE_FRIEND.equals(ewVar.d()) || "24".equals(ewVar.d()) || RePlugin.PROCESS_UI.equals(ewVar.d())) {
                ewVar.setLocationType(5);
            } else {
                ewVar.setLocationType(6);
            }
        }
    }

    private void d(ew ewVar) {
        if (ewVar != null) {
            this.j = ewVar;
        }
    }

    private void i() {
        if (this.n != null) {
            try {
                if (this.i == null) {
                    this.i = new AMapLocationClientOption();
                }
                this.n.a(this.i.getHttpTimeOut(), this.i.getLocationProtocol().equals(AMapLocationClientOption.AMapLocationProtocol.HTTPS), j());
            } catch (Throwable unused) {
            }
        }
    }

    private int j() {
        int i;
        if (this.i.getGeoLanguage() != null && (i = 1.a[this.i.getGeoLanguage().ordinal()]) != 1) {
            if (i == 2) {
                return 1;
            }
            if (i == 3) {
                return 2;
            }
        }
        return 0;
    }

    private void k() {
        boolean zIsNeedAddress;
        boolean z;
        boolean zIsOffset;
        boolean zIsLocationCacheEnable;
        AMapLocationClientOption.GeoLanguage geoLanguage = AMapLocationClientOption.GeoLanguage.DEFAULT;
        boolean z2 = true;
        try {
            geoLanguage = this.i.getGeoLanguage();
            zIsNeedAddress = this.i.isNeedAddress();
            try {
                zIsOffset = this.i.isOffset();
                try {
                    zIsLocationCacheEnable = this.i.isLocationCacheEnable();
                } catch (Throwable unused) {
                    z2 = zIsOffset;
                    z = true;
                    boolean z3 = z;
                    zIsOffset = z2;
                    zIsLocationCacheEnable = z3;
                    this.q = zIsOffset;
                    this.p = zIsNeedAddress;
                    this.s = zIsLocationCacheEnable;
                    this.r = geoLanguage;
                }
            } catch (Throwable unused2) {
            }
        } catch (Throwable unused3) {
            zIsNeedAddress = true;
        }
        try {
            this.t = this.i.isOnceLocationLatest();
            this.B = this.i.isSensorEnable();
            if (zIsOffset != this.q || zIsNeedAddress != this.p || zIsLocationCacheEnable != this.s || geoLanguage != this.r) {
                r();
            }
        } catch (Throwable unused4) {
            z = zIsLocationCacheEnable;
            z2 = zIsOffset;
            boolean z32 = z;
            zIsOffset = z2;
            zIsLocationCacheEnable = z32;
        }
        this.q = zIsOffset;
        this.p = zIsNeedAddress;
        this.s = zIsLocationCacheEnable;
        this.r = geoLanguage;
    }

    private void l() {
        try {
            if (this.h == null) {
                this.h = new a();
            }
            if (this.I == null) {
                IntentFilter intentFilter = new IntentFilter();
                this.I = intentFilter;
                intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
                this.I.addAction("android.net.wifi.SCAN_RESULTS");
            }
            this.a.registerReceiver(this.h, this.I);
        } catch (Throwable th) {
            fr.a(th, "Aps", "initBroadcastListener");
        }
    }

    private byte[] m() throws Throwable {
        if (this.l == null) {
            this.l = new fp();
        }
        if (this.i == null) {
            this.i = new AMapLocationClientOption();
        }
        this.l.a(this.a, this.i.isNeedAddress(), this.i.isOffset(), this.d, this.c, this.b, this.E, this.Q);
        return this.l.a();
    }

    private boolean n() {
        return this.k == 0 || fz.b() - this.k > 20000;
    }

    private void o() {
        ff ffVar = this.c;
        if (ffVar == null) {
            return;
        }
        ffVar.a(this.m);
    }

    private boolean p() {
        ArrayList<eg> arrayListE = this.c.e();
        this.g = arrayListE;
        return arrayListE == null || arrayListE.size() <= 0;
    }

    private void q() {
        if (this.N != null) {
            this.N = null;
        }
        StringBuilder sb = this.w;
        if (sb != null) {
            sb.delete(0, sb.length());
        }
    }

    private void r() {
        try {
            if (this.e != null) {
                this.e.a();
            }
            d(null);
            this.O = false;
            if (this.D != null) {
                this.D.a();
            }
        } catch (Throwable th) {
            fr.a(th, "Aps", "cleanCache");
        }
    }

    public final ew a(double d, double d2) {
        try {
            String strA = this.n.a(this.a, d, d2);
            if (!strA.contains("\"status\":\"1\"")) {
                return null;
            }
            ew ewVarA = this.f.a(strA);
            ewVarA.setLatitude(d);
            ewVarA.setLongitude(d2);
            return ewVarA;
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:50|(1:52)(2:54|(1:56)(9:57|(1:59)|86|60|(2:63|(1:65)(2:66|(1:68)(2:69|(1:71)(1:72))))|75|(3:77|(1:82)(1:81)|83)|84|85))|53|86|60|(2:63|(0)(0))|75|(0)|84|85) */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0164 A[Catch: all -> 0x0181, TryCatch #0 {all -> 0x0181, blocks: (B:60:0x0154, B:63:0x015a, B:65:0x0164, B:68:0x016e, B:71:0x0178, B:72:0x017d), top: B:86:0x0154 }] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0168  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x019d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ew a(eq eqVar) throws Throwable {
        float fE;
        ey eyVar;
        long jB;
        d();
        eqVar.e("conitue");
        if (this.a == null) {
            eqVar.f("#0101");
            this.o.append("context is null#0101");
            return a(1, this.o.toString());
        }
        int i = this.K + 1;
        this.K = i;
        if (i == 1) {
            o();
        }
        if (a(this.k) && fz.a(this.j)) {
            if (this.s && fq.a(this.j.getTime())) {
                this.j.setLocationType(2);
            }
            return this.j;
        }
        ey eyVar2 = this.A;
        if (eyVar2 != null) {
            if (this.B) {
                eyVar2.a();
            } else {
                eyVar2.b();
            }
        }
        try {
            this.c.b(this.i.isOnceLocationLatest() || !this.i.isOnceLocation());
            this.g = this.c.e();
        } catch (Throwable th) {
            fr.a(th, "Aps", "getLocation getScanResultsParam");
        }
        try {
            this.d.a(false, p());
        } catch (Throwable th2) {
            fr.a(th2, "Aps", "getLocation getCgiListParam");
        }
        String strC = c(eqVar);
        this.N = strC;
        if (TextUtils.isEmpty(strC)) {
            return a(this.z, this.o.toString());
        }
        this.w = a(this.w);
        if (this.c.n()) {
            ew ewVarA = a(15, "networkLocation has been mocked!#1502");
            eqVar.f("#1502");
            ewVarA.setMock(true);
            ewVarA.setTrustedLevel(4);
            return ewVarA;
        }
        ew ewVarA2 = this.e.a(this.d, n(), this.j, this.c, this.w, this.N, this.a, false);
        if (fz.a(ewVarA2)) {
            ewVarA2.setTrustedLevel(2);
        } else {
            ewVarA2 = b(true, eqVar);
            if (!fz.a(ewVarA2)) {
                ew ewVarA3 = this.e.a(this.d, false, this.j, this.c, this.w, this.N, this.a, true);
                if (fz.a(ewVarA3)) {
                    eqVar.f("#0001");
                    ewVarA3.setTrustedLevel(2);
                    d(ewVarA3);
                    ewVarA2 = ewVarA3;
                }
                if (this.c != null && ewVarA2 != null) {
                    jB = ff.b();
                    if (jB > 15) {
                        ewVarA2.setTrustedLevel(1);
                    } else if (jB <= 120) {
                        ewVarA2.setTrustedLevel(2);
                    } else if (jB <= 600) {
                        ewVarA2.setTrustedLevel(3);
                    } else {
                        ewVarA2.setTrustedLevel(4);
                    }
                }
                this.e.a(this.N, this.w, ewVarA2, this.a, true);
                fz.a(ewVarA2);
                StringBuilder sb = this.w;
                sb.delete(0, sb.length());
                if (ewVarA2 != null) {
                    if (!this.B || (eyVar = this.A) == null) {
                        ewVarA2.setAltitude(0.0d);
                        fE = 0.0f;
                        ewVarA2.setBearing(0.0f);
                    } else {
                        ewVarA2.setAltitude(eyVar.c());
                        ewVarA2.setBearing(this.A.d());
                        fE = (float) this.A.e();
                    }
                    ewVarA2.setSpeed(fE);
                }
                d(ewVarA2);
                return this.j;
            }
            ewVarA2.e("new");
            this.e.a(this.w.toString());
            this.e.a(this.d.e());
        }
        d(ewVarA2);
        if (this.c != null) {
            jB = ff.b();
            if (jB > 15) {
            }
        }
        this.e.a(this.N, this.w, ewVarA2, this.a, true);
        fz.a(ewVarA2);
        StringBuilder sb2 = this.w;
        sb2.delete(0, sb2.length());
        if (ewVarA2 != null) {
        }
        d(ewVarA2);
        return this.j;
    }

    public final ew a(ew ewVar) {
        this.D.a(this.s);
        return this.D.a(ewVar);
    }

    public final ew a(boolean z) {
        int i;
        String string;
        if (this.c.n()) {
            i = 15;
            string = "networkLocation has been mocked!#1502";
        } else {
            if (!TextUtils.isEmpty(this.N)) {
                ew ewVarA = this.e.a(this.a, this.N, this.w, true, z);
                if (fz.a(ewVarA)) {
                    d(ewVarA);
                }
                return ewVarA;
            }
            i = this.z;
            string = this.o.toString();
        }
        return a(i, string);
    }

    public final ew a(boolean z, eq eqVar) {
        eqVar.e(z ? "statics" : "first");
        if (this.a == null) {
            eqVar.f("#0101");
            this.o.append("context is null#0101");
            fx.a((String) null, 2011);
            return a(1, this.o.toString());
        }
        if (this.c.n()) {
            eqVar.f("#1502");
            return a(15, "networkLocation has been mocked!#1502");
        }
        b();
        if (TextUtils.isEmpty(this.N)) {
            return a(this.z, this.o.toString());
        }
        ew ewVarB = b(z, eqVar);
        if (fz.a(ewVarB) && !S) {
            this.e.a(this.w.toString());
            this.e.a(this.d.e());
            d(ewVarB);
        }
        S = true;
        return ewVarB;
    }

    public final void a() {
        fb fbVar = this.d;
        if (fbVar != null) {
            fbVar.b();
        }
    }

    public final void a(Context context) {
        try {
            if (this.a != null) {
                return;
            }
            this.D = new ev();
            Context applicationContext = context.getApplicationContext();
            this.a = applicationContext;
            fz.b(applicationContext);
            if (this.c == null) {
                this.c = new ff(this.a, (WifiManager) fz.a(this.a, Device.NETWORN_WIFI), this.P);
            }
            if (this.d == null) {
                this.d = new fb(this.a, this.P);
            }
            this.Q = new fd(context, this.P);
            if (this.e == null) {
                this.e = new fh();
            }
            if (this.f == null) {
                this.f = new fo();
            }
        } catch (Throwable th) {
            th.printStackTrace();
            fr.a(th, "Aps", "initBase");
        }
    }

    public final void a(Handler handler) {
        this.P = handler;
    }

    public final void a(AMapLocation aMapLocation) {
        if (aMapLocation.getErrorCode() != 0) {
            return;
        }
        fc fcVar = new fc();
        fcVar.a = aMapLocation.getLocationType();
        fcVar.d = aMapLocation.getTime();
        fcVar.e = (int) aMapLocation.getAccuracy();
        fcVar.b = aMapLocation.getLatitude();
        fcVar.c = aMapLocation.getLongitude();
        if (aMapLocation.getLocationType() == 1) {
            this.Q.a(fcVar);
        }
    }

    public final void a(AMapLocationClientOption aMapLocationClientOption) {
        this.i = aMapLocationClientOption;
        if (aMapLocationClientOption == null) {
            this.i = new AMapLocationClientOption();
        }
        ff ffVar = this.c;
        if (ffVar != null) {
            this.i.isWifiActiveScan();
            ffVar.a(this.i.isWifiScan(), this.i.isMockEnable(), AMapLocationClientOption.isOpenAlwaysScanWifi(), aMapLocationClientOption.getScanWifiInterval());
        }
        i();
        fh fhVar = this.e;
        if (fhVar != null) {
            fhVar.a(this.i);
        }
        fo foVar = this.f;
        if (foVar != null) {
            foVar.a(this.i);
        }
        k();
    }

    public final void a(ew ewVar, int i) {
        if (ewVar != null && ewVar.getErrorCode() == 0) {
            fc fcVar = new fc();
            fcVar.d = ewVar.getTime();
            fcVar.e = (int) ewVar.getAccuracy();
            fcVar.b = ewVar.getLatitude();
            fcVar.c = ewVar.getLongitude();
            fcVar.a = i;
            fcVar.g = Integer.parseInt(ewVar.d());
            fcVar.h = ewVar.l();
            this.Q.b(fcVar);
        }
    }

    public final void b() {
        this.n = fm.a(this.a);
        i();
        if (this.b == null) {
            this.b = (ConnectivityManager) fz.a(this.a, "connectivity");
        }
        if (this.l == null) {
            this.l = new fp();
        }
    }

    public final void b(eq eqVar) {
        try {
            if (this.x) {
                return;
            }
            q();
            if (this.t) {
                l();
            }
            this.c.b(this.t);
            this.g = this.c.e();
            this.d.a(true, p());
            String strC = c(eqVar);
            this.N = strC;
            if (!TextUtils.isEmpty(strC)) {
                this.w = a(this.w);
            }
        } catch (Throwable th) {
            fr.a(th, "Aps", "initFirstLocateParam");
        }
        this.x = true;
    }

    public final void b(ew ewVar) {
        if (fz.a(ewVar)) {
            this.e.a(this.N, this.w, ewVar, this.a, true);
        }
    }

    public final void c() {
        if (this.A == null) {
            this.A = new ey(this.a);
        }
        l();
        this.c.b(false);
        this.g = this.c.e();
        this.d.a(false, p());
        this.e.a(this.a);
        b(this.a);
        this.y = true;
    }

    public final void d() {
        if (this.o.length() > 0) {
            StringBuilder sb = this.o;
            sb.delete(0, sb.length());
        }
    }

    public final void e() {
        this.E = null;
        this.x = false;
        this.y = false;
        fh fhVar = this.e;
        if (fhVar != null) {
            fhVar.b(this.a);
        }
        ev evVar = this.D;
        if (evVar != null) {
            evVar.a();
        }
        if (this.f != null) {
            this.f = null;
        }
        fd fdVar = this.Q;
        if (fdVar != null) {
            fdVar.a(this.H);
        }
        try {
            if (this.a != null && this.h != null) {
                this.a.unregisterReceiver(this.h);
            }
        } finally {
            try {
            } finally {
            }
        }
        fb fbVar = this.d;
        if (fbVar != null) {
            fbVar.a(this.H);
        }
        ff ffVar = this.c;
        if (ffVar != null) {
            ffVar.c(this.H);
        }
        ArrayList<eg> arrayList = this.g;
        if (arrayList != null) {
            arrayList.clear();
        }
        ey eyVar = this.A;
        if (eyVar != null) {
            eyVar.f();
        }
        this.j = null;
        this.a = null;
        this.w = null;
        this.J = null;
    }

    public final void f() {
        es esVar = this.T;
        if (esVar != null) {
            esVar.d();
        }
    }

    public final void g() {
        try {
            if (this.a == null) {
                return;
            }
            if (this.T == null) {
                this.T = new es(this.a);
            }
            this.T.a(this.d, this.c, this.P);
        } catch (Throwable th) {
            av.b(th, "as", "stc");
        }
    }

    public final void h() {
        es esVar = this.T;
        if (esVar != null) {
            esVar.a();
        }
    }
}
