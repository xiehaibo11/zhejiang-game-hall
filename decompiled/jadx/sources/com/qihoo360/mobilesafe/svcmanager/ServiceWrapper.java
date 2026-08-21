package com.qihoo360.mobilesafe.svcmanager;

import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import java.io.FileDescriptor;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class ServiceWrapper implements IBinder, IBinder.DeathRecipient {
    private static final boolean DEBUG;
    private static final String TAG;
    private final Context mAppCpntext;
    private final String mName;
    private IBinder mRemote;

    @Override // android.os.IBinder
    public void dumpAsync(FileDescriptor fileDescriptor, String[] strArr) throws RemoteException {
    }

    @Override // android.os.IBinder
    public boolean unlinkToDeath(IBinder.DeathRecipient deathRecipient, int i) {
        return false;
    }

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "ServiceWrapper" : ServiceWrapper.class.getSimpleName();
    }

    public static IBinder factory(Context context, String str, IBinder iBinder) {
        String interfaceDescriptor;
        try {
            interfaceDescriptor = iBinder.getInterfaceDescriptor();
        } catch (RemoteException e) {
            if (DEBUG) {
                Log.d(TAG, "getInterfaceDescriptor()", e);
            }
            interfaceDescriptor = null;
        }
        return iBinder.queryLocalInterface(interfaceDescriptor) != null ? iBinder : new ServiceWrapper(context, str, iBinder);
    }

    private ServiceWrapper(Context context, String str, IBinder iBinder) {
        this.mAppCpntext = context.getApplicationContext();
        this.mRemote = iBinder;
        this.mName = str;
        try {
            iBinder.linkToDeath(this, 0);
        } catch (RemoteException e) {
            if (DEBUG) {
                Log.d(TAG, "linkToDeath ex", e);
            }
        }
    }

    private IBinder getRemoteBinder() throws RemoteException {
        IBinder iBinder = this.mRemote;
        if (iBinder != null) {
            return iBinder;
        }
        IServiceChannel serverChannel = QihooServiceManager.getServerChannel(this.mAppCpntext);
        if (serverChannel == null) {
            Log.e(TAG, "sw.grb: s is n");
            throw new RemoteException();
        }
        IBinder service = serverChannel.getService(this.mName);
        if (service == null) {
            throw new RemoteException();
        }
        this.mRemote = service;
        return service;
    }

    @Override // android.os.IBinder
    public String getInterfaceDescriptor() throws RemoteException {
        return getRemoteBinder().getInterfaceDescriptor();
    }

    @Override // android.os.IBinder
    public boolean pingBinder() {
        try {
            return getRemoteBinder().pingBinder();
        } catch (RemoteException e) {
            if (!DEBUG) {
                return false;
            }
            Log.d(TAG, "getRemoteBinder()", e);
            return false;
        }
    }

    @Override // android.os.IBinder
    public boolean isBinderAlive() {
        try {
            return getRemoteBinder().isBinderAlive();
        } catch (RemoteException e) {
            if (!DEBUG) {
                return false;
            }
            Log.d(TAG, "isBinderAlive()", e);
            return false;
        }
    }

    @Override // android.os.IBinder
    public IInterface queryLocalInterface(String str) {
        try {
            return getRemoteBinder().queryLocalInterface(str);
        } catch (RemoteException e) {
            if (!DEBUG) {
                return null;
            }
            Log.d(TAG, "queryLocalInterface()", e);
            return null;
        }
    }

    @Override // android.os.IBinder
    public void dump(FileDescriptor fileDescriptor, String[] strArr) throws RemoteException {
        getRemoteBinder().dump(fileDescriptor, strArr);
    }

    @Override // android.os.IBinder
    public boolean transact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
        return getRemoteBinder().transact(i, parcel, parcel2, i2);
    }

    @Override // android.os.IBinder
    public void linkToDeath(IBinder.DeathRecipient deathRecipient, int i) throws RemoteException {
        if (DEBUG) {
            throw new UnsupportedOperationException("ServiceWrapper does NOT support Death Recipient!");
        }
    }

    @Override // android.os.IBinder.DeathRecipient
    public void binderDied() {
        if (DEBUG) {
            Log.d(TAG, "ServiceWrapper [binderDied]: " + this.mName);
        }
        this.mRemote = null;
    }
}
