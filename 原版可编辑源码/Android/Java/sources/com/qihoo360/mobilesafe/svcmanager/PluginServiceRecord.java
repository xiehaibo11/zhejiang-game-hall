package com.qihoo360.mobilesafe.svcmanager;

import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import com.qihoo360.loader2.MP;
import com.qihoo360.mobilesafe.core.BuildConfig;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.locks.ReentrantLock;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginServiceRecord extends ReentrantLock {
    private static final boolean DEBUG;
    private static final String TAG;
    private static final long serialVersionUID = 1964598149985081920L;
    MP.PluginBinder mPluginBinder;
    final String mPluginName;
    final String mServiceName;
    ArrayList<ProcessRecord> processRecords = new ArrayList<>(4);

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "PluginServiceRecord" : PluginServiceRecord.class.getSimpleName();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class ProcessRecord implements IBinder.DeathRecipient {
        final IBinder deathMonitor;
        final int pid;
        private int refCount;

        private ProcessRecord(int i, IBinder iBinder) {
            this.pid = i;
            this.deathMonitor = iBinder;
            try {
                iBinder.linkToDeath(this, 0);
            } catch (RemoteException unused) {
                if (PluginServiceRecord.DEBUG) {
                    Log.d(PluginServiceRecord.TAG, "Error when linkToDeath: ");
                }
            }
            this.refCount = 1;
        }

        private int incrementRef() {
            int i = this.refCount + 1;
            this.refCount = i;
            return i;
        }

        private int decrementRef() {
            int i = this.refCount - 1;
            this.refCount = i;
            return i;
        }

        @Override
        public void binderDied() {
            PluginServiceManager.onRefProcessDied(PluginServiceRecord.this.mPluginName, PluginServiceRecord.this.mServiceName, this.pid);
        }
    }

    PluginServiceRecord(String str, String str2) {
        this.mPluginName = str;
        this.mServiceName = str2;
    }

    IBinder getService(int i, IBinder iBinder) {
        lock();
        try {
            if (this.mPluginBinder == null) {
                this.mPluginBinder = MP.fetchPluginBinder(this.mPluginName, Integer.MIN_VALUE, this.mServiceName);
            }
            if (this.mPluginBinder == null) {
                return null;
            }
            addNewRecordInternal(i, iBinder);
            return this.mPluginBinder.binder;
        } catch (Exception e) {
            if (DEBUG) {
                Log.d(TAG, "Error getting plugin service: ", e);
            }
            return null;
        } finally {
            unlock();
        }
        unlock();
    }

    int decrementProcessRef(int i) {
        lock();
        try {
            try {
                ProcessRecord processRecordInternal = getProcessRecordInternal(i);
                if (processRecordInternal != null && processRecordInternal.decrementRef() <= 0) {
                    this.processRecords.remove(processRecordInternal);
                }
                if (DEBUG) {
                    Log.d(TAG, "[decrementProcessRef] remaining ref count: " + getTotalRefCountInternal());
                }
                return getTotalRefCountInternal();
            } catch (Exception e) {
                if (DEBUG) {
                    Log.d(TAG, "Error decrement reference: ", e);
                }
                unlock();
                return -1;
            }
        } finally {
            unlock();
        }
    }

    int refProcessDied(int i) {
        lock();
        try {
            try {
                ProcessRecord processRecordInternal = getProcessRecordInternal(i);
                if (processRecordInternal != null) {
                    this.processRecords.remove(processRecordInternal);
                }
                return getTotalRefCountInternal();
            } catch (Exception e) {
                if (DEBUG) {
                    Log.d(TAG, "Error decrement reference: ", e);
                }
                unlock();
                return -1;
            }
        } finally {
            unlock();
        }
    }

    boolean isServiceAlive() {
        MP.PluginBinder pluginBinder = this.mPluginBinder;
        return pluginBinder != null && pluginBinder.binder != null && this.mPluginBinder.binder.isBinderAlive() && this.mPluginBinder.binder.pingBinder();
    }

    private void addNewRecordInternal(int i, IBinder iBinder) {
        ProcessRecord processRecordInternal = getProcessRecordInternal(i);
        if (processRecordInternal != null) {
            processRecordInternal.incrementRef();
        } else {
            this.processRecords.add(new ProcessRecord(i, iBinder));
        }
        if (DEBUG) {
            Log.d(TAG, "[addNewRecordInternal] remaining ref count: " + getTotalRefCountInternal());
        }
    }

    private ProcessRecord getProcessRecordInternal(int i) {
        for (ProcessRecord processRecord : this.processRecords) {
            if (processRecord.pid == i) {
                return processRecord;
            }
        }
        return null;
    }

    private int getTotalRefCountInternal() {
        Iterator<ProcessRecord> it = this.processRecords.iterator();
        int i = 0;
        while (it.hasNext()) {
            i += it.next().refCount;
        }
        return i;
    }
}
