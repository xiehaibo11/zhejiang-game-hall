package com.kwad.framework.filedownloader;

import android.content.Context;
import android.content.Intent;
import com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent;
import com.kwad.framework.filedownloader.services.e;
import com.kwad.sdk.api.proxy.app.FileDownloadService;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
final class o implements e.a, u {
    private static Class<?> abp;
    private final ArrayList<Runnable> abq = new ArrayList<>();
    private com.kwad.framework.filedownloader.services.e abr;

    o() {
    }

    private void a(Context context, Runnable runnable) {
        context.startService(new Intent(context, tR()));
    }

    private static Class<?> tR() {
        if (abp == null) {
            abp = FileDownloadService.SharedMainProcessService.class;
        }
        return abp;
    }

    @Override // com.kwad.framework.filedownloader.services.e.a
    public final void a(com.kwad.framework.filedownloader.services.e eVar) {
        this.abr = eVar;
        List list = (List) this.abq.clone();
        this.abq.clear();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
        f.tB().c(new DownloadServiceConnectChangedEvent(DownloadServiceConnectChangedEvent.ConnectStatus.connected, tR()));
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean a(String str, String str2, boolean z, int i, int i2, int i3, boolean z2, com.kwad.framework.filedownloader.d.b bVar, boolean z3) {
        if (!isConnected()) {
            return com.kwad.framework.filedownloader.f.a.h(str, str2, z);
        }
        this.abr.b(str, str2, z, i, i2, i3, z2, bVar, z3);
        return true;
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean aY(int i) {
        return !isConnected() ? com.kwad.framework.filedownloader.f.a.aY(i) : this.abr.aY(i);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final byte aZ(int i) {
        return !isConnected() ? com.kwad.framework.filedownloader.f.a.aZ(i) : this.abr.aZ(i);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final void an(Context context) {
        a(context, null);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean ba(int i) {
        return !isConnected() ? com.kwad.framework.filedownloader.f.a.ba(i) : this.abr.ba(i);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean isConnected() {
        return this.abr != null;
    }

    @Override // com.kwad.framework.filedownloader.services.e.a
    public final void onDisconnected() {
        this.abr = null;
        f.tB().c(new DownloadServiceConnectChangedEvent(DownloadServiceConnectChangedEvent.ConnectStatus.disconnected, tR()));
    }
}
