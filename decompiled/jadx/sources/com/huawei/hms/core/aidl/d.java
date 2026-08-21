package com.huawei.hms.core.aidl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: compiled from: IAIDLInvoke.java */
/* JADX INFO: loaded from: classes.dex */
public interface d extends IInterface {
    void a(b bVar, c cVar) throws RemoteException;

    /* JADX INFO: compiled from: IAIDLInvoke.java */
    public static abstract class a extends Binder implements d {

        /* JADX INFO: renamed from: com.huawei.hms.core.aidl.d$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: IAIDLInvoke.java */
        private static class C0080a implements d {
            public static d b;

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f2048a;

            C0080a(IBinder iBinder) {
                this.f2048a = iBinder;
            }

            @Override // com.huawei.hms.core.aidl.d
            public void a(b bVar, c cVar) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.huawei.hms.core.aidl.IAIDLInvoke");
                    if (bVar != null) {
                        parcelObtain.writeInt(1);
                        bVar.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(cVar != null ? cVar.asBinder() : null);
                    if (this.f2048a.transact(2, parcelObtain, null, 1) || a.a() == null) {
                        return;
                    }
                    a.a().a(bVar, cVar);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.f2048a;
            }
        }

        public static d a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.huawei.hms.core.aidl.IAIDLInvoke");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof d)) ? new C0080a(iBinder) : (d) iInterfaceQueryLocalInterface;
        }

        public static d a() {
            return C0080a.b;
        }
    }
}
