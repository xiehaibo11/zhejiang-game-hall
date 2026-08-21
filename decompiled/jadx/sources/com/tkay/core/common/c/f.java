package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class f extends com.tkay.core.common.c.a<com.tkay.core.common.a.f> {
    private static volatile f d;
    private final String b;
    private final long c;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6101a = "dsp_offer_show_record";
        public static final String b = "dsp_id";
        public static final String c = "dsp_offer_id";
        public static final String d = "show_limit";
        public static final String e = "show_count";
        public static final String f = "create_time";
        public static final String g = "last_update_time";
        public static final String h = "CREATE TABLE IF NOT EXISTS dsp_offer_show_record(dsp_id TEXT ,dsp_offer_id TEXT ,show_limit INTEGER ,show_count INTEGER ,create_time INTEGER ,last_update_time INTEGER)";
    }

    private f(b bVar) {
        super(bVar);
        this.b = f.class.getName();
        this.c = 86400000L;
    }

    public static f a(b bVar) {
        if (d == null) {
            synchronized (f.class) {
                if (d == null) {
                    d = new f(bVar);
                }
            }
        }
        return d;
    }

    public final synchronized long a(com.tkay.core.common.a.f fVar) {
        if (b() == null) {
            return -1L;
        }
        if (fVar.c() <= 0) {
            return -1L;
        }
        if (a(fVar.a(), fVar.b()) == null) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("dsp_id", fVar.a());
            contentValues.put("dsp_offer_id", fVar.b());
            contentValues.put(a.d, Integer.valueOf(fVar.c()));
            contentValues.put("show_count", (Integer) 0);
            contentValues.put(a.f, Long.valueOf(System.currentTimeMillis()));
            contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
            StringBuilder sb = new StringBuilder("insertDspOfferShowRecord--insert dspid:");
            sb.append(fVar.a());
            sb.append(",dspOfferId:");
            sb.append(fVar.b());
            return b().insert(a.f6101a, null, contentValues);
        }
        StringBuilder sb2 = new StringBuilder("insertDspOfferShowRecord--had inserted...,dspid:");
        sb2.append(fVar.a());
        sb2.append(",dspOfferId:");
        sb2.append(fVar.b());
        return -1L;
    }

    public final synchronized long b(com.tkay.core.common.a.f fVar) {
        if (b() == null) {
            return -1L;
        }
        if (fVar.c() <= 0) {
            return -1L;
        }
        com.tkay.core.common.a.f fVarA = a(fVar.a(), fVar.b());
        if (fVarA != null) {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("dsp_id", fVar.a());
                contentValues.put("dsp_offer_id", fVar.b());
                contentValues.put(a.d, Integer.valueOf(fVar.c()));
                contentValues.put("show_count", Integer.valueOf(fVarA.d() + 1));
                contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
                StringBuilder sb = new StringBuilder("updateDspOfferShowRecord--update dspid:");
                sb.append(fVar.a());
                sb.append(",dspOfferId:");
                sb.append(fVar.b());
                sb.append(",cur show count:");
                sb.append(fVarA.d() + 1);
                sb.append(",limit show cap:");
                sb.append(fVar.c());
                return b().update(a.f6101a, contentValues, "dsp_id = ? and dsp_offer_id = ? ", new String[]{fVar.a(), fVar.b()});
            } catch (Exception unused) {
            }
        }
        return -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x003b A[Catch: all -> 0x0051, PHI: r11
      0x003b: PHI (r11v8 android.database.Cursor) = 
      (r11v5 android.database.Cursor)
      (r11v6 android.database.Cursor)
      (r11v7 android.database.Cursor)
      (r11v10 android.database.Cursor)
     binds: [B:15:0x0039, B:20:0x0043, B:27:0x004e, B:12:0x0035] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #0 {, blocks: (B:9:0x0030, B:16:0x003b, B:24:0x0049, B:25:0x004c, B:19:0x0040), top: B:37:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized com.tkay.core.common.a.f a(java.lang.String r11, java.lang.String r12) {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            java.lang.String r2 = "dsp_offer_show_record"
            r3 = 0
            java.lang.String r4 = "dsp_id = ?  AND dsp_offer_id = ? "
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r9 = 0
            r5[r9] = r11     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r11 = 1
            r5[r11] = r12     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            java.util.List r12 = r10.a(r11)     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            r11.close()     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            int r1 = r12.size()     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            if (r1 <= 0) goto L35
            java.lang.Object r12 = r12.get(r9)     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            com.tkay.core.common.a.f r12 = (com.tkay.core.common.a.f) r12     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            if (r11 == 0) goto L33
            r11.close()     // Catch: java.lang.Throwable -> L51
        L33:
            monitor-exit(r10)
            return r12
        L35:
            if (r11 == 0) goto L54
            goto L50
        L38:
            r11 = r0
        L39:
            if (r11 == 0) goto L54
        L3b:
            r11.close()     // Catch: java.lang.Throwable -> L51
            goto L54
        L3f:
            r11 = r0
        L40:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L46
            if (r11 == 0) goto L54
            goto L50
        L46:
            r12 = move-exception
            if (r11 == 0) goto L4c
            r11.close()     // Catch: java.lang.Throwable -> L51
        L4c:
            throw r12     // Catch: java.lang.Throwable -> L51
        L4d:
            r11 = r0
        L4e:
            if (r11 == 0) goto L54
        L50:
            goto L3b
        L51:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L54:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.f.a(java.lang.String, java.lang.String):com.tkay.core.common.a.f");
    }

    private synchronized List<com.tkay.core.common.a.f> a(Cursor cursor) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        if (cursor != null) {
            if (cursor.getCount() > 0) {
                while (cursor.moveToNext()) {
                    try {
                        com.tkay.core.common.a.f fVar = new com.tkay.core.common.a.f();
                        fVar.a(cursor.getString(cursor.getColumnIndex("dsp_id")));
                        fVar.b(cursor.getString(cursor.getColumnIndex("dsp_offer_id")));
                        fVar.a(cursor.getInt(cursor.getColumnIndex(a.d)));
                        fVar.b(cursor.getInt(cursor.getColumnIndex("show_count")));
                        arrayList.add(fVar);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        return arrayList;
    }

    public final synchronized List<com.tkay.core.common.a.d> a(int i) {
        ArrayList arrayList = new ArrayList();
        if (i <= 0) {
            return arrayList;
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.f6101a, null, "show_count > show_limit", null, null, null, "last_update_time DESC", String.valueOf(i));
                List<com.tkay.core.common.a.f> listA = a(cursorQuery);
                new StringBuilder("get limit show cap record list size:").append(listA.size());
                cursorQuery.close();
                arrayList.addAll(listA);
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

    public final void c() {
        try {
            String str = "create_time < " + (System.currentTimeMillis() - 86400000);
            if (b() == null) {
                return;
            }
            b().delete(a.f6101a, str, null);
        } catch (Exception unused) {
        }
    }
}
