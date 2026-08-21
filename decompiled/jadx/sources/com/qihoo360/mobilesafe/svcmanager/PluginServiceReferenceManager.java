package com.qihoo360.mobilesafe.svcmanager;

import android.content.Context;
import android.os.IBinder;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import java.lang.ref.PhantomReference;
import java.lang.ref.ReferenceQueue;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class PluginServiceReferenceManager {
    private static final boolean DEBUG;
    private static final String TAG;
    private static Context sAppContext;
    private static Thread sMonitorThread;
    private static ArrayList<ServicePhantomRef> sRefList;
    private static ReferenceQueue<IBinder> sRefQueue;

    PluginServiceReferenceManager() {
    }

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "PluginServiceReferenceManager" : PluginServiceReferenceManager.class.getSimpleName();
        sAppContext = null;
        sRefList = new ArrayList<>();
        sRefQueue = new ReferenceQueue<>();
        sMonitorThread = null;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class ServicePhantomRef extends PhantomReference<IBinder> {
        final String pluginName;
        final String serviceName;

        public ServicePhantomRef(String str, String str2, IBinder iBinder, ReferenceQueue<? super IBinder> referenceQueue) {
            super(iBinder, referenceQueue);
            this.pluginName = str;
            this.serviceName = str2;
        }
    }

    static synchronized void onPluginServiceObtained(Context context, String str, String str2, IBinder iBinder) {
        sAppContext = context.getApplicationContext();
        synchronized (sRefList) {
            sRefList.add(new ServicePhantomRef(str, str2, iBinder, sRefQueue));
        }
        if (sMonitorThread == null) {
            startMonitoring();
        }
    }

    private static synchronized void startMonitoring() {
        sMonitorThread = new Thread() { // from class: com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                boolean z = false;
                while (!z) {
                    synchronized (PluginServiceReferenceManager.sRefList) {
                        int size = PluginServiceReferenceManager.sRefList.size();
                        if (size > 0) {
                            for (ServicePhantomRef servicePhantomRef = (ServicePhantomRef) PluginServiceReferenceManager.sRefQueue.poll(); servicePhantomRef != null; servicePhantomRef = (ServicePhantomRef) PluginServiceReferenceManager.sRefQueue.poll()) {
                                if (PluginServiceReferenceManager.DEBUG) {
                                    Log.d(PluginServiceReferenceManager.TAG, "Plugin service ref released: " + servicePhantomRef.serviceName);
                                }
                                PluginServiceReferenceManager.sRefList.remove(servicePhantomRef);
                                size--;
                                QihooServiceManager.onPluginServiceReleased(PluginServiceReferenceManager.sAppContext, servicePhantomRef.pluginName, servicePhantomRef.serviceName);
                            }
                        }
                        if (size <= 0) {
                            Thread unused = PluginServiceReferenceManager.sMonitorThread = null;
                            z = true;
                        }
                    }
                    if (!z) {
                        try {
                            Thread.sleep(5000L);
                        } catch (InterruptedException e) {
                            if (PluginServiceReferenceManager.DEBUG) {
                                Log.d(PluginServiceReferenceManager.TAG, "Thread sleeping interrupted: ", e);
                            }
                        }
                    }
                }
                if (PluginServiceReferenceManager.DEBUG) {
                    Log.d(PluginServiceReferenceManager.TAG, "sMonitorThread quits... ");
                }
            }
        };
        if (DEBUG) {
            Log.d(TAG, "Start monitoring...");
        }
        sMonitorThread.setPriority(5);
        sMonitorThread.start();
    }
}
