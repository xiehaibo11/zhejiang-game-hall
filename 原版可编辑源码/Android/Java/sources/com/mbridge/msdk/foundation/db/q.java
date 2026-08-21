package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

public class q extends a {
    private static q a;

    private q(h hVar) {
        super(hVar);
    }

    public static q a(h hVar) {
        if (a == null) {
            synchronized (q.class) {
                if (a == null) {
                    a = new q(hVar);
                }
            }
        }
        return a;
    }

    public final synchronized int a() {
        int i;
        Cursor cursorQuery = null;
        i = 0;
        try {
            try {
                cursorQuery = getReadableDatabase().query("settingCampaign", new String[]{" count(*) "}, null, null, null, null, null);
                if (cursorQuery != null && cursorQuery.moveToFirst()) {
                    i = cursorQuery.getInt(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null) {
                }
            }
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
        return i;
    }

    public final synchronized int b() {
        try {
            if (getWritableDatabase() == null) {
                return -1;
            }
            return getWritableDatabase().delete("settingCampaign", null, null);
        } catch (Exception unused) {
            return -1;
        }
    }

    public final synchronized int a(String str) {
        try {
            String[] strArr = {str};
            if (getWritableDatabase() == null) {
                return -1;
            }
            return getWritableDatabase().delete("settingCampaign", "id=?", strArr);
        } catch (Exception unused) {
            return -1;
        }
    }

    public final synchronized int b(String str) {
        try {
            String[] strArr = {str};
            if (getWritableDatabase() == null) {
                return -1;
            }
            return getWritableDatabase().delete("settingCampaign", "iex=?", strArr);
        } catch (Exception unused) {
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0081 A[Catch: all -> 0x0085, TRY_ENTER, TryCatch #3 {, blocks: (B:27:0x0078, B:19:0x0066, B:33:0x0081, B:34:0x0084), top: B:42:0x0002 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<com.mbridge.msdk.foundation.entity.n> c() {
        ArrayList arrayList;
        Cursor cursorRawQuery;
        Throwable th;
        ArrayList arrayList2;
        Exception e;
        arrayList = null;
        try {
            cursorRawQuery = getReadableDatabase().rawQuery("select * from settingCampaign ORDER BY iex LIMIT 3", null);
            if (cursorRawQuery != null) {
                try {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            arrayList2 = new ArrayList();
                            while (cursorRawQuery.moveToNext()) {
                                try {
                                    arrayList2.add(new com.mbridge.msdk.foundation.entity.n(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("url")), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("method")), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("data")), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("iex")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("id"))));
                                } catch (Exception e2) {
                                    e = e2;
                                    e.printStackTrace();
                                    if (cursorRawQuery != null) {
                                        cursorRawQuery.close();
                                    }
                                    arrayList = arrayList2;
                                }
                            }
                            arrayList = arrayList2;
                        }
                    } catch (Exception e3) {
                        arrayList2 = null;
                        e = e3;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    throw th;
                }
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        } catch (Exception e4) {
            arrayList2 = null;
            e = e4;
            cursorRawQuery = null;
        } catch (Throwable th3) {
            cursorRawQuery = null;
            th = th3;
            if (cursorRawQuery != null) {
            }
            throw th;
        }
        return arrayList;
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.n nVar) {
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("url", nVar.b());
            contentValues.put("method", nVar.c());
            contentValues.put("data", nVar.d());
            contentValues.put("iex", nVar.a());
            if (getWritableDatabase() == null) {
                return -1L;
            }
            return getWritableDatabase().insert("settingCampaign", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }
}
