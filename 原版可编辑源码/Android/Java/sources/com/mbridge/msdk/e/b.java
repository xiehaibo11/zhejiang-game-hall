package com.mbridge.msdk.e;

import com.mbridge.msdk.e.a;

public class b {

    static class a {
        static b a = new b();
    }

    private b() {
    }

    public static b getInstance() {
        return a.a;
    }

    public void start() {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        if (aVarB.q() > 0) {
            a.a.a.a(r0 * 1000);
        }
    }

    public void addRewardList(String str, String str2) {
        a.a.a.a(str, str2);
    }

    public void addInterstitialList(String str, String str2) {
        a.a.a.b(str, str2);
    }
}
