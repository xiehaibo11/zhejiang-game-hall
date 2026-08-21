package com.kwad.framework.filedownloader.services;

import android.os.Binder;
import android.os.IInterface;

public abstract class a<CALLBACK extends android.os.Binder, INTERFACE extends android.os.IInterface> implements android.content.ServiceConnection, com.kwad.framework.filedownloader.u {
    private final java.util.ArrayList<java.lang.Runnable> abq;
    private final java.lang.Class<?> adC;
    private final CALLBACK aeh;
    private volatile INTERFACE aei;
    private final java.util.HashMap<java.lang.String, java.lang.Object> aej;
    private final java.util.List<android.content.Context> aek;

    protected a(java.lang.Class<?> r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.aej = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aek = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.abq = r0
            r1.adC = r2
            android.os.Binder r2 = r1.tT()
            r1.aeh = r2
            return
    }

    private void a(android.content.Context r4, java.lang.Runnable r5) {
            r3 = this;
            boolean r5 = com.kwad.framework.filedownloader.f.f.aq(r4)
            if (r5 != 0) goto L38
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI
            r0 = 1
            if (r5 == 0) goto L1d
            java.lang.Object[] r5 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Class r2 = r4.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r5[r1] = r2
            java.lang.String r1 = "bindStartByContext %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r5)
        L1d:
            android.content.Intent r5 = new android.content.Intent
            java.lang.Class<?> r1 = r3.adC
            r5.<init>(r4, r1)
            java.util.List<android.content.Context> r1 = r3.aek
            boolean r1 = r1.contains(r4)
            if (r1 != 0) goto L31
            java.util.List<android.content.Context> r1 = r3.aek
            r1.add(r4)
        L31:
            r4.bindService(r5, r3, r0)
            r4.startService(r5)
            return
        L38:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "Fatal-Exception: You can't bind the FileDownloadService in :filedownloader process.\n It's the invalid operation and is likely to cause unexpected problems.\n Maybe you want to use non-separate process mode for FileDownloader, More detail about non-separate mode, please move to wiki manually: https://github.com/lingochamp/FileDownloader/wiki/filedownloader.properties"
            r4.<init>(r5)
            throw r4
    }

    private void aZ(boolean r4) {
            r3 = this;
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L11
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            INTERFACE extends android.os.IInterface r1 = r3.aei
            r4[r0] = r1
            java.lang.String r0 = "release connect resources %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r0, r4)
        L11:
            r4 = 0
            r3.aei = r4
            com.kwad.framework.filedownloader.f r4 = com.kwad.framework.filedownloader.f.tB()
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent r0 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r1 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.lost
            java.lang.Class<?> r2 = r3.adC
            r0.<init>(r1, r2)
            r4.c(r0)
            return
    }

    protected abstract void a(INTERFACE r1, CALLBACK r2);

    @Override
    public final void an(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    protected abstract INTERFACE b(android.os.IBinder r1);

    @Override
    public final boolean isConnected() {
            r1 = this;
            android.os.IInterface r0 = r1.vr()
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
            r2 = this;
            android.os.IInterface r4 = r2.b(r4)
            r2.aei = r4
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L1a
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            r4[r0] = r3
            r3 = 1
            INTERFACE extends android.os.IInterface r0 = r2.aei
            r4[r3] = r0
            java.lang.String r3 = "onServiceConnected %s %s"
            com.kwad.framework.filedownloader.f.d.c(r2, r3, r4)
        L1a:
            INTERFACE extends android.os.IInterface r3 = r2.aei     // Catch: android.os.RemoteException -> L22
            CALLBACK extends android.os.Binder r4 = r2.aeh     // Catch: android.os.RemoteException -> L22
            r2.a(r3, r4)     // Catch: android.os.RemoteException -> L22
            goto L26
        L22:
            r3 = move-exception
            r3.printStackTrace()
        L26:
            java.util.ArrayList<java.lang.Runnable> r3 = r2.abq
            java.lang.Object r3 = r3.clone()
            java.util.List r3 = (java.util.List) r3
            java.util.ArrayList<java.lang.Runnable> r4 = r2.abq
            r4.clear()
            java.util.Iterator r3 = r3.iterator()
        L37:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L47
            java.lang.Object r4 = r3.next()
            java.lang.Runnable r4 = (java.lang.Runnable) r4
            r4.run()
            goto L37
        L47:
            com.kwad.framework.filedownloader.f r3 = com.kwad.framework.filedownloader.f.tB()
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent r4 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.connected
            java.lang.Class<?> r1 = r2.adC
            r4.<init>(r0, r1)
            r3.c(r4)
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 1
            if (r0 == 0) goto L14
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            r0[r2] = r4
            INTERFACE extends android.os.IInterface r4 = r3.aei
            r0[r1] = r4
            java.lang.String r4 = "onServiceDisconnected %s %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r4, r0)
        L14:
            r3.aZ(r1)
            return
    }

    protected abstract CALLBACK tT();

    protected final INTERFACE vr() {
            r1 = this;
            INTERFACE extends android.os.IInterface r0 = r1.aei
            return r0
    }
}
