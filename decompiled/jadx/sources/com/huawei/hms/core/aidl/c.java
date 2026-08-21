package com.huawei.hms.core.aidl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: compiled from: IAIDLCallback.java */
/* JADX INFO: loaded from: classes.dex */
public interface c extends IInterface {

    /* JADX INFO: compiled from: IAIDLCallback.java */
    public static abstract class a extends Binder implements c {

        /* JADX INFO: renamed from: com.huawei.hms.core.aidl.c$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: IAIDLCallback.java */
        private static class C0079a implements c {
            public static c b;

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f2047a;

            C0079a(IBinder iBinder) {
                this.f2047a = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.f2047a;
            }
        }

        public a() {
            attachInterface(this, "com.huawei.hms.core.aidl.IAIDLCallback");
        }

        public static c asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.huawei.hms.core.aidl.IAIDLCallback");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof c)) ? new C0079a(iBinder) : (c) iInterfaceQueryLocalInterface;
        }

        public static c getDefaultImpl() {
            return C0079a.b;
        }

        public static boolean setDefaultImpl(c cVar) {
            if (C0079a.b != null || cVar == null) {
                return false;
            }
            C0079a.b = cVar;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface("com.huawei.hms.core.aidl.IAIDLCallback");
                call(parcel.readInt() != 0 ? b.CREATOR.createFromParcel(parcel) : null);
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString("com.huawei.hms.core.aidl.IAIDLCallback");
            return true;
        }
    }

    void call(b bVar) throws RemoteException;
}
