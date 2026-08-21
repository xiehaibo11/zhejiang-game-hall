package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.Database.DBOperator;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.common.Database.SQLiteLisenter;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.db.a;
import com.tkay.core.api.TYAdConst;
import java.io.Serializable;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class g implements Serializable {
    private static final long serialVersionUID = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final a f4828a;
    private final String b;
    private final com.sigmob.sdk.base.common.a c;
    private final String d;
    private String e;
    private Long f;
    private Long g;
    private Integer h;
    private Integer i;
    private String j;
    private boolean k;

    public enum a {
        TRACKING_URL,
        QUARTILE_EVENT
    }

    public g(a aVar, String str, String str2, com.sigmob.sdk.base.common.a aVar2, String str3) {
        this.d = str3;
        this.f4828a = aVar;
        this.j = str;
        this.b = str2;
        this.c = aVar2;
        this.e = com.tkay.expressad.foundation.g.a.f.f6871a;
    }

    public g(a aVar, String str, String str2, String str3) {
        this(aVar, str, str2, null, str3);
    }

    public g(String str, String str2, String str3) {
        this(a.TRACKING_URL, str, str2, str3);
    }

    public static SQLiteBuider.CreateTable a() {
        SQLiteBuider.CreateTable.Builder builder = new SQLiteBuider.CreateTable.Builder();
        builder.setTableName(com.sigmob.sdk.base.db.a.e);
        builder.setPrimaryKey("id", "long");
        builder.autoincrement(true);
        HashMap map = new HashMap();
        map.put("url", "text");
        map.put("event", "text");
        map.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, "text");
        map.put("timestamp", "long");
        map.put("source", "text");
        map.put("retryNum", "int");
        builder.setColumns(map);
        return builder.build();
    }

    /* JADX WARN: Removed duplicated region for block: B:41:0x00f6 A[DONT_GENERATE, PHI: r3
      0x00f6: PHI (r3v2 android.database.Cursor) = (r3v1 android.database.Cursor), (r3v3 android.database.Cursor) binds: [B:40:0x00f4, B:36:0x00eb] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.util.List<com.sigmob.sdk.base.common.g> a(int r21, long r22) {
        /*
            Method dump skipped, instruction units count: 257
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.common.g.a(int, long):java.util.List");
    }

    private void a(int i) {
        this.i = Integer.valueOf(i);
    }

    public static void a(long j) {
        try {
            DBOperator.getInstance().delete(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), com.sigmob.sdk.base.db.a.e, "timestamp < " + (System.currentTimeMillis() - j), new SQLiteLisenter() { // from class: com.sigmob.sdk.base.common.g.1
                @Override // com.czhj.sdk.common.Database.SQLiteLisenter
                public void onFailed(Error error) {
                    SigmobLog.e(error.getMessage());
                }

                @Override // com.czhj.sdk.common.Database.SQLiteLisenter
                public void onSuccess(List list) {
                }
            });
        } catch (Throwable th) {
            SigmobLog.e("cleanExpiredAdTracker error", th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0098 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:43:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void b(long r5) {
        /*
            r0 = 0
            r2 = 0
            com.sigmob.sdk.base.db.a r3 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L90
            android.database.sqlite.SQLiteDatabase r3 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = "select * from tracks"
            android.database.Cursor r4 = r3.rawQuery(r4, r2)     // Catch: java.lang.Throwable -> L90
            if (r4 == 0) goto L21
            int r0 = r4.getCount()     // Catch: java.lang.Throwable -> L1d
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L1d
            r4.close()     // Catch: java.lang.Throwable -> L1d
            r4 = r2
            goto L21
        L1d:
            r5 = move-exception
            r2 = r4
            goto L91
        L21:
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 <= 0) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d
            r0.<init>()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "select * from tracks order by id desc limit "
            r0.append(r1)     // Catch: java.lang.Throwable -> L1d
            r0.append(r5)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            android.database.Cursor r5 = r3.rawQuery(r5, r2)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r6 = "id"
            int r6 = r5.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L86
            if (r5 == 0) goto L57
            boolean r0 = r5.moveToLast()     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L57
            long r0 = r5.getLong(r6)     // Catch: java.lang.Throwable -> L86
            java.lang.Long r6 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L86
            r5.close()     // Catch: java.lang.Throwable -> L86
            r5 = r2
            r2 = r6
            goto L57
        L56:
            r5 = r4
        L57:
            if (r2 == 0) goto L8a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            r6.<init>()     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "id <'"
            r6.append(r0)     // Catch: java.lang.Throwable -> L86
            r6.append(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "'"
            r6.append(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L86
            com.czhj.sdk.common.Database.DBOperator r0 = com.czhj.sdk.common.Database.DBOperator.getInstance()     // Catch: java.lang.Throwable -> L86
            com.sigmob.sdk.base.db.a r1 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L86
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "tracks"
            com.sigmob.sdk.base.common.g$2 r3 = new com.sigmob.sdk.base.common.g$2     // Catch: java.lang.Throwable -> L86
            r3.<init>()     // Catch: java.lang.Throwable -> L86
            r0.delete(r1, r2, r6, r3)     // Catch: java.lang.Throwable -> L86
            goto L8a
        L86:
            r6 = move-exception
            r2 = r5
            r5 = r6
            goto L91
        L8a:
            if (r5 == 0) goto L9b
            r5.close()
            goto L9b
        L90:
            r5 = move-exception
        L91:
            java.lang.String r6 = "cleanLimitAdTracker "
            com.czhj.sdk.logger.SigmobLog.e(r6, r5)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L9b
            r2.close()
        L9b:
            return
        L9c:
            r5 = move-exception
            if (r2 == 0) goto La2
            r2.close()
        La2:
            throw r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.common.g.b(long):void");
    }

    private void b(Long l) {
        this.f = l;
    }

    public void a(final a.InterfaceC0329a interfaceC0329a) {
        try {
            SQLiteBuider.Insert.Builder builder = new SQLiteBuider.Insert.Builder();
            builder.setTableName(com.sigmob.sdk.base.db.a.e);
            HashMap map = new HashMap();
            map.put("url", this.j);
            map.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
            map.put("event", this.b);
            map.put("source", this.e);
            map.put("retryNum", this.i);
            map.put("timestamp", Long.valueOf(System.currentTimeMillis()));
            builder.setColumnValues(map);
            com.sigmob.sdk.base.db.a.a().a(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), builder.build(), new a.InterfaceC0329a() { // from class: com.sigmob.sdk.base.common.g.3
                @Override // com.sigmob.sdk.base.db.a.InterfaceC0329a
                public void a() {
                    SigmobLog.d("event: " + g.this.b + " url " + g.this.j + " mRequest_id: " + g.this.d + " insert success! ");
                    a.InterfaceC0329a interfaceC0329a2 = interfaceC0329a;
                    if (interfaceC0329a2 != null) {
                        interfaceC0329a2.a();
                    }
                }

                @Override // com.sigmob.sdk.base.db.a.InterfaceC0329a
                public void a(Throwable th) {
                    a.InterfaceC0329a interfaceC0329a2 = interfaceC0329a;
                    if (interfaceC0329a2 != null) {
                        interfaceC0329a2.a(th);
                    }
                    SigmobLog.e(th.getMessage());
                }
            });
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public void a(Integer num) {
        this.h = num;
    }

    public void a(Long l) {
        this.g = l;
    }

    public void a(String str) {
        this.e = str;
    }

    public String b() {
        return this.e;
    }

    public void b(String str) {
        this.j = str;
    }

    public int c() {
        return this.i.intValue();
    }

    public void d() {
        this.i = Integer.valueOf(this.i.intValue() + 1);
    }

    public void e() {
        try {
            SQLiteBuider.Update.Builder builder = new SQLiteBuider.Update.Builder();
            builder.setTableName(com.sigmob.sdk.base.db.a.e);
            builder.setWhere(" where id=" + this.f.toString());
            HashMap map = new HashMap();
            map.put("retryNum", this.i);
            builder.setColumnValues(map);
            com.sigmob.sdk.base.db.a.a().a(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), builder.build().getSql(), (a.InterfaceC0329a) null);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public Long f() {
        return this.f;
    }

    public void g() {
        if (this.f == null) {
            return;
        }
        try {
            DBOperator.getInstance().delete(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), com.sigmob.sdk.base.db.a.e, "id ='" + this.f + "'", new SQLiteLisenter() { // from class: com.sigmob.sdk.base.common.g.4
                @Override // com.czhj.sdk.common.Database.SQLiteLisenter
                public void onFailed(Error error) {
                    SigmobLog.e(error.getMessage());
                }

                @Override // com.czhj.sdk.common.Database.SQLiteLisenter
                public void onSuccess(List list) {
                    SigmobLog.d("delete id " + g.this.f);
                }
            });
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public long h() {
        Long l = this.g;
        if (l == null) {
            return 0L;
        }
        return l.longValue();
    }

    public a i() {
        return this.f4828a;
    }

    public Integer j() {
        Integer num = this.h;
        if (num == null) {
            return 0;
        }
        return num;
    }

    public String k() {
        return this.j;
    }

    public void l() {
        this.k = true;
    }

    public boolean m() {
        return this.k;
    }

    public String n() {
        return this.b;
    }

    public String o() {
        return this.d;
    }

    public com.sigmob.sdk.base.common.a p() {
        return this.c;
    }
}
