package com.vivo.push.b;

import com.kwad.library.solder.lib.ext.PluginError;

/* JADX INFO: loaded from: classes4.dex */
public final class b extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7877a;
    private String b;
    private String c;
    private String d;
    private boolean e;

    public b(boolean z, String str) {
        super(z ? PluginError.ERROR_UPD_REQUEST : PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD, str);
        this.e = false;
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("sdk_clients", this.f7877a);
        aVar.a("sdk_version", 323L);
        aVar.a("BaseAppCommand.EXTRA_APPID", this.c);
        aVar.a("BaseAppCommand.EXTRA_APPKEY", this.b);
        aVar.a("PUSH_REGID", this.d);
    }

    public final void d() {
        this.c = null;
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7877a = aVar.a("sdk_clients");
        this.c = aVar.a("BaseAppCommand.EXTRA_APPID");
        this.b = aVar.a("BaseAppCommand.EXTRA_APPKEY");
        this.d = aVar.a("PUSH_REGID");
    }

    public final void e() {
        this.b = null;
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final String toString() {
        return "AppCommand:" + b();
    }
}
