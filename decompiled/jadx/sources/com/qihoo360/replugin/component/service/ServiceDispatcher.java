package com.qihoo360.replugin.component.service;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Handler;
import android.os.IBinder;
import android.os.RemoteException;
import com.qihoo360.loader2.mgr.IServiceConnection;
import com.qihoo360.replugin.utils.basic.ArrayMap;
import java.lang.ref.WeakReference;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
final class ServiceDispatcher {
    private final Handler mActivityThread;
    private final ServiceConnection mConnection;
    private final Context mContext;
    private final int mFlags;
    private boolean mForgotten;
    private final ServiceConnectionLeaked mLocation;
    private final int mProcess;
    private RuntimeException mUnbindLocation;
    private final ArrayMap<ComponentName, ConnectionInfo> mActiveConnections = new ArrayMap<>();
    private final InnerConnection mIServiceConnection = new InnerConnection(this);

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class ConnectionInfo {
        IBinder binder;
        IBinder.DeathRecipient deathMonitor;

        private ConnectionInfo() {
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class InnerConnection extends IServiceConnection.Stub {
        final WeakReference<ServiceDispatcher> mDispatcher;

        InnerConnection(ServiceDispatcher serviceDispatcher) {
            this.mDispatcher = new WeakReference<>(serviceDispatcher);
        }

        @Override // com.qihoo360.loader2.mgr.IServiceConnection
        public void connected(ComponentName componentName, IBinder iBinder) throws RemoteException {
            ServiceDispatcher serviceDispatcher = this.mDispatcher.get();
            if (serviceDispatcher != null) {
                serviceDispatcher.connected(componentName, iBinder);
            }
        }
    }

    ServiceDispatcher(ServiceConnection serviceConnection, Context context, Handler handler, int i, int i2) {
        this.mConnection = serviceConnection;
        this.mContext = context;
        this.mActivityThread = handler;
        ServiceConnectionLeaked serviceConnectionLeaked = new ServiceConnectionLeaked(null);
        this.mLocation = serviceConnectionLeaked;
        serviceConnectionLeaked.fillInStackTrace();
        this.mFlags = i;
        this.mProcess = i2;
    }

    void validate(Context context, Handler handler) {
        if (this.mContext != context) {
            throw new RuntimeException("ServiceConnection " + this.mConnection + " registered with differing Context (was " + this.mContext + " now " + context + ")");
        }
        if (this.mActivityThread == handler) {
            return;
        }
        throw new RuntimeException("ServiceConnection " + this.mConnection + " registered with differing handler (was " + this.mActivityThread + " now " + handler + ")");
    }

    void doForget() {
        synchronized (this) {
            for (int i = 0; i < this.mActiveConnections.size(); i++) {
                ConnectionInfo connectionInfoValueAt = this.mActiveConnections.valueAt(i);
                connectionInfoValueAt.binder.unlinkToDeath(connectionInfoValueAt.deathMonitor, 0);
            }
            this.mActiveConnections.clear();
            this.mForgotten = true;
        }
    }

    ServiceConnectionLeaked getLocation() {
        return this.mLocation;
    }

    ServiceConnection getServiceConnection() {
        return this.mConnection;
    }

    IServiceConnection getIServiceConnection() {
        return this.mIServiceConnection;
    }

    int getFlags() {
        return this.mFlags;
    }

    void setUnbindLocation(RuntimeException runtimeException) {
        this.mUnbindLocation = runtimeException;
    }

    RuntimeException getUnbindLocation() {
        return this.mUnbindLocation;
    }

    int getProcess() {
        return this.mProcess;
    }

    public void connected(ComponentName componentName, IBinder iBinder) {
        Handler handler = this.mActivityThread;
        if (handler != null) {
            handler.post(new RunConnection(componentName, iBinder, 0));
        } else {
            doConnected(componentName, iBinder);
        }
    }

    public void death(ComponentName componentName, IBinder iBinder) {
        synchronized (this) {
            ConnectionInfo connectionInfoRemove = this.mActiveConnections.remove(componentName);
            if (connectionInfoRemove != null && connectionInfoRemove.binder == iBinder) {
                connectionInfoRemove.binder.unlinkToDeath(connectionInfoRemove.deathMonitor, 0);
                Handler handler = this.mActivityThread;
                if (handler != null) {
                    handler.post(new RunConnection(componentName, iBinder, 1));
                } else {
                    doDeath(componentName, iBinder);
                }
            }
        }
    }

    public void doConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this) {
            if (this.mForgotten) {
                return;
            }
            ConnectionInfo connectionInfo = this.mActiveConnections.get(componentName);
            if (connectionInfo == null || connectionInfo.binder != iBinder) {
                if (iBinder != null) {
                    ConnectionInfo connectionInfo2 = new ConnectionInfo();
                    connectionInfo2.binder = iBinder;
                    connectionInfo2.deathMonitor = new DeathMonitor(componentName, iBinder);
                    try {
                        iBinder.linkToDeath(connectionInfo2.deathMonitor, 0);
                        this.mActiveConnections.put(componentName, connectionInfo2);
                    } catch (RemoteException unused) {
                        this.mActiveConnections.remove(componentName);
                        return;
                    }
                } else {
                    this.mActiveConnections.remove(componentName);
                }
                if (connectionInfo != null) {
                    connectionInfo.binder.unlinkToDeath(connectionInfo.deathMonitor, 0);
                }
                if (connectionInfo != null) {
                    this.mConnection.onServiceDisconnected(componentName);
                }
                if (iBinder != null) {
                    this.mConnection.onServiceConnected(componentName, iBinder);
                }
            }
        }
    }

    public void doDeath(ComponentName componentName, IBinder iBinder) {
        this.mConnection.onServiceDisconnected(componentName);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class RunConnection implements Runnable {
        final int mCommand;
        final ComponentName mName;
        final IBinder mService;

        RunConnection(ComponentName componentName, IBinder iBinder, int i) {
            this.mName = componentName;
            this.mService = iBinder;
            this.mCommand = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            int i = this.mCommand;
            if (i == 0) {
                ServiceDispatcher.this.doConnected(this.mName, this.mService);
            } else if (i == 1) {
                ServiceDispatcher.this.doDeath(this.mName, this.mService);
            }
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class DeathMonitor implements IBinder.DeathRecipient {
        final ComponentName mName;
        final IBinder mService;

        DeathMonitor(ComponentName componentName, IBinder iBinder) {
            this.mName = componentName;
            this.mService = iBinder;
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            ServiceDispatcher.this.death(this.mName, this.mService);
        }
    }
}
