package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class e extends com.tkay.core.common.c.a<com.tkay.core.common.a.e> {
    private static volatile e c;
    private final String b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6100a = "dsp_offer_install_record";
        public static final String b = "dsp_id";
        public static final String c = "dsp_offer_id";
        public static final String d = "package_name";
        public static final String e = "last_update_time";
        public static final String f = "CREATE TABLE IF NOT EXISTS dsp_offer_install_record(dsp_id TEXT ,dsp_offer_id TEXT ,package_name TEXT ,last_update_time INTEGER)";
    }

    private e(b bVar) {
        super(bVar);
        this.b = e.class.getName();
    }

    public static e a(b bVar) {
        if (c == null) {
            synchronized (e.class) {
                if (c == null) {
                    c = new e(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized long a(com.tkay.core.common.a.e eVar) {
        if (b() == null) {
            return -1L;
        }
        if (!a(eVar.a(), eVar.b())) {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("dsp_id", eVar.a());
                contentValues.put("dsp_offer_id", eVar.b());
                contentValues.put("package_name", eVar.c());
                contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
                StringBuilder sb = new StringBuilder("insertDspOfferInstallRecord--insert,dspid:");
                sb.append(eVar.a());
                sb.append(",dspoferrId:");
                sb.append(eVar.b());
                sb.append(",packagename:");
                sb.append(eVar.c());
                return b().insert(a.f6100a, null, contentValues);
            } catch (Exception unused) {
            }
        } else {
            StringBuilder sb2 = new StringBuilder("insertDspOfferInstallRecord--had inserted...,dspid:");
            sb2.append(eVar.a());
            sb2.append(",dspoferrId:");
            sb2.append(eVar.b());
            sb2.append(",packagename:");
            sb2.append(eVar.c());
        }
        return -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0032 A[Catch: all -> 0x0046, PHI: r1
      0x0032: PHI (r1v5 android.database.Cursor) = 
      (r1v2 android.database.Cursor)
      (r1v3 android.database.Cursor)
      (r1v4 android.database.Cursor)
      (r1v6 android.database.Cursor)
     binds: [B:15:0x0030, B:19:0x0039, B:25:0x0043, B:13:0x002d] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #2 {, blocks: (B:10:0x0028, B:16:0x0032, B:23:0x003f, B:24:0x0042, B:18:0x0036), top: B:32:0x0003, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized boolean a(java.lang.String r11, java.lang.String r12) {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.a()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            java.lang.String r3 = "dsp_offer_install_record"
            r4 = 0
            java.lang.String r5 = "dsp_id = ?  AND dsp_offer_id = ? "
            r6 = 2
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r6[r0] = r11     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r11 = 1
            r6[r11] = r12     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r1 == 0) goto L2d
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r12 <= 0) goto L2d
            r1.close()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r1 == 0) goto L2b
            r1.close()     // Catch: java.lang.Throwable -> L46
        L2b:
            monitor-exit(r10)
            return r11
        L2d:
            if (r1 == 0) goto L49
            goto L45
        L30:
            if (r1 == 0) goto L49
        L32:
            r1.close()     // Catch: java.lang.Throwable -> L46
            goto L49
        L36:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L49
            goto L45
        L3c:
            r11 = move-exception
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.lang.Throwable -> L46
        L42:
            throw r11     // Catch: java.lang.Throwable -> L46
        L43:
            if (r1 == 0) goto L49
        L45:
            goto L32
        L46:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L49:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.e.a(java.lang.String, java.lang.String):boolean");
    }

    public final synchronized List<com.tkay.core.common.a.d> a(int i) {
        ArrayList arrayList = new ArrayList();
        if (i <= 0) {
            return arrayList;
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.f6100a, null, null, null, null, null, "last_update_time DESC", String.valueOf(i));
                List<com.tkay.core.common.a.e> listA = a(cursorQuery);
                cursorQuery.close();
                new StringBuilder("get limit install record list size:").append(listA.size());
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

    private synchronized List<com.tkay.core.common.a.e> a(Cursor cursor) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        if (cursor != null) {
            if (cursor.getCount() > 0) {
                while (cursor.moveToNext()) {
                    try {
                        com.tkay.core.common.a.e eVar = new com.tkay.core.common.a.e();
                        eVar.a(cursor.getString(cursor.getColumnIndex("dsp_id")));
                        eVar.b(cursor.getString(cursor.getColumnIndex("dsp_offer_id")));
                        eVar.c(cursor.getString(cursor.getColumnIndex("package_name")));
                        arrayList.add(eVar);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        return arrayList;
    }
}
