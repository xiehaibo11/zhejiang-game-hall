package net.grandcentrix.tray.provider;

public class TrayProviderHelper {
    private final android.content.Context mContext;
    private final net.grandcentrix.tray.provider.TrayUri mTrayUri;

    public TrayProviderHelper(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.mContext = r2
            net.grandcentrix.tray.provider.TrayUri r0 = new net.grandcentrix.tray.provider.TrayUri
            r0.<init>(r2)
            r1.mTrayUri = r0
            return
    }

    @android.support.annotation.NonNull
    static net.grandcentrix.tray.core.TrayItem cursorToTrayItem(android.database.Cursor r12) {
            java.lang.String r0 = "MODULE"
            int r0 = r12.getColumnIndexOrThrow(r0)
            java.lang.String r0 = r12.getString(r0)
            java.lang.String r1 = "KEY"
            int r1 = r12.getColumnIndexOrThrow(r1)
            java.lang.String r8 = r12.getString(r1)
            java.lang.String r1 = "MIGRATED_KEY"
            int r1 = r12.getColumnIndexOrThrow(r1)
            java.lang.String r9 = r12.getString(r1)
            java.lang.String r1 = "VALUE"
            int r1 = r12.getColumnIndexOrThrow(r1)
            java.lang.String r10 = r12.getString(r1)
            java.util.Date r6 = new java.util.Date
            java.lang.String r1 = "CREATED"
            int r1 = r12.getColumnIndexOrThrow(r1)
            long r1 = r12.getLong(r1)
            r6.<init>(r1)
            java.util.Date r7 = new java.util.Date
            java.lang.String r1 = "UPDATED"
            int r1 = r12.getColumnIndexOrThrow(r1)
            long r1 = r12.getLong(r1)
            r7.<init>(r1)
            net.grandcentrix.tray.core.TrayItem r11 = new net.grandcentrix.tray.core.TrayItem
            r1 = r11
            r2 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r11
    }

    public boolean clear() {
            r3 = this;
            android.content.Context r0 = r3.mContext     // Catch: java.lang.Throwable -> L12
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L12
            net.grandcentrix.tray.provider.TrayUri r1 = r3.mTrayUri     // Catch: java.lang.Throwable -> L12
            android.net.Uri r1 = r1.get()     // Catch: java.lang.Throwable -> L12
            r2 = 0
            r0.delete(r1, r2, r2)     // Catch: java.lang.Throwable -> L12
            r0 = 1
            return r0
        L12:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    public boolean clearBut(net.grandcentrix.tray.core.AbstractTrayPreference... r10) {
            r9 = this;
            r0 = 0
            r1 = 0
            java.lang.String[] r2 = new java.lang.String[r1]
            int r3 = r10.length
            r4 = r2
            r2 = r0
            r0 = 0
        L8:
            r5 = 1
            if (r0 >= r3) goto L26
            r6 = r10[r0]
            if (r6 != 0) goto L10
            goto L23
        L10:
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "MODULE != ?"
            java.lang.String r2 = net.grandcentrix.tray.provider.SqliteHelper.extendSelection(r2, r8)
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r1] = r7
            java.lang.String[] r4 = net.grandcentrix.tray.provider.SqliteHelper.extendSelectionArgs(r4, r5)
        L23:
            int r0 = r0 + 1
            goto L8
        L26:
            android.content.Context r0 = r9.mContext     // Catch: java.lang.Throwable -> L36
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L36
            net.grandcentrix.tray.provider.TrayUri r3 = r9.mTrayUri     // Catch: java.lang.Throwable -> L36
            android.net.Uri r3 = r3.get()     // Catch: java.lang.Throwable -> L36
            r0.delete(r3, r2, r4)     // Catch: java.lang.Throwable -> L36
            return r5
        L36:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    @android.support.annotation.NonNull
    public java.util.List<net.grandcentrix.tray.core.TrayItem> getAll() {
            r1 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r1.mTrayUri
            android.net.Uri r0 = r0.get()
            java.util.List r0 = r1.queryProviderSafe(r0)
            return r0
    }

    public boolean persist(@android.support.annotation.NonNull android.net.Uri r2, @android.support.annotation.Nullable java.lang.String r3) {
            r1 = this;
            r0 = 0
            boolean r0 = r1.persist(r2, r3, r0)
            return r0
    }

    public boolean persist(@android.support.annotation.NonNull android.net.Uri r4, @android.support.annotation.Nullable java.lang.String r5, @android.support.annotation.Nullable java.lang.String r6) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = "VALUE"
            r0.put(r1, r5)
            java.lang.String r1 = "MIGRATED_KEY"
            r0.put(r1, r6)
            r1 = 0
            android.content.Context r2 = r3.mContext     // Catch: java.lang.Throwable -> L1e
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L1e
            android.net.Uri r2 = r2.insert(r4, r0)     // Catch: java.lang.Throwable -> L1e
            if (r2 == 0) goto L1d
            r1 = 1
        L1d:
            return r1
        L1e:
            r2 = move-exception
            r2.printStackTrace()
            return r1
    }

