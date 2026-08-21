package com.vivo.push.b;

import com.kwad.library.solder.lib.ext.PluginError;

/* JADX INFO: loaded from: classes4.dex */
public final class y extends com.vivo.push.o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7895a;

    public y() {
        super(PluginError.ERROR_UPD_NO_DOWNLOADER);
    }

    public y(String str) {
        super(PluginError.ERROR_UPD_NO_DOWNLOADER);
        this.f7895a = str;
    }

    @Override // com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        aVar.a("package_name", this.f7895a);
    }

    @Override // com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        this.f7895a = aVar.a("package_name");
    }

    @Override // com.vivo.push.o
    public final String toString() {
        return "StopServiceCommand";
    }
}
