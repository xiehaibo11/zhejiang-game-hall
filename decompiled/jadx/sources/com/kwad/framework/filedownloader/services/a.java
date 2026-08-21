package com.kwad.framework.filedownloader.services;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent;
import com.kwad.framework.filedownloader.u;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a<CALLBACK extends Binder, INTERFACE extends IInterface> implements ServiceConnection, u {
    private final Class<?> adC;
    private volatile INTERFACE aei;
    private final HashMap<String, Object> aej = new HashMap<>();
    private final List<Context> aek = new ArrayList();
    private final ArrayList<Runnable> abq = new ArrayList<>();
    private final CALLBACK aeh = (CALLBACK) tT();

    protected a(Class<?> cls) {
        this.adC = cls;
    }

    private void a(Context context, Runnable runnable) {
        if (com.kwad.framework.filedownloader.f.f.aq(context)) {
            throw new IllegalStateException("Fatal-Exception: You can't bind the FileDownloadService in :filedownloader process.\n It's the invalid operation and is likely to cause unexpected problems.\n Maybe you want to use non-separate process mode for FileDownloader, More detail about non-separate mode, please move to wiki manually: https://github.com/lingochamp/FileDownloader/wiki/filedownloader.properties");
        }
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "bindStartByContext %s", context.getClass().getSimpleName());
        }
        Intent intent = new Intent(context, this.adC);
        if (!this.aek.contains(context)) {
            this.aek.add(context);
        }
        context.bindService(intent, this, 1);
        context.startService(intent);
    }

    private void aZ(boolean z) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "release connect resources %s", this.aei);
        }
        this.aei = null;
        com.kwad.framework.filedownloader.f.tB().c(new DownloadServiceConnectChangedEvent(DownloadServiceConnectChangedEvent.ConnectStatus.lost, this.adC));
    }

    protected abstract void a(INTERFACE r1, CALLBACK callback);

    @Override // com.kwad.framework.filedownloader.u
    public final void an(Context context) {
        a(context, (Runnable) null);
    }

    protected abstract INTERFACE b(IBinder iBinder);

    @Override // com.kwad.framework.filedownloader.u
    public final boolean isConnected() {
        return vr() != null;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.aei = (INTERFACE) b(iBinder);
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "onServiceConnected %s %s", componentName, this.aei);
        }
        try {
            a(this.aei, this.aeh);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        List list = (List) this.abq.clone();
        this.abq.clear();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
        com.kwad.framework.filedownloader.f.tB().c(new DownloadServiceConnectChangedEvent(DownloadServiceConnectChangedEvent.ConnectStatus.connected, this.adC));
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "onServiceDisconnected %s %s", componentName, this.aei);
        }
        aZ(true);
    }

    protected abstract CALLBACK tT();

    protected final INTERFACE vr() {
        return this.aei;
    }
}
