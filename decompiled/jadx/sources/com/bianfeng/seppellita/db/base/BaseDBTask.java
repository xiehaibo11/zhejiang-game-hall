package com.bianfeng.seppellita.db.base;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.bianfeng.seppellita.db.action.DelDbEnum;
import com.bianfeng.seppellita.exception.SeppellitaException;
import com.bianfeng.seppellita.utils.SeppellitaFileUtils;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class BaseDBTask implements IDBTask {
    private SQLiteDatabase database;
    private boolean init = false;
    private String tableName = "db_seppellita_bean";
    private Map<String, String> selectMap = new HashMap();
    private ContentValues values = new ContentValues();

    protected BaseDBTask() {
        try {
            createDb();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void createDb() throws SeppellitaException {
        try {
            this.database = SQLiteDatabase.openOrCreateDatabase(SeppellitaFileUtils.getDbPath(DBName.db_name), (SQLiteDatabase.CursorFactory) null);
        } catch (Exception e) {
            this.database = null;
            throw new SeppellitaException(e);
        }
    }

    protected synchronized boolean init() {
        if (!this.init) {
            if (this.database == null) {
                return false;
            }
            if (!this.database.isOpen()) {
                return false;
            }
            try {
                autoCreateTable();
                this.init = true;
            } catch (SeppellitaException unused) {
                return false;
            }
        }
        return this.init;
    }

    private boolean autoCreateTable() throws SeppellitaException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("_id ");
        stringBuffer.append("INTEGER PRIMARY KEY autoincrement");
        stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        stringBuffer.append("db_seppellita_data");
        stringBuffer.append(" TEXT");
        stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        stringBuffer.append("db_seppellita_dataTime");
        stringBuffer.append(" TEXT");
        stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        stringBuffer.append("db_seppellita_time");
        stringBuffer.append(" LONG");
        try {
            this.database.execSQL(String.format("CREATE TABLE IF NOT EXISTS %s (%s)", this.tableName, stringBuffer.toString()));
            return true;
        } catch (Exception e) {
            throw new SeppellitaException(e);
        }
    }

    private void initAfterDel() {
        if (SeppellitaSharedPreferencesUtils.getDelDb() == DelDbEnum.DELED.ordinal()) {
            try {
                createDb();
            } catch (SeppellitaException e) {
                e.printStackTrace();
            }
            this.init = false;
            init();
            SeppellitaSharedPreferencesUtils.putDelDb(DelDbEnum.NO_NEED_DEL.ordinal());
        }
    }

    @Override // com.bianfeng.seppellita.db.base.IDBTask
    public Long insert(String str, long j, String str2) throws SeppellitaException {
        Long lValueOf;
        initAfterDel();
        synchronized (BaseDBTask.class) {
            try {
                try {
                    this.values.clear();
                    this.values.put("db_seppellita_data", str);
                    this.values.put("db_seppellita_dataTime", str2);
                    this.values.put("db_seppellita_time", Long.valueOf(j));
                    lValueOf = Long.valueOf(this.database.insert(this.tableName, null, this.values));
                } catch (Exception e) {
                    SeppellitaLogger.i("插入的异常" + e.getMessage());
                    throw new SeppellitaException(e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return lValueOf;
    }

    @Override // com.bianfeng.seppellita.db.base.IDBTask
    public List<String> select() throws SeppellitaException {
        ArrayList arrayList = new ArrayList();
        try {
            synchronized (this.selectMap) {
                this.selectMap.clear();
                initAfterDel();
                Cursor cursorQuery = this.database.query(this.tableName, null, null, null, null, null, null);
                while (cursorQuery.moveToNext()) {
                    String string = cursorQuery.getString(0);
                    String string2 = cursorQuery.getString(1);
                    String string3 = cursorQuery.getString(2);
                    String string4 = cursorQuery.getString(3);
                    this.selectMap.put("id", string);
                    this.selectMap.put("db_seppellita_data", string2);
                    this.selectMap.put("db_seppellita_dataTime", string3);
                    this.selectMap.put("db_seppellita_time", string4);
                    arrayList.add(SeppellitaGsonUtils.toJson(this.selectMap));
                    this.selectMap.clear();
                }
                cursorQuery.close();
            }
            return arrayList;
        } catch (Exception e) {
            SeppellitaLogger.i("select:" + e.getMessage());
            throw new SeppellitaException(e);
        }
    }

    @Override // com.bianfeng.seppellita.db.base.IDBTask
    public List<String> select(String str, String str2) throws SeppellitaException {
        ArrayList arrayList = new ArrayList();
        try {
            initAfterDel();
            synchronized (this.selectMap) {
                this.selectMap.clear();
                initAfterDel();
                Cursor cursorQuery = this.database.query(this.tableName, null, "db_seppellita_dataTime between ? and ?", new String[]{str, str2}, null, null, null, "800");
                while (cursorQuery.moveToNext()) {
                    String string = cursorQuery.getString(0);
                    String string2 = cursorQuery.getString(1);
                    String string3 = cursorQuery.getString(2);
                    String string4 = cursorQuery.getString(3);
                    this.selectMap.put("id", string);
                    this.selectMap.put("db_seppellita_data", string2);
                    this.selectMap.put("db_seppellita_dataTime", string3);
                    this.selectMap.put("db_seppellita_time", string4);
                    arrayList.add(SeppellitaGsonUtils.toJson(this.selectMap));
                    this.selectMap.clear();
                }
                cursorQuery.close();
            }
            return arrayList;
        } catch (Exception e) {
            throw new SeppellitaException(e);
        }
    }

    @Override // com.bianfeng.seppellita.db.base.IDBTask
    public int delete(String str) throws SeppellitaException {
        int iDelete;
        synchronized (BaseDBTask.class) {
            try {
                try {
                    iDelete = this.database.delete(this.tableName, "_id=?", new String[]{str + ""});
                } catch (Exception e) {
                    SeppellitaLogger.i("delete出现异常");
                    throw new SeppellitaException(e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return iDelete;
    }

    @Override // com.bianfeng.seppellita.db.base.IDBTask
    public int deleteBeforeData(String str) throws SeppellitaException {
        int iDelete;
        synchronized (BaseDBTask.class) {
            try {
                try {
                    iDelete = this.database.delete(this.tableName, "db_seppellita_dataTime < ?", new String[]{str + ""});
                } catch (Exception e) {
                    SeppellitaLogger.i("delete出现异常");
                    throw new SeppellitaException(e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return iDelete;
    }
}
