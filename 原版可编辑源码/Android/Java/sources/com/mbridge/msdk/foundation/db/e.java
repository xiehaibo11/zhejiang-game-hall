package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;

public final class e extends a {
    private static e a;
    private int b;

    private e(h hVar) {
        super(hVar);
        this.b = 100;
    }

    public static synchronized e a(h hVar) {
        if (a == null) {
            synchronized (c.class) {
                if (a == null) {
                    a = new e(hVar);
                }
            }
        }
        return a;
    }

    public final synchronized void a(CampaignEx campaignEx) {
        if (campaignEx != null) {
            if (!m(campaignEx.getAkdlui())) {
                if (getWritableDatabase() == null) {
                    return;
                }
                ContentValues contentValues = new ContentValues();
                contentValues.put("unique_key", campaignEx.getAkdlui());
                contentValues.put("id", campaignEx.getId());
                contentValues.put("atat_type", Integer.valueOf(campaignEx.getAtatType()));
                contentValues.put("ntbarpasbl", Integer.valueOf(campaignEx.getNtbarpasbl()));
                contentValues.put("ntbarpt", Integer.valueOf(campaignEx.getNtbarpt()));
                contentValues.put("package_name", campaignEx.getPackageName());
                contentValues.put("rid", campaignEx.getRequestId());
                contentValues.put("rid_n", campaignEx.getRequestIdNotice());
                contentValues.put("unitid", campaignEx.getCampaignUnitId());
                contentValues.put("url", campaignEx.getClickURL());
                contentValues.put("status", (Integer) (-1));
                contentValues.put(NotificationCompat.CATEGORY_PROGRESS, (Integer) (-1));
                contentValues.put("save_path", "");
                contentValues.put("app_name", campaignEx.getAppName());
                getWritableDatabase().insert("campaignDAIDao", null, contentValues);
            }
        }
    }

    public final synchronized void a(String str, String str2) {
        if (m(str)) {
            if (getWritableDatabase() == null) {
                return;
            }
            String str3 = "unique_key = '" + str + "'";
            ContentValues contentValues = new ContentValues();
            if (!TextUtils.isEmpty(str2)) {
                contentValues.put("url", str2);
            }
            getWritableDatabase().update("campaignDAIDao", contentValues, str3, null);
        }
    }

    public final synchronized void a(String str) {
        a(str, 10);
    }

    public final synchronized void a(String str, int i) {
        if (m(str)) {
            if (getWritableDatabase() == null) {
                return;
            }
            String str2 = "unique_key = '" + str + "'";
            ContentValues contentValues = new ContentValues();
            if (i != 0) {
                contentValues.put("status", Integer.valueOf(i));
            }
            getWritableDatabase().update("campaignDAIDao", contentValues, str2, null);
        }
    }

    public final synchronized void b(String str, int i) {
        if (i <= 0) {
            if (m(str)) {
            }
        }
        if (getWritableDatabase() == null) {
            return;
        }
        String str2 = "unique_key = '" + str + "'";
        ContentValues contentValues = new ContentValues();
        if (i > 0) {
            contentValues.put(NotificationCompat.CATEGORY_PROGRESS, Integer.valueOf(i));
            getWritableDatabase().update("campaignDAIDao", contentValues, str2, null);
        }
    }

    public final synchronized void b(String str, String str2) {
        if (m(str)) {
            if (getWritableDatabase() == null) {
                return;
            }
            String str3 = "unique_key = '" + str + "'";
            ContentValues contentValues = new ContentValues();
            if (!TextUtils.isEmpty(str2)) {
                contentValues.put("save_path", str2);
            }
            getWritableDatabase().update("campaignDAIDao", contentValues, str3, null);
        }
    }

