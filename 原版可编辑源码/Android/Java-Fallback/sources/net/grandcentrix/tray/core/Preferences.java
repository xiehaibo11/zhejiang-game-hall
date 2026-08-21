package net.grandcentrix.tray.core;

import net.grandcentrix.tray.core.PreferenceStorage;

public abstract class Preferences<T, S extends net.grandcentrix.tray.core.PreferenceStorage<T>> implements net.grandcentrix.tray.core.PreferenceAccessor<T> {
    private boolean mChangeVersionSucceeded;

    @android.support.annotation.NonNull
    private S mStorage;
    private int mVersion;

    public Preferences(@android.support.annotation.NonNull S r2, int r3) {
            r1 = this;
            r1.<init>()
            r1.mStorage = r2
            r1.mVersion = r3
            r0 = 0
            r1.mChangeVersionSucceeded = r0
            r1.isVersionChangeChecked()
            return
    }

    static boolean isDataTypeSupported(java.lang.Object r1) {
            boolean r0 = r1 instanceof java.lang.Integer
            if (r0 != 0) goto L19
            boolean r0 = r1 instanceof java.lang.String
            if (r0 != 0) goto L19
            boolean r0 = r1 instanceof java.lang.Long
            if (r0 != 0) goto L19
            boolean r0 = r1 instanceof java.lang.Float
            if (r0 != 0) goto L19
            boolean r0 = r1 instanceof java.lang.Boolean
            if (r0 != 0) goto L19
            if (r1 != 0) goto L17
            goto L19
        L17:
            r0 = 0
            goto L1a
        L19:
            r0 = 1
        L1a:
            return r0
    }

    private boolean putData(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto Lf
            net.grandcentrix.tray.core.PreferenceStorage r0 = r2.getStorage()
            boolean r0 = r0.put(r3, r4)
            return r0
        Lf:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Preference key value cannot be empty."
            r0.<init>(r1)
            throw r0
    }

