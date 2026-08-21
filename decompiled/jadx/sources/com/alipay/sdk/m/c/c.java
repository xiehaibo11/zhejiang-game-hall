package com.alipay.sdk.m.c;

import android.content.Context;
import com.alipay.sdk.m.r0.b;

/* JADX INFO: loaded from: classes.dex */
public class c implements com.alipay.sdk.m.b.b {
    public static final int d = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public com.alipay.sdk.m.r0.b f1166a;
    public boolean b = false;
    public boolean c = false;

    @Override // com.alipay.sdk.m.b.b
    public String a(Context context) {
        if (context == null) {
            return null;
        }
        if (!this.b) {
            com.alipay.sdk.m.r0.b bVar = new com.alipay.sdk.m.r0.b();
            this.f1166a = bVar;
            this.c = bVar.a(context, (b.InterfaceC0021b<String>) null) == 1;
            this.b = true;
        }
        com.alipay.sdk.m.d.a.b("getOAID", "isSupported", Boolean.valueOf(this.c));
        if (this.c && this.f1166a.e()) {
            return this.f1166a.b();
        }
        return null;
    }
}
