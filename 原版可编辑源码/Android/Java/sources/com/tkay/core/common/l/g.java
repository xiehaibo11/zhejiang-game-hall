package com.tkay.core.common.l;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.core.api.TYCustomRuleKeys;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.ad;
import com.tkay.core.common.f.aj;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.UUID;
import java.util.regex.Pattern;
import org.json.JSONObject;

public final class g {
    static Random a = new Random();

    public static class a {
        public static final String a = "com.android.vending";
    }

    public static boolean a(String str) {
        if (!TextUtils.isEmpty(str) && str.length() <= 128) {
            if (Pattern.matches("^([.A-Za-z0-9_-]){1,128}$", str)) {
                return true;
            }
            Log.e("tkay", "Invalid Channel(" + str + "): contains some characters that are not in the ^([.A-Za-z0-9_-]){1,128}$");
            return false;
        }
        Log.e("tkay", "Invalid Channel(" + str + "):Channel'length over 128");
        return false;
    }

    public static boolean b(String str) {
        if (!TextUtils.isEmpty(str) && str.length() <= 128) {
            if (Pattern.matches("^([.A-Za-z0-9_-]){1,128}$", str)) {
                return true;
            }
            Log.e("tkay", "Invalid SubChannel(" + str + "):SubChannel contains some characters that are not in the ^([.A-Za-z0-9_-]){1,128}$");
            return false;
        }
        Log.e("tkay", "Invalid SubChannel(" + str + "):SubChannel'length over 128");
        return false;
    }

    public static boolean c(String str) {
        if (!TextUtils.isEmpty(str) && str.length() == 14) {
            if (Pattern.matches("^[A-Za-z0-9]+$", str)) {
                return true;
            }
            Log.e("tkay", "Invalid Scenario(" + str + "):Scenario contains some characters that are not in the [A-Za-z0-9]");
            return false;
        }
        Log.e("tkay", "Invalid Scenario(" + str + "):Scenario'length isn't 14");
        return false;
    }

    public static String a(String str, String str2, long j) {
        return str + "_" + str2 + "_" + j;
    }

