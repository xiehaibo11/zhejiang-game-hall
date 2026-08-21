package net.grandcentrix.tray.provider;

@android.support.annotation.VisibleForTesting
public class TrayDBHelper extends android.database.sqlite.SQLiteOpenHelper {
    public static final java.lang.String CREATED = "CREATED";
    public static final java.lang.String DATABASE_NAME = "tray.db";
    public static final java.lang.String DATABASE_NAME_NO_BACKUP = "tray_backup_excluded.db";
    static final int DATABASE_VERSION = 2;
    public static final java.lang.String INTERNAL_TABLE_NAME = "TrayInternal";
    public static final java.lang.String KEY = "KEY";
    public static final java.lang.String MIGRATED_KEY = "MIGRATED_KEY";
    public static final java.lang.String MODULE = "MODULE";
    public static final java.lang.String TABLE_NAME = "TrayPreferences";
    public static final java.lang.String UPDATED = "UPDATED";
    public static final java.lang.String V1_PREFERENCES_CREATE = "CREATE TABLE TrayPreferences ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, UNIQUE (MODULE, KEY));";
    public static final java.lang.String V2_ALTER_PREFERENCES_TABLE = "ALTER TABLE TrayPreferences ADD COLUMN MIGRATED_KEY TEXT";
    public static final java.lang.String V2_CREATE_INTERNAL_TRAY_TABLE = "CREATE TABLE TrayInternal ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, MIGRATED_KEY TEXT, UNIQUE (MODULE, KEY));";
    public static final java.lang.String VALUE = "VALUE";
    private final int mCreateVersion;
    private final boolean mWithBackup;

    public TrayDBHelper(android.content.Context r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    TrayDBHelper(android.content.Context r2, java.lang.String r3, boolean r4, int r5) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r5)
            r1.mWithBackup = r4
            r1.mCreateVersion = r5
            return
    }

    public TrayDBHelper(android.content.Context r4, boolean r5) {
            r3 = this;
            if (r5 == 0) goto L5
            java.lang.String r0 = "tray.db"
            goto L7
        L5:
            java.lang.String r0 = "tray_backup_excluded.db"
        L7:
            r1 = 0
            r2 = 2
            r3.<init>(r4, r0, r1, r2)
            r3.mWithBackup = r5
            r3.mCreateVersion = r2
            return
    }

    private void createV1(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE TrayPreferences ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, UNIQUE (MODULE, KEY));"
            r2.execSQL(r0)
            return
    }

    @android.support.annotation.NonNull
    private java.lang.String logTag() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "tray internal db ("
            r0.append(r1)
            boolean r1 = r2.mWithBackup
            if (r1 == 0) goto L11
            java.lang.String r1 = "backup"
            goto L13
        L11:
            java.lang.String r1 = "no backup"
        L13:
            r0.append(r1)
            java.lang.String r1 = "): "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private void upgradeToV2(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "ALTER TABLE TrayPreferences ADD COLUMN MIGRATED_KEY TEXT"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE TrayInternal ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, MIGRATED_KEY TEXT, UNIQUE (MODULE, KEY));"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.logTag()
            r0.append(r1)
            java.lang.String r1 = "onCreate with version "
            r0.append(r1)
            int r1 = r2.mCreateVersion
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            r2.createV1(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.logTag()
            r0.append(r1)
            java.lang.String r1 = "created database version 1"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            int r0 = r2.mCreateVersion
            r1 = 1
            if (r0 <= r1) goto L40
            r2.onUpgrade(r3, r1, r0)
        L40:
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r4, int r5, int r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.logTag()
            r0.append(r1)
            java.lang.String r1 = "upgrading Database from version "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " to version "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            r0 = 2
            if (r6 > r0) goto L4e
            r0 = 1
            if (r5 != r0) goto L46
            r3.upgradeToV2(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.logTag()
            r0.append(r1)
            java.lang.String r1 = "upgraded Database to version 2"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            return
        L46:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "onUpgrade() with oldVersion <= 0 is useless"
            r0.<init>(r1)
            throw r0
        L4e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onUpgrade doesn't support the upgrade to version "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
