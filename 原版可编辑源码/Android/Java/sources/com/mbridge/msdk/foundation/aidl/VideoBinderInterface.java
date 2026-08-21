package com.mbridge.msdk.foundation.aidl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.mbridge.msdk.foundation.aidl.VideoBinderListener;

public interface VideoBinderInterface extends IInterface {

    public static class Default implements VideoBinderInterface {
        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public void registerListener(VideoBinderListener videoBinderListener) throws RemoteException {
        }

        @Override
        public void requestVideo(String[] strArr) throws RemoteException {
        }
    }

    void registerListener(VideoBinderListener videoBinderListener) throws RemoteException;

    void requestVideo(String[] strArr) throws RemoteException;

    public static abstract class Stub extends Binder implements VideoBinderInterface {
        private static final String DESCRIPTOR = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface";
        static final int TRANSACTION_registerListener = 2;
        static final int TRANSACTION_requestVideo = 1;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static VideoBinderInterface asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof VideoBinderInterface)) {
                return (VideoBinderInterface) iInterfaceQueryLocalInterface;
            }
            return new a(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(DESCRIPTOR);
                requestVideo(parcel.createStringArray());
                parcel2.writeNoException();
                return true;
            }
            if (i != 2) {
                if (i == 1598968902) {
                    parcel2.writeString(DESCRIPTOR);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(DESCRIPTOR);
            registerListener(VideoBinderListener.a.a(parcel.readStrongBinder()));
            parcel2.writeNoException();
            return true;
        }

        private static class a implements VideoBinderInterface {
            public static VideoBinderInterface a;
            private IBinder b;

            a(IBinder iBinder) {
                this.b = iBinder;
            }

            @Override
            public final IBinder asBinder() {
                return this.b;
            }

            @Override
            public final void requestVideo(String[] strArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    if (!this.b.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().requestVideo(strArr);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public final void registerListener(VideoBinderListener videoBinderListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(videoBinderListener != null ? videoBinderListener.asBinder() : null);
                    if (!this.b.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().registerListener(videoBinderListener);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(VideoBinderInterface videoBinderInterface) {
            if (a.a != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (videoBinderInterface == null) {
                return false;
            }
            a.a = videoBinderInterface;
            return true;
        }

        public static VideoBinderInterface getDefaultImpl() {
            return a.a;
        }
    }
}
