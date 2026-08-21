package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

public class m extends a<com.mbridge.msdk.foundation.entity.j> {
    private static m a;

    private m(h hVar) {
        super(hVar);
    }

    public static m a(h hVar) {
        if (a == null) {
            synchronized (m.class) {
                if (a == null) {
                    a = new m(hVar);
                }
            }
        }
        return a;
    }

    public final synchronized int a() {
        int i;
        Cursor cursorRawQuery = null;
        i = 0;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("select count(*) from load_stat", null);
                if (cursorRawQuery != null && cursorRawQuery.moveToFirst()) {
                    i = cursorRawQuery.getInt(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorRawQuery != null) {
                }
            }
        } finally {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        }
        return i;
    }

    public final synchronized List<com.mbridge.msdk.foundation.entity.j> a(int i) {
        ArrayList arrayList;
        ArrayList arrayList2;
        Cursor cursor = null;
        arrayList2 = null;
        arrayList2 = null;
        cursor = null;
        try {
            try {
                Cursor cursorRawQuery = getReadableDatabase().rawQuery("select * from load_stat LIMIT " + i, null);
                if (cursorRawQuery != null) {
                    try {
                        try {
                            if (cursorRawQuery.getCount() > 0) {
                                arrayList = new ArrayList();
                                int i2 = 0;
                                while (cursorRawQuery.moveToNext() && i2 < i) {
                                    try {
                                        i2++;
                                        int i3 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ad_source_id"));
                                        String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("time"));
                                        int i4 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adNum"));
                                        String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("unitId"));
                                        int i5 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.l.f));
                                        int i6 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("timeout"));
                                        int i7 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("network_type"));
                                        String string3 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("network_type_str"));
                                        int i8 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("hb"));
                                        com.mbridge.msdk.foundation.entity.j jVar = new com.mbridge.msdk.foundation.entity.j(i3, string, i4, string2, i5, i6, i7);
                                        jVar.c(string3);
                                        jVar.a(i8);
                                        arrayList.add(jVar);
                                        int i9 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("id"));
                                        if (getWritableDatabase() != null) {
                                            getWritableDatabase().delete("load_stat", "id = ?", new String[]{i9 + ""});
                                        }
                                    } catch (Exception e) {
                                        e = e;
                                        cursor = cursorRawQuery;
                                        e.printStackTrace();
                                        if (cursor != null) {
                                            cursor.close();
                                        }
                                        arrayList2 = arrayList;
                                    }
                                }
                                arrayList2 = arrayList;
                            }
                        } catch (Exception e2) {
                            e = e2;
                            arrayList = null;
                        }
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorRawQuery;
                        if (cursor != null) {
                            cursor.close();
                        }
                        throw th;
                    }
                }
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            arrayList = null;
        }
        return arrayList2;
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.j jVar) {
        if (getWritableDatabase() == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("time", jVar.c());
        contentValues.put("ad_source_id", Integer.valueOf(jVar.b()));
        contentValues.put("adNum", Integer.valueOf(jVar.d()));
        contentValues.put("unitId", jVar.e());
        contentValues.put(com.tkay.expressad.foundation.d.l.f, Integer.valueOf(jVar.f()));
        contentValues.put("hb", Integer.valueOf(jVar.a()));
        contentValues.put("timeout", Integer.valueOf(jVar.g()));
        contentValues.put("network_type", Integer.valueOf(jVar.h()));
        contentValues.put("network_type_str", jVar.i());
        getWritableDatabase().insert("load_stat", null, contentValues);
    }
}
