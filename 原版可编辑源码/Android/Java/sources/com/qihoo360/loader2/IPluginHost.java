package com.qihoo360.loader2;

import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.qihoo360.loader2.IPluginClient;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.IPluginManagerServer;
import java.util.List;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginHost extends IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements IPluginHost {
        @Override
        public IBinder asBinder() {
            return null;
        }

        @Override
        public String attachPluginProcess(String str, int i, IBinder iBinder, String str2) throws RemoteException {
            return null;
        }

        @Override
        public String dump() throws RemoteException {
            return null;
        }

        @Override
        public IBinder fetchBinder(String str) throws RemoteException {
            return null;
        }

        @Override
        public IPluginManagerServer fetchManagerServer() throws RemoteException {
            return null;
        }

        @Override
        public long fetchPersistentCookie() throws RemoteException {
            return 0L;
        }

        @Override
        public IPluginServiceServer fetchServiceServer() throws RemoteException {
            return null;
        }

        @Override
        public int getPidByProcessName(String str) throws RemoteException {
            return 0;
        }

        @Override
        public String getProcessNameByPid(int i) throws RemoteException {
            return null;
        }

        @Override
        public int getTaskAffinityGroupIndex(String str) throws RemoteException {
            return 0;
        }

        @Override
        public void installBinder(String str, IBinder iBinder) throws RemoteException {
        }

        @Override
        public boolean isProcessAlive(String str) throws RemoteException {
            return false;
        }

        @Override
        public List<PluginInfo> listPlugins() throws RemoteException {
            return null;
        }

        @Override
        public void onReceive(String str, String str2, Intent intent) throws RemoteException {
        }

        @Override
        public PluginInfo pluginDownloaded(String str, boolean z) throws RemoteException {
            return null;
        }

        @Override
        public boolean pluginExtracted(String str) throws RemoteException {
            return false;
        }

        @Override
        public boolean pluginUninstalled(PluginInfo pluginInfo) throws RemoteException {
            return false;
        }

        @Override
        public IBinder queryPluginBinder(String str, String str2) throws RemoteException {
            return null;
        }

        @Override
        public List queryPluginsReceiverList(Intent intent) throws RemoteException {
            return null;
        }

        @Override
        public void regActivity(int i, String str, String str2, String str3) throws RemoteException {
        }

        @Override
        public void regPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
        }

        @Override
        public void regReceiver(String str, Map map) throws RemoteException {
        }

        @Override
        public void regService(int i, String str, String str2) throws RemoteException {
        }

        @Override
        public void sendIntent2Plugin(String str, Intent intent) throws RemoteException {
        }

        @Override
        public void sendIntent2PluginSync(String str, Intent intent) throws RemoteException {
        }

        @Override
        public void sendIntent2Process(String str, Intent intent) throws RemoteException {
        }

        @Override
        public void sendIntent2ProcessSync(String str, Intent intent) throws RemoteException {
        }

        @Override
        public IPluginClient startPluginProcess(String str, int i, PluginBinderInfo pluginBinderInfo) throws RemoteException {
            return null;
        }

        @Override
        public int sumBinders(int i) throws RemoteException {
            return 0;
        }

        @Override
        public void unregActivity(int i, String str, String str2, String str3) throws RemoteException {
        }

        @Override
        public void unregPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
        }

        @Override
        public void unregReceiver() throws RemoteException {
        }

        @Override
        public void unregService(int i, String str, String str2) throws RemoteException {
        }

        @Override
        public void updatePluginInfo(PluginInfo pluginInfo) throws RemoteException {
        }
    }

    String attachPluginProcess(String str, int i, IBinder iBinder, String str2) throws RemoteException;

    String dump() throws RemoteException;

    IBinder fetchBinder(String str) throws RemoteException;

    IPluginManagerServer fetchManagerServer() throws RemoteException;

    long fetchPersistentCookie() throws RemoteException;

    IPluginServiceServer fetchServiceServer() throws RemoteException;

    int getPidByProcessName(String str) throws RemoteException;

    String getProcessNameByPid(int i) throws RemoteException;

    int getTaskAffinityGroupIndex(String str) throws RemoteException;

    void installBinder(String str, IBinder iBinder) throws RemoteException;

    boolean isProcessAlive(String str) throws RemoteException;

    List<PluginInfo> listPlugins() throws RemoteException;

    void onReceive(String str, String str2, Intent intent) throws RemoteException;

    PluginInfo pluginDownloaded(String str, boolean z) throws RemoteException;

    boolean pluginExtracted(String str) throws RemoteException;

    boolean pluginUninstalled(PluginInfo pluginInfo) throws RemoteException;

    IBinder queryPluginBinder(String str, String str2) throws RemoteException;

    List queryPluginsReceiverList(Intent intent) throws RemoteException;

    void regActivity(int i, String str, String str2, String str3) throws RemoteException;

    void regPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException;

    void regReceiver(String str, Map map) throws RemoteException;

    void regService(int i, String str, String str2) throws RemoteException;

    void sendIntent2Plugin(String str, Intent intent) throws RemoteException;

    void sendIntent2PluginSync(String str, Intent intent) throws RemoteException;

    void sendIntent2Process(String str, Intent intent) throws RemoteException;

    void sendIntent2ProcessSync(String str, Intent intent) throws RemoteException;

    IPluginClient startPluginProcess(String str, int i, PluginBinderInfo pluginBinderInfo) throws RemoteException;

    int sumBinders(int i) throws RemoteException;

    void unregActivity(int i, String str, String str2, String str3) throws RemoteException;

    void unregPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException;

    void unregReceiver() throws RemoteException;

    void unregService(int i, String str, String str2) throws RemoteException;

    void updatePluginInfo(PluginInfo pluginInfo) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IPluginHost {
        private static final String DESCRIPTOR = "com.qihoo360.loader2.IPluginHost";
        static final int TRANSACTION_attachPluginProcess = 5;
        static final int TRANSACTION_dump = 33;
        static final int TRANSACTION_fetchBinder = 2;
        static final int TRANSACTION_fetchManagerServer = 29;
        static final int TRANSACTION_fetchPersistentCookie = 3;
        static final int TRANSACTION_fetchServiceServer = 28;
        static final int TRANSACTION_getPidByProcessName = 31;
        static final int TRANSACTION_getProcessNameByPid = 32;
        static final int TRANSACTION_getTaskAffinityGroupIndex = 30;
        static final int TRANSACTION_installBinder = 1;
        static final int TRANSACTION_isProcessAlive = 25;
        static final int TRANSACTION_listPlugins = 6;
        static final int TRANSACTION_onReceive = 15;
        static final int TRANSACTION_pluginDownloaded = 18;
        static final int TRANSACTION_pluginExtracted = 20;
        static final int TRANSACTION_pluginUninstalled = 19;
        static final int TRANSACTION_queryPluginBinder = 26;
        static final int TRANSACTION_queryPluginsReceiverList = 27;
        static final int TRANSACTION_regActivity = 7;
        static final int TRANSACTION_regPluginBinder = 11;
        static final int TRANSACTION_regReceiver = 13;
        static final int TRANSACTION_regService = 9;
        static final int TRANSACTION_sendIntent2Plugin = 22;
        static final int TRANSACTION_sendIntent2PluginSync = 24;
        static final int TRANSACTION_sendIntent2Process = 21;
        static final int TRANSACTION_sendIntent2ProcessSync = 23;
        static final int TRANSACTION_startPluginProcess = 4;
        static final int TRANSACTION_sumBinders = 16;
        static final int TRANSACTION_unregActivity = 8;
        static final int TRANSACTION_unregPluginBinder = 12;
        static final int TRANSACTION_unregReceiver = 14;
        static final int TRANSACTION_unregService = 10;
        static final int TRANSACTION_updatePluginInfo = 17;

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IPluginHost asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof IPluginHost)) {
                return (IPluginHost) iInterfaceQueryLocalInterface;
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
                    installBinder(parcel.readString(), parcel.readStrongBinder());
                    parcel2.writeNoException();
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    IBinder iBinderFetchBinder = fetchBinder(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iBinderFetchBinder);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    long jFetchPersistentCookie = fetchPersistentCookie();
                    parcel2.writeNoException();
                    parcel2.writeLong(jFetchPersistentCookie);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    String string = parcel.readString();
                    int i3 = parcel.readInt();
                    PluginBinderInfo pluginBinderInfoCreateFromParcel = parcel.readInt() != 0 ? PluginBinderInfo.CREATOR.createFromParcel(parcel) : null;
                    IPluginClient iPluginClientStartPluginProcess = startPluginProcess(string, i3, pluginBinderInfoCreateFromParcel);
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iPluginClientStartPluginProcess != null ? iPluginClientStartPluginProcess.asBinder() : null);
                    if (pluginBinderInfoCreateFromParcel != null) {
                        parcel2.writeInt(1);
                        pluginBinderInfoCreateFromParcel.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    String strAttachPluginProcess = attachPluginProcess(parcel.readString(), parcel.readInt(), parcel.readStrongBinder(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeString(strAttachPluginProcess);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<PluginInfo> listListPlugins = listPlugins();
                    parcel2.writeNoException();
                    parcel2.writeTypedList(listListPlugins);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    regActivity(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    unregActivity(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    regService(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    unregService(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    regPluginBinder(parcel.readInt() != 0 ? PluginBinderInfo.CREATOR.createFromParcel(parcel) : null, parcel.readStrongBinder());
                    parcel2.writeNoException();
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    unregPluginBinder(parcel.readInt() != 0 ? PluginBinderInfo.CREATOR.createFromParcel(parcel) : null, parcel.readStrongBinder());
                    parcel2.writeNoException();
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    regReceiver(parcel.readString(), parcel.readHashMap(getClass().getClassLoader()));
                    parcel2.writeNoException();
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    unregReceiver();
                    parcel2.writeNoException();
                    return true;
                case 15:
                    parcel.enforceInterface(DESCRIPTOR);
                    onReceive(parcel.readString(), parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iSumBinders = sumBinders(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iSumBinders);
                    return true;
                case 17:
                    parcel.enforceInterface(DESCRIPTOR);
                    updatePluginInfo(parcel.readInt() != 0 ? PluginInfo.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 18:
                    parcel.enforceInterface(DESCRIPTOR);
                    PluginInfo pluginInfoPluginDownloaded = pluginDownloaded(parcel.readString(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    if (pluginInfoPluginDownloaded != null) {
                        parcel2.writeInt(1);
                        pluginInfoPluginDownloaded.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 19:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zPluginUninstalled = pluginUninstalled(parcel.readInt() != 0 ? PluginInfo.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(zPluginUninstalled ? 1 : 0);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zPluginExtracted = pluginExtracted(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zPluginExtracted ? 1 : 0);
                    return true;
                case 21:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntent2Process(parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 22:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntent2Plugin(parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 23:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntent2ProcessSync(parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 24:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendIntent2PluginSync(parcel.readString(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 25:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsProcessAlive = isProcessAlive(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsProcessAlive ? 1 : 0);
                    return true;
                case 26:
                    parcel.enforceInterface(DESCRIPTOR);
                    IBinder iBinderQueryPluginBinder = queryPluginBinder(parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iBinderQueryPluginBinder);
                    return true;
                case 27:
                    parcel.enforceInterface(DESCRIPTOR);
                    List listQueryPluginsReceiverList = queryPluginsReceiverList(parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeList(listQueryPluginsReceiverList);
                    return true;
                case 28:
                    parcel.enforceInterface(DESCRIPTOR);
                    IPluginServiceServer iPluginServiceServerFetchServiceServer = fetchServiceServer();
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iPluginServiceServerFetchServiceServer != null ? iPluginServiceServerFetchServiceServer.asBinder() : null);
                    return true;
                case 29:
                    parcel.enforceInterface(DESCRIPTOR);
                    IPluginManagerServer iPluginManagerServerFetchManagerServer = fetchManagerServer();
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(iPluginManagerServerFetchManagerServer != null ? iPluginManagerServerFetchManagerServer.asBinder() : null);
                    return true;
                case 30:
                    parcel.enforceInterface(DESCRIPTOR);
                    int taskAffinityGroupIndex = getTaskAffinityGroupIndex(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(taskAffinityGroupIndex);
                    return true;
                case 31:
                    parcel.enforceInterface(DESCRIPTOR);
                    int pidByProcessName = getPidByProcessName(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(pidByProcessName);
                    return true;
                case 32:
                    parcel.enforceInterface(DESCRIPTOR);
                    String processNameByPid = getProcessNameByPid(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(processNameByPid);
                    return true;
                case 33:
                    parcel.enforceInterface(DESCRIPTOR);
                    String strDump = dump();
                    parcel2.writeNoException();
                    parcel2.writeString(strDump);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements IPluginHost {
            public static IPluginHost sDefaultImpl;
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
            public void installBinder(String str, IBinder iBinder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().installBinder(str, iBinder);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IBinder fetchBinder(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().fetchBinder(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public long fetchPersistentCookie() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().fetchPersistentCookie();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readLong();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IPluginClient startPluginProcess(String str, int i, PluginBinderInfo pluginBinderInfo) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (pluginBinderInfo != null) {
                        parcelObtain.writeInt(1);
                        pluginBinderInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().startPluginProcess(str, i, pluginBinderInfo);
                    }
                    parcelObtain2.readException();
                    IPluginClient iPluginClientAsInterface = IPluginClient.Stub.asInterface(parcelObtain2.readStrongBinder());
                    if (parcelObtain2.readInt() != 0) {
                        pluginBinderInfo.readFromParcel(parcelObtain2);
                    }
                    return iPluginClientAsInterface;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String attachPluginProcess(String str, int i, IBinder iBinder, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongBinder(iBinder);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().attachPluginProcess(str, i, iBinder, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public List<PluginInfo> listPlugins() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().listPlugins();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(PluginInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void regActivity(int i, String str, String str2, String str3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().regActivity(i, str, str2, str3);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void unregActivity(int i, String str, String str2, String str3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().unregActivity(i, str, str2, str3);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void regService(int i, String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().regService(i, str, str2);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void unregService(int i, String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().unregService(i, str, str2);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void regPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (pluginBinderInfo != null) {
                        parcelObtain.writeInt(1);
                        pluginBinderInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().regPluginBinder(pluginBinderInfo, iBinder);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void unregPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (pluginBinderInfo != null) {
                        parcelObtain.writeInt(1);
                        pluginBinderInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iBinder);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().unregPluginBinder(pluginBinderInfo, iBinder);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void regReceiver(String str, Map map) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeMap(map);
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().regReceiver(str, map);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void unregReceiver() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().unregReceiver();
                    } else {
                        parcelObtain2.readException();
                    }
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
                    if (!this.mRemote.transact(15, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
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
            public int sumBinders(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().sumBinders(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void updatePluginInfo(PluginInfo pluginInfo) throws RemoteException {
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
                    if (!this.mRemote.transact(17, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().updatePluginInfo(pluginInfo);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public PluginInfo pluginDownloaded(String str, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(18, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().pluginDownloaded(str, z);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? PluginInfo.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public boolean pluginUninstalled(PluginInfo pluginInfo) throws RemoteException {
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
                    if (!this.mRemote.transact(19, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().pluginUninstalled(pluginInfo);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public boolean pluginExtracted(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().pluginExtracted(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntent2Process(String str, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(21, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().sendIntent2Process(str, intent);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntent2Plugin(String str, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(22, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().sendIntent2Plugin(str, intent);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntent2ProcessSync(String str, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(23, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().sendIntent2ProcessSync(str, intent);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public void sendIntent2PluginSync(String str, Intent intent) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (intent != null) {
                        parcelObtain.writeInt(1);
                        intent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(24, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        Stub.getDefaultImpl().sendIntent2PluginSync(str, intent);
                    } else {
                        parcelObtain2.readException();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public boolean isProcessAlive(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(25, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isProcessAlive(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IBinder queryPluginBinder(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(26, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryPluginBinder(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public List queryPluginsReceiverList(Intent intent) throws RemoteException {
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
                    if (!this.mRemote.transact(27, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryPluginsReceiverList(intent);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readArrayList(getClass().getClassLoader());
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
                    if (!this.mRemote.transact(28, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
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
            public IPluginManagerServer fetchManagerServer() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(29, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().fetchManagerServer();
                    }
                    parcelObtain2.readException();
                    return IPluginManagerServer.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public int getTaskAffinityGroupIndex(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(30, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getTaskAffinityGroupIndex(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public int getPidByProcessName(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(31, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getPidByProcessName(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String getProcessNameByPid(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(32, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getProcessNameByPid(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String dump() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(33, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
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

        public static boolean setDefaultImpl(IPluginHost iPluginHost) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPluginHost == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPluginHost;
            return true;
        }

        public static IPluginHost getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }
    }
}
