package com.qihoo360.loader2.sp;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPref extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IPref {
        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public String get(String str, String str2, String str3) throws RemoteException {
            return null;
        }

        @Override
        public Bundle getAll(String str) throws RemoteException {
            return null;
        }

        @Override
        public void set(String str, String str2, String str3) throws RemoteException {
        }
    }

    String get(String str, String str2, String str3) throws RemoteException;

    Bundle getAll(String str) throws RemoteException;

    void set(String str, String str2, String str3) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IPref {
        private static final String DESCRIPTOR = "com.qihoo360.loader2.sp.IPref";
        static final int TRANSACTION_get = 1;
        static final int TRANSACTION_getAll = 3;
        static final int TRANSACTION_set = 2;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IPref asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IPref)) {
                return (IPref) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(DESCRIPTOR);
                String str = get(parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeString(str);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                set(parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                return true;
            }
            if (i != 3) {
                if (i == 1598968902) {
                    parcel2.writeString(DESCRIPTOR);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(DESCRIPTOR);
            Bundle all = getAll(parcel.readString());
            parcel2.writeNoException();
            if (all != null) {
                parcel2.writeInt(1);
                all.writeToParcel(parcel2, 1);
            } else {
                parcel2.writeInt(0);
            }
            return true;
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IPref {
            public static IPref sDefaultImpl;
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
            public String get(String str, String str2, String str3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().get(str, str2, str3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void set(String str, String str2, String str3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().set(str, str2, str3);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public Bundle getAll(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAll(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IPref iPref) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPref == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPref;
            return true;
        }

        public static IPref getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
