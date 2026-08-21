package net.grandcentrix.tray.provider;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.support.annotation.NonNull;
import android.support.annotation.VisibleForTesting;
import net.grandcentrix.tray.core.TrayLog;

@VisibleForTesting
public class TrayDBHelper extends SQLiteOpenHelper {
    public static final String CREATED = "CREATED";
    public static final String DATABASE_NAME = "tray.db";
    public static final String DATABASE_NAME_NO_BACKUP = "tray_backup_excluded.db";
    static final int DATABASE_VERSION = 2;
    public static final String INTERNAL_TABLE_NAME = "TrayInternal";
    public static final String KEY = "KEY";
    public static final String MIGRATED_KEY = "MIGRATED_KEY";
    public static final String MODULE = "MODULE";
    public static final String TABLE_NAME = "TrayPreferences";
    public static final String UPDATED = "UPDATED";
    public static final String V1_PREFERENCES_CREATE = "CREATE TABLE TrayPreferences ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, UNIQUE (MODULE, KEY));";
    public static final String V2_ALTER_PREFERENCES_TABLE = "ALTER TABLE TrayPreferences ADD COLUMN MIGRATED_KEY TEXT";
    public static final String V2_CREATE_INTERNAL_TRAY_TABLE = "CREATE TABLE TrayInternal ( _id INTEGER PRIMARY KEY, KEY TEXT NOT NULL, VALUE TEXT, MODULE TEXT, CREATED INT DEFAULT 0, UPDATED INT DEFAULT 0, MIGRATED_KEY TEXT, UNIQUE (MODULE, KEY));";
    public static final String VALUE = "VALUE";
    private final int mCreateVersion;
    private final boolean mWithBackup;

    TrayDBHelper(Context context, String databaseName, boolean withBackup, int databaseVersion) {
        super(context, databaseName, (SQLiteDatabase.CursorFactory) null, databaseVersion);
        this.mWithBackup = withBackup;
        this.mCreateVersion = databaseVersion;
    }

    public TrayDBHelper(Context context) {
        this(context, true);
    }

    public TrayDBHelper(Context context, boolean withBackup) {
        super(context, withBackup ? DATABASE_NAME : DATABASE_NAME_NO_BACKUP, (SQLiteDatabase.CursorFactory) null, 2);
        this.mWithBackup = withBackup;
        this.mCreateVersion = 2;
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        TrayLog.v(logTag() + "onCreate with version " + this.mCreateVersion);
        createV1(db);
        TrayLog.v(logTag() + "created database version 1");
        int i = this.mCreateVersion;
        if (i > 1) {
            onUpgrade(db, 1, i);
        }
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        TrayLog.v(logTag() + "upgrading Database from version " + oldVersion + " to version " + newVersion);
        if (newVersion > 2) {
            throw new IllegalStateException("onUpgrade doesn't support the upgrade to version " + newVersion);
        }
        if (oldVersion == 1) {
            upgradeToV2(db);
            TrayLog.v(logTag() + "upgraded Database to version 2");
            return;
        }
        throw new IllegalArgumentException("onUpgrade() with oldVersion <= 0 is useless");
    }

    private void createV1(SQLiteDatabase db) {
        db.execSQL(V1_PREFERENCES_CREATE);
    }

    @NonNull
    private String logTag() {
        StringBuilder sb = new StringBuilder();
        sb.append("tray internal db (");
        sb.append(this.mWithBackup ? "backup" : "no backup");
        sb.append("): ");
        return sb.toString();
    }

    private void upgradeToV2(SQLiteDatabase db) {
        db.execSQL(V2_ALTER_PREFERENCES_TABLE);
        db.execSQL(V2_CREATE_INTERNAL_TRAY_TABLE);
    }
}
