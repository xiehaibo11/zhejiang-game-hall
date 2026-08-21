package android.support.v4.content;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.PowerManager;
import android.util.Log;
import android.util.SparseArray;

@Deprecated
public abstract class WakefulBroadcastReceiver extends BroadcastReceiver {
    private static final String EXTRA_WAKE_LOCK_ID = "android.support.content.wakelockid";
    private static int mNextId;
    private static final SparseArray<PowerManager.WakeLock> sActiveWakeLocks = null;

    public WakefulBroadcastReceiver() {
    }

    static {
        sActiveWakeLocks = new SparseArray();
        mNextId = 1;
    }

    public static ComponentName startWakefulService(Context r5, Intent r6) {
        SparseArray<PowerManager.WakeLock> r0 = sActiveWakeLocks;
        monitor-enter(r0);
        int r1 = mNextId;     // Catch: Throwable -> L15
        mNextId++;
        if (mNextId > 0) goto L7;
        mNextId = 1;     // Catch: Throwable -> L15
    L7:
        r6.putExtra(EXTRA_WAKE_LOCK_ID, r1);     // Catch: Throwable -> L15
        ComponentName r62 = r5.startService(r6);     // Catch: Throwable -> L15
        if (r62 == null) goto L10;
        PowerManager.WakeLock r52 = ((PowerManager) r5.getSystemService("power")).newWakeLock(1, "androidx.core:wake:" + r62.flattenToShortString());     // Catch: Throwable -> L15
        r52.setReferenceCounted(false);     // Catch: Throwable -> L15
        r52.acquire(60000);     // Catch: Throwable -> L15
        sActiveWakeLocks.put(r1, r52);     // Catch: Throwable -> L15
        monitor-exit(r0);     // Catch: Throwable -> L15
        return r62;
    L10:
        monitor-exit(r0);     // Catch: Throwable -> L15
        return null;
    L15:
        th = move-exception;
        throw th;
    }

    public static boolean completeWakefulIntent(Intent r5) {
        int r52 = r5.getIntExtra(EXTRA_WAKE_LOCK_ID, 0);
        if (r52 != 0) goto L5;
        return false;
    L5:
        SparseArray<PowerManager.WakeLock> r0 = sActiveWakeLocks;
        monitor-enter(r0);
        PowerManager.WakeLock r1 = sActiveWakeLocks.get(r52);     // Catch: Throwable -> L15
        if (r1 == null) goto L12;
        r1.release();     // Catch: Throwable -> L15
        sActiveWakeLocks.remove(r52);     // Catch: Throwable -> L15
        monitor-exit(r0);     // Catch: Throwable -> L15
        return true;
    L12:
        Log.w("WakefulBroadcastReceiv.", "No active wake lock id #" + r52);     // Catch: Throwable -> L15
        monitor-exit(r0);     // Catch: Throwable -> L15
        return true;
    L15:
        th = move-exception;
        throw th;
    }
}
