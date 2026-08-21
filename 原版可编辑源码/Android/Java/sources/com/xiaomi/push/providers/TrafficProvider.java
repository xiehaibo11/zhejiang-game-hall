package com.xiaomi.push.providers;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.UriMatcher;
import android.database.Cursor;
import android.database.sqlite.SQLiteOpenHelper;
import android.net.Uri;
import com.xiaomi.push.hb;

public class TrafficProvider extends ContentProvider {
    private static final UriMatcher a;
    public static final Uri a = Uri.parse("content://com.xiaomi.push.providers.TrafficProvider/traffic");
    private SQLiteOpenHelper a;

    static {
        UriMatcher uriMatcher = new UriMatcher(-1);
        a = uriMatcher;
        uriMatcher.addURI("com.xiaomi.push.providers.TrafficProvider", "traffic", 1);
        a.addURI("com.xiaomi.push.providers.TrafficProvider", "update_imsi", 2);
    }

    @Override
    public int bulkInsert(Uri uri, ContentValues[] contentValuesArr) {
        return 0;
    }

    @Override
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override
    public String getType(Uri uri) {
        if (a.match(uri) == 1) {
            return "vnd.android.cursor.dir/vnd.xiaomi.push.traffic";
        }
        throw new IllegalArgumentException("Unknown URI " + uri);
    }

    @Override
    public Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override
    public boolean onCreate() {
        this.a = new a(getContext());
        return true;
    }

    @Override
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        Cursor cursorQuery;
        synchronized (a.a) {
            if (a.match(uri) != 1) {
                throw new IllegalArgumentException("Unknown URI " + uri);
            }
            cursorQuery = this.a.getReadableDatabase().query("traffic", strArr, str, strArr2, null, null, str2);
        }
        return cursorQuery;
    }

    @Override
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        if (a.match(uri) != 2 || contentValues == null || !contentValues.containsKey("imsi")) {
            return 0;
        }
        hb.a(contentValues.getAsString("imsi"));
        return 0;
    }
}