    public static String b(String str, String str2, long j) {
        return a(str, str2, j) + "_refresh";
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String d(String str) {
        byte b;
        switch (str.hashCode()) {
            case 48:
                b = !str.equals("0") ? (byte) -1 : (byte) 0;
                break;
            case 49:
                if (str.equals("1")) {
                    b = 1;
                    break;
                }
                break;
            case 50:
                if (str.equals("2")) {
                    b = 2;
                    break;
                }
                break;
            case 51:
                if (str.equals("3")) {
                    b = 3;
                    break;
                }
                break;
            case 52:
                if (str.equals("4")) {
                    b = 4;
                    break;
                }
                break;
        }
        return b != 0 ? b != 1 ? b != 2 ? b != 3 ? b != 4 ? "" : f.g.e : "Interstitial" : f.g.c : f.g.b : f.g.a;
    }

    public static JSONObject a(Context context, String str, String str2, int i, int i2) {
        ad adVar;
        int i3;
        int i4;
        Map<String, ad> mapA = com.tkay.core.a.a.a(context).a(i);
        if (mapA != null) {
            i3 = 0;
            i4 = 0;
            for (ad adVar2 : mapA.values()) {
                i3 += adVar2.c;
                i4 += adVar2.d;
            }
            adVar = mapA.get(str2);
        } else {
            adVar = null;
            i3 = 0;
            i4 = 0;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("sr", "tp");
            jSONObject.put("rid", str);
            jSONObject.put("ads", i3);
            jSONObject.put("ahs", i4);
            jSONObject.put("pds", adVar != null ? adVar.c : 0);
            jSONObject.put("phs", adVar != null ? adVar.d : 0);
            jSONObject.put(AdvertisementOption.AD_PACKAGE, i2);
            jSONObject.put("tpl", str2);
        } catch (Exception unused) {
        }
        return jSONObject;
    }

    public static String a(Context context) {
        String strW = com.tkay.core.common.b.m.a().w();
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(d.d(context));
        stringBuffer.append("&");
        stringBuffer.append(d.f());
        stringBuffer.append("&");
        stringBuffer.append(strW);
        stringBuffer.append("&");
        stringBuffer.append(System.currentTimeMillis());
        stringBuffer.append("&");
        stringBuffer.append(new Random().nextInt(10000));
        return f.a(stringBuffer.toString());
    }

    public static void a(List<aj> list, aj ajVar, boolean z) {
        if (list == null) {
            return;
        }
        int size = list.size();
        if (z) {
            if (ajVar.a() == -1 || size == 0) {
                list.add(ajVar);
                return;
            }
        } else if (size == 0) {
            list.add(ajVar);
            return;
        }
        int i = size - 1;
        int i2 = 0;
        while (i2 < size) {
            aj ajVar2 = list.get(i2);
            boolean z2 = true;
            if ((z && ajVar2.a() == -1) || a(ajVar) >= a(ajVar2)) {
                list.add(i2, ajVar);
            } else if (i2 == i) {
                list.add(ajVar);
            } else {
                z2 = false;
            }
            if (z2) {
                return;
            } else {
                i2++;
            }
        }
    }

    private static boolean a(List<aj> list, aj ajVar, aj ajVar2, int i, int i2, boolean z) {
        if (z && ajVar.a() == -1) {
            list.add(i, ajVar2);
            return true;
        }
        if (a(ajVar2) >= a(ajVar)) {
            list.add(i, ajVar2);
            return true;
        }
        if (i != i2) {
            return false;
        }
        list.add(ajVar2);
        return true;
    }

    public static void a(com.tkay.core.common.f.d dVar, String str, String str2, String str3) {
        if (!TYSDK.isNetworkLogDebug() || dVar == null) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            if (dVar.y() != 0) {
                jSONObject.put("defaultAdSourceType", dVar.y());
            }
            jSONObject.put(com.tkay.expressad.videocommon.e.b.v, dVar.W());
            jSONObject.put("adType", dVar.Z());
            jSONObject.put("mixedFormatAdType", dVar.L());
            jSONObject.put("action", str);
            jSONObject.put("refresh", dVar.F());
            jSONObject.put("result", str2);
            jSONObject.put("segmentId", dVar.I());
            jSONObject.put("adSourceId", dVar.x());
            jSONObject.put(RequestParameters.POSITION, dVar.z());
            jSONObject.put("networkType", dVar.H());
            jSONObject.put("networkName", dVar.T());
            jSONObject.put("networkVersion", dVar.u);
            jSONObject.put("networkUnit", dVar.G());
            jSONObject.put("isHB", dVar.v());
            jSONObject.put("msg", str3);
            jSONObject.put("hourly_frequency", dVar.B());
            jSONObject.put("daily_frequency", dVar.C());
            jSONObject.put("network_list", dVar.D());
            jSONObject.put("request_network_num", dVar.E());
            jSONObject.put("handle_class", dVar.i());
        } catch (Throwable unused) {
        }
        n.a(PointCategory.NETWORK, jSONObject.toString());
    }

    private static String d(Context context) {
        String strW = com.tkay.core.common.b.m.a().w();
        if (TextUtils.isEmpty(strW)) {
            strW = d.d(context) + d.f();
        }
        return f.a(strW + UUID.randomUUID().toString());
    }

    public static void a(WebView webView) {
        if (webView == null) {
            return;
        }
        webView.removeJavascriptInterface("searchBoxjavaBridge_");
        webView.removeJavascriptInterface("accessibility");
        webView.removeJavascriptInterface("accessibilityTraversal");
        webView.getSettings().setAllowFileAccess(false);
        if (Build.VERSION.SDK_INT >= 16) {
            webView.getSettings().setAllowFileAccessFromFileURLs(false);
            webView.getSettings().setAllowUniversalAccessFromFileURLs(false);
        }
        webView.getSettings().setSavePassword(false);
    }

