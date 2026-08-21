package org.cocos2dx.lib;

public class Cocos2dxLocalStorage {
    private static java.lang.String DATABASE_NAME = "jsb.sqlite";
    private static final int DATABASE_VERSION = 1;
    private static java.lang.String TABLE_NAME = "data";
    private static final java.lang.String TAG = "Cocos2dxLocalStorage";
    private static android.database.sqlite.SQLiteDatabase mDatabase;
    private static org.cocos2dx.lib.Cocos2dxLocalStorage.DBOpenHelper mDatabaseOpenHelper;

    private static class DBOpenHelper extends android.database.sqlite.SQLiteOpenHelper {
        DBOpenHelper(android.content.Context r4) {
                r3 = this;
                java.lang.String r0 = org.cocos2dx.lib.Cocos2dxLocalStorage.access$000()
                r1 = 0
                r2 = 1
                r3.<init>(r4, r0, r1, r2)
                return
        }

        @Override
        public void onCreate(android.database.sqlite.SQLiteDatabase r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "CREATE TABLE IF NOT EXISTS "
                r0.append(r1)
                java.lang.String r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.access$100()
                r0.append(r1)
                java.lang.String r1 = "(key TEXT PRIMARY KEY,value TEXT);"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r3.execSQL(r0)
                return
        }

        @Override
        public void onUpgrade(android.database.sqlite.SQLiteDatabase r2, int r3, int r4) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "Upgrading database from version "
                r2.append(r0)
                r2.append(r3)
                java.lang.String r3 = " to "
                r2.append(r3)
                r2.append(r4)
                java.lang.String r3 = ", which will destroy all old data"
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                java.lang.String r3 = "Cocos2dxLocalStorage"
                android.util.Log.w(r3, r2)
                return
        }
    }

    static {
            return
    }

    public Cocos2dxLocalStorage() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxLocalStorage.DATABASE_NAME
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME
            return r0
    }

    public static void clear() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L19
            r0.<init>()     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = "delete from "
            r0.append(r1)     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME     // Catch: java.lang.Exception -> L19
            r0.append(r1)     // Catch: java.lang.Exception -> L19
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L19
            android.database.sqlite.SQLiteDatabase r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase     // Catch: java.lang.Exception -> L19
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            r0 = move-exception
            r0.printStackTrace()
        L1d:
            return
    }

    public static void destroy() {
            android.database.sqlite.SQLiteDatabase r0 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase
            if (r0 == 0) goto L7
            r0.close()
        L7:
            return
    }

    public static java.lang.String getItem(java.lang.String r5) {
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
            r1.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "select value from "
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME     // Catch: java.lang.Exception -> L44
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = " where key=?"
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L44
            android.database.sqlite.SQLiteDatabase r2 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase     // Catch: java.lang.Exception -> L44
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L44
            r4 = 0
            r3[r4] = r5     // Catch: java.lang.Exception -> L44
            android.database.Cursor r5 = r2.rawQuery(r1, r3)     // Catch: java.lang.Exception -> L44
        L25:
            boolean r1 = r5.moveToNext()     // Catch: java.lang.Exception -> L44
            if (r1 == 0) goto L40
            if (r0 == 0) goto L35
            java.lang.String r1 = "Cocos2dxLocalStorage"
            java.lang.String r2 = "The key contains more than one value."
            android.util.Log.e(r1, r2)     // Catch: java.lang.Exception -> L44
            goto L40
        L35:
            java.lang.String r1 = "value"
            int r1 = r5.getColumnIndex(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r0 = r5.getString(r1)     // Catch: java.lang.Exception -> L44
            goto L25
        L40:
            r5.close()     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return r0
    }

    public static boolean init(java.lang.String r1, java.lang.String r2) {
            android.content.Context r0 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            if (r0 == 0) goto L1f
            org.cocos2dx.lib.Cocos2dxLocalStorage.DATABASE_NAME = r1
            org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME = r2
            org.cocos2dx.lib.Cocos2dxLocalStorage$DBOpenHelper r1 = new org.cocos2dx.lib.Cocos2dxLocalStorage$DBOpenHelper
            android.content.Context r2 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            r1.<init>(r2)
            org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabaseOpenHelper = r1
            org.cocos2dx.lib.Cocos2dxLocalStorage$DBOpenHelper r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabaseOpenHelper
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()
            org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase = r1
            r1 = 1
            return r1
        L1f:
            r1 = 0
            return r1
    }

    public static void removeItem(java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L24
            r0.<init>()     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = "delete from "
            r0.append(r1)     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME     // Catch: java.lang.Exception -> L24
            r0.append(r1)     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = " where key=?"
            r0.append(r1)     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L24
            android.database.sqlite.SQLiteDatabase r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase     // Catch: java.lang.Exception -> L24
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L24
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.Exception -> L24
            r1.execSQL(r0, r2)     // Catch: java.lang.Exception -> L24
            goto L28
        L24:
            r4 = move-exception
            r4.printStackTrace()
        L28:
            return
    }

    public static void setItem(java.lang.String r4, java.lang.String r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "replace into "
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.TABLE_NAME     // Catch: java.lang.Exception -> L27
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "(key,value)values(?,?)"
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L27
            android.database.sqlite.SQLiteDatabase r1 = org.cocos2dx.lib.Cocos2dxLocalStorage.mDatabase     // Catch: java.lang.Exception -> L27
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L27
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.Exception -> L27
            r4 = 1
            r2[r4] = r5     // Catch: java.lang.Exception -> L27
            r1.execSQL(r0, r2)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r4 = move-exception
            r4.printStackTrace()
        L2b:
            return
    }
}
