package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.af;
import java.util.ArrayList;
import java.util.List;

public class d extends com.tkay.core.common.c.a<af> {
    private static final String b = d.class.getName();
    private static volatile d c;

    public static class a {
        public static final String a = "sdkconfig";
        public static final String b = "key";
        public static final String c = "type";
        public static final String d = "value";
        public static final String e = "lastupdatetime";
        public static final String f = "CREATE TABLE IF NOT EXISTS sdkconfig(key TEXT ,type TEXT ,lastupdatetime TEXT ,value TEXT )";
    }

    private d(b bVar) {
        super(bVar);
    }

    public static d a(b bVar) {
        if (c == null) {
            synchronized (d.class) {
                if (c == null) {
                    c = new d(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized long a(String str, String str2, String str3) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("key", str);
            contentValues.put("type", str3);
            contentValues.put("value", str2);
            StringBuilder sb = new StringBuilder();
            sb.append(System.currentTimeMillis());
            contentValues.put(a.e, sb.toString());
            if (b(str, str3)) {
                return b().update(a.a, contentValues, "key = ? AND type = ?", new String[]{str, str3});
            }
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    private synchronized long a(af afVar) {
        if (b() == null || afVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("key", afVar.b());
            contentValues.put("type", afVar.c());
            contentValues.put("value", afVar.d());
            contentValues.put(a.e, afVar.a());
            if (b(afVar.b(), afVar.a(), afVar.c())) {
                return b().update(a.a, contentValues, "key = ? AND type = ? AND lastupdatetime = ?  ", new String[]{afVar.b(), afVar.c(), afVar.a()});
            }
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    private synchronized boolean b(String str, String str2) {
        Cursor cursorQuery = a().query(a.a, new String[]{"key"}, "key=? AND type=?", new String[]{str, str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private synchronized boolean b(String str, String str2, String str3) {
        Cursor cursorQuery = a().query(a.a, new String[]{"key"}, "key=? AND type=? AND lastupdatetime=?", new String[]{str, str3, str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private synchronized void c(String str, String str2) {
        List<af> listC = c(str, str2, af.a.a);
        if (listC != null && listC.size() > 0) {
            for (af afVar : listC) {
                StringBuilder sb = new StringBuilder();
                sb.append(Integer.parseInt(afVar.d()) + 1);
                afVar.d(sb.toString());
                a(afVar);
            }
            return;
        }
        af afVar2 = new af();
        afVar2.a(str2);
        afVar2.d("1");
        afVar2.c(af.a.a);
        afVar2.b(str);
        a(afVar2);
    }

    private synchronized List<af> a(Cursor cursor) {
        if (cursor != null) {
            if (cursor.getCount() > 0) {
                ArrayList arrayList = new ArrayList();
                while (cursor.moveToNext()) {
                    af afVar = new af();
                    afVar.b(cursor.getString(cursor.getColumnIndex("key")));
                    afVar.c(cursor.getString(cursor.getColumnIndex("type")));
                    afVar.d(cursor.getString(cursor.getColumnIndex("value")));
                    afVar.a(cursor.getString(cursor.getColumnIndex(a.e)));
                    arrayList.add(afVar);
                }
                cursor.close();
                return arrayList;
            }
        }
        return null;
    }

    private synchronized void a(String str) {
        try {
            if (b() == null) {
                return;
            }
            b().delete(a.a, "lastupdatetime< ? and type = ?", new String[]{str, af.a.a});
        } catch (Exception unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0033 A[Catch: all -> 0x0042, PHI: r10
      0x0033: PHI (r10v7 android.database.Cursor) = (r10v5 android.database.Cursor), (r10v6 android.database.Cursor), (r10v8 android.database.Cursor) binds: [B:11:0x002a, B:15:0x0031, B:22:0x003f] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #1 {, blocks: (B:7:0x0024, B:16:0x0033, B:19:0x003a, B:20:0x003d, B:14:0x002e), top: B:32:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized List<af> c(String str, String str2, String str3) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, "key = ? and type = ? and lastupdatetime = ?", new String[]{str, str3, str2}, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused2) {
            cursorQuery = null;
        } catch (Throwable unused3) {
            cursorQuery = null;
        }
        try {
            return a(cursorQuery);
        } catch (Exception unused4) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return null;
        } catch (OutOfMemoryError unused5) {
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
        } catch (Throwable unused6) {
            if (cursorQuery != null) {
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0030 A[Catch: all -> 0x003f, PHI: r10
      0x0030: PHI (r10v7 android.database.Cursor) = (r10v5 android.database.Cursor), (r10v6 android.database.Cursor), (r10v8 android.database.Cursor) binds: [B:11:0x0027, B:15:0x002e, B:22:0x003c] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:7:0x0021, B:16:0x0030, B:19:0x0037, B:20:0x003a, B:14:0x002b), top: B:34:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<af> a(String str, String str2) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, "key = ? and type = ?", new String[]{str, str2}, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused2) {
            cursorQuery = null;
        } catch (Throwable unused3) {
            cursorQuery = null;
        }
        try {
            return a(cursorQuery);
        } catch (Exception unused4) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return null;
        } catch (OutOfMemoryError unused5) {
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
        } catch (Throwable unused6) {
            if (cursorQuery != null) {
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0030 A[Catch: all -> 0x003f, PHI: r10
      0x0030: PHI (r10v7 android.database.Cursor) = (r10v5 android.database.Cursor), (r10v6 android.database.Cursor), (r10v8 android.database.Cursor) binds: [B:11:0x0027, B:15:0x002e, B:22:0x003c] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:7:0x0021, B:16:0x0030, B:19:0x0037, B:20:0x003a, B:14:0x002b), top: B:34:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized List<af> d(String str, String str2) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, "key != ? and type = ?", new String[]{str, str2}, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused2) {
            cursorQuery = null;
        } catch (Throwable unused3) {
            cursorQuery = null;
        }
        try {
            return a(cursorQuery);
        } catch (Exception unused4) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return null;
        } catch (OutOfMemoryError unused5) {
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
        } catch (Throwable unused6) {
            if (cursorQuery != null) {
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x002d A[Catch: all -> 0x003c, PHI: r10
      0x002d: PHI (r10v7 android.database.Cursor) = (r10v5 android.database.Cursor), (r10v6 android.database.Cursor), (r10v8 android.database.Cursor) binds: [B:11:0x0024, B:15:0x002b, B:22:0x0039] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:7:0x001e, B:16:0x002d, B:19:0x0034, B:20:0x0037, B:14:0x0028), top: B:34:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized List<af> b(String str) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, "type = ?", new String[]{str}, null, null, null);
            try {
                return a(cursorQuery);
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
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
    }
}
