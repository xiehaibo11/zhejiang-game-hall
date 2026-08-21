package com.huawei.hms.core.aidl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

public interface d extends IInterface {
    void a(b bVar, c cVar) throws RemoteException;

    public static abstract class a extends Binder implements d {

        private static class a implements d {
            public static d b;
            private IBinder a;

            a(IBinder iBinder) {
                this.a = iBinder;
            }

            @Override
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
                    if (this.a.transact(2, parcelObtain, null, 1) || a.a() == null) {
                        return;
                    }
                    a.a().a(bVar, cVar);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override
            public IBinder asBinder() {
                return this.a;
            }
        }

        public static d a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.huawei.hms.core.aidl.IAIDLInvoke");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof d)) ? new a(iBinder) : (d) iInterfaceQueryLocalInterface;
        }

        public static d a() {
            return a.b;
        }
    }
}
