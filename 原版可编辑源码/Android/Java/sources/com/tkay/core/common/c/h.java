package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.o;
import java.util.ArrayList;
import java.util.List;

public class h extends com.tkay.core.common.c.a<o> {
    private static final String b = h.class.getName();
    private static volatile h c;
    private int d;

    public static class a {
        public static final String a = "inspect_info";
        public static final String b = "inspect_id";
        public static final String c = "update_time";
        public static final String d = "CREATE TABLE IF NOT EXISTS inspect_info(inspect_id TEXT, update_time INTEGER )";
    }

    private h(b bVar) {
        super(bVar);
        this.d = 100;
    }

    public static h a(b bVar) {
        if (c == null) {
            synchronized (h.class) {
                if (c == null) {
                    c = new h(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized long a(String str) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(a.b, str);
            contentValues.put("update_time", Long.valueOf(System.currentTimeMillis()));
            if (b(str)) {
                return b().update(a.a, contentValues, "inspect_id = ? ", new String[]{str});
            }
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0038 A[Catch: all -> 0x003c, PHI: r1
      0x0038: PHI (r1v2 android.database.Cursor) = (r1v1 android.database.Cursor), (r1v3 android.database.Cursor) binds: [B:19:0x0036, B:17:0x0033] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #1 {, blocks: (B:14:0x002e, B:20:0x0038), top: B:29:0x0007 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized boolean b(String str) {
        if (str == null) {
            return false;
        }
        Cursor cursorQuery = null;
        try {
            cursorQuery = a().query(a.a, new String[]{a.b}, "inspect_id=?", new String[]{str}, null, null, null);
        } catch (Throwable unused) {
            if (cursorQuery != null) {
            }
        }
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x003a A[Catch: all -> 0x004e, DONT_GENERATE, PHI: r0 r1
      0x003a: PHI (r0v6 android.database.Cursor) = 
      (r0v2 android.database.Cursor)
      (r0v3 android.database.Cursor)
      (r0v4 android.database.Cursor)
      (r0v9 android.database.Cursor)
     binds: [B:11:0x0038, B:15:0x0041, B:21:0x004b, B:9:0x0035] A[DONT_GENERATE, DONT_INLINE]
      0x003a: PHI (r1v5 long) = (r1v2 long), (r1v3 long), (r1v4 long), (r1v8 long) binds: [B:11:0x0038, B:15:0x0041, B:21:0x004b, B:9:0x0035] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #4 {, blocks: (B:12:0x003a, B:19:0x0047, B:20:0x004a, B:14:0x003e), top: B:34:0x0004, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized void c() {
        Cursor cursorQuery = null;
        long j = -1;
        try {
            try {
                cursorQuery = a().query(a.a, null, null, null, null, null, "update_time DESC", String.valueOf(this.d));
                if (cursorQuery != null && cursorQuery.getCount() >= this.d) {
                    cursorQuery.moveToLast();
                    j = cursorQuery.getLong(cursorQuery.getColumnIndex("update_time"));
                    cursorQuery.close();
                }
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        } catch (Exception unused) {
            if (cursorQuery != null) {
            }
        } catch (OutOfMemoryError unused2) {
            System.gc();
            if (cursorQuery != null) {
            }
        } catch (Throwable unused3) {
        }
        if (cursorQuery != null) {
        }
        if (j > 0) {
            try {
                b().delete(a.a, "update_time<?", new String[]{String.valueOf(j)});
            } catch (Throwable unused4) {
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0059 A[Catch: all -> 0x006f, PHI: r1
      0x0059: PHI (r1v6 android.database.Cursor) = 
      (r1v3 android.database.Cursor)
      (r1v4 android.database.Cursor)
      (r1v5 android.database.Cursor)
      (r1v8 android.database.Cursor)
     binds: [B:20:0x0057, B:25:0x0061, B:32:0x006c, B:17:0x0053] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #7 {, blocks: (B:14:0x004e, B:21:0x0059, B:29:0x0067, B:30:0x006a, B:24:0x005e), top: B:44:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<o> d() {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, null, null, null, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        ArrayList arrayList = new ArrayList();
                        while (cursorQuery.moveToNext()) {
                            o oVar = new o();
                            String string = cursorQuery.getString(cursorQuery.getColumnIndex(a.b));
                            long j = cursorQuery.getLong(cursorQuery.getColumnIndex("update_time"));
                            oVar.a(string);
                            oVar.a(j);
                            arrayList.add(oVar);
                        }
                        cursorQuery.close();
                        return arrayList;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                    }
                } catch (OutOfMemoryError unused2) {
                    try {
                        System.gc();
                        if (cursorQuery != null) {
                        }
                    } finally {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                    }
                } catch (Throwable unused3) {
                    if (cursorQuery != null) {
                    }
                }
            }
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }
}
