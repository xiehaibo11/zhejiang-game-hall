package com.mbridge.msdk.optimize.a;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: compiled from: OpenDeviceIdentifierService.java */
/* JADX INFO: loaded from: classes2.dex */
public interface c extends IInterface {
    String a() throws RemoteException;

    boolean b() throws RemoteException;

    /* JADX INFO: compiled from: OpenDeviceIdentifierService.java */
    public static abstract class a extends Binder implements c {
        public static c a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(com.alipay.sdk.m.c.b.f1163a);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof c)) ? new C0284a(iBinder) : (c) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(com.alipay.sdk.m.c.b.f1163a);
                String strA = a();
                parcel2.writeNoException();
                parcel2.writeString(strA);
                return true;
            }
            if (i != 2) {
                if (i == 1598968902) {
                    parcel2.writeString(com.alipay.sdk.m.c.b.f1163a);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(com.alipay.sdk.m.c.b.f1163a);
            boolean zB = b();
            parcel2.writeNoException();
            parcel2.writeInt(zB ? 1 : 0);
            return true;
        }

        /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.c$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: OpenDeviceIdentifierService.java */
        private static class C0284a implements c {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f3877a;

            C0284a(IBinder iBinder) {
                this.f3877a = iBinder;
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.f3877a;
            }

            @Override // com.mbridge.msdk.optimize.a.c
            public final String a() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                    this.f3877a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mbridge.msdk.optimize.a.c
            public final boolean b() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                    this.f3877a.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }
    }
}
