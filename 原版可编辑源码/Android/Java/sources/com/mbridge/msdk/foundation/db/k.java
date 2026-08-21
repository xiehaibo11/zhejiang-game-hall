package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;

public class k extends a<com.mbridge.msdk.foundation.entity.g> {
    private static k a;

    private k(h hVar) {
        super(hVar);
    }

    public static k a(h hVar) {
        if (a == null) {
            synchronized (k.class) {
                if (a == null) {
                    a = new k(hVar);
                }
            }
        }
        return a;
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.g gVar) {
        try {
            if (getWritableDatabase() == null) {
                return;
            }
            if (gVar != null) {
                ContentValues contentValues = new ContentValues();
                contentValues.put("id", gVar.a());
                contentValues.put("time", Long.valueOf(gVar.d()));
                contentValues.put("unitId", gVar.b());
                contentValues.put("type", Integer.valueOf(gVar.c()));
                if (a(gVar.b(), gVar.a())) {
                    getWritableDatabase().update("fq_info", contentValues, "id = " + gVar.a() + " AND unitId = " + gVar.b(), null);
                } else {
                    getWritableDatabase().insert("fq_info", null, contentValues);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private synchronized boolean a(String str, String str2) {
        try {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("select id from fq_info where unitId='" + str + "' and id='" + str2 + "'", null);
            if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                cursorRawQuery.close();
                return true;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final synchronized void a(String str) {
        try {
            String str2 = "time<" + (System.currentTimeMillis() - 86400000) + " and unitId=? and type <> " + com.mbridge.msdk.foundation.same.a.E;
            String[] strArr = {str};
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete("fq_info", str2, strArr);
            }
        } catch (Exception unused) {
        }
    }
}