    synchronized void changeVersion(int r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 1
            if (r5 < r0) goto L95
            net.grandcentrix.tray.core.PreferenceStorage r1 = r4.getStorage()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            int r1 = r1.getVersion()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            if (r1 == r5) goto L85
            if (r1 != 0) goto L2d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.<init>()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = "create "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r4)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = " with initial version 0"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            net.grandcentrix.tray.core.TrayLog.v(r2)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r4.onCreate(r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            goto L7e
        L2d:
            if (r1 <= r5) goto L57
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.<init>()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = "downgrading "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r4)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = "from "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r1)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            net.grandcentrix.tray.core.TrayLog.v(r2)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r4.onDowngrade(r1, r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            goto L7e
        L57:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.<init>()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = "upgrading "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r4)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = " from "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r1)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.append(r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            net.grandcentrix.tray.core.TrayLog.v(r2)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r4.onUpgrade(r1, r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
        L7e:
            net.grandcentrix.tray.core.PreferenceStorage r2 = r4.getStorage()     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            r2.setVersion(r5)     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
        L85:
            r4.mChangeVersionSucceeded = r0     // Catch: java.lang.Throwable -> L88 net.grandcentrix.tray.core.TrayException -> L8a
            goto L93
        L88:
            r5 = move-exception
            goto Lac
        L8a:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = "could not change the version, retrying with the next interaction"
            net.grandcentrix.tray.core.TrayLog.v(r1)     // Catch: java.lang.Throwable -> L88
        L93:
            monitor-exit(r4)
            return
        L95:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L88
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r1.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "Version must be >= 1, was "
            r1.append(r2)     // Catch: java.lang.Throwable -> L88
            r1.append(r5)     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L88
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L88
            throw r0     // Catch: java.lang.Throwable -> L88
        Lac:
            monitor-exit(r4)
            throw r5
    }

    @Override
    public boolean clear() {
            r3 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r3.mStorage
            boolean r0 = r0.clear()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cleared "
            r1.append(r2)
            if (r0 == 0) goto L15
            java.lang.String r2 = "successful"
            goto L17
        L15:
            java.lang.String r2 = "failed"
        L17:
            r1.append(r2)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            net.grandcentrix.tray.core.TrayLog.v(r1)
            return r0
    }

    @Override
    public boolean contains(java.lang.String r2) {
            r1 = this;
            java.lang.Object r0 = r1.getPref(r2)
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public java.util.Collection<T> getAll() {
            r1 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r1.mStorage
            java.util.Collection r0 = r0.getAll()
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public T getPref(@android.support.annotation.NonNull java.lang.String r2) {
            r1 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r1.mStorage
            java.lang.Object r0 = r0.get(r2)
            return r0
    }

    @android.support.annotation.NonNull
    protected S getStorage() {
            r1 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r1.mStorage
            return r0
    }

    public int getVersion() throws net.grandcentrix.tray.core.TrayException {
            r1 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r1.mStorage
            int r0 = r0.getVersion()
            return r0
    }

    boolean isVersionChangeChecked() {
            r1 = this;
            boolean r0 = r1.mChangeVersionSucceeded
            if (r0 != 0) goto L9
            int r0 = r1.mVersion
            r1.changeVersion(r0)
        L9:
            boolean r0 = r1.mChangeVersionSucceeded
            return r0
    }

    @java.lang.SafeVarargs
    public final void migrate(net.grandcentrix.tray.core.Migration<T>... r11) {
            r10 = this;
            int r0 = r11.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lc1
            r2 = r11[r1]
            boolean r3 = r2.shouldMigrate()
            if (r3 != 0) goto L2a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "not migrating "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = " into "
            r3.append(r4)
            r3.append(r10)
            java.lang.String r3 = r3.toString()
            net.grandcentrix.tray.core.TrayLog.v(r3)
            goto Lbd
        L2a:
            java.lang.Object r3 = r2.getData()
            boolean r4 = isDataTypeSupported(r3)
            java.lang.String r5 = "' into "
            if (r4 != 0) goto L6e
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "could not migrate '"
            r6.append(r7)
            java.lang.String r7 = r2.getPreviousKey()
            r6.append(r7)
            r6.append(r5)
            r6.append(r10)
            java.lang.String r5 = " because the data type "
            r6.append(r5)
            java.lang.Class r5 = r3.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r6.append(r5)
            java.lang.String r5 = " is invalid"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            net.grandcentrix.tray.core.TrayLog.w(r5)
            r5 = 0
            r2.onPostMigrate(r5)
            goto Lbd
        L6e:
            java.lang.String r6 = r2.getTrayKey()
            java.lang.String r7 = r2.getPreviousKey()
            net.grandcentrix.tray.core.PreferenceStorage r8 = r10.getStorage()
            r8.put(r6, r7, r3)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "migrated '"
            r8.append(r9)
            r8.append(r7)
            java.lang.String r9 = "'='"
            r8.append(r9)
            r8.append(r3)
            r8.append(r5)
            r8.append(r10)
            java.lang.String r5 = " (now: '"
            r8.append(r5)
            r8.append(r6)
            r8.append(r9)
            r8.append(r3)
            java.lang.String r5 = "')"
            r8.append(r5)
            java.lang.String r5 = r8.toString()
            net.grandcentrix.tray.core.TrayLog.v(r5)
            net.grandcentrix.tray.core.PreferenceStorage r5 = r10.getStorage()
            java.lang.Object r5 = r5.get(r6)
            r2.onPostMigrate(r5)
        Lbd:
            int r1 = r1 + 1
            goto L2
        Lc1:
            return
    }

    protected void onCreate(int r1) {
            r0 = this;
            return
    }

    protected void onDowngrade(int r4, int r5) {
            r3 = this;
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't downgrade "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " from version "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " to "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    protected void onUpgrade(int r4, int r5) {
            r3 = this;
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't upgrade database from version "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " to "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r2 = ", not implemented."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r3, float r4) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "put '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "' into "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            java.lang.Float r0 = java.lang.Float.valueOf(r4)
            boolean r0 = r2.putData(r3, r0)
            return r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r3, int r4) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "put '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "' into "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
            boolean r0 = r2.putData(r3, r0)
            return r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r3, long r4) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "put '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "' into "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            java.lang.Long r0 = java.lang.Long.valueOf(r4)
            boolean r0 = r2.putData(r3, r0)
            return r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "put '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "=\""
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "\"' into "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            boolean r0 = r2.putData(r3, r4)
            return r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "put '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "' into "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r4)
            boolean r0 = r2.putData(r3, r0)
            return r0
    }

    @Override
    public boolean remove(@android.support.annotation.NonNull java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isVersionChangeChecked()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "removed key '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "' from "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            net.grandcentrix.tray.core.PreferenceStorage r0 = r2.getStorage()
            boolean r0 = r0.remove(r3)
            return r0
    }

    @Override
    public boolean wipe() {
            r3 = this;
            S extends net.grandcentrix.tray.core.PreferenceStorage<T> r0 = r3.mStorage
            boolean r0 = r0.wipe()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "wipe "
            r1.append(r2)
            if (r0 == 0) goto L15
            java.lang.String r2 = "successful"
            goto L17
        L15:
            java.lang.String r2 = "failed"
        L17:
            r1.append(r2)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            net.grandcentrix.tray.core.TrayLog.v(r1)
            return r0
    }
}
