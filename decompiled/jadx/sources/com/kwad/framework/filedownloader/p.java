package com.kwad.framework.filedownloader;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import com.kwad.framework.filedownloader.c.a;
import com.kwad.framework.filedownloader.c.b;
import com.kwad.framework.filedownloader.message.MessageSnapshot;

/* JADX INFO: loaded from: classes2.dex */
final class p extends com.kwad.framework.filedownloader.services.a<a, com.kwad.framework.filedownloader.c.b> {

    protected static class a extends a.AbstractBinderC0184a {
        protected a() {
        }

        @Override // com.kwad.framework.filedownloader.c.a
        public final void q(MessageSnapshot messageSnapshot) {
            com.kwad.framework.filedownloader.message.e.vg().s(messageSnapshot);
        }
    }

    p(Class<?> cls) {
        super(cls);
    }

    private static com.kwad.framework.filedownloader.c.b a(IBinder iBinder) {
        return b.a.a(iBinder);
    }

    private static void a(com.kwad.framework.filedownloader.c.b bVar, a aVar) {
        bVar.a(aVar);
    }

    private static a tS() {
        return new a();
    }

    @Override // com.kwad.framework.filedownloader.services.a
    public final /* bridge */ /* synthetic */ void a(IInterface iInterface, Binder binder) {
        a((com.kwad.framework.filedownloader.c.b) iInterface, (a) binder);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean a(String str, String str2, boolean z, int i, int i2, int i3, boolean z2, com.kwad.framework.filedownloader.d.b bVar, boolean z3) {
        if (!isConnected()) {
            return com.kwad.framework.filedownloader.f.a.h(str, str2, z);
        }
        try {
            vr().b(str, str2, z, i, i2, i3, z2, bVar, z3);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean aY(int i) {
        if (!isConnected()) {
            return com.kwad.framework.filedownloader.f.a.aY(i);
        }
        try {
            return vr().aY(i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override // com.kwad.framework.filedownloader.u
    public final byte aZ(int i) {
        if (!isConnected()) {
            return com.kwad.framework.filedownloader.f.a.aZ(i);
        }
        try {
            return vr().aZ(i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return (byte) 0;
        }
    }

    @Override // com.kwad.framework.filedownloader.services.a
    public final /* synthetic */ IInterface b(IBinder iBinder) {
        return a(iBinder);
    }

    @Override // com.kwad.framework.filedownloader.u
    public final boolean ba(int i) {
        if (!isConnected()) {
            return com.kwad.framework.filedownloader.f.a.ba(i);
        }
        try {
            return vr().ba(i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override // com.kwad.framework.filedownloader.services.a
    public final /* synthetic */ Binder tT() {
        return tS();
    }
}
