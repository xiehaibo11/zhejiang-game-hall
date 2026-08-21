package com.mbridge.msdk.e;

import com.mbridge.msdk.e.a;

/* JADX INFO: compiled from: TimerController.java */
/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: compiled from: TimerController.java */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static b f3320a = new b();
    }

    private b() {
    }

    public static b getInstance() {
        return a.f3320a;
    }

    public void start() {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        if (aVarB.q() > 0) {
            a.C0251a.f3319a.a(r0 * 1000);
        }
    }

    public void addRewardList(String str, String str2) {
        a.C0251a.f3319a.a(str, str2);
    }

    public void addInterstitialList(String str, String str2) {
        a.C0251a.f3319a.b(str, str2);
    }
}
