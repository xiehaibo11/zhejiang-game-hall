package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;

final class k {
    private static j a;
    private static long b;

    private k() {
    }

    static j a() {
        synchronized (k.class) {
            if (a == null) {
                return new j();
            }
            j jVar = a;
            a = jVar.f;
            jVar.f = null;
            b -= ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX;
            return jVar;
        }
    }

    static void a(j jVar) {
        if (jVar.f != null || jVar.g != null) {
            throw new IllegalArgumentException();
        }
        if (jVar.d) {
            return;
        }
        synchronized (k.class) {
            if (b + ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX > 65536) {
                return;
            }
            b += ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX;
            jVar.f = a;
            jVar.c = 0;
            jVar.b = 0;
            a = jVar;
        }
    }
}
