package com.qihoo360.replugin.packages;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.qihoo360.replugin.model.PluginInfo;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface IPluginManagerServer extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IPluginManagerServer {
        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void addToRunningPlugins(String str, int i, String str2) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public PluginRunningList getRunningPlugins() throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public String[] getRunningProcessesByPlugin(String str) throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public PluginInfo install(String str, boolean z) throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public boolean isPluginRunning(String str, String str2) throws RemoteException {
            return false;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public List<PluginInfo> load() throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void syncRunningPlugins(PluginRunningList pluginRunningList) throws RemoteException {
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public boolean uninstall(PluginInfo pluginInfo) throws RemoteException {
            return false;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public List<PluginInfo> updateAll() throws RemoteException {
            return null;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void updateUsed(String str, boolean z) throws RemoteException {
        }
    }

    void addToRunningPlugins(String str, int i, String str2) throws RemoteException;

    PluginRunningList getRunningPlugins() throws RemoteException;

    String[] getRunningProcessesByPlugin(String str) throws RemoteException;

    PluginInfo install(String str, boolean z) throws RemoteException;

    boolean isPluginRunning(String str, String str2) throws RemoteException;

    List<PluginInfo> load() throws RemoteException;

    void syncRunningPlugins(PluginRunningList pluginRunningList) throws RemoteException;

    boolean uninstall(PluginInfo pluginInfo) throws RemoteException;

    List<PluginInfo> updateAll() throws RemoteException;

    void updateUsed(String str, boolean z) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IPluginManagerServer {
        private static final String DESCRIPTOR = "com.qihoo360.replugin.packages.IPluginManagerServer";
        static final int TRANSACTION_addToRunningPlugins = 9;
        static final int TRANSACTION_getRunningPlugins = 6;
        static final int TRANSACTION_getRunningProcessesByPlugin = 10;
        static final int TRANSACTION_install = 1;
        static final int TRANSACTION_isPluginRunning = 7;
        static final int TRANSACTION_load = 3;
        static final int TRANSACTION_syncRunningPlugins = 8;
        static final int TRANSACTION_uninstall = 2;
        static final int TRANSACTION_updateAll = 4;
        static final int TRANSACTION_updateUsed = 5;

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IPluginManagerServer asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IPluginManagerServer)) {
                return (IPluginManagerServer) iInterfaceQueryLocalInterface;
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
                    PluginInfo pluginInfoInstall = install(parcel.readString(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    if (pluginInfoInstall != null) {
                        parcel2.writeInt(1);
                        pluginInfoInstall.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zUninstall = uninstall(parcel.readInt() != 0 ? PluginInfo.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(zUninstall ? 1 : 0);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<PluginInfo> listLoad = load();
                    parcel2.writeNoException();
                    parcel2.writeTypedList(listLoad);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<PluginInfo> listUpdateAll = updateAll();
                    parcel2.writeNoException();
                    parcel2.writeTypedList(listUpdateAll);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    updateUsed(parcel.readString(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    PluginRunningList runningPlugins = getRunningPlugins();
                    parcel2.writeNoException();
                    if (runningPlugins != null) {
                        parcel2.writeInt(1);
                        runningPlugins.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsPluginRunning = isPluginRunning(parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsPluginRunning ? 1 : 0);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    syncRunningPlugins(parcel.readInt() != 0 ? PluginRunningList.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    addToRunningPlugins(parcel.readString(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] runningProcessesByPlugin = getRunningProcessesByPlugin(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(runningProcessesByPlugin);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IPluginManagerServer {
            public static IPluginManagerServer sDefaultImpl;
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

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public PluginInfo install(String str, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().install(str, z);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? PluginInfo.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public boolean uninstall(PluginInfo pluginInfo) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (pluginInfo != null) {
                        parcelObtain.writeInt(1);
                        pluginInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().uninstall(pluginInfo);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public List<PluginInfo> load() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().load();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(PluginInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public List<PluginInfo> updateAll() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateAll();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(PluginInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public void updateUsed(String str, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().updateUsed(str, z);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public PluginRunningList getRunningPlugins() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getRunningPlugins();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? PluginRunningList.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public boolean isPluginRunning(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isPluginRunning(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public void syncRunningPlugins(PluginRunningList pluginRunningList) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (pluginRunningList != null) {
                        parcelObtain.writeInt(1);
                        pluginRunningList.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().syncRunningPlugins(pluginRunningList);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public void addToRunningPlugins(String str, int i, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().addToRunningPlugins(str, i, str2);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.qihoo360.replugin.packages.IPluginManagerServer
            public String[] getRunningProcessesByPlugin(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getRunningProcessesByPlugin(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public static boolean setDefaultImpl(IPluginManagerServer iPluginManagerServer) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPluginManagerServer == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPluginManagerServer;
            return true;
        }

        public static IPluginManagerServer getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
