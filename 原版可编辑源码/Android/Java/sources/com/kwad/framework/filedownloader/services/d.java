package com.kwad.framework.filedownloader.services;

import android.app.Notification;
import android.os.IBinder;
import android.os.RemoteCallbackList;
import android.os.RemoteException;
import com.kwad.framework.filedownloader.c.b;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.message.e;
import java.lang.ref.WeakReference;

public final class d extends b.a implements e.b, i {
    private final RemoteCallbackList<com.kwad.framework.filedownloader.c.a> aet = new RemoteCallbackList<>();
    private final g aeu;
    private final WeakReference<FileDownloadServiceProxy> aev;

    d(WeakReference<FileDownloadServiceProxy> weakReference, g gVar) {
        this.aev = weakReference;
        this.aeu = gVar;
        com.kwad.framework.filedownloader.message.e.vg().a(this);
    }

    private synchronized int v(MessageSnapshot messageSnapshot) {
        int iBeginBroadcast;
        RemoteCallbackList<com.kwad.framework.filedownloader.c.a> remoteCallbackList;
        iBeginBroadcast = this.aet.beginBroadcast();
        for (int i = 0; i < iBeginBroadcast; i++) {
            try {
                try {
                    ((com.kwad.framework.filedownloader.c.a) this.aet.getBroadcastItem(i)).q(messageSnapshot);
                } catch (Throwable th) {
                    this.aet.finishBroadcast();
                    throw th;
                }
            } catch (RemoteException e) {
                com.kwad.framework.filedownloader.f.d.a(this, e, "callback error", new Object[0]);
                remoteCallbackList = this.aet;
                remoteCallbackList.finishBroadcast();
                return iBeginBroadcast;
            }
        }
        remoteCallbackList = this.aet;
        remoteCallbackList.finishBroadcast();
        return iBeginBroadcast;
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.c.a aVar) {
        this.aet.register(aVar);
    }

    @Override
    public final boolean aY(int i) {
        return this.aeu.aY(i);
    }

    @Override
    public final byte aZ(int i) {
        return this.aeu.aZ(i);
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.c.a aVar) {
        this.aet.unregister(aVar);
    }

    @Override
    public final void b(String str, String str2, boolean z, int i, int i2, int i3, boolean z2, com.kwad.framework.filedownloader.d.b bVar, boolean z3) {
        this.aeu.b(str, str2, z, i, i2, i3, z2, bVar, z3);
    }

    @Override
    public final boolean ba(int i) {
        return this.aeu.ba(i);
    }

    @Override
    public final boolean bs(int i) {
        return this.aeu.bs(i);
    }

    @Override
    public final long bt(int i) {
        return this.aeu.bE(i);
    }

    @Override
    public final long bu(int i) {
        return this.aeu.bu(i);
    }

    @Override
    public final boolean isIdle() {
        return this.aeu.isIdle();
    }

    @Override
    public final boolean n(String str, String str2) {
        return this.aeu.p(str, str2);
    }

    @Override
    public final void onDestroy() {
        com.kwad.framework.filedownloader.message.e.vg().a(null);
    }

    @Override
    public final void pauseAllTasks() {
        this.aeu.vF();
    }

    @Override
    public final void r(MessageSnapshot messageSnapshot) {
        v(messageSnapshot);
    }

    @Override
    public final void startForeground(int i, Notification notification) {
        WeakReference<FileDownloadServiceProxy> weakReference = this.aev;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.aev.get().context.startForeground(i, notification);
    }

    @Override
    public final void stopForeground(boolean z) {
        WeakReference<FileDownloadServiceProxy> weakReference = this.aev;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.aev.get().context.stopForeground(z);
    }

    @Override
    public final void uW() {
        this.aeu.uW();
    }

    @Override
    public final void vD() {
    }

    @Override
    public final IBinder vE() {
        return this;
    }
}
