package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class a {
    public int a;
    public String b;

    public a(int i, String str) {
        this.a = i;
        this.b = str;
    }

    public int a() {
        return this.a;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            return SystemUtils.getRFC3339(Long.valueOf(jCurrentTimeMillis));
        } catch (Exception e) {
            return jCurrentTimeMillis + "";
        }
    }
}
