package android.support.design.widget;

class SnackbarManager {
    private static final int LONG_DURATION_MS = 2750;
    static final int MSG_TIMEOUT = 0;
    private static final int SHORT_DURATION_MS = 1500;
    private static android.support.design.widget.SnackbarManager snackbarManager;
    private android.support.design.widget.SnackbarManager.SnackbarRecord currentSnackbar;
    private final android.os.Handler handler;
    private final java.lang.Object lock;
    private android.support.design.widget.SnackbarManager.SnackbarRecord nextSnackbar;


    interface Callback {
        void dismiss(int r1);

        void show();
    }

    private static class SnackbarRecord {
        final java.lang.ref.WeakReference<android.support.design.widget.SnackbarManager.Callback> callback;
        int duration;
        boolean paused;

        SnackbarRecord(int r2, android.support.design.widget.SnackbarManager.Callback r3) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r3)
                r1.callback = r0
                r1.duration = r2
                return
        }

        boolean isSnackbar(android.support.design.widget.SnackbarManager.Callback r2) {
                r1 = this;
                if (r2 == 0) goto Lc
                java.lang.ref.WeakReference<android.support.design.widget.SnackbarManager$Callback> r0 = r1.callback
                java.lang.Object r0 = r0.get()
                if (r0 != r2) goto Lc
                r2 = 1
                goto Ld
            Lc:
                r2 = 0
            Ld:
                return r2
        }
    }

    private SnackbarManager() {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.lock = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            android.support.design.widget.SnackbarManager$1 r2 = new android.support.design.widget.SnackbarManager$1
            r2.<init>(r3)
            r0.<init>(r1, r2)
            r3.handler = r0
            return
    }

    private boolean cancelSnackbarLocked(android.support.design.widget.SnackbarManager.SnackbarRecord r3, int r4) {
            r2 = this;
            java.lang.ref.WeakReference<android.support.design.widget.SnackbarManager$Callback> r0 = r3.callback
            java.lang.Object r0 = r0.get()
            android.support.design.widget.SnackbarManager$Callback r0 = (android.support.design.widget.SnackbarManager.Callback) r0
            if (r0 == 0) goto L14
            android.os.Handler r1 = r2.handler
            r1.removeCallbacksAndMessages(r3)
            r0.dismiss(r4)
            r3 = 1
            return r3
        L14:
            r3 = 0
            return r3
    }

    static android.support.design.widget.SnackbarManager getInstance() {
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.snackbarManager
            if (r0 != 0) goto Lb
            android.support.design.widget.SnackbarManager r0 = new android.support.design.widget.SnackbarManager
            r0.<init>()
            android.support.design.widget.SnackbarManager.snackbarManager = r0
        Lb:
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.snackbarManager
            return r0
    }

    private boolean isCurrentSnackbarLocked(android.support.design.widget.SnackbarManager.Callback r2) {
            r1 = this;
            android.support.design.widget.SnackbarManager$SnackbarRecord r0 = r1.currentSnackbar
            if (r0 == 0) goto Lc
            boolean r2 = r0.isSnackbar(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    private boolean isNextSnackbarLocked(android.support.design.widget.SnackbarManager.Callback r2) {
            r1 = this;
            android.support.design.widget.SnackbarManager$SnackbarRecord r0 = r1.nextSnackbar
            if (r0 == 0) goto Lc
            boolean r2 = r0.isSnackbar(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    private void scheduleTimeoutLocked(android.support.design.widget.SnackbarManager.SnackbarRecord r5) {
            r4 = this;
            int r0 = r5.duration
            r1 = -2
            if (r0 != r1) goto L6
            return
        L6:
            r0 = 2750(0xabe, float:3.854E-42)
            int r1 = r5.duration
            if (r1 <= 0) goto Lf
            int r0 = r5.duration
            goto L16
        Lf:
            int r1 = r5.duration
            r2 = -1
            if (r1 != r2) goto L16
            r0 = 1500(0x5dc, float:2.102E-42)
        L16:
            android.os.Handler r1 = r4.handler
            r1.removeCallbacksAndMessages(r5)
            android.os.Handler r1 = r4.handler
            r2 = 0
            android.os.Message r5 = android.os.Message.obtain(r1, r2, r5)
            long r2 = (long) r0
            r1.sendMessageDelayed(r5, r2)
            return
    }

    private void showNextSnackbarLocked() {
            r2 = this;
            android.support.design.widget.SnackbarManager$SnackbarRecord r0 = r2.nextSnackbar
            if (r0 == 0) goto L19
            r2.currentSnackbar = r0
            r1 = 0
            r2.nextSnackbar = r1
            java.lang.ref.WeakReference<android.support.design.widget.SnackbarManager$Callback> r0 = r0.callback
            java.lang.Object r0 = r0.get()
            android.support.design.widget.SnackbarManager$Callback r0 = (android.support.design.widget.SnackbarManager.Callback) r0
            if (r0 == 0) goto L17
            r0.show()
            goto L19
        L17:
            r2.currentSnackbar = r1
        L19:
            return
    }

    public void dismiss(android.support.design.widget.SnackbarManager.Callback r3, int r4) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            boolean r1 = r2.isCurrentSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto Lf
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1c
            r2.cancelSnackbarLocked(r3, r4)     // Catch: java.lang.Throwable -> L1c
            goto L1a
        Lf:
            boolean r3 = r2.isNextSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L1c
            if (r3 == 0) goto L1a
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.nextSnackbar     // Catch: java.lang.Throwable -> L1c
            r2.cancelSnackbarLocked(r3, r4)     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r3
    }

    void handleTimeout(android.support.design.widget.SnackbarManager.SnackbarRecord r3) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            android.support.design.widget.SnackbarManager$SnackbarRecord r1 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L11
            if (r1 == r3) goto Lb
            android.support.design.widget.SnackbarManager$SnackbarRecord r1 = r2.nextSnackbar     // Catch: java.lang.Throwable -> L11
            if (r1 != r3) goto Lf
        Lb:
            r1 = 2
            r2.cancelSnackbarLocked(r3, r1)     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r3
    }

    public boolean isCurrent(android.support.design.widget.SnackbarManager.Callback r2) {
            r1 = this;
            java.lang.Object r0 = r1.lock
            monitor-enter(r0)
            boolean r2 = r1.isCurrentSnackbarLocked(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r2
    }

    public boolean isCurrentOrNext(android.support.design.widget.SnackbarManager.Callback r3) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            boolean r1 = r2.isCurrentSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L12
            boolean r3 = r2.isNextSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L15
            if (r3 == 0) goto L10
            goto L12
        L10:
            r3 = 0
            goto L13
        L12:
            r3 = 1
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return r3
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    public void onDismissed(android.support.design.widget.SnackbarManager.Callback r2) {
            r1 = this;
            java.lang.Object r0 = r1.lock
            monitor-enter(r0)
            boolean r2 = r1.isCurrentSnackbarLocked(r2)     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L13
            r2 = 0
            r1.currentSnackbar = r2     // Catch: java.lang.Throwable -> L15
            android.support.design.widget.SnackbarManager$SnackbarRecord r2 = r1.nextSnackbar     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L13
            r1.showNextSnackbarLocked()     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r2
    }

    public void onShown(android.support.design.widget.SnackbarManager.Callback r2) {
            r1 = this;
            java.lang.Object r0 = r1.lock
            monitor-enter(r0)
            boolean r2 = r1.isCurrentSnackbarLocked(r2)     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Le
            android.support.design.widget.SnackbarManager$SnackbarRecord r2 = r1.currentSnackbar     // Catch: java.lang.Throwable -> L10
            r1.scheduleTimeoutLocked(r2)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    public void pauseTimeout(android.support.design.widget.SnackbarManager.Callback r3) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            boolean r3 = r2.isCurrentSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L1d
            if (r3 == 0) goto L1b
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1d
            boolean r3 = r3.paused     // Catch: java.lang.Throwable -> L1d
            if (r3 != 0) goto L1b
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1d
            r1 = 1
            r3.paused = r1     // Catch: java.lang.Throwable -> L1d
            android.os.Handler r3 = r2.handler     // Catch: java.lang.Throwable -> L1d
            android.support.design.widget.SnackbarManager$SnackbarRecord r1 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1d
            r3.removeCallbacksAndMessages(r1)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }

    public void restoreTimeoutIfPaused(android.support.design.widget.SnackbarManager.Callback r3) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            boolean r3 = r2.isCurrentSnackbarLocked(r3)     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L19
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1b
            boolean r3 = r3.paused     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L19
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            r3.paused = r1     // Catch: java.lang.Throwable -> L1b
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L1b
            r2.scheduleTimeoutLocked(r3)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r3
    }

    public void show(int r3, android.support.design.widget.SnackbarManager.Callback r4) {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            boolean r1 = r2.isCurrentSnackbarLocked(r4)     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L1b
            android.support.design.widget.SnackbarManager$SnackbarRecord r4 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L44
            r4.duration = r3     // Catch: java.lang.Throwable -> L44
            android.os.Handler r3 = r2.handler     // Catch: java.lang.Throwable -> L44
            android.support.design.widget.SnackbarManager$SnackbarRecord r4 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L44
            r3.removeCallbacksAndMessages(r4)     // Catch: java.lang.Throwable -> L44
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L44
            r2.scheduleTimeoutLocked(r3)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        L1b:
            boolean r1 = r2.isNextSnackbarLocked(r4)     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L26
            android.support.design.widget.SnackbarManager$SnackbarRecord r4 = r2.nextSnackbar     // Catch: java.lang.Throwable -> L44
            r4.duration = r3     // Catch: java.lang.Throwable -> L44
            goto L2d
        L26:
            android.support.design.widget.SnackbarManager$SnackbarRecord r1 = new android.support.design.widget.SnackbarManager$SnackbarRecord     // Catch: java.lang.Throwable -> L44
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L44
            r2.nextSnackbar = r1     // Catch: java.lang.Throwable -> L44
        L2d:
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L3c
            android.support.design.widget.SnackbarManager$SnackbarRecord r3 = r2.currentSnackbar     // Catch: java.lang.Throwable -> L44
            r4 = 4
            boolean r3 = r2.cancelSnackbarLocked(r3, r4)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L3c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        L3c:
            r3 = 0
            r2.currentSnackbar = r3     // Catch: java.lang.Throwable -> L44
            r2.showNextSnackbarLocked()     // Catch: java.lang.Throwable -> L44
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        L44:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            throw r3
    }
}