    public final synchronized String b(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"url"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized com.mbridge.msdk.foundation.entity.f a() {
        Throwable th;
        Cursor cursorQuery;
        com.mbridge.msdk.foundation.entity.f fVar;
        Exception e;
        com.mbridge.msdk.foundation.entity.f fVar2 = null;
        if (getReadableDatabase() == null) {
            return null;
        }
        try {
            cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"save_path", "url", "unique_key", "rid", "package_name", "rid_n", "id", "unitid"}, "status = ?", new String[]{"10"}, null, null, "unique_key");
            if (cursorQuery != null) {
                try {
                    try {
                        if (cursorQuery.moveToFirst() && cursorQuery.getCount() > 0) {
                            fVar = new com.mbridge.msdk.foundation.entity.f();
                            try {
                                fVar.a(cursorQuery.getString(0));
                                fVar.b(cursorQuery.getString(1));
                                fVar.c(cursorQuery.getString(2));
                                fVar.d(cursorQuery.getString(3));
                                fVar.e(cursorQuery.getString(4));
                                fVar.f(cursorQuery.getString(5));
                                fVar.h(cursorQuery.getString(6));
                                fVar.g(cursorQuery.getString(7));
                                fVar2 = fVar;
                            } catch (Exception e2) {
                                e = e2;
                                e.printStackTrace();
                                if (cursorQuery != null && !cursorQuery.isClosed()) {
                                    cursorQuery.close();
                                }
                                fVar2 = fVar;
                            }
                        }
                    } catch (Exception e3) {
                        fVar = null;
                        e = e3;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                        cursorQuery.close();
                    }
                    throw th;
                }
            }
            if (cursorQuery != null && !cursorQuery.isClosed()) {
                cursorQuery.close();
            }
        } catch (Exception e4) {
            fVar = null;
            e = e4;
            cursorQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
        return fVar2;
    }

    public final synchronized int c(String str) {
        int i = 0;
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return 0;
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"status"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        i = cursorQuery.getInt(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return i;
    }

    public final synchronized String d(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"rid"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized String e(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"rid_n"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized String f(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"unitid"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized String g(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"id"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized String h(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"package_name"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized String i(String str) {
        String string = "";
        if (m(str)) {
            if (getReadableDatabase() == null) {
                return "";
            }
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"save_path"}, "unique_key = ?", new String[]{str}, null, null, "unique_key");
                    if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                        string = cursorQuery.getString(0);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    if (cursorQuery != null && !cursorQuery.isClosed()) {
                    }
                }
            } finally {
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        }
        return string;
    }

    public final synchronized int j(String str) {
        int i = -2;
        if (getReadableDatabase() == null) {
            return -2;
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"atat_type"}, "package_name = ?", new String[]{str}, null, null, "unique_key");
                if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                    i = cursorQuery.getInt(0);
                }
            } finally {
                if (0 != 0 && !cursorQuery.isClosed()) {
                    cursorQuery.close();
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            if (cursorQuery != null && !cursorQuery.isClosed()) {
            }
        }
        return i;
    }

    public final synchronized String k(String str) {
        String string = "";
        if (getReadableDatabase() == null) {
            return "";
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"app_name"}, "package_name = ?", new String[]{str}, null, null, "unique_key");
                if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                    string = cursorQuery.getString(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                }
            }
            return string;
        } finally {
            if (cursorQuery != null && !cursorQuery.isClosed()) {
                cursorQuery.close();
            }
        }
    }

    public final synchronized String l(String str) {
        String string = "";
        if (getReadableDatabase() == null) {
            return "";
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = getReadableDatabase().query("campaignDAIDao", new String[]{"unique_key"}, "package_name = ?", new String[]{str}, null, null, "unique_key");
                if (cursorQuery != null && cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                    string = cursorQuery.getString(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null && !cursorQuery.isClosed()) {
                }
            }
            return string;
        } finally {
            if (cursorQuery != null && !cursorQuery.isClosed()) {
                cursorQuery.close();
            }
        }
    }

    private synchronized boolean m(String str) {
        boolean z;
        z = false;
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("SELECT id FROM campaignDAIDao WHERE unique_key='" + str + "'", null);
                if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                    cursorRawQuery.close();
                    z = true;
                } else if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (0 != 0 && !cursorRawQuery.isClosed()) {
                }
            }
        } finally {
            if (0 != 0 && !cursorRawQuery.isClosed()) {
                cursorRawQuery.close();
            }
        }
        return z;
    }
}
