package com.meizu.cloud.pushsdk.platform;

import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, String> f4631a = a();
    private static final List<String> b = new ArrayList(f4631a.keySet());

    public static String a(String str) {
        String strSubstring;
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        try {
            if (str.length() <= 3) {
                return str;
            }
            String strSubstring2 = str.substring(0, 3);
            if (!f4631a.containsKey(strSubstring2)) {
                return str;
            }
            String str2 = f4631a.get(strSubstring2);
            strSubstring = str.substring(3);
            try {
                char[] cArr = new char[strSubstring.length() / 2];
                int i = 0;
                int i2 = 0;
                while (i < strSubstring.length() / 2) {
                    if (i2 == str2.length()) {
                        i2 = 0;
                    }
                    int i3 = i * 2;
                    cArr[i] = (char) (((char) Integer.valueOf(strSubstring.substring(i3, i3 + 2), 16).intValue()) ^ str2.charAt(i2));
                    i++;
                    i2++;
                }
                return new String(String.valueOf(cArr).getBytes("iso-8859-1"), "UTF-8");
            } catch (Exception unused) {
            }
        } catch (Exception unused2) {
            strSubstring = str;
        }
        DebugLogger.e("PushIdEncryptUtils", "invalid pushId encryption " + strSubstring);
        return str;
    }

    private static Map<String, String> a() {
        if (a(f4631a)) {
            synchronized (a.class) {
                if (a(f4631a)) {
                    TreeMap treeMap = new TreeMap();
                    f4631a = treeMap;
                    treeMap.put("UCI", "v9tC0Myz1MGwXRFy");
                    f4631a.put("G3G", "XAsFqhhaf4gKpmAi");
                    f4631a.put("V5R", "cOqH18NXwBtZVkvz");
                    f4631a.put("0XC", "IgSEKZ3Ea6Pm4woS");
                    f4631a.put("Z9K", "pH6J9DMPNgqQp8m8");
                    f4631a.put("EIM", "K11Rs9HAKRXeNwq8");
                    f4631a.put("SO7", "T8LquL1DvwVcogiU");
                    f4631a.put("DDI", "d02F6ttOtV05MYCQ");
                    f4631a.put("ULY", "ToZZIhAywnUfHShN");
                    f4631a.put("0EV", "r5D5RRwQhfV0AYLb");
                    f4631a.put("N6A", "QAtSBFcXnQoUgHO2");
                    f4631a.put("S5Q", "sDWLrZINnum227am");
                    f4631a.put("RA5", "4Uq3Ruxo1FTBdHQE");
                    f4631a.put("J04", "N5hViUTdLCpN59H0");
                    f4631a.put("B68", "EY3sH1KKtalg5ZaT");
                    f4631a.put("9IW", "q1u0MiuFyim4pCYY");
                    f4631a.put("UU3", "syLnkkd8AqNykVV7");
                    f4631a.put("Z49", "V00FiWu124yE91sH");
                    f4631a.put("BNA", "rPP7AK1VWpKEry3p");
                    f4631a.put("WXG", "om8w5ahkJJgpAH9v");
                }
            }
        }
        return f4631a;
    }

    public static <K, V> boolean a(Map<K, V> map) {
        return map == null || map.isEmpty();
    }
}
