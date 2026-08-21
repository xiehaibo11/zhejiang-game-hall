package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.af;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONArray;

public class c extends a<CommonJumpLoader.JumpLoaderResult> {
    public static final String a = c.class.getSimpleName();
    private static c b;
    private com.mbridge.msdk.c.a c;
    private int d;

    private c(h hVar) {
        super(hVar);
        this.d = 100;
    }

    public static c a(h hVar) {
        if (b == null) {
            synchronized (c.class) {
                if (b == null) {
                    b = new c(hVar);
                }
            }
        }
        return b;
    }

    public final synchronized void a() {
        try {
            getWritableDatabase().delete("campaignclick", "(pts not " + ((Object) null) + " AND (  ( ttc_type = 2 AND (  ( cps = 1 AND (" + System.currentTimeMillis() + " - pts) > cpti )  OR  (cps = 0 AND (" + System.currentTimeMillis() + " - pts) > cpei )  )  ) OR ( ttc_type = 1 AND  ( " + System.currentTimeMillis() + " - pts )  > ttc_ct2 ) ) ) OR ( pts is " + ((Object) null) + " AND  ( " + System.currentTimeMillis() + " - ts) > cti)", null);
        } catch (Exception e) {
            z.d(a, e.getMessage());
        }
    }

    public final synchronized long a(CampaignEx campaignEx, String str, boolean z, int i, int i2) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            String strA = af.a(campaignEx.getJumpResult());
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", campaignEx.getId());
            contentValues.put("unitid", str);
            contentValues.put("result", strA);
            contentValues.put("cpti", Integer.valueOf(campaignEx.getPreClickInterval() * 1000));
            contentValues.put("cti", Integer.valueOf(campaignEx.getClickInterval() * 1000));
            contentValues.put("package_name", campaignEx.getPackageName());
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (z) {
                contentValues.put("pts", Long.valueOf(System.currentTimeMillis()));
                if (i == 0 || i == 1) {
                    contentValues.put("cps", Integer.valueOf(i));
                }
                if (aVarB != null && aVarB.T() > 0) {
                    contentValues.put(com.tkay.expressad.d.a.b.Z, Integer.valueOf(aVarB.T() * 1000));
                }
                contentValues.put("ttc_ct2", Integer.valueOf(campaignEx.getTtc_ct2() * 1000));
                contentValues.put("ttc_type", Integer.valueOf(i2));
            } else {
                contentValues.put("ts", Long.valueOf(System.currentTimeMillis()));
            }
            if (aVarB != null && aVarB.ao() > 0) {
                contentValues.put("cpei", Integer.valueOf(aVarB.ao() * 1000));
            }
            if (aVarB != null && aVarB.ap() > 0) {
                contentValues.put("cpoci", Integer.valueOf(aVarB.ap() * 1000));
            }
            if (c(campaignEx.getId(), str)) {
                String str2 = "id = " + campaignEx.getId() + " AND unitid = " + str;
                if (getWritableDatabase() == null) {
                    return -1L;
                }
                return getWritableDatabase().update("campaignclick", contentValues, str2, null);
            }
            return getWritableDatabase().insert("campaignclick", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:49:0x01ca A[EXC_TOP_SPLITTER, PHI: r0 r2
      0x01ca: PHI (r0v2 java.lang.String) = (r0v0 java.lang.String), (r0v4 java.lang.String) binds: [B:34:0x01d7, B:28:0x01c8] A[DONT_GENERATE, DONT_INLINE]
      0x01ca: PHI (r2v4 android.database.Cursor) = (r2v3 android.database.Cursor), (r2v5 android.database.Cursor) binds: [B:34:0x01d7, B:28:0x01c8] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized String a(String str) {
        String string;
        string = "";
        if (this.c == null) {
            this.c = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        }
        if (this.c != null && this.c.V() > 0) {
            this.d = this.c.V();
        }
        HashSet hashSet = new HashSet();
        StringBuilder sb = new StringBuilder();
        sb.append("SELECT id FROM campaignclick WHERE (ttc_type = 2 AND ( (cps = 1 AND unitid = '");
        sb.append(str);
        sb.append("' AND (");
        sb.append("cpti");
        sb.append(" + ");
        sb.append("pts");
        sb.append(") > ");
        sb.append(System.currentTimeMillis());
        sb.append(") OR  (");
        sb.append("cps");
        sb.append(" = ");
        sb.append(0);
        sb.append(" AND (");
        sb.append("pts");
        sb.append(" + ");
        sb.append("cpei");
        sb.append(") > ");
        sb.append(System.currentTimeMillis());
        sb.append(") OR (");
        sb.append("unitid");
        sb.append(" <> '");
        sb.append(str);
        sb.append("' AND (");
        sb.append("pts");
        sb.append(" + ");
        sb.append("cpoci");
        sb.append(") > ");
        sb.append(System.currentTimeMillis());
        sb.append(" AND ");
        sb.append("cps");
        sb.append(" = ");
        sb.append(1);
        sb.append(" ))  ) OR (");
        sb.append("ttc_type");
        sb.append(" = ");
        sb.append(1);
        sb.append(" AND ( (");
        sb.append("unitid");
        sb.append(" = '");
        sb.append(str);
        sb.append("' AND (");
        sb.append(System.currentTimeMillis());
        sb.append(" - ");
        sb.append("pts");
        sb.append(" ) <= ");
        sb.append("ttc_ct2");
        sb.append(" ) OR (");
        sb.append("unitid");
        sb.append(" <> '");
        sb.append(str);
        sb.append("' AND (");
        sb.append(System.currentTimeMillis());
        sb.append(" - ");
        sb.append("pts");
        sb.append(") <= ");
        sb.append(com.tkay.expressad.d.a.b.Z);
        sb.append(" ) ) ) ORDER BY ");
        sb.append("pts");
        sb.append(" DESC  LIMIT ");
        sb.append(this.d);
        String string2 = sb.toString();
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery(string2, null);
                if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                    cursorRawQuery.moveToFirst();
                    for (int i = 0; !cursorRawQuery.isAfterLast() && i < 200; i++) {
                        hashSet.add(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("id")) + "");
                        cursorRawQuery.moveToNext();
                    }
                }
                Iterator it = hashSet.iterator();
                JSONArray jSONArray = new JSONArray();
                while (it.hasNext()) {
                    jSONArray.put(Integer.valueOf((String) it.next()));
                }
                string = jSONArray.toString();
            } catch (Exception unused) {
                z.d(a, "AvoidRepetition report fail");
                if (cursorRawQuery != null) {
                }
            }
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused2) {
                }
            }
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused3) {
                }
            }
            throw th;
        }
        return string;
    }

    public final synchronized boolean a(String str, String str2) {
        try {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT id FROM campaignclick WHERE id='" + str + "' AND unitid='" + str2 + "' AND cti + ts > " + System.currentTimeMillis(), null);
            if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                cursorRawQuery.close();
                return true;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return false;
        } catch (Exception e) {
            z.d(a, e.getMessage());
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x004b A[EXC_TOP_SPLITTER, PHI: r11
      0x004b: PHI (r11v5 android.database.Cursor) = (r11v4 android.database.Cursor), (r11v7 android.database.Cursor) binds: [B:27:0x0056, B:19:0x0049] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:50:0x005f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized CommonJumpLoader.JumpLoaderResult b(String str, String str2) {
        Cursor cursorQuery;
        Cursor cursor = null;
        try {
            cursorQuery = getReadableDatabase().query("campaignclick", null, "id=? AND unitid=?", new String[]{str, str2}, null, null, null, null);
            if (cursorQuery != null) {
                try {
                    try {
                        if (cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                            String string = cursorQuery.getString(cursorQuery.getColumnIndex("result"));
                            if (!TextUtils.isEmpty(string)) {
                                CommonJumpLoader.JumpLoaderResult jumpLoaderResult = (CommonJumpLoader.JumpLoaderResult) af.a(string);
                                if (cursorQuery != null) {
                                    try {
                                        cursorQuery.close();
                                    } catch (Exception unused) {
                                    }
                                }
                                return jumpLoaderResult;
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        e.printStackTrace();
                        if (cursorQuery != null) {
                        }
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorQuery;
                    if (cursor != null) {
                        try {
                            cursor.close();
                        } catch (Exception unused2) {
                        }
                    }
                    throw th;
                }
            }
        } catch (Exception e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            if (cursor != null) {
            }
            throw th;
        }
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Exception unused3) {
            }
        }
        return null;
    }

    private synchronized boolean c(String str, String str2) {
        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT id FROM campaignclick WHERE id='" + str + "' AND unitid= '" + str2 + "'", null);
        if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused) {
            }
            return true;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused2) {
            }
        }
        return false;
    }
}
