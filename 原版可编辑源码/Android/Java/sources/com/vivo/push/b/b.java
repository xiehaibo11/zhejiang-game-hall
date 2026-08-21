package com.vivo.push.b;

import com.kwad.library.solder.lib.ext.PluginError;

public final class b extends c {
    private String a;
    private String b;
    private String c;
    private String d;
    private boolean e;

    public b(boolean z, String str) {
        super(z ? PluginError.ERROR_UPD_REQUEST : PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD, str);
        this.e = false;
    }

    @Override
    public final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("sdk_clients", this.a);
        aVar.a("sdk_version", 323L);
        aVar.a("BaseAppCommand.EXTRA_APPID", this.c);
        aVar.a("BaseAppCommand.EXTRA_APPKEY", this.b);
        aVar.a("PUSH_REGID", this.d);
    }

    public final void d() {
        this.c = null;
    }

    @Override
    public final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.a("sdk_clients");
        this.c = aVar.a("BaseAppCommand.EXTRA_APPID");
        this.b = aVar.a("BaseAppCommand.EXTRA_APPKEY");
        this.d = aVar.a("PUSH_REGID");
    }

    public final void e() {
        this.b = null;
    }

    @Override
    public final String toString() {
        return "AppCommand:" + b();
    }
}
