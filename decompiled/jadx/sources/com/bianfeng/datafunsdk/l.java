package com.bianfeng.datafunsdk;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX WARN: Unexpected interfaces in signature: [java.lang.Object<T>] */
/* JADX INFO: compiled from: BaseDBTask.java */
/* JADX INFO: loaded from: classes.dex */
public class l<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public SQLiteDatabase f1404a;
    public boolean b = false;
    public Class<T> c;
    public String d;
    public Map<String, Field> e;

    public l() {
        try {
            b();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public synchronized boolean a(Class<T> cls) {
        if (!this.b) {
            SQLiteDatabase sQLiteDatabase = this.f1404a;
            if (sQLiteDatabase == null) {
                return false;
            }
            this.c = cls;
            if (!sQLiteDatabase.isOpen()) {
                return false;
            }
            try {
                a();
                this.b = true;
            } catch (n e) {
                return false;
            }
        }
        d();
        return this.b;
    }

    public final void b() throws n {
        try {
            this.f1404a = SQLiteDatabase.openOrCreateDatabase(v.a(m.f1405a), (SQLiteDatabase.CursorFactory) null);
        } catch (Exception e) {
            this.f1404a = null;
            throw new n(e);
        }
    }

    public final void c() {
        if (y.a() == g.DELED.ordinal()) {
            try {
                b();
            } catch (n e) {
                e.printStackTrace();
            }
            this.b = false;
            a((Class) this.c);
            y.a(g.NO_NEED_DEL.ordinal());
        }
    }

    public final void d() {
        this.e = new HashMap();
        String[] columnNames = this.f1404a.query(this.d, null, null, null, null, null, null).getColumnNames();
        Field[] declaredFields = this.c.getDeclaredFields();
        for (String str : columnNames) {
            if (!"_id".equals(str)) {
                for (Field field : declaredFields) {
                    b bVar = (b) field.getAnnotation(b.class);
                    if (bVar == null) {
                        this.e.put("_id", field);
                    } else if (str.equals(bVar.value())) {
                        this.e.put(str, field);
                    }
                }
            }
        }
    }

    public Long b(T t) throws n {
        Long lValueOf;
        c();
        synchronized (l.class) {
            try {
                try {
                    ContentValues contentValues = new ContentValues();
                    for (Map.Entry<String, Field> entry : this.e.entrySet()) {
                        String key = entry.getKey();
                        Field value = entry.getValue();
                        value.setAccessible(true);
                        if (!"_id".equals(key)) {
                            Class<?> type = value.getType();
                            if (String.class == type) {
                                contentValues.put(key, value.get(t).toString());
                            } else if (Integer.TYPE == type) {
                                contentValues.put(key, Integer.valueOf(value.getInt(t)));
                            } else if (Double.TYPE == type) {
                                contentValues.put(key, Double.valueOf(value.getDouble(t)));
                            } else if (Long.TYPE == type) {
                                contentValues.put(key, Long.valueOf(value.getLong(t)));
                            } else if (byte[].class == type) {
                                contentValues.put(key, Arrays.toString((byte[]) value.get(t)));
                            } else {
                                x.a("不存在该数据类型");
                            }
                        }
                    }
                    lValueOf = Long.valueOf(this.f1404a.insert(this.d, null, contentValues));
                } catch (Exception e) {
                    x.a("插入的异常" + e.getMessage());
                    throw new n(e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return lValueOf;
    }

    public final boolean a() throws n {
        this.d = ((c) this.c.getAnnotation(c.class)).value();
        Field[] declaredFields = this.c.getDeclaredFields();
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("_id ");
        stringBuffer.append("INTEGER PRIMARY KEY autoincrement");
        for (Field field : declaredFields) {
            Class<?> type = field.getType();
            b bVar = (b) field.getAnnotation(b.class);
            if (bVar != null) {
                String strValue = bVar.value();
                if (String.class == type) {
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    stringBuffer.append(strValue);
                    stringBuffer.append(" TEXT");
                } else if (Integer.TYPE == type) {
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    stringBuffer.append(strValue);
                    stringBuffer.append(" INTEGER");
                } else if (Double.TYPE == type) {
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    stringBuffer.append(strValue);
                    stringBuffer.append(" DOUBLE");
                } else if (Long.TYPE == type) {
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    stringBuffer.append(strValue);
                    stringBuffer.append(" LONG");
                } else if (byte[].class == type) {
                    stringBuffer.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    stringBuffer.append(strValue);
                    stringBuffer.append(" BLOB");
                } else {
                    x.a("不存在该数据类型");
                }
            }
        }
        try {
            this.f1404a.execSQL(String.format("CREATE TABLE IF NOT EXISTS %s (%s)", this.d, stringBuffer.toString()));
            return true;
        } catch (Exception e) {
            throw new n(e);
        }
    }

    public List<T> a(String str, String str2) throws n {
        ArrayList arrayList = new ArrayList();
        try {
            c();
            x.a("间隔时间fromData: " + str + ",toData:" + str2);
            Cursor cursorQuery = this.f1404a.query(this.d, null, "db_datafun_dataTime between ? and ?", new String[]{str, str2}, null, null, null, "100");
            while (cursorQuery.moveToNext()) {
                T tNewInstance = this.c.newInstance();
                for (Map.Entry<String, Field> entry : this.e.entrySet()) {
                    String key = entry.getKey();
                    Field value = entry.getValue();
                    value.setAccessible(true);
                    Class<?> type = value.getType();
                    int columnIndex = cursorQuery.getColumnIndex(key);
                    if (String.class == type) {
                        value.set(tNewInstance, cursorQuery.getString(columnIndex));
                    } else if (Integer.TYPE == type) {
                        value.set(tNewInstance, Integer.valueOf(cursorQuery.getInt(columnIndex)));
                    } else if (Double.TYPE == type) {
                        value.set(tNewInstance, Double.valueOf(cursorQuery.getDouble(columnIndex)));
                    } else if (Long.TYPE == type) {
                        value.set(tNewInstance, Long.valueOf(cursorQuery.getLong(columnIndex)));
                    } else if (byte[].class == type) {
                        value.set(tNewInstance, cursorQuery.getBlob(columnIndex));
                    } else {
                        x.a("不存在该数据类型");
                    }
                }
                arrayList.add(tNewInstance);
            }
            cursorQuery.close();
            return arrayList;
        } catch (Exception e) {
            throw new n(e);
        }
    }

    public int a(T t) throws n {
        int iDelete;
        synchronized (l.class) {
            try {
                try {
                    c();
                    Field field = this.e.get("_id");
                    field.setAccessible(true);
                    String string = field.get(t).toString();
                    iDelete = this.f1404a.delete(this.d, "_id=?", new String[]{string + ""});
                } catch (Exception e) {
                    x.a("delete出现异常");
                    throw new n(e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return iDelete;
    }
}
