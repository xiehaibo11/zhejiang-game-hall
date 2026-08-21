package com.qihoo360.replugin.component.service.server;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Messenger;
import android.os.Parcel;
import android.os.RemoteException;
import com.qihoo360.loader2.mgr.IServiceConnection;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface IPluginServiceServer extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IPluginServiceServer {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public int bindService(Intent intent, IServiceConnection iServiceConnection, int i, Messenger messenger) throws RemoteException {
            return 0;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public String dump() throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public ComponentName startService(Intent intent, Messenger messenger) throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public int stopService(Intent intent, Messenger messenger) throws RemoteException {
            return 0;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public boolean unbindService(IServiceConnection iServiceConnection) throws RemoteException {
            return false;
        }
    }

    int bindService(Intent intent, IServiceConnection iServiceConnection, int i, Messenger messenger) throws RemoteException;

    String dump() throws RemoteException;

    ComponentName startService(Intent intent, Messenger messenger) throws RemoteException;

    int stopService(Intent intent, Messenger messenger) throws RemoteException;

    boolean unbindService(IServiceConnection iServiceConnection) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IPluginServiceServer {
        private static final String DESCRIPTOR = "com.qihoo360.replugin.component.service.server.IPluginServiceServer";
        static final int TRANSACTION_bindService = 3;
        static final int TRANSACTION_dump = 5;
        static final int TRANSACTION_startService = 1;
        static final int TRANSACTION_stopService = 2;
        static final int TRANSACTION_unbindService = 4;

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IPluginServiceServer asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IPluginServiceServer)) {
                return (IPluginServiceServer) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(DESCRIPTOR);
                ComponentName componentNameStartService = startService(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (Messenger) Messenger.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                if (componentNameStartService != null) {
                    parcel2.writeInt(1);
                    componentNameStartService.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                int iStopService = stopService(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (Messenger) Messenger.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(iStopService);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                int iBindService = bindService(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null, IServiceConnection.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt(), parcel.readInt() != 0 ? (Messenger) Messenger.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(iBindService);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean zUnbindService = unbindService(IServiceConnection.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                parcel2.writeInt(zUnbindService ? 1 : 0);
                return true;
            }
            if (i != 5) {
                if (i == 1598968902) {
                    parcel2.writeString(DESCRIPTOR);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(DESCRIPTOR);
            String strDump = dump();
            parcel2.writeNoException();
            parcel2.writeString(strDump);
            return true;
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IPluginServiceServer {
            public static IPluginServiceServer sDefaultImpl;
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

            @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
            public ComponentName startService(Intent intent, Messenger messenger) throws RemoteException {
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
                    if (messenger != null) {
                        parcelObtain.writeInt(1);
                        messenger.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().startService(intent, messenger);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (ComponentName) ComponentName.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
            public int stopService(Intent intent, Messenger messenger) throws RemoteException {
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
                    if (messenger != null) {
                        parcelObtain.writeInt(1);
                        messenger.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().stopService(intent, messenger);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
            public int bindService(Intent intent, IServiceConnection iServiceConnection, int i, Messenger messenger) throws RemoteException {
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
                    parcelObtain.writeStrongBinder(iServiceConnection != null ? iServiceConnection.asBinder() : null);
                    parcelObtain.writeInt(i);
                    if (messenger != null) {
                        parcelObtain.writeInt(1);
                        messenger.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().bindService(intent, iServiceConnection, i, messenger);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
            public boolean unbindService(IServiceConnection iServiceConnection) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iServiceConnection != null ? iServiceConnection.asBinder() : null);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().unbindService(iServiceConnection);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
            public String dump() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().dump();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IPluginServiceServer iPluginServiceServer) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPluginServiceServer == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPluginServiceServer;
            return true;
        }

        public static IPluginServiceServer getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
