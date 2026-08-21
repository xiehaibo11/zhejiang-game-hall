package com.qihoo360.loader2;

import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginClient extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IPluginClient {
        @Override
        public String allocActivityContainer(String str, int i, String str2, Intent intent) throws RemoteException {
            return null;
        }

        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public String dumpActivities() throws RemoteException {
            return null;
        }

        @Override
        public String dumpServices() throws RemoteException {
            return null;
        }

        @Override
        public IPluginServiceServer fetchServiceServer() throws RemoteException {
            return null;
        }

        @Override
        public void onReceive(String str, String str2, Intent intent) throws RemoteException {
        }

        @Override
        public IBinder queryBinder(String str, String str2) throws RemoteException {
            return null;
        }

        @Override
        public void releaseBinder() throws RemoteException {
        }

        @Override
        public void sendIntent(Intent intent) throws RemoteException {
        }

        @Override
        public void sendIntentSync(Intent intent) throws RemoteException {
        }

        @Override
        public int sumActivities() throws RemoteException {
            return 0;
        }
    }

    String allocActivityContainer(String str, int i, String str2, Intent intent) throws RemoteException;

    String dumpActivities() throws RemoteException;

    String dumpServices() throws RemoteException;

    IPluginServiceServer fetchServiceServer() throws RemoteException;

    void onReceive(String str, String str2, Intent intent) throws RemoteException;

    IBinder queryBinder(String str, String str2) throws RemoteException;

    void releaseBinder() throws RemoteException;

    void sendIntent(Intent intent) throws RemoteException;

    void sendIntentSync(Intent intent) throws RemoteException;

    int sumActivities() throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IPluginClient {
        private static final String DESCRIPTOR = "com.qihoo360.loader2.IPluginClient";
        static final int TRANSACTION_allocActivityContainer = 1;
        static final int TRANSACTION_dumpActivities = 10;
        static final int TRANSACTION_dumpServices = 9;
        static final int TRANSACTION_fetchServiceServer = 7;
        static final int TRANSACTION_onReceive = 8;
        static final int TRANSACTION_queryBinder = 2;
        static final int TRANSACTION_releaseBinder = 3;
        static final int TRANSACTION_sendIntent = 4;
        static final int TRANSACTION_sendIntentSync = 5;
        static final int TRANSACTION_sumActivities = 6;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IPluginClient asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IPluginClient)) {
                return (IPluginClient) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    String strAllocActivityContainer = allocActivityContainer(parcel.readString(), parcel.readInt(), parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeString(strAllocActivityContainer);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    IBinder iBinderQueryBinder = queryBinder(parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iBinderQueryBinder);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    releaseBinder();
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntent(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntentSync(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iSumActivities = sumActivities();
                    parcel2.writeNoException();
                    parcel2.writeInt(iSumActivities);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    IPluginServiceServer iPluginServiceServerFetchServiceServer = fetchServiceServer();
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iPluginServiceServerFetchServiceServer != null ? iPluginServiceServerFetchServiceServer.asBinder() : null);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    onReceive(parcel.readString(), parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    String strDumpServices = dumpServices();
                    parcel2.writeNoException();
                    parcel2.writeString(strDumpServices);
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    String strDumpActivities = dumpActivities();
                    parcel2.writeNoException();
                    parcel2.writeString(strDumpActivities);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IPluginClient {
            public static IPluginClient sDefaultImpl;
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
            public String allocActivityContainer(String str, int i, String str2, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str2);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().allocActivityContainer(str, i, str2, intent);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IBinder queryBinder(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryBinder(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void releaseBinder() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().releaseBinder();
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntent(Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(4, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().sendIntent(intent);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntentSync(Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().sendIntentSync(intent);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public int sumActivities() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().sumActivities();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IPluginServiceServer fetchServiceServer() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().fetchServiceServer();
                    }
                    parcelObtain2.readException();
                    return IPluginServiceServer.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void onReceive(String str, String str2, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().onReceive(str, str2, intent);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String dumpServices() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().dumpServices();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String dumpActivities() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().dumpActivities();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IPluginClient iPluginClient) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPluginClient == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPluginClient;
            return true;
        }

        public static IPluginClient getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
