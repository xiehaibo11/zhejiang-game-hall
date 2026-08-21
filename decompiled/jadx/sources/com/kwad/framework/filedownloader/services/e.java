package com.kwad.framework.filedownloader.services;

import android.app.Notification;
import android.os.IBinder;
import com.kwad.framework.filedownloader.c.b;
import com.kwad.framework.filedownloader.n;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends b.a implements i {
    private final g aeu;
    private final WeakReference<FileDownloadServiceProxy> aev;

    public interface a {
        void a(e eVar);

        void onDisconnected();
    }

    e(WeakReference<FileDownloadServiceProxy> weakReference, g gVar) {
        this.aev = weakReference;
        this.aeu = gVar;
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void a(com.kwad.framework.filedownloader.c.a aVar) {
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final boolean aY(int i) {
        return this.aeu.aY(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final byte aZ(int i) {
        return this.aeu.aZ(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void b(com.kwad.framework.filedownloader.c.a aVar) {
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void b(String str, String str2, boolean z, int i, int i2, int i3, boolean z2, com.kwad.framework.filedownloader.d.b bVar, boolean z3) {
        this.aeu.b(str, str2, z, i, i2, i3, z2, bVar, z3);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final boolean ba(int i) {
        return this.aeu.ba(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final boolean bs(int i) {
        return this.aeu.bs(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final long bt(int i) {
        return this.aeu.bE(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final long bu(int i) {
        return this.aeu.bu(i);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final boolean isIdle() {
        return this.aeu.isIdle();
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final boolean n(String str, String str2) {
        return this.aeu.p(str, str2);
    }

    @Override // com.kwad.framework.filedownloader.services.i
    public final void onDestroy() {
        n.tP().onDisconnected();
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void pauseAllTasks() {
        this.aeu.vF();
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void startForeground(int i, Notification notification) {
        WeakReference<FileDownloadServiceProxy> weakReference = this.aev;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.aev.get().context.startForeground(i, notification);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void stopForeground(boolean z) {
        WeakReference<FileDownloadServiceProxy> weakReference = this.aev;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.aev.get().context.stopForeground(z);
    }

    @Override // com.kwad.framework.filedownloader.c.b
    public final void uW() {
        this.aeu.uW();
    }

    @Override // com.kwad.framework.filedownloader.services.i
    public final void vD() {
        n.tP().a(this);
    }

    @Override // com.kwad.framework.filedownloader.services.i
    public final IBinder vE() {
        return null;
    }
}
