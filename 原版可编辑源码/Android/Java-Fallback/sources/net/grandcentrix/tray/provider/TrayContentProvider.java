package net.grandcentrix.tray.provider;

public class TrayContentProvider extends android.content.ContentProvider {
    private static final int ALL_PREFERENCE = 30;
    private static final int INTERNAL_ALL_PREFERENCE = 130;
    private static final int INTERNAL_MODULE_PREFERENCE = 120;
    private static final int INTERNAL_SINGLE_PREFERENCE = 110;
    private static final int MODULE_PREFERENCE = 20;
    private static final int SINGLE_PREFERENCE = 10;
    private static android.content.UriMatcher sURIMatcher;
    net.grandcentrix.tray.provider.TrayDBHelper mDeviceDbHelper;
    net.grandcentrix.tray.provider.TrayDBHelper mUserDbHelper;

    public TrayContentProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    static void setAuthority(java.lang.String r3) {
            android.content.UriMatcher r0 = new android.content.UriMatcher
            r1 = -1
            r0.<init>(r1)
            net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher = r0
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "preferences"
            r2 = 30
            r0.addURI(r3, r1, r2)
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "preferences/*"
            r2 = 20
            r0.addURI(r3, r1, r2)
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "preferences/*/*"
            r2 = 10
            r0.addURI(r3, r1, r2)
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "internal_preferences"
            r2 = 130(0x82, float:1.82E-43)
            r0.addURI(r3, r1, r2)
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "internal_preferences/*"
            r2 = 120(0x78, float:1.68E-43)
            r0.addURI(r3, r1, r2)
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            java.lang.String r1 = "internal_preferences/*/*"
            r2 = 110(0x6e, float:1.54E-43)
            r0.addURI(r3, r1, r2)
            return
    }

