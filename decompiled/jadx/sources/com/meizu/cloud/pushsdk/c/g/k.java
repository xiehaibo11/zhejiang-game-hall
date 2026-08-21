package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;

/* JADX INFO: loaded from: classes3.dex */
final class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static j f4561a;
    private static long b;

    private k() {
    }

    static j a() {
        synchronized (k.class) {
            if (f4561a == null) {
                return new j();
            }
            j jVar = f4561a;
            f4561a = jVar.f;
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
            jVar.f = f4561a;
            jVar.c = 0;
            jVar.b = 0;
            f4561a = jVar;
        }
    }
}
