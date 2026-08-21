package com.qihoo360.replugin.component.service;

import android.os.IBinder;
import com.qihoo360.loader2.MP;
import com.qihoo360.loader2.PluginBinderInfo;
import com.qihoo360.loader2.PluginProcessMain;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.basic.ArrayMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginServiceServerFetcher {
    private static final byte[] PSS_LOCKER = new byte[0];
    private ArrayMap<Integer, IPluginServiceServer> mServiceManagerByProcessMap = new ArrayMap<>();

    public IPluginServiceServer fetchByProcess(int i) {
        IPluginServiceServer iPluginServiceServerFetchServiceServer;
        if (i == Integer.MAX_VALUE) {
            return null;
        }
        synchronized (PSS_LOCKER) {
            IPluginServiceServer iPluginServiceServer = this.mServiceManagerByProcessMap.get(Integer.valueOf(i));
            if (iPluginServiceServer != null) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "PluginServiceClient.fsmbp(): Exists! p=" + i);
                }
                return iPluginServiceServer;
            }
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginServiceClient.fsmbp(): Create a new one! p=" + i);
            }
            try {
                if (i == -2) {
                    iPluginServiceServerFetchServiceServer = PluginProcessMain.getPluginHost().fetchServiceServer();
                } else {
                    iPluginServiceServerFetchServiceServer = MP.startPluginProcess(null, i, new PluginBinderInfo(0)).fetchServiceServer();
                }
                iPluginServiceServer = iPluginServiceServerFetchServiceServer;
                iPluginServiceServer.asBinder().linkToDeath(new PSSDeathMonitor(i, iPluginServiceServer.asBinder()), 0);
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "psc.fsm: e", th);
            }
            if (iPluginServiceServer != null) {
                synchronized (PSS_LOCKER) {
                    this.mServiceManagerByProcessMap.put(Integer.valueOf(i), iPluginServiceServer);
                }
            }
            return iPluginServiceServer;
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class PSSDeathMonitor implements IBinder.DeathRecipient {
        final int mProcess;
        final IBinder mService;

        PSSDeathMonitor(int i, IBinder iBinder) {
            this.mProcess = i;
            this.mService = iBinder;
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.dm: d, rm p " + this.mProcess);
            synchronized (PluginServiceServerFetcher.PSS_LOCKER) {
                PluginServiceServerFetcher.this.mServiceManagerByProcessMap.remove(Integer.valueOf(this.mProcess));
            }
        }
    }
}
