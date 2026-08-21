package com.tencent.bugly.proguard;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class w {
    public static boolean a;
    private static w b;
    private static x c;

    private w(Context context, List<o> list) {
        c = new x(context, list);
    }

    public static synchronized w a(Context context, List<o> list) {
        if (b == null) {
            b = new w(context, list);
        }
        return b;
    }

    public static synchronized w a() {
        return b;
    }

    public final Cursor a(String str, String[] strArr, String str2) {
        return a(str, strArr, str2, (String) null, (String) null);
    }

    public final Cursor a(String str, String[] strArr, String str2, String str3, String str4) {
        return a(false, str, strArr, str2, null, null, null, str3, str4, null);
    }

    public final int a(String str, String str2) {
        return a(str, str2, (String[]) null, (v) null);
    }

    public final synchronized long a(String str, ContentValues contentValues, v vVar) {
        long j;
        SQLiteDatabase writableDatabase = null;
        j = -1;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
                if (writableDatabase != null && contentValues != null) {
                    long jReplace = writableDatabase.replace(str, "_id", contentValues);
                    if (jReplace >= 0) {
                        al.c("[Database] insert %s success.", str);
                    } else {
                        al.d("[Database] replace %s error.", str);
                    }
                    j = jReplace;
                }
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (vVar != null) {
                    Long.valueOf(-1L);
                }
                if (a && 0 != 0) {
                }
            }
        } finally {
            if (vVar != null) {
                Long.valueOf(-1L);
            }
            if (a && 0 != 0) {
                writableDatabase.close();
            }
        }
        return j;
    }

    private synchronized Cursor a(boolean z, String str, String[] strArr, String str2, String[] strArr2, String str3, String str4, String str5, String str6, v vVar) {
        Cursor cursorQuery;
        cursorQuery = null;
        try {
            try {
                SQLiteDatabase writableDatabase = c.getWritableDatabase();
                if (writableDatabase != null) {
                    cursorQuery = writableDatabase.query(z, str, strArr, str2, strArr2, str3, str4, str5, str6);
                }
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return cursorQuery;
    }

    private synchronized int a(String str, String str2, String[] strArr, v vVar) {
        int iDelete;
        SQLiteDatabase writableDatabase = null;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
                iDelete = writableDatabase != null ? writableDatabase.delete(str, str2, strArr) : 0;
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (vVar != null) {
                    Integer.valueOf(0);
                }
                if (a && writableDatabase != null) {
                }
            }
        } finally {
            if (vVar != null) {
                Integer.valueOf(0);
            }
            if (a && writableDatabase != null) {
                writableDatabase.close();
            }
        }
        return iDelete;
    }

    public final boolean a(int i, String str, byte[] bArr, boolean z) {
        if (!z) {
            a aVar = new a();
            aVar.a(i, str, bArr);
            ak.a().a(aVar);
            return true;
        }
        return a(i, str, bArr, (v) null);
    }

    private boolean a(int i, String str, byte[] bArr, v vVar) {
        try {
            try {
                y yVar = new y();
                yVar.a = i;
                yVar.f = str;
                yVar.e = System.currentTimeMillis();
                yVar.g = bArr;
                boolean zB = b(yVar);
                if (vVar == null) {
                    return zB;
                }
                Boolean.valueOf(zB);
                return zB;
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (vVar != null) {
                    Boolean bool = Boolean.FALSE;
                }
                return false;
            }
        } catch (Throwable th2) {
            if (vVar != null) {
                Boolean bool2 = Boolean.FALSE;
            }
            throw th2;
        }
    }

    public final Map<String, byte[]> a(int i, v vVar) {
        HashMap map = null;
        try {
            List<y> listC = c(i);
            if (listC == null) {
                return null;
            }
            HashMap map2 = new HashMap();
            try {
                for (y yVar : listC) {
                    byte[] bArr = yVar.g;
                    if (bArr != null) {
                        map2.put(yVar.f, bArr);
                    }
                }
                return map2;
            } catch (Throwable th) {
                th = th;
                map = map2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        if (al.a(th)) {
            return map;
        }
        th.printStackTrace();
        return map;
    }

    public final synchronized boolean a(y yVar) {
        ContentValues contentValuesC;
        SQLiteDatabase writableDatabase = null;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
                if (writableDatabase == null || (contentValuesC = c(yVar)) == null) {
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return false;
                }
                long jReplace = writableDatabase.replace("t_lr", "_id", contentValuesC);
                if (jReplace < 0) {
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return false;
                }
                al.c("[Database] insert %s success.", "t_lr");
                yVar.a = jReplace;
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return true;
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return false;
            }
        } catch (Throwable th2) {
            if (a) {
                writableDatabase.close();
            }
            throw th2;
        }
        if (a && writableDatabase != null) {
            writableDatabase.close();
        }
        throw th2;
    }

    private synchronized boolean b(y yVar) {
        ContentValues contentValuesD;
        SQLiteDatabase writableDatabase = null;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
                if (writableDatabase == null || (contentValuesD = d(yVar)) == null) {
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return false;
                }
                long jReplace = writableDatabase.replace("t_pf", "_id", contentValuesD);
                if (jReplace < 0) {
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return false;
                }
                al.c("[Database] insert %s success.", "t_pf");
                yVar.a = jReplace;
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return true;
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return false;
            }
        } catch (Throwable th2) {
            if (a) {
                writableDatabase.close();
            }
            throw th2;
        }
        if (a && writableDatabase != null) {
            writableDatabase.close();
        }
        throw th2;
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x00b6 A[Catch: all -> 0x00c8, TRY_LEAVE, TryCatch #3 {all -> 0x00c8, blocks: (B:23:0x0041, B:24:0x004b, B:26:0x0052, B:28:0x0058, B:30:0x005c, B:32:0x006f, B:33:0x0077, B:35:0x0081, B:45:0x00b0, B:47:0x00b6), top: B:69:0x0041 }] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00bb A[Catch: all -> 0x00da, TRY_ENTER, TryCatch #5 {, blocks: (B:3:0x0001, B:16:0x0033, B:17:0x0036, B:20:0x003c, B:37:0x00a1, B:38:0x00a4, B:41:0x00aa, B:49:0x00bb, B:50:0x00be, B:53:0x00c4, B:56:0x00cb, B:57:0x00ce, B:60:0x00d4, B:61:0x00d7), top: B:72:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00cb A[Catch: all -> 0x00da, TryCatch #5 {, blocks: (B:3:0x0001, B:16:0x0033, B:17:0x0036, B:20:0x003c, B:37:0x00a1, B:38:0x00a4, B:41:0x00aa, B:49:0x00bb, B:50:0x00be, B:53:0x00c4, B:56:0x00cb, B:57:0x00ce, B:60:0x00d4, B:61:0x00d7), top: B:72:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<y> a(int i) {
        String strConcat;
        Throwable th;
        Cursor cursorQuery;
        Throwable th2;
        SQLiteDatabase writableDatabase = c.getWritableDatabase();
        if (writableDatabase != null) {
            if (i >= 0) {
                try {
                    strConcat = "_tp = ".concat(String.valueOf(i));
                } catch (Throwable th3) {
                    th = th3;
                    cursorQuery = null;
                    if (cursorQuery != null) {
                    }
                    if (a) {
                        writableDatabase.close();
                    }
                    throw th;
                }
            } else {
                strConcat = null;
            }
            cursorQuery = writableDatabase.query("t_lr", null, strConcat, null, null, null, null);
            if (cursorQuery == null) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return null;
            }
            try {
                try {
                    StringBuilder sb = new StringBuilder();
                    ArrayList arrayList = new ArrayList();
                    while (cursorQuery.moveToNext()) {
                        y yVarA = a(cursorQuery);
                        if (yVarA != null) {
                            arrayList.add(yVarA);
                        } else {
                            try {
                                long j = cursorQuery.getLong(cursorQuery.getColumnIndex("_id"));
                                sb.append(" or _id = ");
                                sb.append(j);
                            } catch (Throwable unused) {
                                al.d("[Database] unknown id.", new Object[0]);
                            }
                        }
                    }
                    String string = sb.toString();
                    if (string.length() > 0) {
                        al.d("[Database] deleted %s illegal data %d", "t_lr", Integer.valueOf(writableDatabase.delete("t_lr", string.substring(4), null)));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return arrayList;
                } catch (Throwable th4) {
                    th2 = th4;
                    if (!al.a(th2)) {
                        th2.printStackTrace();
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    if (a && writableDatabase != null) {
                        writableDatabase.close();
                    }
                    return null;
                }
            } catch (Throwable th5) {
                th = th5;
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                throw th;
            }
        }
        return null;
    }

    public final synchronized void a(List<y> list) {
        if (list != null) {
            if (list.size() != 0) {
                SQLiteDatabase writableDatabase = c.getWritableDatabase();
                if (writableDatabase != null) {
                    StringBuilder sb = new StringBuilder();
                    for (y yVar : list) {
                        sb.append(" or _id = ");
                        sb.append(yVar.a);
                    }
                    String string = sb.toString();
                    if (string.length() > 0) {
                        string = string.substring(4);
                    }
                    sb.setLength(0);
                    try {
                        try {
                            al.c("[Database] deleted %s data %d", "t_lr", Integer.valueOf(writableDatabase.delete("t_lr", string, null)));
                        } catch (Throwable th) {
                            if (!al.a(th)) {
                                th.printStackTrace();
                            }
                            if (a) {
                                writableDatabase.close();
                            }
                        }
                    } finally {
                        if (a) {
                            writableDatabase.close();
                        }
                    }
                }
            }
        }
    }

    public final synchronized void b(int i) {
        String strConcat;
        SQLiteDatabase writableDatabase = c.getWritableDatabase();
        if (writableDatabase != null) {
            try {
                if (i >= 0) {
                    try {
                        strConcat = "_tp = ".concat(String.valueOf(i));
                    } catch (Throwable th) {
                        if (!al.a(th)) {
                            th.printStackTrace();
                        }
                        if (a && writableDatabase != null) {
                            writableDatabase.close();
                            return;
                        }
                    }
                } else {
                    strConcat = null;
                }
                al.c("[Database] deleted %s data %d", "t_lr", Integer.valueOf(writableDatabase.delete("t_lr", strConcat, null)));
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
            } catch (Throwable th2) {
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                throw th2;
            }
        }
    }

    private static ContentValues c(y yVar) {
        if (yVar == null) {
            return null;
        }
        try {
            ContentValues contentValues = new ContentValues();
            if (yVar.a > 0) {
                contentValues.put("_id", Long.valueOf(yVar.a));
            }
            contentValues.put("_tp", Integer.valueOf(yVar.b));
            contentValues.put("_pc", yVar.c);
            contentValues.put("_th", yVar.d);
            contentValues.put("_tm", Long.valueOf(yVar.e));
            if (yVar.g != null) {
                contentValues.put("_dt", yVar.g);
            }
            return contentValues;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    private static y a(Cursor cursor) {
        if (cursor == null) {
            return null;
        }
        try {
            y yVar = new y();
            yVar.a = cursor.getLong(cursor.getColumnIndex("_id"));
            yVar.b = cursor.getInt(cursor.getColumnIndex("_tp"));
            yVar.c = cursor.getString(cursor.getColumnIndex("_pc"));
            yVar.d = cursor.getString(cursor.getColumnIndex("_th"));
            yVar.e = cursor.getLong(cursor.getColumnIndex("_tm"));
            yVar.g = cursor.getBlob(cursor.getColumnIndex("_dt"));
            return yVar;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00b3 A[Catch: all -> 0x00e5, PHI: r1
      0x00b3: PHI (r1v4 android.database.sqlite.SQLiteDatabase) = (r1v3 android.database.sqlite.SQLiteDatabase), (r1v6 android.database.sqlite.SQLiteDatabase) binds: [B:59:0x00d0, B:45:0x00b1] A[DONT_GENERATE, DONT_INLINE], TRY_LEAVE, TryCatch #3 {, blocks: (B:9:0x0025, B:10:0x0028, B:13:0x002e, B:30:0x0097, B:31:0x009a, B:34:0x00a0, B:56:0x00c9, B:57:0x00cc, B:46:0x00b3, B:65:0x00d8, B:66:0x00db, B:69:0x00e1, B:70:0x00e4, B:43:0x00ad), top: B:75:0x0002 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized List<y> c(int i) {
        SQLiteDatabase writableDatabase;
        Cursor cursor;
        Cursor cursorQuery;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
            } catch (Throwable th) {
                th = th;
            }
        } catch (Throwable th2) {
            th = th2;
            writableDatabase = null;
            cursor = null;
        }
        if (writableDatabase == null) {
            if (a && writableDatabase != null) {
                writableDatabase.close();
            }
            return null;
        }
        try {
            String strConcat = "_id = ".concat(String.valueOf(i));
            cursorQuery = writableDatabase.query("t_pf", null, strConcat, null, null, null, null);
            if (cursorQuery == null) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return null;
            }
            try {
                StringBuilder sb = new StringBuilder();
                ArrayList arrayList = new ArrayList();
                while (cursorQuery.moveToNext()) {
                    y yVarB = b(cursorQuery);
                    if (yVarB != null) {
                        arrayList.add(yVarB);
                    } else {
                        try {
                            String string = cursorQuery.getString(cursorQuery.getColumnIndex("_tp"));
                            sb.append(" or _tp = ");
                            sb.append(string);
                        } catch (Throwable unused) {
                            al.d("[Database] unknown id.", new Object[0]);
                        }
                    }
                }
                if (sb.length() > 0) {
                    sb.append(" and _id = ");
                    sb.append(i);
                    al.d("[Database] deleted %s illegal data %d.", "t_pf", Integer.valueOf(writableDatabase.delete("t_pf", strConcat.substring(4), null)));
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
                return arrayList;
            } catch (Throwable th3) {
                th = th3;
                if (!al.a(th)) {
                    th.printStackTrace();
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                if (a && writableDatabase != null) {
                }
                return null;
            }
        } catch (Throwable th4) {
            th = th4;
            cursor = null;
            if (cursor != null) {
                cursor.close();
            }
            if (a && writableDatabase != null) {
                writableDatabase.close();
            }
            throw th;
        }
    }

    private synchronized boolean a(int i, String str, v vVar) {
        boolean z;
        SQLiteDatabase writableDatabase;
        String strConcat;
        SQLiteDatabase sQLiteDatabase = null;
        z = false;
        try {
            try {
                writableDatabase = c.getWritableDatabase();
                if (writableDatabase != null) {
                    try {
                        if (ap.b(str)) {
                            strConcat = "_id = ".concat(String.valueOf(i));
                        } else {
                            strConcat = "_id = " + i + " and _tp = \"" + str + "\"";
                        }
                        int iDelete = writableDatabase.delete("t_pf", strConcat, null);
                        al.c("[Database] deleted %s data %d", "t_pf", Integer.valueOf(iDelete));
                        if (iDelete > 0) {
                            z = true;
                        }
                    } catch (Throwable th) {
                        th = th;
                        sQLiteDatabase = writableDatabase;
                        if (!al.a(th)) {
                            th.printStackTrace();
                        }
                        if (vVar != null) {
                            Boolean bool = Boolean.FALSE;
                        }
                        if (a && sQLiteDatabase != null) {
                            sQLiteDatabase.close();
                        }
                    }
                }
                if (vVar != null) {
                    Boolean.valueOf(z);
                }
                if (a && writableDatabase != null) {
                    writableDatabase.close();
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Throwable th3) {
            th = th3;
            writableDatabase = sQLiteDatabase;
        }
        return z;
    }

    private static ContentValues d(y yVar) {
        if (yVar != null && !ap.b(yVar.f)) {
            try {
                ContentValues contentValues = new ContentValues();
                if (yVar.a > 0) {
                    contentValues.put("_id", Long.valueOf(yVar.a));
                }
                contentValues.put("_tp", yVar.f);
                contentValues.put("_tm", Long.valueOf(yVar.e));
                if (yVar.g != null) {
                    contentValues.put("_dt", yVar.g);
                }
                return contentValues;
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
            }
        }
        return null;
    }

    private static y b(Cursor cursor) {
        if (cursor == null) {
            return null;
        }
        try {
            y yVar = new y();
            yVar.a = cursor.getLong(cursor.getColumnIndex("_id"));
            yVar.e = cursor.getLong(cursor.getColumnIndex("_tm"));
            yVar.f = cursor.getString(cursor.getColumnIndex("_tp"));
            yVar.g = cursor.getBlob(cursor.getColumnIndex("_dt"));
            return yVar;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    class a extends Thread {
        private int b = 4;
        private v c = null;
        private String d;
        private ContentValues e;
        private boolean f;
        private String[] g;
        private String h;
        private String[] i;
        private String j;
        private String k;
        private String l;
        private String m;
        private String n;
        private String[] o;
        private int p;
        private String q;
        private byte[] r;

        public a() {
        }

        public final void a(int i, String str, byte[] bArr) {
            this.p = i;
            this.q = str;
            this.r = bArr;
        }

        @Override
        public final void run() {
            switch (this.b) {
                case 1:
                    w.this.a(this.d, this.e, this.c);
                    break;
                case 2:
                    w.this.a(this.d, this.n, this.o, this.c);
                    break;
                case 3:
                    Cursor cursorA = w.this.a(this.f, this.d, this.g, this.h, this.i, this.j, this.k, this.l, this.m, this.c);
                    if (cursorA != null) {
                        cursorA.close();
                    }
                    break;
                case 4:
                    w.this.a(this.p, this.q, this.r, this.c);
                    break;
                case 5:
                    w.this.a(this.p, this.c);
                    break;
                case 6:
                    w.this.a(this.p, this.q, this.c);
                    break;
            }
        }
    }
}
