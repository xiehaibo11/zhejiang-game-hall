package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.n;
import java.util.ArrayList;
import java.util.List;

public class g extends com.tkay.core.common.c.a<n> {
    private static final String b = g.class.getName();
    private static g c;
    private int d;

    public static class a {
        public static final String a = "request_info";
        public static final String b = "id";
        public static final String c = "req_type";
        public static final String d = "req_url";
        public static final String e = "req_head";
        public static final String f = "req_content";
        public static final String g = "time";
        public static final String h = "extra";
        public static final String i = "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )";
    }

    private g(b bVar) {
        super(bVar);
        this.d = 1000;
    }

    public static g a(b bVar) {
        if (c == null) {
            synchronized (g.class) {
                if (c == null) {
                    c = new g(bVar);
                }
            }
        }
        return c;
    }

    private synchronized void d() {
        try {
            if (b() == null) {
                return;
            }
            b().delete(a.a, null, null);
        } catch (Exception unused) {
        }
    }

    public final synchronized long a(n nVar) {
        Cursor cursorQuery;
        if (b() == null) {
            return -1L;
        }
        Cursor cursor = null;
        try {
            cursorQuery = a().query(a.a, null, null, null, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            try {
                if (cursorQuery.getCount() >= this.d) {
                    d();
                }
            } catch (Exception unused2) {
                if (cursorQuery != null) {
                }
                ContentValues contentValues = new ContentValues();
                contentValues.put("id", nVar.a);
                contentValues.put("req_type", Integer.valueOf(nVar.b));
                contentValues.put("req_url", nVar.d);
                contentValues.put("req_head", nVar.c);
                contentValues.put(a.f, nVar.e);
                contentValues.put("time", Long.valueOf(nVar.f));
                contentValues.put("extra", nVar.g);
                return b().insert(a.a, null, contentValues);
            } catch (Throwable th2) {
                th = th2;
                cursor = cursorQuery;
                if (cursor != null) {
                    try {
                        cursor.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
            ContentValues contentValues2 = new ContentValues();
            contentValues2.put("id", nVar.a);
            contentValues2.put("req_type", Integer.valueOf(nVar.b));
            contentValues2.put("req_url", nVar.d);
            contentValues2.put("req_head", nVar.c);
            contentValues2.put(a.f, nVar.e);
            contentValues2.put("time", Long.valueOf(nVar.f));
            contentValues2.put("extra", nVar.g);
            return b().insert(a.a, null, contentValues2);
        } catch (Exception unused4) {
            return -1L;
        }
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Exception unused5) {
            }
        }
    }

    public final synchronized int b(n nVar) {
        if (b() == null || nVar == null) {
            return -1;
        }
        try {
            return b().delete(a.a, "id=?", new String[]{nVar.a});
        } catch (Throwable unused) {
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x00a0 A[Catch: all -> 0x00af, PHI: r1
      0x00a0: PHI (r1v5 android.database.Cursor) = (r1v3 android.database.Cursor), (r1v4 android.database.Cursor), (r1v6 android.database.Cursor) binds: [B:22:0x0097, B:26:0x009e, B:33:0x00ac] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:14:0x008a, B:18:0x0091, B:27:0x00a0, B:30:0x00a7, B:31:0x00aa, B:25:0x009b), top: B:45:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<n> c() {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, null, null, null, null, "time", "10");
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        ArrayList arrayList = new ArrayList();
                        while (cursorQuery.moveToNext()) {
                            n nVar = new n();
                            nVar.a = cursorQuery.getString(cursorQuery.getColumnIndex("id"));
                            nVar.b = cursorQuery.getInt(cursorQuery.getColumnIndex("req_type"));
                            nVar.d = cursorQuery.getString(cursorQuery.getColumnIndex("req_url"));
                            nVar.c = cursorQuery.getString(cursorQuery.getColumnIndex("req_head"));
                            nVar.e = cursorQuery.getString(cursorQuery.getColumnIndex(a.f));
                            nVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex("time"));
                            nVar.g = cursorQuery.getString(cursorQuery.getColumnIndex("extra"));
                            arrayList.add(nVar);
                        }
                        cursorQuery.close();
                        return arrayList;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                } catch (OutOfMemoryError unused2) {
                    try {
                        System.gc();
                        if (cursorQuery != null) {
                        }
                        return null;
                    } finally {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                    }
                } catch (Throwable unused3) {
                    if (cursorQuery != null) {
                    }
                    return null;
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return null;
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
    }
}
