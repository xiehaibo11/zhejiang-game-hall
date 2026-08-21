package com.bytedance.pangle;

import android.content.ComponentName;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes.dex */
public interface f extends IInterface {
    int a();

    void a(ComponentName componentName, IBinder iBinder);

    public static abstract class a extends Binder implements f {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public a() {
            attachInterface(this, "com.bytedance.pangle.ServiceConnection");
        }

        public static f a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.bytedance.pangle.ServiceConnection");
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof f)) {
                return (f) iInterfaceQueryLocalInterface;
            }
            return new C0055a(iBinder);
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i == 1) {
                parcel.enforceInterface("com.bytedance.pangle.ServiceConnection");
                a(parcel.readInt() != 0 ? (ComponentName) ComponentName.CREATOR.createFromParcel(parcel) : null, parcel.readStrongBinder());
                parcel2.writeNoException();
                return true;
            }
            if (i != 2) {
                if (i == 1598968902) {
                    parcel2.writeString("com.bytedance.pangle.ServiceConnection");
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface("com.bytedance.pangle.ServiceConnection");
            int iA = a();
            parcel2.writeNoException();
            parcel2.writeInt(iA);
            return true;
        }

        /* JADX INFO: renamed from: com.bytedance.pangle.f$a$a, reason: collision with other inner class name */
        static class C0055a implements f {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public static f f1524a;
            private IBinder b;

            C0055a(IBinder iBinder) {
                this.b = iBinder;
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.b;
            }

            @Override // com.bytedance.pangle.f
            public final void a(ComponentName componentName, IBinder iBinder) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.ServiceConnection");
                    if (componentName != null) {
                        parcelObtain.writeInt(1);
                        componentName.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.b.transact(1, parcelObtain, parcelObtain2, 0) && a.b() != null) {
                        a.b().a(componentName, iBinder);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.bytedance.pangle.f
            public final int a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bytedance.pangle.ServiceConnection");
                    if (!this.b.transact(2, parcelObtain, parcelObtain2, 0) && a.b() != null) {
                        return a.b().a();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static f b() {
            return C0055a.f1524a;
        }
    }
}
