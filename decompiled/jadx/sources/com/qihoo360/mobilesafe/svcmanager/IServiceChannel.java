package com.qihoo360.mobilesafe.svcmanager;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.qihoo360.replugin.IBinderGetter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface IServiceChannel extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IServiceChannel {
        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public void addService(String str, IBinder iBinder) throws RemoteException {
        }

        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public void addServiceDelayed(String str, IBinderGetter iBinderGetter) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public IBinder getPluginService(String str, String str2, IBinder iBinder) throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public IBinder getService(String str) throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public void onPluginServiceRefReleased(String str, String str2) throws RemoteException {
        }

        @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
        public void removeService(String str) throws RemoteException {
        }
    }

    void addService(String str, IBinder iBinder) throws RemoteException;

    void addServiceDelayed(String str, IBinderGetter iBinderGetter) throws RemoteException;

    IBinder getPluginService(String str, String str2, IBinder iBinder) throws RemoteException;

    IBinder getService(String str) throws RemoteException;

    void onPluginServiceRefReleased(String str, String str2) throws RemoteException;

    void removeService(String str) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IServiceChannel {
        private static final String DESCRIPTOR = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel";
        static final int TRANSACTION_addService = 2;
        static final int TRANSACTION_addServiceDelayed = 3;
        static final int TRANSACTION_getPluginService = 5;
        static final int TRANSACTION_getService = 1;
        static final int TRANSACTION_onPluginServiceRefReleased = 6;
        static final int TRANSACTION_removeService = 4;

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IServiceChannel asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IServiceChannel)) {
                return (IServiceChannel) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    IBinder service = getService(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(service);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    addService(parcel.readString(), parcel.readStrongBinder());
                    parcel2.writeNoException();
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    addServiceDelayed(parcel.readString(), IBinderGetter.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    removeService(parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    IBinder pluginService = getPluginService(parcel.readString(), parcel.readString(), parcel.readStrongBinder());
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(pluginService);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    onPluginServiceRefReleased(parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IServiceChannel {
            public static IServiceChannel sDefaultImpl;
            private IBinder mRemote;

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public IBinder getService(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getService(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public void addService(String str, IBinder iBinder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().addService(str, iBinder);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public void addServiceDelayed(String str, IBinderGetter iBinderGetter) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongBinder(iBinderGetter != null ? iBinderGetter.asBinder() : null);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().addServiceDelayed(str, iBinderGetter);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public void removeService(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().removeService(str);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public IBinder getPluginService(String str, String str2, IBinder iBinder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getPluginService(str, str2, iBinder);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.mobilesafe.svcmanager.IServiceChannel
            public void onPluginServiceRefReleased(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().onPluginServiceRefReleased(str, str2);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IServiceChannel iServiceChannel) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iServiceChannel == null) {
                return false;
            }
            Proxy.sDefaultImpl = iServiceChannel;
            return true;
        }

        public static IServiceChannel getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
