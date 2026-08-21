package com.kwad.framework.filedownloader;

import android.content.Context;
import com.kwad.framework.filedownloader.services.e;
import com.kwad.sdk.api.proxy.app.FileDownloadService;

public final class n implements u {
    private final u abn;

    static final class a {
        private static final n abo = new n(0);
    }

    private n() {
        this.abn = com.kwad.framework.filedownloader.f.e.vO().aeM ? new o() : new p(FileDownloadService.SeparateProcessService.class);
    }

    n(byte b) {
        this();
    }

    public static n tO() {
        return a.abo;
    }

    public static e.a tP() {
        if (tO().abn instanceof o) {
            return (e.a) tO().abn;
        }
        return null;
    }

    @Override
    public final boolean a(String str, String str2, boolean z, int i, int i2, int i3, boolean z2, com.kwad.framework.filedownloader.d.b bVar, boolean z3) {
        return this.abn.a(str, str2, z, i, i2, i3, z2, bVar, z3);
    }

    @Override
    public final boolean aY(int i) {
        return this.abn.aY(i);
    }

    @Override
    public final byte aZ(int i) {
        return this.abn.aZ(i);
    }

    @Override
    public final void an(Context context) {
        this.abn.an(context);
    }

    @Override
    public final boolean ba(int i) {
        return this.abn.ba(i);
    }

    @Override
    public final boolean isConnected() {
        return this.abn.isConnected();
    }
}
