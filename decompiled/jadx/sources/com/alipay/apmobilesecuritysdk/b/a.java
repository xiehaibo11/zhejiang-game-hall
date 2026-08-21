package com.alipay.apmobilesecuritysdk.b;

import com.alipay.sdk.m.d0.d;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    public static a b = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f1073a = 0;

    public static a a() {
        return b;
    }

    public static String a(String str, String str2) {
        return str + str2;
    }

    public final void a(int i) {
        this.f1073a = i;
    }

    public final int b() {
        return this.f1073a;
    }

    public final String c() {
        String str;
        String strA = d.a();
        if (com.alipay.sdk.m.z.a.b(strA)) {
            return strA;
        }
        int i = this.f1073a;
        if (i == 1) {
            str = "://mobilegw.stable.alipay.net/mgw.htm";
        } else {
            if (i == 2) {
                return "https://mobilegwpre.alipay.com/mgw.htm";
            }
            if (i == 3) {
                str = "://mobilegw-1-64.test.alipay.net/mgw.htm";
            } else {
                if (i != 4) {
                    return "https://mobilegw.alipay.com/mgw.htm";
                }
                str = "://mobilegw.aaa.alipay.net/mgw.htm";
            }
        }
        return a("http", str);
    }
}
