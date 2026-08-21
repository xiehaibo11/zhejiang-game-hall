package com.sigmob.sdk.base.common;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.czhj.sdk.common.Database.DBOperator;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.common.Database.SQLiteLisenter;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.db.a;
import com.tkay.core.api.TYAdConst;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class g implements Serializable {
    private static final long serialVersionUID = 1;
    private final a a;
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
        a,
        b
    }

    public g(a aVar, String str, String str2, com.sigmob.sdk.base.common.a aVar2, String str3) {
        this.d = str3;
        this.a = aVar;
        this.j = str;
        this.b = str2;
        this.c = aVar2;
        this.e = com.tkay.expressad.foundation.g.a.f.a;
    }

    public g(a aVar, String str, String str2, String str3) {
        this(aVar, str, str2, null, str3);
    }

    public g(String str, String str2, String str3) {
        this(a.a, str, str2, str3);
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
    */
    public static List<g> a(int i, long j) {
        int i2;
        String string;
        Long lValueOf;
        String string2;
        String string3;
        Long lValueOf2;
        String string4;
        Integer numValueOf;
        int i3 = i;
        ArrayList arrayList = new ArrayList();
        Cursor cursorRawQuery = null;
        try {
            cursorRawQuery = com.sigmob.sdk.base.db.a.a().getReadableDatabase().rawQuery("select * from tracks where timestamp > " + (System.currentTimeMillis() - j) + " order by id desc limit " + i3, null);
            if (cursorRawQuery != null && cursorRawQuery.moveToFirst()) {
                int columnIndex = cursorRawQuery.getColumnIndex("url");
                int columnIndex2 = cursorRawQuery.getColumnIndex("id");
                int columnIndex3 = cursorRawQuery.getColumnIndex("event");
                int columnIndex4 = cursorRawQuery.getColumnIndex(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
                int columnIndex5 = cursorRawQuery.getColumnIndex("timestamp");
                int columnIndex6 = cursorRawQuery.getColumnIndex("source");
                int columnIndex7 = cursorRawQuery.getColumnIndex("retryNum");
                int i4 = 0;
                while (i4 < i3) {
                    try {
                        string = cursorRawQuery.getString(columnIndex);
                        lValueOf = Long.valueOf(cursorRawQuery.getLong(columnIndex2));
                        string2 = cursorRawQuery.getString(columnIndex3);
                        string3 = cursorRawQuery.getString(columnIndex4);
                        lValueOf2 = Long.valueOf(cursorRawQuery.getLong(columnIndex5));
                        string4 = cursorRawQuery.getString(columnIndex6);
                        numValueOf = Integer.valueOf(cursorRawQuery.getInt(columnIndex7));
                    } catch (Throwable th) {
                        th = th;
                        i2 = columnIndex;
                    }
                    if (TextUtils.isEmpty(string) || lValueOf.longValue() < 0 || TextUtils.isEmpty(string2) || TextUtils.isEmpty(string3)) {
                        i2 = columnIndex;
                        i3 = i;
                        columnIndex = i2;
                    } else {
                        i2 = columnIndex;
                        try {
                            g gVar = new g(string, string2, string3);
                            gVar.b(lValueOf);
                            gVar.a(numValueOf.intValue());
                            gVar.a(lValueOf2);
                            if (!TextUtils.isEmpty(string4)) {
                                gVar.a(string4);
                            }
                            arrayList.add(gVar);
                        } catch (Throwable th2) {
                            th = th2;
                            SigmobLog.e("getAdTrackList error", th);
                        }
                        if (!cursorRawQuery.moveToNext()) {
                            break;
                        }
                        i4++;
                        i3 = i;
                        columnIndex = i2;
                    }
                }
            }
        } catch (Throwable th3) {
            try {
                SigmobLog.e("getlogs fail", th3);
            } finally {
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            }
        }
        if (cursorRawQuery != null) {
        }
        return arrayList;
    }

    private void a(int i) {
        this.i = Integer.valueOf(i);
    }

    public static void a(long j) {
        try {
            DBOperator.getInstance().delete(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), com.sigmob.sdk.base.db.a.e, "timestamp < " + (System.currentTimeMillis() - j), new SQLiteLisenter() {
                @Override
                public void onFailed(Error error) {
                    SigmobLog.e(error.getMessage());
                }

                @Override
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
    */
    public static void b(long j) {
        Cursor cursorRawQuery;
        long count = 0;
        Cursor cursor = null;
        l = null;
        l = null;
        Long l = null;
        try {
            SQLiteDatabase readableDatabase = com.sigmob.sdk.base.db.a.a().getReadableDatabase();
            Cursor cursorRawQuery2 = readableDatabase.rawQuery("select * from tracks", null);
            if (cursorRawQuery2 != null) {
                try {
                    count = cursorRawQuery2.getCount();
                    cursorRawQuery2.close();
                    cursorRawQuery2 = null;
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorRawQuery2;
                    try {
                        SigmobLog.e("cleanLimitAdTracker ", th);
                    } finally {
                        if (cursor != null) {
                            cursor.close();
                        }
                    }
                }
            }
            if (count > j) {
                cursorRawQuery = readableDatabase.rawQuery("select * from tracks order by id desc limit " + j, null);
                try {
                    int columnIndex = cursorRawQuery.getColumnIndex("id");
                    if (cursorRawQuery != null && cursorRawQuery.moveToLast()) {
                        Long lValueOf = Long.valueOf(cursorRawQuery.getLong(columnIndex));
                        cursorRawQuery.close();
                        cursorRawQuery = null;
                        l = lValueOf;
                    }
                } catch (Throwable th2) {
                    cursor = cursorRawQuery;
                    th = th2;
                    SigmobLog.e("cleanLimitAdTracker ", th);
                    if (cursor == null) {
                        return;
                    } else {
                        return;
                    }
                }
            } else {
                cursorRawQuery = cursorRawQuery2;
            }
            if (l != null) {
                DBOperator.getInstance().delete(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), com.sigmob.sdk.base.db.a.e, "id <'" + l + "'", new SQLiteLisenter() {
                    @Override
                    public void onFailed(Error error) {
                        SigmobLog.e(error.getMessage());
                    }

                    @Override
                    public void onSuccess(List list) {
                    }
                });
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    private void b(Long l) {
        this.f = l;
    }

    public void a(final a.a aVar) {
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
            com.sigmob.sdk.base.db.a.a().a(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), builder.build(), new a.a() {
                @Override
                public void a() {
                    SigmobLog.d("event: " + g.this.b + " url " + g.this.j + " mRequest_id: " + g.this.d + " insert success! ");
                    a.a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a();
                    }
                }

                @Override
                public void a(Throwable th) {
                    a.a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(th);
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
            com.sigmob.sdk.base.db.a.a().a(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), builder.build().getSql(), (a.a) null);
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
            DBOperator.getInstance().delete(com.sigmob.sdk.base.db.a.a().getWritableDatabase(), com.sigmob.sdk.base.db.a.e, "id ='" + this.f + "'", new SQLiteLisenter() {
                @Override
                public void onFailed(Error error) {
                    SigmobLog.e(error.getMessage());
                }

                @Override
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
        return this.a;
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
