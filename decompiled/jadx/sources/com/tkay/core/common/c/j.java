package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.w;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class j extends com.tkay.core.common.c.a<w> {
    private static j c;
    private final String b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6106a = "offer_action_record";
        public static final String b = "adsource_id";
        public static final String c = "type";
        public static final String d = "unit_id";
        public static final String e = "click_count";
        public static final String f = "show_count";
        public static final String g = "expire_time";
        public static final String h = "CREATE TABLE IF NOT EXISTS offer_action_record(adsource_id TEXT ,type INTEGER ,unit_id TEXT ,click_count INTEGER ,show_count INTEGER ,expire_time INTEGER )";
    }

    private j(b bVar) {
        super(bVar);
        this.b = j.class.getName();
    }

    public static j a(b bVar) {
        if (c == null) {
            synchronized (j.class) {
                if (c == null) {
                    c = new j(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized void a(int i, String str, int i2, int i3) {
        w wVarA = a(i, str);
        if (wVarA != null) {
            wVarA.b(wVarA.d() + i2);
            wVarA.a(wVarA.c() + i3);
            a(wVarA);
        }
    }

    public final synchronized void a(int i, String str, long j) {
        w wVarA = a(i, str);
        if (wVarA != null) {
            wVarA.a(System.currentTimeMillis() + j);
            a(wVarA);
        }
    }

    public final synchronized List<w> a(int i) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.f6106a, null, "type = ? and expire_time > ?", new String[]{String.valueOf(i), String.valueOf(System.currentTimeMillis())}, null, null, null);
                if (cursorQuery != null && cursorQuery.getCount() > 0) {
                    while (cursorQuery.moveToNext()) {
                        w wVar = new w(i, cursorQuery.getString(cursorQuery.getColumnIndex("unit_id")));
                        wVar.b(cursorQuery.getInt(cursorQuery.getColumnIndex(a.e)));
                        wVar.a(cursorQuery.getInt(cursorQuery.getColumnIndex("show_count")));
                        wVar.a(cursorQuery.getLong(cursorQuery.getColumnIndex("expire_time")));
                        arrayList.add(wVar);
                    }
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
            if (cursorQuery != null) {
            }
        }
        return arrayList;
    }

    public final synchronized List<w> a(List<String> list, int i) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        StringBuilder sb = new StringBuilder("SELECT * FROM offer_action_record WHERE adsource_id IN (");
        sb.append(b(list.size()));
        sb.append(") and type = ? and expire_time > ?");
        Cursor cursorQuery = null;
        try {
            try {
                String[] strArr = new String[list.size() + 2];
                list.toArray(strArr);
                strArr[list.size()] = String.valueOf(i);
                strArr[list.size() + 1] = String.valueOf(System.currentTimeMillis());
                cursorQuery = a().query(a.f6106a, null, "adsource_id IN (" + b(list.size()) + ") and type = ? and expire_time > ?", strArr, null, null, null);
                if (cursorQuery != null && cursorQuery.getCount() > 0) {
                    while (cursorQuery.moveToNext()) {
                        w wVar = new w(i, cursorQuery.getString(cursorQuery.getColumnIndex("unit_id")));
                        wVar.b(cursorQuery.getInt(cursorQuery.getColumnIndex(a.e)));
                        wVar.a(cursorQuery.getInt(cursorQuery.getColumnIndex("show_count")));
                        wVar.a(cursorQuery.getLong(cursorQuery.getColumnIndex("expire_time")));
                        arrayList.add(wVar);
                    }
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
            if (cursorQuery != null) {
            }
        }
        return arrayList;
    }

    private static String b(int i) {
        if (i <= 0) {
            throw new RuntimeException("No placeholders");
        }
        StringBuilder sb = new StringBuilder((i * 2) - 1);
        sb.append("?");
        for (int i2 = 1; i2 < i; i2++) {
            sb.append(",?");
        }
        return sb.toString();
    }

    private synchronized long a(w wVar) {
        if (b() == null || wVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("type", Integer.valueOf(wVar.e()));
            contentValues.put("unit_id", wVar.a());
            contentValues.put(a.e, Integer.valueOf(wVar.d()));
            contentValues.put("show_count", Integer.valueOf(wVar.c()));
            contentValues.put("expire_time", Long.valueOf(wVar.b()));
            return b().update(a.f6106a, contentValues, "type = ? and unit_id = ?", new String[]{String.valueOf(wVar.e()), wVar.a()});
        } catch (Exception unused) {
            return -1L;
        }
    }

    private synchronized long b(String str, int i, String str2) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("adsource_id", str);
            contentValues.put("type", Integer.valueOf(i));
            contentValues.put("unit_id", str2);
            w wVarA = a(i, str2);
            if (wVarA != null) {
                contentValues.put(a.e, Integer.valueOf(wVarA.d()));
                contentValues.put("show_count", Integer.valueOf(wVarA.c()));
                contentValues.put("expire_time", Long.valueOf(wVarA.b()));
            } else {
                contentValues.put(a.e, (Integer) 0);
                contentValues.put("show_count", (Integer) 0);
                contentValues.put("expire_time", (Integer) (-1));
            }
            return b().insert(a.f6106a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0071 A[Catch: all -> 0x0080, PHI: r1
      0x0071: PHI (r1v5 android.database.Cursor) = (r1v3 android.database.Cursor), (r1v4 android.database.Cursor), (r1v6 android.database.Cursor) binds: [B:18:0x0068, B:22:0x006f, B:29:0x007d] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #0 {, blocks: (B:10:0x005b, B:14:0x0062, B:23:0x0071, B:26:0x0078, B:27:0x007b, B:21:0x006c), top: B:39:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized com.tkay.core.common.f.w a(int r10, java.lang.String r11) {
        /*
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            java.lang.String r2 = "offer_action_record"
            r3 = 0
            java.lang.String r4 = "type=? and unit_id = ?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 0
            java.lang.String r7 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r5[r6] = r7     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 1
            r5[r6] = r11     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            if (r1 == 0) goto L60
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            if (r2 <= 0) goto L60
            r1.moveToNext()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            com.tkay.core.common.f.w r2 = new com.tkay.core.common.f.w     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.<init>(r10, r11)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "click_count"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            int r10 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.b(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "show_count"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            int r10 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.a(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "expire_time"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            long r10 = r1.getLong(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.a(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r1.close()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            if (r1 == 0) goto L5e
            r1.close()     // Catch: java.lang.Throwable -> L80
        L5e:
            monitor-exit(r9)
            return r2
        L60:
            if (r1 == 0) goto L65
            r1.close()     // Catch: java.lang.Throwable -> L80
        L65:
            monitor-exit(r9)
            return r0
        L67:
            r1 = r0
        L68:
            if (r1 == 0) goto L83
            goto L7f
        L6b:
            r1 = r0
        L6c:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L83
        L71:
            r1.close()     // Catch: java.lang.Throwable -> L80
            goto L83
        L75:
            r10 = move-exception
            if (r1 == 0) goto L7b
            r1.close()     // Catch: java.lang.Throwable -> L80
        L7b:
            throw r10     // Catch: java.lang.Throwable -> L80
        L7c:
            r1 = r0
        L7d:
            if (r1 == 0) goto L83
        L7f:
            goto L71
        L80:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L83:
            monitor-exit(r9)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.j.a(int, java.lang.String):com.tkay.core.common.f.w");
    }

    private boolean b(int i, String str) {
        Cursor cursorQuery = a().query(a.f6106a, null, "type = ? and unit_id = ?", new String[]{String.valueOf(i), str}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private boolean c(String str, int i, String str2) {
        Cursor cursorQuery = a().query(a.f6106a, null, "adsource_id = ? and type = ? and unit_id = ?", new String[]{str, String.valueOf(i), str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    public final synchronized void a(String str, int i, String str2) {
        boolean z = false;
        Cursor cursorQuery = a().query(a.f6106a, null, "adsource_id = ? and type = ? and unit_id = ?", new String[]{str, String.valueOf(i), str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            z = true;
        } else if (cursorQuery != null) {
            cursorQuery.close();
        }
        if (!z) {
            b(str, i, str2);
        }
    }
}
