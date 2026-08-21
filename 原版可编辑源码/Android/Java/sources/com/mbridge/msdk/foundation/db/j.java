package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;

public class j extends a<Campaign> {
    private static final String a = j.class.getName();
    private static j b = null;

    private j(h hVar) {
        super(hVar);
    }

    public static j a(h hVar) {
        if (b == null) {
            synchronized (j.class) {
                if (b == null) {
                    b = new j(hVar);
                }
            }
        }
        return b;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0064 A[EXC_TOP_SPLITTER, PHI: r0 r1
      0x0064: PHI (r0v2 android.database.Cursor) = (r0v1 android.database.Cursor), (r0v3 android.database.Cursor) binds: [B:24:0x007f, B:19:0x0062] A[DONT_GENERATE, DONT_INLINE]
      0x0064: PHI (r1v1 boolean) = (r1v0 boolean), (r1v3 boolean) binds: [B:24:0x007f, B:19:0x0062] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(String str, int i) {
        Cursor cursorRawQuery = null;
        boolean z = false;
        try {
            cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM dailyplaycap where unit_id ='" + str + "'", null);
            if (cursorRawQuery != null && cursorRawQuery.getCount() > 0 && cursorRawQuery.moveToFirst()) {
                long j = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("first_insert_timestamp"));
                long j2 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("play_time"));
                if (j != 0) {
                    if (System.currentTimeMillis() - 86400000 > j) {
                        b(str);
                    } else if (i > 0 && j2 >= i) {
                        z = true;
                    }
                }
            }
        } catch (Throwable th) {
            try {
                z.b(a, "isOverCap is error" + th);
                if (cursorRawQuery != null) {
                }
            } catch (Throwable th2) {
                if (cursorRawQuery != null) {
                    try {
                        cursorRawQuery.close();
                    } catch (Throwable unused) {
                    }
                }
                throw th2;
            }
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Throwable unused2) {
            }
        }
        return z;
    }

    private synchronized void b(String str) {
        try {
            if (getWritableDatabase() == null) {
                return;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("first_insert_timestamp", (Integer) 0);
            contentValues.put("play_time", (Integer) 0);
            getWritableDatabase().update("dailyplaycap", contentValues, "unit_id = '" + str + "'", null);
        } catch (Throwable unused) {
            z.b(a, "resetTimeAndTimestamp error");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00ce A[EXC_TOP_SPLITTER, PHI: r1
      0x00ce: PHI (r1v4 android.database.Cursor) = (r1v3 android.database.Cursor), (r1v5 android.database.Cursor) binds: [B:37:0x00d8, B:30:0x00cc] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized void a(String str) {
        long j;
        long j2;
        Cursor cursor = null;
        try {
            try {
            } catch (Throwable th) {
                th = th;
            }
        } catch (Exception e) {
            e = e;
        }
        if (getWritableDatabase() == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (c(str)) {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM dailyplaycap where unit_id ='" + str + "'", null);
            if (cursorRawQuery != null) {
                try {
                    if (cursorRawQuery.getCount() > 0) {
                        cursorRawQuery.moveToFirst();
                        j = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("first_insert_timestamp"));
                        j2 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("play_time"));
                        if (jCurrentTimeMillis - 86400000 > j) {
                            b(str);
                            j2 = 0;
                        }
                    } else {
                        j = 0;
                        j2 = 0;
                    }
                    if (j == 0) {
                        contentValues.put("first_insert_timestamp", Long.valueOf(jCurrentTimeMillis));
                    }
                    contentValues.put("play_time", Long.valueOf(j2 + 1));
                    getWritableDatabase().update("dailyplaycap", contentValues, "unit_id = '" + str + "'", null);
                    cursor = cursorRawQuery;
                } catch (Exception e2) {
                    e = e2;
                    cursor = cursorRawQuery;
                    e.printStackTrace();
                    if (cursor != null) {
                    }
                } catch (Throwable th2) {
                    th = th2;
                    cursor = cursorRawQuery;
                    if (cursor != null) {
                        try {
                            cursor.close();
                        } catch (Throwable unused) {
                        }
                    }
                    throw th;
                }
            }
        }
        contentValues.put("first_insert_timestamp", Long.valueOf(jCurrentTimeMillis));
        contentValues.put("play_time", (Long) 1L);
        contentValues.put("unit_id", str);
        getWritableDatabase().insert("dailyplaycap", null, contentValues);
        if (cursor != null) {
            try {
                cursor.close();
            } catch (Throwable unused2) {
            }
        }
    }

    private synchronized boolean c(String str) {
        try {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT play_time FROM dailyplaycap WHERE unit_id='" + str + "'", null);
            if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                cursorRawQuery.close();
                return true;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }
}
