package net.grandcentrix.tray.provider;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.UriMatcher;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.MergeCursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteQueryBuilder;
import android.net.Uri;
import android.support.annotation.NonNull;
import java.util.Date;
import net.grandcentrix.tray.core.TrayLog;

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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int delete(Uri uri, String selection, String[] selectionArgs) {
        int device;
        int match = sURIMatcher.match(uri);
        if (match == 10) {
            selection = SqliteHelper.extendSelection(selection, "KEY = ?");
            selectionArgs = SqliteHelper.extendSelectionArgs(selectionArgs, new String[]{uri.getPathSegments().get(2)});
            selection = SqliteHelper.extendSelection(selection, "MODULE = ?");
            selectionArgs = SqliteHelper.extendSelectionArgs(selectionArgs, new String[]{uri.getPathSegments().get(1)});
        } else if (match == 20) {
            selection = SqliteHelper.extendSelection(selection, "MODULE = ?");
            selectionArgs = SqliteHelper.extendSelectionArgs(selectionArgs, new String[]{uri.getPathSegments().get(1)});
        } else if (match != 30) {
            if (match != 110) {
                if (match != 120) {
                    if (match != 130) {
                        throw new IllegalArgumentException("Delete is not supported for Uri: " + uri);
                    }
                }
            }
            selection = SqliteHelper.extendSelection(selection, "MODULE = ?");
            selectionArgs = SqliteHelper.extendSelectionArgs(selectionArgs, new String[]{uri.getPathSegments().get(1)});
        }
        String backup = uri.getQueryParameter("backup");
        if (backup == null) {
            int device2 = this.mDeviceDbHelper.getWritableDatabase().delete(getTable(uri), selection, selectionArgs);
            int user = this.mUserDbHelper.getWritableDatabase().delete(getTable(uri), selection, selectionArgs);
            device = device2 + user;
        } else {
            device = getWritableDatabase(uri).delete(getTable(uri), selection, selectionArgs);
        }
        if (device > 0) {
            getContext().getContentResolver().notifyChange(uri, null);
        }
        return device;
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

    @Override
    public String getType(Uri uri) {
        return null;
    }

    public SQLiteDatabase getWritableDatabase(Uri uri) {
        if (shouldBackup(uri)) {
            return this.mUserDbHelper.getWritableDatabase();
        }
        return this.mDeviceDbHelper.getWritableDatabase();
    }

    @Override
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

    @Override
    public boolean onCreate() {
        this.mUserDbHelper = new TrayDBHelper(getContext(), true);
        this.mDeviceDbHelper = new TrayDBHelper(getContext(), false);
        return true;
    }

    @Override
    public void attachInfo(Context context, ProviderInfo info) {
        super.attachInfo(context, info);
        setAuthority(info.authority);
        TrayLog.v("TrayContentProvider registered for authority: " + info.authority);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0065 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0067  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Cursor query(Uri uri, String[] projection, String selection, String[] selectionArgs, String sortOrder) {
        Cursor cursor2;
        SQLiteQueryBuilder builder = new SQLiteQueryBuilder();
        int match = sURIMatcher.match(uri);
        if (match == 10) {
            builder.appendWhere("KEY = " + DatabaseUtils.sqlEscapeString(uri.getPathSegments().get(2)));
            if (match == 10 || match == 110) {
                builder.appendWhere(" AND ");
            }
            builder.appendWhere("MODULE = " + DatabaseUtils.sqlEscapeString(uri.getPathSegments().get(1)));
        } else if (match == 20) {
            if (match == 10) {
                builder.appendWhere(" AND ");
                builder.appendWhere("MODULE = " + DatabaseUtils.sqlEscapeString(uri.getPathSegments().get(1)));
            }
        } else if (match != 30) {
            if (match != 110) {
                if (match != 120) {
                    if (match != 130) {
                        throw new IllegalArgumentException("Query is not supported for Uri: " + uri);
                    }
                }
            }
            if (match == 10) {
            }
        }
        builder.setTables(getTable(uri));
        String backup = uri.getQueryParameter("backup");
        if (backup == null) {
            Cursor cursor1 = builder.query(this.mUserDbHelper.getReadableDatabase(), projection, selection, selectionArgs, null, null, sortOrder);
            Cursor cursor22 = builder.query(this.mDeviceDbHelper.getReadableDatabase(), projection, selection, selectionArgs, null, null, sortOrder);
            cursor2 = new MergeCursor(new Cursor[]{cursor1, cursor22});
        } else {
            cursor2 = builder.query(getReadableDatabase(uri), projection, selection, selectionArgs, null, null, sortOrder);
        }
        if (cursor2 != null) {
            cursor2.setNotificationUri(getContext().getContentResolver(), uri);
        }
        return cursor2;
    }

    @Override
    public void shutdown() {
        this.mUserDbHelper.close();
        this.mDeviceDbHelper.close();
    }

    @Override
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
