package com.oppo.oiface.engine;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

public interface IOIfaceService extends IInterface {
    int getMemoryUsage(int i) throws RemoteException;

    String getOifaceVersion() throws RemoteException;

    void onAppRegister() throws RemoteException;

    void registerEngineClient(IOIfaceNotifier iOIfaceNotifier) throws RemoteException;

    void updateGameEngineInfo(String str) throws RemoteException;

    public static abstract class Stub extends Binder implements IOIfaceService {
        private static final String DESCRIPTOR = "com.oppo.oiface.IOIfaceService";
        static final int TRANSACTION_REGISTER_ENGINE_CLIENT = 154;
        static final int TRANSACTION_getMemoryUsage = 109;
        static final int TRANSACTION_getOifaceversion = 105;
        static final int TRANSACTION_onAppRegister = 104;
        static final int TRANSACTION_updateGameEngineInfo = 155;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IOIfaceService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IOIfaceService)) {
                return (IOIfaceService) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            return super.onTransact(i, parcel, parcel2, i2);
        }

        private static class Proxy implements IOIfaceService {
            private IBinder mRemote;

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override
            public void registerEngineClient(IOIfaceNotifier iOIfaceNotifier) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iOIfaceNotifier != null ? iOIfaceNotifier.asBinder() : null);
                    this.mRemote.transact(Stub.TRANSACTION_REGISTER_ENGINE_CLIENT, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void onAppRegister() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    this.mRemote.transact(104, parcelObtain, parcelObtain2, 1);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String getOifaceVersion() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    this.mRemote.transact(105, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public int getMemoryUsage(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    this.mRemote.transact(109, parcelObtain, parcelObtain2, 0);
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void updateGameEngineInfo(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(155, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }
    }
}
