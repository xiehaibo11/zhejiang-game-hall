package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import android.util.SparseArray;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.bianfeng.platform.UserInterface;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public final class fx {
    public SparseArray<Long> a = new SparseArray<>();
    public int b = -1;
    public long c = 0;
    String[] d = {"ol", "cl", "gl", "ha", "bs", "ds"};
    public int e = -1;
    public long f = -1;
    private static List<bz> i = new ArrayList();
    private static JSONArray j = null;
    static AMapLocation g = null;
    static boolean h = false;

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[AMapLocationClientOption.AMapLocationMode.values().length];
            a = iArr;
            try {
                iArr[AMapLocationClientOption.AMapLocationMode.Battery_Saving.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[AMapLocationClientOption.AMapLocationMode.Device_Sensors.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[AMapLocationClientOption.AMapLocationMode.Hight_Accuracy.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    private static String a(int i2) {
        if (i2 == 2011) {
            return "ContextIsNull";
        }
        if (i2 == 2031) {
            return "CreateApsReqException";
        }
        if (i2 == 2041) {
            return "ResponseResultIsNull";
        }
        if (i2 == 2081) {
            return "LocalLocException";
        }
        if (i2 == 2091) {
            return "InitException";
        }
        if (i2 == 2111) {
            return "ErrorCgiInfo";
        }
        if (i2 == 2121) {
            return "NotLocPermission";
        }
        if (i2 == 2141) {
            return "NoEnoughStatellites";
        }
        if (i2 == 2021) {
            return "OnlyMainWifi";
        }
        if (i2 == 2022) {
            return "OnlyOneWifiButNotMain";
        }
        if (i2 == 2061) {
            return "ServerRetypeError";
        }
        if (i2 == 2062) {
            return "ServerLocFail";
        }
        switch (i2) {
            case 2051:
                return "NeedLoginNetWork\t";
            case 2052:
                return "MaybeIntercepted";
            case 2053:
                return "DecryptResponseException";
            case 2054:
                return "ParserDataException";
            default:
                switch (i2) {
                    case 2101:
                        return "BindAPSServiceException";
                    case 2102:
                        return "AuthClientScodeFail";
                    case 2103:
                        return "NotConfigAPSService";
                    default:
                        switch (i2) {
                            case 2131:
                                return "NoCgiOAndWifiInfo";
                            case 2132:
                                return "AirPlaneModeAndWifiOff";
                            case 2133:
                                return "NoCgiAndWifiOff";
                            default:
                                switch (i2) {
                                    case 2151:
                                        return "MaybeMockNetLoc";
                                    case 2152:
                                        return "MaybeMockGPSLoc";
                                    case 2153:
                                        return "UNSUPPORT_COARSE_LBSLOC";
                                    case 2154:
                                        return "UNSUPPORT_CONTINUE_LOC";
                                    default:
                                        return "";
                                }
                        }
                }
        }
    }

    public static void a(long j2, long j3) {
        try {
            if (h) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("gpsTime:");
            stringBuffer.append(fz.a(j2, "yyyy-MM-dd HH:mm:ss.SSS"));
            stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            stringBuffer.append("sysTime:");
            stringBuffer.append(fz.a(j3, "yyyy-MM-dd HH:mm:ss.SSS"));
            stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            long jU = fq.u();
            String strA = 0 != jU ? fz.a(jU, "yyyy-MM-dd HH:mm:ss.SSS") : "0";
            stringBuffer.append("serverTime:");
            stringBuffer.append(strA);
            a("checkgpstime", stringBuffer.toString());
            if (0 != jU && Math.abs(j2 - jU) < 31536000000L) {
                stringBuffer.append(", correctError");
                a("checkgpstimeerror", stringBuffer.toString());
            }
            stringBuffer.delete(0, stringBuffer.length());
            h = true;
        } catch (Throwable unused) {
        }
    }

    public static synchronized void a(Context context) {
        if (context != null) {
            try {
                if (fq.a()) {
                    if (i != null && i.size() > 0) {
                        ArrayList arrayList = new ArrayList();
                        arrayList.addAll(i);
                        ca.b(arrayList, context);
                        i.clear();
                    }
                    f(context);
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", UserInterface.FUNCTION_DESTROY);
            }
        }
    }

    public static void a(Context context, int i2, int i3, long j2, long j3) {
        if (i2 == -1 || i3 == -1) {
            return;
        }
        try {
            a(context, "O012", i2, i3, j2, j3);
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "reportServiceAliveTime");
        }
    }

    public static void a(Context context, long j2, boolean z) {
        if (context != null) {
            try {
                if (fq.a()) {
                    a(context, j2, z, "O015");
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "reportGPSLocUseTime");
            }
        }
    }

    private static void a(Context context, long j2, boolean z, String str) {
        a(context, str, !z ? "abroad" : "domestic", Long.valueOf(j2).intValue());
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0034 A[Catch: all -> 0x00f0, TRY_LEAVE, TryCatch #0 {all -> 0x00f0, blocks: (B:4:0x0003, B:8:0x000b, B:26:0x0034, B:37:0x0047, B:39:0x004b, B:40:0x0052, B:42:0x008b, B:45:0x0098, B:46:0x00d9, B:48:0x00eb, B:43:0x0091), top: B:58:0x0003 }] */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized void a(Context context, AMapLocation aMapLocation) {
        int i2;
        try {
            if (fz.a(aMapLocation)) {
                int locationType = aMapLocation.getLocationType();
                boolean z = false;
                if (locationType == 1) {
                    i2 = 0;
                } else if (locationType == 2 || locationType == 4) {
                    i2 = 1;
                } else if (locationType == 11) {
                    i2 = 4;
                } else if (locationType == 8) {
                    i2 = 3;
                } else {
                    if (locationType != 9) {
                        i2 = 0;
                        if (z) {
                            int iC = fq.c();
                            if (iC != 0) {
                                if (i2 == 0 || i2 == 4) {
                                    if (iC == 2) {
                                        return;
                                    }
                                } else if (iC == 1) {
                                    return;
                                }
                            }
                            if (j == null) {
                                j = new JSONArray();
                            }
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put(com.tkay.core.common.h.c.C, fz.b(aMapLocation.getLongitude()));
                            jSONObject.put("lat", fz.b(aMapLocation.getLatitude()));
                            jSONObject.put("type", i2);
                            jSONObject.put("timestamp", fz.a());
                            if (aMapLocation.getCoordType().equalsIgnoreCase(AMapLocation.COORD_TYPE_WGS84)) {
                                jSONObject.put("coordType", 1);
                            } else {
                                jSONObject.put("coordType", 2);
                            }
                            if (i2 == 0) {
                                JSONObject jSONObject2 = new JSONObject();
                                jSONObject2.put("accuracy", fz.c(aMapLocation.getAccuracy()));
                                jSONObject2.put("altitude", fz.c(aMapLocation.getAltitude()));
                                jSONObject2.put("bearing", fz.c(aMapLocation.getBearing()));
                                jSONObject2.put("speed", fz.c(aMapLocation.getSpeed()));
                                jSONObject.put("extension", jSONObject2);
                            }
                            JSONArray jSONArrayPut = j.put(jSONObject);
                            j = jSONArrayPut;
                            if (jSONArrayPut.length() >= fq.b()) {
                                f(context);
                            }
                        }
                    }
                    i2 = 2;
                }
                z = true;
                if (z) {
                }
            }
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "recordOfflineLocLog");
        }
    }

    public static void a(Context context, AMapLocation aMapLocation, eq eqVar) {
        int i2;
        if (aMapLocation == null) {
            return;
        }
        try {
            if (!"gps".equalsIgnoreCase(aMapLocation.getProvider()) && aMapLocation.getLocationType() != 1) {
                String str = a(aMapLocation) ? "abroad" : "domestic";
                String str2 = "cache";
                if (aMapLocation.getErrorCode() != 0) {
                    int errorCode = aMapLocation.getErrorCode();
                    if (errorCode == 4 || errorCode == 5 || errorCode == 6 || errorCode == 11) {
                        str2 = "net";
                    }
                    i2 = 0;
                } else {
                    int locationType = aMapLocation.getLocationType();
                    if (locationType == 5 || locationType == 6) {
                        str2 = "net";
                    }
                    i2 = 1;
                }
                a(context, "O016", str2, str, i2, aMapLocation.getErrorCode(), eqVar);
            }
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "reportBatting");
        }
    }

    private static void a(Context context, String str, int i2, int i3, long j2, long j3) {
        if (context != null) {
            try {
                if (fq.a()) {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("param_int_first", i2);
                    jSONObject.put("param_int_second", i3);
                    jSONObject.put("param_long_first", j2);
                    jSONObject.put("param_long_second", j3);
                    a(context, str, jSONObject);
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "applyStatisticsEx");
            }
        }
    }

    private static void a(Context context, String str, String str2, int i2) {
        if (context != null) {
            try {
                if (fq.a()) {
                    JSONObject jSONObject = new JSONObject();
                    if (!TextUtils.isEmpty(str2)) {
                        jSONObject.put("param_string_first", str2);
                    }
                    if (!TextUtils.isEmpty(null)) {
                        jSONObject.put("param_string_second", (Object) null);
                    }
                    if (i2 != Integer.MAX_VALUE) {
                        jSONObject.put("param_int_first", i2);
                    }
                    a(context, str, jSONObject);
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "applyStatisticsEx");
            }
        }
    }

    private static void a(Context context, String str, String str2, String str3, int i2, int i3, eq eqVar) {
        if (context != null) {
            try {
                if (fq.a()) {
                    JSONObject jSONObject = new JSONObject();
                    if (!TextUtils.isEmpty(str2)) {
                        jSONObject.put("param_string_first", str2);
                    }
                    if (!TextUtils.isEmpty(str3)) {
                        jSONObject.put("param_string_second", str3);
                    }
                    if (i2 != Integer.MAX_VALUE) {
                        jSONObject.put("param_int_first", i2);
                    }
                    if (i3 != Integer.MAX_VALUE) {
                        jSONObject.put("param_int_second", i3);
                    }
                    if (eqVar != null) {
                        if (!TextUtils.isEmpty(eqVar.d())) {
                            jSONObject.put("dns", eqVar.d());
                        }
                        if (!TextUtils.isEmpty(eqVar.e())) {
                            jSONObject.put("domain", eqVar.e());
                        }
                        if (!TextUtils.isEmpty(eqVar.f())) {
                            jSONObject.put("type", eqVar.f());
                        }
                        if (!TextUtils.isEmpty(eqVar.g())) {
                            jSONObject.put(com.tkay.expressad.foundation.d.r.ac, eqVar.g());
                        }
                        if (!TextUtils.isEmpty(eqVar.c())) {
                            jSONObject.put("ip", eqVar.c());
                        }
                        if (!TextUtils.isEmpty(eqVar.b())) {
                            jSONObject.put("stack", eqVar.b());
                        }
                        if (eqVar.h() > 0) {
                            jSONObject.put("ctime", String.valueOf(eqVar.h()));
                        }
                        if (eqVar.a() > 0) {
                            jSONObject.put("ntime", String.valueOf(eqVar.a()));
                        }
                    }
                    a(context, str, jSONObject);
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "applyStatisticsEx");
            }
        }
    }

    public static synchronized void a(Context context, String str, JSONObject jSONObject) {
        if (context != null) {
            try {
                if (fq.a()) {
                    bz bzVar = new bz(context, "loc", "6.4.0", str);
                    if (jSONObject != null) {
                        bzVar.a(jSONObject.toString());
                    }
                    i.add(bzVar);
                    if (i.size() >= 30) {
                        ArrayList arrayList = new ArrayList();
                        arrayList.addAll(i);
                        ca.b(arrayList, context);
                        i.clear();
                    }
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "applyStatistics");
            }
        }
    }

    public static void a(AMapLocation aMapLocation, AMapLocation aMapLocation2) {
        try {
            if (g == null) {
                if (!fz.a(aMapLocation)) {
                    g = aMapLocation2;
                    return;
                }
                g = aMapLocation.clone();
            }
            if (fz.a(g) && fz.a(aMapLocation2)) {
                AMapLocation aMapLocationClone = aMapLocation2.clone();
                if (g.getLocationType() != 1 && g.getLocationType() != 9 && !"gps".equalsIgnoreCase(g.getProvider()) && g.getLocationType() != 7 && aMapLocationClone.getLocationType() != 1 && aMapLocationClone.getLocationType() != 9 && !"gps".equalsIgnoreCase(aMapLocationClone.getProvider()) && aMapLocationClone.getLocationType() != 7) {
                    long jAbs = Math.abs(aMapLocationClone.getTime() - g.getTime()) / 1000;
                    if (jAbs <= 0) {
                        jAbs = 1;
                    }
                    if (jAbs <= com.tkay.expressad.d.a.b.aC) {
                        float fA = fz.a(g, aMapLocationClone);
                        float f = fA / jAbs;
                        if (fA > 30000.0f && f > 1000.0f) {
                            StringBuilder sb = new StringBuilder();
                            sb.append(g.getLatitude());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(g.getLongitude());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(g.getAccuracy());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(g.getLocationType());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            if (aMapLocation.getTime() != 0) {
                                sb.append(fz.a(g.getTime(), "yyyyMMdd_HH:mm:ss:SS"));
                            } else {
                                sb.append(g.getTime());
                            }
                            sb.append("#");
                            sb.append(aMapLocationClone.getLatitude());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(aMapLocationClone.getLongitude());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(aMapLocationClone.getAccuracy());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            sb.append(aMapLocationClone.getLocationType());
                            sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            if (aMapLocationClone.getTime() != 0) {
                                sb.append(fz.a(aMapLocationClone.getTime(), "yyyyMMdd_HH:mm:ss:SS"));
                            } else {
                                sb.append(aMapLocationClone.getTime());
                            }
                            a("bigshiftstatistics", sb.toString());
                            sb.delete(0, sb.length());
                        }
                    }
                }
                g = aMapLocationClone;
            }
        } catch (Throwable unused) {
        }
    }

    public static void a(String str, int i2) {
        a(str, String.valueOf(i2), a(i2));
    }

    public static void a(String str, String str2) {
        try {
            av.b(fr.c(), str2, str);
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "reportLog");
        }
    }

    public static void a(String str, String str2, String str3) {
        try {
            av.a(fr.c(), "/mobile/binary", str3, str, str2);
        } catch (Throwable unused) {
        }
    }

    public static void a(String str, Throwable th) {
        try {
            if (th instanceof k) {
                av.a(fr.c(), str, (k) th);
            }
        } catch (Throwable unused) {
        }
    }

    private static boolean a(AMapLocation aMapLocation) {
        return fz.a(aMapLocation) ? !fr.a(aMapLocation.getLatitude(), aMapLocation.getLongitude()) : "http://abroad.apilocate.amap.com/mobile/binary".equals(fr.c);
    }

    public static void b(Context context, long j2, boolean z) {
        if (context != null) {
            try {
                if (fq.a()) {
                    a(context, j2, z, "O024");
                }
            } catch (Throwable th) {
                fr.a(th, "ReportUtil", "reportCoarseLocUseTime");
            }
        }
    }

    private static void f(Context context) {
        try {
            if (j == null || j.length() <= 0) {
                return;
            }
            by.a(new bx(context, fr.c(), j.toString()), context);
            j = null;
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "writeOfflineLocLog");
        }
    }

    public final void a(Context context, int i2) {
        try {
            if (this.b == i2) {
                return;
            }
            if (this.b != -1 && this.b != i2) {
                this.a.append(this.b, Long.valueOf((fz.b() - this.c) + this.a.get(this.b, 0L).longValue()));
            }
            this.c = fz.b() - fy.a(context, "pref1", this.d[i2], 0L);
            this.b = i2;
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "setLocationType");
        }
    }

    public final void a(Context context, AMapLocationClientOption aMapLocationClientOption) {
        try {
            int i2 = 1.a[aMapLocationClientOption.getLocationMode().ordinal()];
            int i3 = 3;
            if (i2 == 1) {
                i3 = 4;
            } else if (i2 == 2) {
                i3 = 5;
            } else if (i2 != 3) {
                i3 = -1;
            }
            if (this.e == i3) {
                return;
            }
            if (this.e != -1 && this.e != i3) {
                this.a.append(this.e, Long.valueOf((fz.b() - this.f) + this.a.get(this.e, 0L).longValue()));
            }
            this.f = fz.b() - fy.a(context, "pref1", this.d[i3], 0L);
            this.e = i3;
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "setLocationMode");
        }
    }

    public final void b(Context context) {
        try {
            long jB = fz.b() - this.c;
            if (this.b != -1) {
                this.a.append(this.b, Long.valueOf(jB + this.a.get(this.b, 0L).longValue()));
            }
            long jB2 = fz.b() - this.f;
            if (this.e != -1) {
                this.a.append(this.e, Long.valueOf(jB2 + this.a.get(this.e, 0L).longValue()));
            }
            SharedPreferences.Editor editorA = fy.a(context, "pref1");
            for (int i2 = 0; i2 < this.d.length; i2++) {
                long jLongValue = this.a.get(i2, 0L).longValue();
                if (jLongValue > 0 && jLongValue > fy.a(context, "pref1", this.d[i2], 0L)) {
                    fy.a(editorA, this.d[i2], jLongValue);
                }
            }
            fy.a(editorA);
        } catch (Throwable th) {
            fr.a(th, "ReportUtil", "saveLocationTypeAndMode");
        }
    }

    public final int c(Context context) {
        try {
            long jA = fy.a(context, "pref1", this.d[2], 0L);
            long jA2 = fy.a(context, "pref1", this.d[0], 0L);
            long jA3 = fy.a(context, "pref1", this.d[1], 0L);
            if (jA == 0 && jA2 == 0 && jA3 == 0) {
                return -1;
            }
            long j2 = jA2 - jA;
            long j3 = jA3 - jA;
            return jA > j2 ? jA > j3 ? 2 : 1 : j2 > j3 ? 0 : 1;
        } catch (Throwable unused) {
            return -1;
        }
    }

    public final int d(Context context) {
        try {
            long jA = fy.a(context, "pref1", this.d[3], 0L);
            long jA2 = fy.a(context, "pref1", this.d[4], 0L);
            long jA3 = fy.a(context, "pref1", this.d[5], 0L);
            if (jA == 0 && jA2 == 0 && jA3 == 0) {
                return -1;
            }
            return jA > jA2 ? jA > jA3 ? 3 : 5 : jA2 > jA3 ? 4 : 5;
        } catch (Throwable unused) {
            return -1;
        }
    }

    public final void e(Context context) {
        try {
            SharedPreferences.Editor editorA = fy.a(context, "pref1");
            for (int i2 = 0; i2 < this.d.length; i2++) {
                fy.a(editorA, this.d[i2], 0L);
            }
            fy.a(editorA);
        } catch (Throwable unused) {
        }
    }
}
