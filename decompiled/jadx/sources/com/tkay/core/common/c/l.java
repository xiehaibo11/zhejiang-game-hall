package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.tkay.core.common.f.ad;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class l extends com.tkay.core.common.c.a<ad> {
    private static volatile l c;
    private final String b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6108a = "placement_ad_impression";
        public static final String b = "format";
        public static final String c = "placement_id";
        public static final String d = "adsource_id";
        public static final String e = "hour_time";
        public static final String f = "hour_imp";
        public static final String g = "date_time";
        public static final String h = "date_imp";
        public static final String i = "show_time";
        public static final String j = "CREATE TABLE IF NOT EXISTS placement_ad_impression(format INTEGER ,placement_id TEXT ,adsource_id TEXT ,hour_time TEXT ,hour_imp INTEGER ,date_time TEXT ,date_imp INTEGER , show_time INTEGER)";
    }

    private l(b bVar) {
        super(bVar);
        this.b = l.class.getName();
    }

    public static l a(b bVar) {
        if (c == null) {
            synchronized (l.class) {
                if (c == null) {
                    c = new l(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized Map<String, ad> a(int i, String str, String str2) {
        HashMap map = new HashMap();
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.f6108a, null, "format=?", new String[]{String.valueOf(i)}, null, null, null);
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
            if (cursorQuery != null) {
            }
        }
        if (cursorQuery == null || cursorQuery.getCount() <= 0) {
            if (cursorQuery != null) {
            }
            return map;
        }
        while (cursorQuery.moveToNext()) {
            String string = cursorQuery.getString(cursorQuery.getColumnIndex(a.c));
            ad adVar = (ad) map.get(string);
            if (adVar == null) {
                adVar = new ad();
                adVar.b = string;
                adVar.f6134a = cursorQuery.getInt(cursorQuery.getColumnIndex("format"));
                adVar.f = new ConcurrentHashMap<>();
                map.put(string, adVar);
            }
            ad.a aVar = new ad.a();
            aVar.f6135a = cursorQuery.getString(cursorQuery.getColumnIndex("adsource_id"));
            aVar.b = cursorQuery.getString(cursorQuery.getColumnIndex(a.e));
            aVar.c = cursorQuery.getString(cursorQuery.getColumnIndex(a.g));
            if (!TextUtils.equals(aVar.b, str2)) {
                aVar.e = 0;
            } else {
                aVar.e = cursorQuery.getInt(cursorQuery.getColumnIndex(a.f));
            }
            adVar.d += aVar.e;
            if (!TextUtils.equals(aVar.c, str)) {
                aVar.d = 0;
            } else {
                aVar.d = cursorQuery.getInt(cursorQuery.getColumnIndex(a.h));
            }
            adVar.c += aVar.d;
            aVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex("show_time"));
            if (aVar.f >= adVar.e) {
                adVar.e = aVar.f;
            }
            adVar.f.put(aVar.f6135a, aVar);
        }
        cursorQuery.close();
        return map;
        cursorQuery.close();
        return map;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00e5 A[Catch: all -> 0x00f4, PHI: r11
      0x00e5: PHI (r11v7 android.database.Cursor) = (r11v5 android.database.Cursor), (r11v6 android.database.Cursor), (r11v8 android.database.Cursor) binds: [B:30:0x00dc, B:34:0x00e3, B:41:0x00f1] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #1 {, blocks: (B:26:0x00d6, B:35:0x00e5, B:38:0x00ec, B:39:0x00ef, B:33:0x00e0), top: B:51:0x0002, inners: #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized com.tkay.core.common.f.ad a(java.lang.String r11, java.lang.String r12, java.lang.String r13) {
        /*
            Method dump skipped, instruction units count: 249
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.l.a(java.lang.String, java.lang.String, java.lang.String):com.tkay.core.common.f.ad");
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x009f A[Catch: all -> 0x00ae, PHI: r11
      0x009f: PHI (r11v7 android.database.Cursor) = (r11v5 android.database.Cursor), (r11v6 android.database.Cursor), (r11v8 android.database.Cursor) binds: [B:24:0x0096, B:28:0x009d, B:35:0x00ab] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:20:0x0090, B:29:0x009f, B:32:0x00a6, B:33:0x00a9, B:27:0x009a), top: B:47:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized com.tkay.core.common.f.ad.a a(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            java.lang.String r2 = "placement_ad_impression"
            r3 = 0
            java.lang.String r4 = "adsource_id=? AND placement_id=?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r9 = 0
            r5[r9] = r12     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r12 = 1
            r5[r12] = r11     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            if (r11 == 0) goto L8a
            int r12 = r11.getCount()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r12 <= 0) goto L8a
            r11.moveToNext()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            com.tkay.core.common.f.ad$a r12 = new com.tkay.core.common.f.ad$a     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "adsource_id"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.f6135a = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "hour_time"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.b = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "date_time"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.c = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r12.b     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            boolean r14 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r14 != 0) goto L5a
            r12.e = r9     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L66
        L5a:
            java.lang.String r14 = "hour_imp"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.e = r14     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
        L66:
            java.lang.String r14 = r12.c     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            boolean r13 = android.text.TextUtils.equals(r14, r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r13 != 0) goto L71
            r12.d = r9     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L7d
        L71:
            java.lang.String r13 = "date_imp"
            int r13 = r11.getColumnIndex(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            int r13 = r11.getInt(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.d = r13     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
        L7d:
            java.lang.String r13 = "show_time"
            int r13 = r11.getColumnIndex(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            long r13 = r11.getLong(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.f = r13     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L8b
        L8a:
            r12 = r0
        L8b:
            r11.close()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r11 == 0) goto L93
            r11.close()     // Catch: java.lang.Throwable -> Lae
        L93:
            monitor-exit(r10)
            return r12
        L95:
            r11 = r0
        L96:
            if (r11 == 0) goto Lb1
            goto Lad
        L99:
            r11 = r0
        L9a:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> La3
            if (r11 == 0) goto Lb1
        L9f:
            r11.close()     // Catch: java.lang.Throwable -> Lae
            goto Lb1
        La3:
            r12 = move-exception
            if (r11 == 0) goto La9
            r11.close()     // Catch: java.lang.Throwable -> Lae
        La9:
            throw r12     // Catch: java.lang.Throwable -> Lae
        Laa:
            r11 = r0
        Lab:
            if (r11 == 0) goto Lb1
        Lad:
            goto L9f
        Lae:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        Lb1:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.l.a(java.lang.String, java.lang.String, java.lang.String, java.lang.String):com.tkay.core.common.f.ad$a");
    }

    public final synchronized long a(int i, String str, ad.a aVar) {
        boolean z;
        if (b() == null || aVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("format", Integer.valueOf(i));
            contentValues.put(a.c, str);
            contentValues.put("adsource_id", aVar.f6135a);
            contentValues.put(a.e, aVar.b);
            contentValues.put(a.f, Integer.valueOf(aVar.e));
            contentValues.put(a.g, aVar.c);
            contentValues.put(a.h, Integer.valueOf(aVar.d));
            contentValues.put("show_time", Long.valueOf(aVar.f));
            Cursor cursorQuery = a().query(a.f6108a, new String[]{"adsource_id"}, "adsource_id=?", new String[]{aVar.f6135a}, "adsource_id", null, null);
            if (cursorQuery == null || cursorQuery.getCount() <= 0) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                z = false;
            } else {
                cursorQuery.close();
                z = true;
            }
            if (z) {
                return b().update(a.f6108a, contentValues, "adsource_id = ? ", new String[]{aVar.f6135a});
            }
            return b().insert(a.f6108a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    private boolean b(String str) {
        Cursor cursorQuery = a().query(a.f6108a, new String[]{"adsource_id"}, "adsource_id=?", new String[]{str}, "adsource_id", null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private static ad a(Cursor cursor, String str, String str2) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        ad adVar = new ad();
        adVar.f = new ConcurrentHashMap<>();
        while (cursor.moveToNext()) {
            adVar.f6134a = cursor.getInt(cursor.getColumnIndex("format"));
            adVar.b = cursor.getString(cursor.getColumnIndex(a.c));
            ad.a aVar = new ad.a();
            aVar.f6135a = cursor.getString(cursor.getColumnIndex("adsource_id"));
            aVar.b = cursor.getString(cursor.getColumnIndex(a.e));
            aVar.c = cursor.getString(cursor.getColumnIndex(a.g));
            if (!TextUtils.equals(aVar.b, str2)) {
                aVar.e = 0;
            } else {
                aVar.e = cursor.getInt(cursor.getColumnIndex(a.f));
            }
            adVar.d += aVar.e;
            if (!TextUtils.equals(aVar.c, str)) {
                aVar.d = 0;
            } else {
                aVar.d = cursor.getInt(cursor.getColumnIndex(a.h));
            }
            adVar.c += aVar.d;
            aVar.f = cursor.getLong(cursor.getColumnIndex("show_time"));
            if (aVar.f >= adVar.e) {
                adVar.e = aVar.f;
            }
            adVar.f.put(aVar.f6135a, aVar);
        }
        return adVar;
    }

    private static ad.a b(Cursor cursor, String str, String str2) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        cursor.moveToNext();
        ad.a aVar = new ad.a();
        aVar.f6135a = cursor.getString(cursor.getColumnIndex("adsource_id"));
        aVar.b = cursor.getString(cursor.getColumnIndex(a.e));
        aVar.c = cursor.getString(cursor.getColumnIndex(a.g));
        if (!TextUtils.equals(aVar.b, str2)) {
            aVar.e = 0;
        } else {
            aVar.e = cursor.getInt(cursor.getColumnIndex(a.f));
        }
        if (!TextUtils.equals(aVar.c, str)) {
            aVar.d = 0;
        } else {
            aVar.d = cursor.getInt(cursor.getColumnIndex(a.h));
        }
        aVar.f = cursor.getLong(cursor.getColumnIndex("show_time"));
        return aVar;
    }

    public final void a(String str) {
        synchronized (this) {
            try {
                String str2 = "date_time!='" + str + "'";
                if (b() == null) {
                } else {
                    b().delete(a.f6108a, str2, null);
                }
            } catch (Exception unused) {
            }
        }
    }
}