    public static double a(aj ajVar) {
        if (ajVar == null) {
            return 0.0d;
        }
        if (ajVar.Z()) {
            return com.tkay.core.b.c.a().b(ajVar);
        }
        return ajVar.af();
    }

    private static void a(String str, List<aj> list) {
        if (list != null) {
            try {
                StringBuilder sb = new StringBuilder();
                int size = list.size();
                for (int i = 0; i < size; i++) {
                    aj ajVar = list.get(i);
                    sb.append("\n");
                    sb.append(i);
                    sb.append(" --> adSourceId: ");
                    sb.append(ajVar.t());
                    sb.append(", ");
                    sb.append(ajVar.d());
                    sb.append(", real: ");
                    sb.append(ajVar.x());
                    sb.append(", sort: ");
                    sb.append(a(ajVar));
                    String strZ = ajVar.z();
                    if (!TextUtils.isEmpty(strZ)) {
                        sb.append(", errorMsg: ");
                        sb.append(strZ);
                    }
                }
                Log.e(str, sb.toString());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static String a() {
        return TextUtils.isEmpty(com.tkay.core.common.b.f.a) ? "UA_0.0.0" : com.tkay.core.common.b.f.a;
    }

    public static String a(com.tkay.core.common.f.h hVar) {
        return f.a(hVar.p() + hVar.A());
    }

    public static boolean b() {
        try {
            Map<String, Object> mapL = com.tkay.core.common.b.m.a().l();
            if (mapL == null || !mapL.containsKey(TYCustomRuleKeys.AGE)) {
                return false;
            }
            return Integer.parseInt(mapL.get(TYCustomRuleKeys.AGE).toString()) <= 13;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void a(Map<String, Object> map, com.tkay.core.common.f.d dVar) {
        if (dVar == null || dVar.H() >= 100000) {
            return;
        }
        map.put(f.k.h, dVar);
    }

    public static boolean b(Context context) {
        return q.a().a(context);
    }

    public static boolean c(Context context) {
        return q.a().b(context);
    }

    public static boolean c() {
        return q.a().b();
    }

    private static int a(int i, int[] iArr, int i2) {
        if (iArr == null) {
            return i2;
        }
        for (int i3 : iArr) {
            if (i == i3) {
                return i;
            }
        }
        return i2;
    }

    public static List<aj> a(List<aj> list) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        HashMap map = new HashMap(3);
        ArrayList arrayList = new ArrayList();
        Collections.sort(list);
        for (aj ajVar : list) {
            double dA = a(ajVar);
            List arrayList2 = (List) linkedHashMap.get(String.valueOf(dA));
            if (arrayList2 == null) {
                arrayList2 = new ArrayList();
                linkedHashMap.put(String.valueOf(dA), arrayList2);
            }
            Integer num = (Integer) map.get(String.valueOf(dA));
            if (num == null) {
                num = 0;
            }
            map.put(String.valueOf(dA), Integer.valueOf(num.intValue() + ajVar.S()));
            arrayList2.add(ajVar);
        }
        for (Map.Entry entry : linkedHashMap.entrySet()) {
            List list2 = (List) entry.getValue();
            if (list2.size() <= 1) {
                arrayList.addAll(list2);
            } else {
                int iIntValue = ((Integer) map.get(entry.getKey())).intValue();
                while (true) {
                    if (list2.size() <= 0) {
                        break;
                    }
                    if (list2.size() == 1) {
                        arrayList.add((aj) list2.get(0));
                        list2.remove(0);
                        break;
                    }
                    int iNextInt = a.nextInt(iIntValue) + 1;
                    Iterator it = list2.iterator();
                    int iS = 0;
                    while (true) {
                        if (it.hasNext()) {
                            aj ajVar2 = (aj) it.next();
                            if (ajVar2.S() + iS >= iNextInt) {
                                arrayList.add(ajVar2);
                                list2.remove(ajVar2);
                                iIntValue -= ajVar2.S();
                                break;
                            }
                            iS += ajVar2.S();
                        }
                    }
                }
            }
        }
        return arrayList;
    }
}
