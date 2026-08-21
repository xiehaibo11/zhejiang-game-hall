package com.vivo.push.b;

import com.kwad.library.solder.lib.ext.PluginError;

public final class y extends com.vivo.push.o {
    private String a;

    public y() {
        super(PluginError.ERROR_UPD_NO_DOWNLOADER);
    }

    public y(String str) {
        super(PluginError.ERROR_UPD_NO_DOWNLOADER);
        this.a = str;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        aVar.a("package_name", this.a);
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        this.a = aVar.a("package_name");
    }

    @Override
    public final String toString() {
        return "StopServiceCommand";
    }
}
