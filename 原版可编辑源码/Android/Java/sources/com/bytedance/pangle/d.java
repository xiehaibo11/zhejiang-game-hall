package com.bytedance.pangle;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.bytedance.pangle.f;

public interface d extends IInterface {
    ComponentName a(Intent intent, String str);

    void a(f fVar);

    boolean a(Intent intent, f fVar, int i, String str);

    boolean b(Intent intent, String str);

    public static abstract class a extends Binder implements d {
        @Override
        public IBinder asBinder() {
            return this;
        }

        public a() {
            attachInterface(this, "com.bytedance.pangle.IServiceManager");
        }

        public static d a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.bytedance.pangle.IServiceManager");
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof d)) {
                return (d) iInterfaceQueryLocalInterface;
            }
            return new a(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i == 1) {
                parcel.enforceInterface("com.bytedance.pangle.IServiceManager");
                ComponentName componentNameA = a(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, parcel.readString());
                parcel2.writeNoException();
                if (componentNameA != null) {
                    parcel2.writeInt(1);
                    componentNameA.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface("com.bytedance.pangle.IServiceManager");
                boolean zB = b(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(zB ? 1 : 0);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface("com.bytedance.pangle.IServiceManager");
                boolean zA = a(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, f.a.a(parcel.readStrongBinder()), parcel.readInt(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(zA ? 1 : 0);
                return true;
            }
            if (i != 4) {
                if (i == 1598968902) {
                    parcel2.writeString("com.bytedance.pangle.IServiceManager");
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface("com.bytedance.pangle.IServiceManager");
            a(f.a.a(parcel.readStrongBinder()));
            parcel2.writeNoException();
            return true;
        }

        static class a implements d {
            public static d a;
            private IBinder b;

            a(IBinder iBinder) {
                this.b = iBinder;
            }

            @Override
            public final IBinder asBinder() {
                return this.b;
            }

            @Override
            public final ComponentName a(Intent intent, String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.IServiceManager");
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeString(str);
                    if (!this.b.transact(1, parcelObtain, parcelObtain2, 0) && a.a() != null) {
                        return a.a().a(intent, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (ComponentName) ComponentName.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public final boolean b(Intent intent, String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.IServiceManager");
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeString(str);
                    if (!this.b.transact(2, parcelObtain, parcelObtain2, 0) && a.a() != null) {
                        return a.a().b(intent, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public final boolean a(Intent intent, f fVar, int i, String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.IServiceManager");
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(fVar != null ? fVar.asBinder() : null);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.b.transact(3, parcelObtain, parcelObtain2, 0) && a.a() != null) {
                        return a.a().a(intent, fVar, i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public final void a(f fVar) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.IServiceManager");
                    parcelObtain.writeStrongBinder(fVar != null ? fVar.asBinder() : null);
                    if (!this.b.transact(4, parcelObtain, parcelObtain2, 0) && a.a() != null) {
                        a.a().a(fVar);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static d a() {
            return a.a;
        }
    }
}