    public boolean persist(@android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.NonNull java.lang.String r3, @android.support.annotation.NonNull java.lang.String r4) {
            r1 = this;
            r0 = 0
            boolean r0 = r1.persist(r2, r3, r0, r4)
            return r0
    }

    public boolean persist(@android.support.annotation.NonNull java.lang.String r3, @android.support.annotation.NonNull java.lang.String r4, @android.support.annotation.Nullable java.lang.String r5, @android.support.annotation.Nullable java.lang.String r6) {
            r2 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r2.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            r0.b(r3)
            r0.a(r4)
            android.net.Uri r0 = r0.a()
            boolean r1 = r2.persist(r0, r6, r5)
            return r1
    }

    @android.support.annotation.NonNull
    public java.util.List<net.grandcentrix.tray.core.TrayItem> queryProvider(@android.support.annotation.NonNull android.net.Uri r8) throws net.grandcentrix.tray.core.TrayException {
            r7 = this;
            android.content.Context r0 = r7.mContext     // Catch: java.lang.Throwable -> L44
            android.content.ContentResolver r1 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L44
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r2 = r8
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L2d
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            boolean r2 = r0.moveToFirst()
        L1b:
            if (r2 == 0) goto L29
            net.grandcentrix.tray.core.TrayItem r3 = cursorToTrayItem(r0)
            r1.add(r3)
            boolean r2 = r0.moveToNext()
            goto L1b
        L29:
            r0.close()
            return r1
        L2d:
            net.grandcentrix.tray.core.TrayException r1 = new net.grandcentrix.tray.core.TrayException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "could not access stored data with uri "
            r2.append(r3)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L44:
            r0 = move-exception
            net.grandcentrix.tray.core.TrayException r1 = new net.grandcentrix.tray.core.TrayException
            java.lang.String r2 = "Hard error accessing the ContentProvider"
            r1.<init>(r2, r0)
            throw r1
    }

    @android.support.annotation.NonNull
    public java.util.List<net.grandcentrix.tray.core.TrayItem> queryProviderSafe(@android.support.annotation.NonNull android.net.Uri r3) {
            r2 = this;
            java.util.List r0 = r2.queryProvider(r3)     // Catch: net.grandcentrix.tray.core.TrayException -> L5
            return r0
        L5:
            r0 = move-exception
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            return r1
    }

    public boolean remove(android.net.Uri r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Throwable -> Lc
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Lc
            r1 = 0
            r0.delete(r3, r1, r1)     // Catch: java.lang.Throwable -> Lc
            r0 = 1
            return r0
        Lc:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    public int removeAndCount(android.net.Uri r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Throwable -> Lc
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Lc
            r1 = 0
            int r0 = r0.delete(r3, r1, r1)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    public boolean wipe() {
            r4 = this;
            boolean r0 = r4.clear()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.Context r0 = r4.mContext     // Catch: java.lang.Throwable -> L1d
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L1d
            net.grandcentrix.tray.provider.TrayUri r2 = r4.mTrayUri     // Catch: java.lang.Throwable -> L1d
            android.net.Uri r2 = r2.getInternal()     // Catch: java.lang.Throwable -> L1d
            r3 = 0
            int r0 = r0.delete(r2, r3, r3)     // Catch: java.lang.Throwable -> L1d
            if (r0 <= 0) goto L1c
            r1 = 1
        L1c:
            return r1
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }
}
