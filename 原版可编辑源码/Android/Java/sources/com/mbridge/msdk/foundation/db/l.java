package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.c.j;

public class l extends a<com.mbridge.msdk.foundation.entity.h> {
    private static l a;

    private l(h hVar) {
        super(hVar);
    }

    public static l a(h hVar) {
        if (a == null) {
            synchronized (l.class) {
                if (a == null) {
                    a = new l(hVar);
                }
            }
        }
        return a;
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0047 A[PHI: r0
      0x0047: PHI (r0v6 android.database.Cursor) = (r0v5 android.database.Cursor), (r0v7 android.database.Cursor) binds: [B:25:0x0045, B:17:0x0037] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long[] a() throws Throwable {
        Throwable th;
        Cursor cursorRawQuery;
        try {
            cursorRawQuery = getReadableDatabase().rawQuery("SELECT id FROM frequence WHERE fc_a<impression_count", null);
            if (cursorRawQuery != null) {
                try {
                    if (cursorRawQuery.getCount() > 0) {
                        long[] jArr = new long[cursorRawQuery.getCount()];
                        int i = 0;
                        while (cursorRawQuery.moveToNext()) {
                            jArr[i] = cursorRawQuery.getLong(cursorRawQuery.getColumnIndexOrThrow("id"));
                            i++;
                        }
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return jArr;
                    }
                } catch (Exception unused) {
                    if (cursorRawQuery != null) {
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    throw th;
                }
            }
        } catch (Exception unused2) {
            cursorRawQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorRawQuery = null;
        }
        if (cursorRawQuery != null) {
            cursorRawQuery.close();
        }
        return null;
    }

    public final synchronized void b() {
        try {
            String str = "ts<" + (System.currentTimeMillis() - 86400000);
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete("frequence", str, null);
            }
        } catch (Exception unused) {
        }
    }

    public final synchronized boolean a(String str) {
        Cursor cursor = null;
        try {
            try {
                try {
                    synchronized (str) {
                        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT id FROM frequence WHERE id='" + str + "'", null);
                        if (cursorRawQuery == null || cursorRawQuery.getCount() <= 0) {
                            if (cursorRawQuery != null) {
                                cursorRawQuery.close();
                            }
                            return false;
                        }
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return true;
                    }
                } catch (Exception unused) {
                    return false;
                }
            } finally {
                if (0 != 0) {
                    cursor.close();
                }
            }
        } catch (Throwable th) {
            throw th;
        }
    }

    public final synchronized void b(String str) {
        if (a(str)) {
            String str2 = "UPDATE frequence Set impression_count=impression_count+1 WHERE id=" + str;
            if (getReadableDatabase() != null) {
                getReadableDatabase().execSQL(str2);
            }
        }
    }

    private synchronized long b(com.mbridge.msdk.foundation.entity.h hVar) {
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", hVar.a());
            contentValues.put("fc_a", Integer.valueOf(hVar.b()));
            contentValues.put("fc_b", Integer.valueOf(hVar.c()));
            contentValues.put("ts", Long.valueOf(hVar.f()));
            contentValues.put("impression_count", Integer.valueOf(hVar.d()));
            contentValues.put(j.a.e, Integer.valueOf(hVar.e()));
            contentValues.put("ts", Long.valueOf(hVar.f()));
            if (getWritableDatabase() == null) {
                return -1L;
            }
            return getWritableDatabase().insert("frequence", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.h hVar) {
        if (!a(hVar.a())) {
            b(hVar);
        }
    }
}
