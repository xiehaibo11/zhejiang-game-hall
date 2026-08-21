package com.huawei.updatesdk.b.h;

import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

public final class a {
    private static final Map<Integer, String> b = new HashMap();
    private static a c = new a();
    private int a;

    static {
        b.put(1, "1.0");
        b.put(2, "1.5");
        b.put(3, "1.6");
        b.put(4, "2.0");
        b.put(5, "2.0");
        b.put(6, "2.3");
        b.put(7, "3.0");
        b.put(8, "3.0.5");
        b.put(8, "3.1");
        b.put(9, "4.0");
        b.put(10, "4.1");
        b.put(11, "5.0");
        b.put(12, "5.1");
    }

    private a() {
        this.a = 0;
        int iC = c();
        this.a = iC;
        if (iC == 0) {
            this.a = b();
        }
        com.huawei.updatesdk.a.a.c.a.a.a.a("EMUISupportUtil", "emuiVersion:" + this.a);
    }

    private String a(String str) {
        if (!TextUtils.isEmpty(str)) {
            String[] strArrSplit = str.split("_");
            if (strArrSplit.length == 2) {
                return strArrSplit[1];
            }
        }
        return "";
    }

    private int b() {
        String strA = a(com.huawei.updatesdk.a.a.d.h.c.a(com.alipay.sdk.m.c.a.a, ""));
        if (TextUtils.isEmpty(strA)) {
            return 0;
        }
        for (Map.Entry<Integer, String> entry : b.entrySet()) {
            if (strA.equals(entry.getValue())) {
                return entry.getKey().intValue();
            }
        }
        return 0;
    }

    private int c() {
        return com.huawei.updatesdk.a.a.d.h.c.a("ro.build.hw_emui_api_level", 0);
    }

    public static a d() {
        return c;
    }

    public int a() {
        return this.a;
    }
}
