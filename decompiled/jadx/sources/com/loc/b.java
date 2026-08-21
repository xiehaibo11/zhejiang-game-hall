package com.loc;

import android.content.Context;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: GeoFenceNetManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    bo f2858a;

    public b(Context context) {
        this.f2858a = null;
        try {
            q.a().a(context);
        } catch (Throwable unused) {
        }
        this.f2858a = bo.a();
    }

    private String a(Context context, String str, Map<String, String> map) {
        try {
            HashMap map2 = new HashMap(16);
            fl flVar = new fl();
            map2.clear();
            map2.put("Content-Type", "application/x-www-form-urlencoded");
            map2.put("Connection", "Keep-Alive");
            map2.put("User-Agent", "AMAP_Location_SDK_Android 6.4.0");
            String strA = n.a();
            String strA2 = n.a(context, strA, x.b(map));
            map.put("ts", strA);
            map.put("scode", strA2);
            flVar.b(map);
            flVar.a((Map<String, String>) map2);
            flVar.b(str);
            flVar.a(v.a(context));
            flVar.a(fr.i);
            flVar.b(fr.i);
            try {
                return new String(bo.a(flVar).f2891a, "utf-8");
            } catch (Throwable th) {
                fr.a(th, "GeoFenceNetManager", "post");
                return null;
            }
        } catch (Throwable unused) {
            return null;
        }
    }

    private static Map<String, String> b(Context context, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        HashMap map = new HashMap(16);
        map.put("key", l.f(context));
        if (!TextUtils.isEmpty(str)) {
            map.put("keywords", str);
        }
        if (!TextUtils.isEmpty(str2)) {
            map.put("types", str2);
        }
        if (!TextUtils.isEmpty(str5) && !TextUtils.isEmpty(str6)) {
            map.put(RequestParameters.SUBRESOURCE_LOCATION, str6 + Constants.ACCEPT_TIME_SEPARATOR_SP + str5);
        }
        if (!TextUtils.isEmpty(str3)) {
            map.put("city", str3);
        }
        if (!TextUtils.isEmpty(str4)) {
            map.put("offset", str4);
        }
        if (!TextUtils.isEmpty(str7)) {
            map.put("radius", str7);
        }
        return map;
    }

    public final String a(Context context, String str, String str2) {
        Map<String, String> mapB = b(context, str2, null, null, null, null, null, null);
        mapB.put("extensions", "all");
        mapB.put("subdistrict", "0");
        return a(context, str, mapB);
    }

    public final String a(Context context, String str, String str2, String str3, String str4, String str5) {
        Map<String, String> mapB = b(context, str2, str3, str4, str5, null, null, null);
        mapB.put("children", "1");
        mapB.put("page", "1");
        mapB.put("extensions", "base");
        return a(context, str, mapB);
    }

    public final String a(Context context, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        Map<String, String> mapB = b(context, str2, str3, null, str4, str5, str6, str7);
        mapB.put("children", "1");
        mapB.put("page", "1");
        mapB.put("extensions", "base");
        return a(context, str, mapB);
    }
}
