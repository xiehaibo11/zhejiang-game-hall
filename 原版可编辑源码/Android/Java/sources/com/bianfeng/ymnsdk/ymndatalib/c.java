package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class c {
    public String a = "";

    public String a() {
        return this.a + "";
    }

    public String b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            return SystemUtils.getRFC3339(Long.valueOf(jCurrentTimeMillis));
        } catch (Exception e) {
            return jCurrentTimeMillis + "";
        }
    }
}