    @Override
    public void attachInfo(android.content.Context r3, android.content.pm.ProviderInfo r4) {
            r2 = this;
            super.attachInfo(r3, r4)
            java.lang.String r0 = r4.authority
            setAuthority(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TrayContentProvider registered for authority: "
            r0.append(r1)
            java.lang.String r1 = r4.authority
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            return
    }

    @Override
    public int delete(android.net.Uri r7, java.lang.String r8, java.lang.String[] r9) {
            r6 = this;
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            int r0 = r0.match(r7)
            r1 = 10
            r2 = 0
            r3 = 1
            if (r0 == r1) goto L38
            r1 = 20
            if (r0 == r1) goto L51
            r1 = 30
            if (r0 == r1) goto L69
            r1 = 110(0x6e, float:1.54E-43)
            if (r0 == r1) goto L38
            r1 = 120(0x78, float:1.68E-43)
            if (r0 == r1) goto L51
            r1 = 130(0x82, float:1.82E-43)
            if (r0 != r1) goto L21
            goto L69
        L21:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Delete is not supported for Uri: "
            r2.append(r3)
            r2.append(r7)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L38:
            java.lang.String r1 = "KEY = ?"
            java.lang.String r8 = net.grandcentrix.tray.provider.SqliteHelper.extendSelection(r8, r1)
            java.lang.String[] r1 = new java.lang.String[r3]
            java.util.List r4 = r7.getPathSegments()
            r5 = 2
            java.lang.Object r4 = r4.get(r5)
            java.lang.String r4 = (java.lang.String) r4
            r1[r2] = r4
            java.lang.String[] r9 = net.grandcentrix.tray.provider.SqliteHelper.extendSelectionArgs(r9, r1)
        L51:
            java.lang.String r1 = "MODULE = ?"
            java.lang.String r8 = net.grandcentrix.tray.provider.SqliteHelper.extendSelection(r8, r1)
            java.lang.String[] r1 = new java.lang.String[r3]
            java.util.List r4 = r7.getPathSegments()
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r1[r2] = r3
            java.lang.String[] r9 = net.grandcentrix.tray.provider.SqliteHelper.extendSelectionArgs(r9, r1)
        L69:
            java.lang.String r1 = "backup"
            java.lang.String r1 = r7.getQueryParameter(r1)
            if (r1 != 0) goto L90
            net.grandcentrix.tray.provider.TrayDBHelper r2 = r6.mDeviceDbHelper
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()
            java.lang.String r3 = r6.getTable(r7)
            int r2 = r2.delete(r3, r8, r9)
            net.grandcentrix.tray.provider.TrayDBHelper r3 = r6.mUserDbHelper
            android.database.sqlite.SQLiteDatabase r3 = r3.getWritableDatabase()
            java.lang.String r4 = r6.getTable(r7)
            int r3 = r3.delete(r4, r8, r9)
            int r2 = r2 + r3
            goto L9c
        L90:
            android.database.sqlite.SQLiteDatabase r2 = r6.getWritableDatabase(r7)
            java.lang.String r3 = r6.getTable(r7)
            int r2 = r2.delete(r3, r8, r9)
        L9c:
            if (r2 <= 0) goto Laa
            android.content.Context r3 = r6.getContext()
            android.content.ContentResolver r3 = r3.getContentResolver()
            r4 = 0
            r3.notifyChange(r7, r4)
        Laa:
            return r2
    }

    public android.database.sqlite.SQLiteDatabase getReadableDatabase(android.net.Uri r2) {
            r1 = this;
            boolean r0 = r1.shouldBackup(r2)
            if (r0 == 0) goto Ld
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mUserDbHelper
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()
            return r0
        Ld:
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mDeviceDbHelper
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()
            return r0
    }

    public java.lang.String getTable(android.net.Uri r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r0 = 0
            return r0
        L4:
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            int r0 = r0.match(r3)
            r1 = 110(0x6e, float:1.54E-43)
            if (r0 == r1) goto L19
            r1 = 120(0x78, float:1.68E-43)
            if (r0 == r1) goto L19
            r1 = 130(0x82, float:1.82E-43)
            if (r0 == r1) goto L19
            java.lang.String r1 = "TrayPreferences"
            return r1
        L19:
            java.lang.String r1 = "TrayInternal"
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r2) {
            r1 = this;
            r0 = 0
            return r0
    }

    public android.database.sqlite.SQLiteDatabase getWritableDatabase(android.net.Uri r2) {
            r1 = this;
            boolean r0 = r1.shouldBackup(r2)
            if (r0 == 0) goto Ld
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mUserDbHelper
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
            return r0
        Ld:
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mDeviceDbHelper
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
            return r0
    }

    @Override
    public android.net.Uri insert(android.net.Uri r11, android.content.ContentValues r12) {
            r10 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r7 = r0
            android.content.UriMatcher r0 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            int r8 = r0.match(r11)
            r0 = 10
            if (r8 == r0) goto L2c
            r0 = 110(0x6e, float:1.54E-43)
            if (r8 != r0) goto L15
            goto L2c
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Insert is not supported for Uri: "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L2c:
            long r0 = r7.getTime()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.String r1 = "CREATED"
            r12.put(r1, r0)
            long r2 = r7.getTime()
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            java.lang.String r2 = "UPDATED"
            r12.put(r2, r0)
            java.util.List r0 = r11.getPathSegments()
            r2 = 1
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r3 = "MODULE"
            r12.put(r3, r0)
            java.util.List r0 = r11.getPathSegments()
            r4 = 2
            java.lang.Object r0 = r0.get(r4)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r5 = "KEY"
            r12.put(r5, r0)
            java.lang.String r9 = "MODULE = ?AND KEY = ?"
            java.lang.String[] r4 = new java.lang.String[r4]
            r0 = 0
            java.lang.String r3 = r12.getAsString(r3)
            r4[r0] = r3
            java.lang.String r0 = r12.getAsString(r5)
            r4[r2] = r0
            java.lang.String[] r6 = new java.lang.String[]{r1}
            android.database.sqlite.SQLiteDatabase r1 = r10.getWritableDatabase(r11)
            java.lang.String r2 = r10.getTable(r11)
            java.lang.String r3 = "MODULE = ?AND KEY = ?"
            r0 = r10
            r5 = r12
            int r0 = r0.insertOrUpdate(r1, r2, r3, r4, r5, r6)
            r1 = 0
            if (r0 < 0) goto L9b
            android.content.Context r2 = r10.getContext()
            android.content.ContentResolver r2 = r2.getContentResolver()
            r2.notifyChange(r11, r1)
            return r11
        L9b:
            r2 = -1
            if (r0 != r2) goto Lb3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Couldn't update or insert data. Uri: "
            r2.append(r3)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            net.grandcentrix.tray.core.TrayLog.w(r2)
            goto Lb8
        Lb3:
            java.lang.String r2 = "unknown SQLite error"
            net.grandcentrix.tray.core.TrayLog.w(r2)
        Lb8:
            return r1
    }

    public int insertOrUpdate(android.database.sqlite.SQLiteDatabase r2, java.lang.String r3, java.lang.String r4, java.lang.String[] r5, android.content.ContentValues r6, java.lang.String[] r7) {
            r1 = this;
            int r0 = net.grandcentrix.tray.provider.SqliteHelper.insertOrUpdate(r2, r3, r4, r5, r6, r7)
            return r0
    }

    @Override
    public boolean onCreate() {
            r4 = this;
            net.grandcentrix.tray.provider.TrayDBHelper r0 = new net.grandcentrix.tray.provider.TrayDBHelper
            android.content.Context r1 = r4.getContext()
            r2 = 1
            r0.<init>(r1, r2)
            r4.mUserDbHelper = r0
            net.grandcentrix.tray.provider.TrayDBHelper r0 = new net.grandcentrix.tray.provider.TrayDBHelper
            android.content.Context r1 = r4.getContext()
            r3 = 0
            r0.<init>(r1, r3)
            r4.mDeviceDbHelper = r0
            return r2
    }

    @Override
    public android.database.Cursor query(android.net.Uri r17, java.lang.String[] r18, java.lang.String r19, java.lang.String[] r20, java.lang.String r21) {
            r16 = this;
            r0 = r16
            r1 = r17
            android.database.sqlite.SQLiteQueryBuilder r2 = new android.database.sqlite.SQLiteQueryBuilder
            r2.<init>()
            android.content.UriMatcher r3 = net.grandcentrix.tray.provider.TrayContentProvider.sURIMatcher
            int r11 = r3.match(r1)
            r12 = 1
            r13 = 2
            r3 = 110(0x6e, float:1.54E-43)
            r4 = 10
            if (r11 == r4) goto L41
            r5 = 20
            if (r11 == r5) goto L63
            r5 = 30
            if (r11 == r5) goto L8e
            if (r11 == r3) goto L41
            r5 = 120(0x78, float:1.68E-43)
            if (r11 == r5) goto L63
            r3 = 130(0x82, float:1.82E-43)
            if (r11 != r3) goto L2a
            goto L8e
        L2a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Query is not supported for Uri: "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L41:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "KEY = "
            r5.append(r6)
            java.util.List r6 = r17.getPathSegments()
            java.lang.Object r6 = r6.get(r13)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r6 = android.database.DatabaseUtils.sqlEscapeString(r6)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r2.appendWhere(r5)
        L63:
            if (r11 == r4) goto L67
            if (r11 != r3) goto L6c
        L67:
            java.lang.String r3 = " AND "
            r2.appendWhere(r3)
        L6c:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "MODULE = "
            r3.append(r4)
            java.util.List r4 = r17.getPathSegments()
            java.lang.Object r4 = r4.get(r12)
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = android.database.DatabaseUtils.sqlEscapeString(r4)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.appendWhere(r3)
        L8e:
            java.lang.String r3 = r16.getTable(r17)
            r2.setTables(r3)
            java.lang.String r3 = "backup"
            java.lang.String r14 = r1.getQueryParameter(r3)
            if (r14 != 0) goto Lcc
            net.grandcentrix.tray.provider.TrayDBHelper r3 = r0.mUserDbHelper
            android.database.sqlite.SQLiteDatabase r4 = r3.getReadableDatabase()
            r8 = 0
            r9 = 0
            r3 = r2
            r5 = r18
            r6 = r19
            r7 = r20
            r10 = r21
            android.database.Cursor r15 = r3.query(r4, r5, r6, r7, r8, r9, r10)
            net.grandcentrix.tray.provider.TrayDBHelper r3 = r0.mDeviceDbHelper
            android.database.sqlite.SQLiteDatabase r4 = r3.getReadableDatabase()
            r3 = r2
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8, r9, r10)
            android.database.MergeCursor r4 = new android.database.MergeCursor
            android.database.Cursor[] r5 = new android.database.Cursor[r13]
            r6 = 0
            r5[r6] = r15
            r5[r12] = r3
            r4.<init>(r5)
            r3 = r4
            goto Ldf
        Lcc:
            android.database.sqlite.SQLiteDatabase r4 = r16.getReadableDatabase(r17)
            r8 = 0
            r9 = 0
            r3 = r2
            r5 = r18
            r6 = r19
            r7 = r20
            r10 = r21
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8, r9, r10)
        Ldf:
            if (r3 == 0) goto Lec
            android.content.Context r4 = r16.getContext()
            android.content.ContentResolver r4 = r4.getContentResolver()
            r3.setNotificationUri(r4, r1)
        Lec:
            return r3
    }

    boolean shouldBackup(@android.support.annotation.NonNull android.net.Uri r3) {
            r2 = this;
            java.lang.String r0 = "backup"
            java.lang.String r0 = r3.getQueryParameter(r0)
            java.lang.String r1 = "false"
            boolean r1 = r1.equals(r0)
            r1 = r1 ^ 1
            return r1
    }

    @Override
    public void shutdown() {
            r1 = this;
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mUserDbHelper
            r0.close()
            net.grandcentrix.tray.provider.TrayDBHelper r0 = r1.mDeviceDbHelper
            r0.close()
            return
    }

    @Override
    public int update(android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5, java.lang.String[] r6) {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "not implemented"
            r0.<init>(r1)
            throw r0
    }
}
