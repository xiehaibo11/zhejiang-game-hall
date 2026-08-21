package com.tkay.china.a.a;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public interface c extends IInterface {
    String a();

    boolean b();

    public static abstract class a extends Binder implements c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final int f5869a = 1;
        static final int b = 2;
        private static final String c = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService";

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public a() {
            attachInterface(this, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
        }

        public static c a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof c)) ? new C0400a(iBinder) : (c) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i == 1) {
                parcel.enforceInterface("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
                String strA = a();
                parcel2.writeNoException();
                parcel2.writeString(strA);
                return true;
            }
            if (i != 2) {
                if (i == 1598968902) {
                    parcel2.writeString("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
            boolean zB = b();
            parcel2.writeNoException();
            parcel2.writeInt(zB ? 1 : 0);
            return true;
        }

        /* JADX INFO: renamed from: com.tkay.china.a.a.c$a$a, reason: collision with other inner class name */
        private static class C0400a implements c {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f5870a;

            private static String c() {
                return "com.uodis.opendevice.aidl.OpenDeviceIdentifierService";
            }

            C0400a(IBinder iBinder) {
                this.f5870a = iBinder;
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.f5870a;
            }

            @Override // com.tkay.china.a.a.c
            public final String a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
                    this.f5870a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.tkay.china.a.a.c
            public final boolean b() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.uodis.opendevice.aidl.OpenDeviceIdentifierService");
                    this.f5870a.transact(2, parcelObtain, parcelObtain2, 0);
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
