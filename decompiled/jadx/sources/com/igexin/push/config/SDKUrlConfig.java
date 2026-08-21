package com.igexin.push.config;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class SDKUrlConfig {
    private static String[] b;
    private static volatile String e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f2484a = new Object();
    private static String c = "HZ";
    private static String[] d = {"socket://sdk.open.talk.igexin.com:5224", "socket://sdk.open.talk.getui.net:5224", "socket://sdk.open.talk.gepush.com:5224"};
    public static String[] XFR_ADDRESS_BAK = {"socket://43.231.145.10:5224"};

    public static String getCmAddress() {
        return e == null ? d[0] : e;
    }

    public static List<String> getDefaultXfrList() {
        String[] xfrAddress = getXfrAddress();
        ArrayList arrayList = new ArrayList();
        for (String str : xfrAddress) {
            if (!arrayList.contains(str)) {
                arrayList.add(str);
            }
        }
        return arrayList;
    }

    public static String[] getIdcConfigUrl() {
        return b;
    }

    public static String getLocation() {
        return c;
    }

    public static String[] getXfrAddress() {
        String[] strArr;
        synchronized (f2484a) {
            strArr = d;
        }
        return strArr;
    }

    public static boolean hasMultipleXfr() {
        return getDefaultXfrList().size() > 1;
    }

    public static void setCmAddress(String str) {
        com.igexin.b.a.c.b.a("set cm address : " + str, new Object[0]);
        e = str;
    }

    public static void setIdcConfigUrl(String[] strArr) {
        b = strArr;
    }

    public static void setLocation(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        com.igexin.push.core.d.d = str;
        c = str;
    }

    public static void setXfrAddressIps(String[] strArr) {
        synchronized (f2484a) {
            d = strArr;
        }
    }
}
