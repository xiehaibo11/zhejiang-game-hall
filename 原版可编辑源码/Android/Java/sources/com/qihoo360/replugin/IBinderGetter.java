package com.qihoo360.replugin;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IBinderGetter extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IBinderGetter {
        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public IBinder get() throws RemoteException {
            return null;
        }
    }

    IBinder get() throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IBinderGetter {
        private static final String DESCRIPTOR = "com.qihoo360.replugin.IBinderGetter";
        static final int TRANSACTION_get = 1;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IBinderGetter asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IBinderGetter)) {
                return (IBinderGetter) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i != 1) {
                if (i == 1598968902) {
                    parcel2.writeString(DESCRIPTOR);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(DESCRIPTOR);
            IBinder iBinder = get();
            parcel2.writeNoException();
            parcel2.writeStrongBinder(iBinder);
            return true;
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IBinderGetter {
            public static IBinderGetter sDefaultImpl;
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
            public IBinder get() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().get();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IBinderGetter iBinderGetter) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iBinderGetter == null) {
                return false;
            }
            Proxy.sDefaultImpl = iBinderGetter;
            return true;
        }

        public static IBinderGetter getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
