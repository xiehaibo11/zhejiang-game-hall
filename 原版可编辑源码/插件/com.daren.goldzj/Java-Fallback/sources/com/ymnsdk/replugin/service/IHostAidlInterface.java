package com.ymnsdk.replugin.service;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

public interface IHostAidlInterface extends IInterface {

    public static class Default implements IHostAidlInterface {
        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public void postToSepperllita(String r1) throws RemoteException {
        }

        public Default() {
        }
    }

    public static abstract class Stub extends Binder implements IHostAidlInterface {
        private static final String DESCRIPTOR = "com.ymnsdk.replugin.service.IHostAidlInterface";
        static final int TRANSACTION_postToSepperllita = 1;

        private static class Proxy implements IHostAidlInterface {
            public static IHostAidlInterface sDefaultImpl;
            private IBinder mRemote;

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            Proxy(IBinder r1) {
                this.mRemote = r1;
            }

            @Override
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override
            public void postToSepperllita(String r6) throws RemoteException {
                Parcel r0 = Parcel.obtain();
                Parcel r1 = Parcel.obtain();
                r0.writeInterfaceToken(Stub.DESCRIPTOR);     // Catch: Throwable -> L13
                r0.writeString(r6);     // Catch: Throwable -> L13
                if (this.mRemote.transact(1, r0, r1, 0) == false) goto L6;
            L10:
                r1.readException();     // Catch: Throwable -> L13
                r1.recycle();
                r0.recycle();
                return;
            L6:
                if (Stub.getDefaultImpl() == null) goto L10;
                Stub.getDefaultImpl().postToSepperllita(r6);     // Catch: Throwable -> L13
                r1.recycle();
                r0.recycle();
                return;
            L13:
                th = move-exception;
                r1.recycle();
                r0.recycle();
                throw th;
            }
        }

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IHostAidlInterface asInterface(IBinder r2) {
            if (r2 != null) goto L5;
            return null;
        L5:
            IInterface r0 = r2.queryLocalInterface(DESCRIPTOR);
            if (r0 == null) goto L12;
            if ((r0 instanceof IHostAidlInterface) == false) goto L12;
            return (IHostAidlInterface) r0;
        L12:
            return new Proxy(r2);
        }

        @Override
        public boolean onTransact(int r4, Parcel r5, Parcel r6, int r7) throws RemoteException {
            if (r4 != 1) goto L5;
            r5.enforceInterface(DESCRIPTOR);
            postToSepperllita(r5.readString());
            r6.writeNoException();
            return true;
        L5:
            if (r4 != 1598968902) goto L7;
            r6.writeString(DESCRIPTOR);
            return true;
        L7:
            return super.onTransact(r4, r5, r6, r7);
        }

        public static boolean setDefaultImpl(IHostAidlInterface r1) {
            if (Proxy.sDefaultImpl != null) goto L10;
            if (r1 == null) goto L7;
            Proxy.sDefaultImpl = r1;
            return true;
        L7:
            return false;
        L10:
            throw new IllegalStateException("setDefaultImpl() called twice");
        }

        public static IHostAidlInterface getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }

    void postToSepperllita(String r1) throws RemoteException;
}
