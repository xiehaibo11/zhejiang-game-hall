package org.cocos2dx.lib;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

public class Cocos2dxLocalStorage {
    private static String DATABASE_NAME = "jsb.sqlite";
    private static final int DATABASE_VERSION = 1;
    private static String TABLE_NAME = "data";
    private static final String TAG = "Cocos2dxLocalStorage";
    private static SQLiteDatabase mDatabase;
    private static DBOpenHelper mDatabaseOpenHelper;

    private static class DBOpenHelper extends SQLiteOpenHelper {
        DBOpenHelper(Context r4) {
            super(r4, Cocos2dxLocalStorage.access$000(), null, 1);
        }

        @Override
        public void onCreate(SQLiteDatabase r3) {
            r3.execSQL("CREATE TABLE IF NOT EXISTS " + Cocos2dxLocalStorage.access$100() + "(key TEXT PRIMARY KEY,value TEXT);");
        }

        @Override
        public void onUpgrade(SQLiteDatabase r2, int r3, int r4) {
            Log.w(Cocos2dxLocalStorage.TAG, "Upgrading database from version " + r3 + " to " + r4 + ", which will destroy all old data");
        }
    }

    static {
    }

    public Cocos2dxLocalStorage() {
    }

    static String access$000() {
        return DATABASE_NAME;
    }

    static String access$100() {
        return TABLE_NAME;
    }

    public static boolean init(String r1, String r2) {
        if (Cocos2dxActivity.getContext() == null) goto L6;
        DATABASE_NAME = r1;
        TABLE_NAME = r2;
        mDatabaseOpenHelper = new DBOpenHelper(Cocos2dxActivity.getContext());
        mDatabase = mDatabaseOpenHelper.getWritableDatabase();
        return true;
    L6:
        return false;
    }

    public static void destroy() {
        SQLiteDatabase r0 = mDatabase;
        if (r0 == null) goto L6;
        r0.close();
        return;
    }

    public static void setItem(String r4, String r5) {
        mDatabase.execSQL("replace into " + TABLE_NAME + "(key,value)values(?,?)", new Object[]{r4, r5});     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public static String getItem(String r5) {
        String r0 = null;
        Cursor r52 = mDatabase.rawQuery("select value from " + TABLE_NAME + " where key=?", new String[]{r5});     // Catch: Exception -> L11
    L5:
        if (r52.moveToNext() == false) goto L9;
        if (r0 != null) goto L7;
        r0 = r52.getString(r52.getColumnIndex("value"));     // Catch: Exception -> L11
        goto L5
    L7:
        Log.e(TAG, "The key contains more than one value.");     // Catch: Exception -> L11
    L9:
        r52.close();     // Catch: Exception -> L11
    L13:
        return r0;
    L11:
        e = move-exception;
        e.printStackTrace();
        goto L13
    }

    public static void removeItem(String r4) {
        mDatabase.execSQL("delete from " + TABLE_NAME + " where key=?", new Object[]{r4});     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public static void clear() {
        mDatabase.execSQL("delete from " + TABLE_NAME);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public static String getKey(int r4) {
        int r0 = 0;
        String r1 = null;
        Cursor r2 = mDatabase.rawQuery("select key from " + TABLE_NAME + " order by rowid asc", null);     // Catch: Exception -> L16
        if (r4 >= 0) goto L6;
    L15:
        return null;
    L6:
        if (r4 >= r2.getCount()) goto L15;
    L9:
        if (r2.moveToNext() == false) goto L13;
        if (r0 == r4) goto L11;
        r0 = r0 + 1;     // Catch: Exception -> L16
        goto L9
    L11:
        r1 = r2.getString(r2.getColumnIndex("key"));     // Catch: Exception -> L16
    L13:
        r2.close();     // Catch: Exception -> L16
    L18:
        return r1;
    L16:
        e = move-exception;
        e.printStackTrace();
        goto L18
    }

    public static int getLength() {
        int r0 = 0;
        Cursor r1 = mDatabase.rawQuery("select count(*) as nums from " + TABLE_NAME, null);     // Catch: Exception -> L8
        if (r1.moveToNext() == false) goto L6;
        r0 = r1.getInt(r1.getColumnIndex("nums"));     // Catch: Exception -> L8
    L6:
        r1.close();     // Catch: Exception -> L8
    L10:
        return r0;
    L8:
        e = move-exception;
        e.printStackTrace();
        goto L10
    }
}
