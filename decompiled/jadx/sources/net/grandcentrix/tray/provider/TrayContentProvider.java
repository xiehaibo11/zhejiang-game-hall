package net.grandcentrix.tray.provider;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.UriMatcher;
import android.content.pm.ProviderInfo;
import android.database.sqlite.SQLiteDatabase;
import android.net.Uri;
import android.support.annotation.NonNull;
import java.util.Date;
import net.grandcentrix.tray.core.TrayLog;

/* JADX INFO: loaded from: classes4.dex */
public class TrayContentProvider extends ContentProvider {
    private static final int ALL_PREFERENCE = 30;
    private static final int INTERNAL_ALL_PREFERENCE = 130;
    private static final int INTERNAL_MODULE_PREFERENCE = 120;
    private static final int INTERNAL_SINGLE_PREFERENCE = 110;
    private static final int MODULE_PREFERENCE = 20;
    private static final int SINGLE_PREFERENCE = 10;
    private static UriMatcher sURIMatcher;
    TrayDBHelper mDeviceDbHelper;
    TrayDBHelper mUserDbHelper;

    /* JADX WARN: Removed duplicated region for block: B:17:0x0038  */
    @Override // android.content.ContentProvider
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public int delete(android.net.Uri r7, java.lang.String r8, java.lang.String[] r9) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: net.grandcentrix.tray.provider.TrayContentProvider.delete(android.net.Uri, java.lang.String, java.lang.String[]):int");
    }

    public SQLiteDatabase getReadableDatabase(Uri uri) {
        if (shouldBackup(uri)) {
            return this.mUserDbHelper.getReadableDatabase();
        }
        return this.mDeviceDbHelper.getReadableDatabase();
    }

    public String getTable(Uri uri) {
        if (uri == null) {
            return null;
        }
        int match = sURIMatcher.match(uri);
        if (match != 110 && match != 120 && match != 130) {
            return TrayDBHelper.TABLE_NAME;
        }
        return TrayDBHelper.INTERNAL_TABLE_NAME;
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        return null;
    }

    public SQLiteDatabase getWritableDatabase(Uri uri) {
        if (shouldBackup(uri)) {
            return this.mUserDbHelper.getWritableDatabase();
        }
        return this.mDeviceDbHelper.getWritableDatabase();
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues values) {
        Date date = new Date();
        int match = sURIMatcher.match(uri);
        if (match == 10 || match == 110) {
            values.put(TrayDBHelper.CREATED, Long.valueOf(date.getTime()));
            values.put(TrayDBHelper.UPDATED, Long.valueOf(date.getTime()));
            values.put(TrayDBHelper.MODULE, uri.getPathSegments().get(1));
            values.put(TrayDBHelper.KEY, uri.getPathSegments().get(2));
            String[] prefSelectionArgs = {values.getAsString(TrayDBHelper.MODULE), values.getAsString(TrayDBHelper.KEY)};
            String[] excludeForUpdate = {TrayDBHelper.CREATED};
            int status = insertOrUpdate(getWritableDatabase(uri), getTable(uri), "MODULE = ?AND KEY = ?", prefSelectionArgs, values, excludeForUpdate);
            if (status >= 0) {
                getContext().getContentResolver().notifyChange(uri, null);
                return uri;
            }
            if (status == -1) {
                TrayLog.w("Couldn't update or insert data. Uri: " + uri);
            } else {
                TrayLog.w("unknown SQLite error");
            }
            return null;
        }
        throw new IllegalArgumentException("Insert is not supported for Uri: " + uri);
    }

    public int insertOrUpdate(SQLiteDatabase writableDatabase, String table, String prefSelection, String[] prefSelectionArgs, ContentValues values, String[] excludeForUpdate) {
        return SqliteHelper.insertOrUpdate(writableDatabase, table, prefSelection, prefSelectionArgs, values, excludeForUpdate);
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        this.mUserDbHelper = new TrayDBHelper(getContext(), true);
        this.mDeviceDbHelper = new TrayDBHelper(getContext(), false);
        return true;
    }

    @Override // android.content.ContentProvider
    public void attachInfo(Context context, ProviderInfo info) {
        super.attachInfo(context, info);
        setAuthority(info.authority);
        TrayLog.v("TrayContentProvider registered for authority: " + info.authority);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0065 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0067  */
    @Override // android.content.ContentProvider
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public android.database.Cursor query(android.net.Uri r17, java.lang.String[] r18, java.lang.String r19, java.lang.String[] r20, java.lang.String r21) {
        /*
            Method dump skipped, instruction units count: 237
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: net.grandcentrix.tray.provider.TrayContentProvider.query(android.net.Uri, java.lang.String[], java.lang.String, java.lang.String[], java.lang.String):android.database.Cursor");
    }

    @Override // android.content.ContentProvider
    public void shutdown() {
        this.mUserDbHelper.close();
        this.mDeviceDbHelper.close();
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues values, String selection, String[] selectionArgs) {
        throw new UnsupportedOperationException("not implemented");
    }

    boolean shouldBackup(@NonNull Uri uri) {
        String backup = uri.getQueryParameter("backup");
        return !"false".equals(backup);
    }

    static void setAuthority(String authority) {
        sURIMatcher = new UriMatcher(-1);
        sURIMatcher.addURI(authority, "preferences", 30);
        sURIMatcher.addURI(authority, "preferences/*", 20);
        sURIMatcher.addURI(authority, "preferences/*/*", 10);
        sURIMatcher.addURI(authority, "internal_preferences", 130);
        sURIMatcher.addURI(authority, "internal_preferences/*", 120);
        sURIMatcher.addURI(authority, "internal_preferences/*/*", 110);
    }
}
