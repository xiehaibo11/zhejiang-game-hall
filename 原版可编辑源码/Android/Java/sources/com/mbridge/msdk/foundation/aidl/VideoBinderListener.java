package com.mbridge.msdk.foundation.aidl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.ParcelFileDescriptor;
import android.os.RemoteException;

public interface VideoBinderListener extends IInterface {
    void onVideo(String str, long j, String str2, String str3, String str4, ParcelFileDescriptor parcelFileDescriptor) throws RemoteException;

    public static abstract class a extends Binder implements VideoBinderListener {
        @Override
        public IBinder asBinder() {
            return this;
        }

        public a() {
            attachInterface(this, "com.mbridge.msdk.foundation.aidl.VideoBinderListener");
        }

        public static VideoBinderListener a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.mbridge.msdk.foundation.aidl.VideoBinderListener");
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof VideoBinderListener)) {
                return (VideoBinderListener) iInterfaceQueryLocalInterface;
            }
            return new a(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i != 1) {
                if (i == 1598968902) {
                    parcel2.writeString("com.mbridge.msdk.foundation.aidl.VideoBinderListener");
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface("com.mbridge.msdk.foundation.aidl.VideoBinderListener");
            onVideo(parcel.readString(), parcel.readLong(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readInt() != 0 ? (ParcelFileDescriptor) ParcelFileDescriptor.CREATOR.createFromParcel(parcel) : null);
            parcel2.writeNoException();
            return true;
        }

        private static class a implements VideoBinderListener {
            public static VideoBinderListener a;
            private IBinder b;

            a(IBinder iBinder) {
                this.b = iBinder;
            }

            @Override
            public final IBinder asBinder() {
                return this.b;
            }

            @Override
            public final void onVideo(String str, long j, String str2, String str3, String str4, ParcelFileDescriptor parcelFileDescriptor) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.mbridge.msdk.foundation.aidl.VideoBinderListener");
                    parcelObtain.writeString(str);
                    parcelObtain.writeLong(j);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    parcelObtain.writeString(str4);
                    if (parcelFileDescriptor != null) {
                        parcelObtain.writeInt(1);
                        parcelFileDescriptor.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    try {
                        if (!this.b.transact(1, parcelObtain, parcelObtain2, 0) && a.a() != null) {
                            a.a().onVideo(str, j, str2, str3, str4, parcelFileDescriptor);
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        } else {
                            parcelObtain2.readException();
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        }
                    } catch (Throwable th) {
                        th = th;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            }
        }

        public static VideoBinderListener a() {
            return a.a;
        }
    }
}
