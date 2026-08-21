package android.support.v4.content;

@java.lang.Deprecated
public abstract class WakefulBroadcastReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String EXTRA_WAKE_LOCK_ID = "android.support.content.wakelockid";
    private static int mNextId;
    private static final android.util.SparseArray<android.os.PowerManager.WakeLock> sActiveWakeLocks = null;

    static {
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks = r0
            r0 = 1
            android.support.v4.content.WakefulBroadcastReceiver.mNextId = r0
            return
    }

    public WakefulBroadcastReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean completeWakefulIntent(android.content.Intent r5) {
            r0 = 0
            java.lang.String r1 = "android.support.content.wakelockid"
            int r5 = r5.getIntExtra(r1, r0)
            if (r5 != 0) goto La
            return r0
        La:
            android.util.SparseArray<android.os.PowerManager$WakeLock> r0 = android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks
            monitor-enter(r0)
            android.util.SparseArray<android.os.PowerManager$WakeLock> r1 = android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks     // Catch: java.lang.Throwable -> L3a
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L3a
            android.os.PowerManager$WakeLock r1 = (android.os.PowerManager.WakeLock) r1     // Catch: java.lang.Throwable -> L3a
            r2 = 1
            if (r1 == 0) goto L22
            r1.release()     // Catch: java.lang.Throwable -> L3a
            android.util.SparseArray<android.os.PowerManager$WakeLock> r1 = android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks     // Catch: java.lang.Throwable -> L3a
            r1.remove(r5)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            return r2
        L22:
            java.lang.String r1 = "WakefulBroadcastReceiv."
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            r3.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = "No active wake lock id #"
            r3.append(r4)     // Catch: java.lang.Throwable -> L3a
            r3.append(r5)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L3a
            android.util.Log.w(r1, r5)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            return r2
        L3a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            throw r5
    }

    public static android.content.ComponentName startWakefulService(android.content.Context r5, android.content.Intent r6) {
            android.util.SparseArray<android.os.PowerManager$WakeLock> r0 = android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks
            monitor-enter(r0)
            int r1 = android.support.v4.content.WakefulBroadcastReceiver.mNextId     // Catch: java.lang.Throwable -> L4f
            int r2 = android.support.v4.content.WakefulBroadcastReceiver.mNextId     // Catch: java.lang.Throwable -> L4f
            r3 = 1
            int r2 = r2 + r3
            android.support.v4.content.WakefulBroadcastReceiver.mNextId = r2     // Catch: java.lang.Throwable -> L4f
            if (r2 > 0) goto Lf
            android.support.v4.content.WakefulBroadcastReceiver.mNextId = r3     // Catch: java.lang.Throwable -> L4f
        Lf:
            java.lang.String r2 = "android.support.content.wakelockid"
            r6.putExtra(r2, r1)     // Catch: java.lang.Throwable -> L4f
            android.content.ComponentName r6 = r5.startService(r6)     // Catch: java.lang.Throwable -> L4f
            if (r6 != 0) goto L1d
            r5 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return r5
        L1d:
            java.lang.String r2 = "power"
            java.lang.Object r5 = r5.getSystemService(r2)     // Catch: java.lang.Throwable -> L4f
            android.os.PowerManager r5 = (android.os.PowerManager) r5     // Catch: java.lang.Throwable -> L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f
            r2.<init>()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = "androidx.core:wake:"
            r2.append(r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = r6.flattenToShortString()     // Catch: java.lang.Throwable -> L4f
            r2.append(r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4f
            android.os.PowerManager$WakeLock r5 = r5.newWakeLock(r3, r2)     // Catch: java.lang.Throwable -> L4f
            r2 = 0
            r5.setReferenceCounted(r2)     // Catch: java.lang.Throwable -> L4f
            r2 = 60000(0xea60, double:2.9644E-319)
            r5.acquire(r2)     // Catch: java.lang.Throwable -> L4f
            android.util.SparseArray<android.os.PowerManager$WakeLock> r2 = android.support.v4.content.WakefulBroadcastReceiver.sActiveWakeLocks     // Catch: java.lang.Throwable -> L4f
            r2.put(r1, r5)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return r6
        L4f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r5
    }
}
