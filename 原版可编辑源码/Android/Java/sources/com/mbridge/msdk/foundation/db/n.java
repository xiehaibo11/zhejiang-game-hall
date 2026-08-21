package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.ss.android.download.api.constant.BaseConstants;
import org.json.JSONObject;

public final class n extends a {
    private static String a = "ReplaceTempDao";
    private static n b;

    private n(h hVar) {
        super(hVar);
    }

    public static n a(h hVar) {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new n(hVar);
                }
            }
        }
        return b;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x005e A[EXC_TOP_SPLITTER, PHI: r1
      0x005e: PHI (r1v4 org.json.JSONObject) = (r1v0 org.json.JSONObject), (r1v6 org.json.JSONObject) binds: [B:20:0x005c, B:27:0x0069] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final JSONObject a(String str) {
        JSONObject jSONObject = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM c_replace_temp WHERE d_key = '" + str + "'", null);
        if (cursorRawQuery != null) {
            try {
                if (cursorRawQuery.getCount() > 0) {
                    jSONObject = new JSONObject();
                    while (cursorRawQuery.moveToNext()) {
                        jSONObject = new JSONObject(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("d_value")));
                    }
                } else if (cursorRawQuery != null) {
                    try {
                        cursorRawQuery.close();
                    } catch (Exception unused) {
                    }
                }
            } catch (Throwable th) {
                try {
                    z.d(a, th.getMessage());
                    if (cursorRawQuery != null) {
                    }
                } catch (Throwable th2) {
                    if (cursorRawQuery != null) {
                        try {
                            cursorRawQuery.close();
                        } catch (Exception unused2) {
                        }
                    }
                    throw th2;
                }
            }
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused3) {
                }
            }
        }
        return jSONObject;
    }

    public final void a(String str, JSONObject jSONObject) {
        try {
            if (getWritableDatabase() == null) {
                return;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("d_key", str);
            contentValues.put("d_value", jSONObject.toString());
            contentValues.put("time", Long.valueOf(System.currentTimeMillis()));
            if (!b(str)) {
                getWritableDatabase().insert("c_replace_temp", null, contentValues);
            } else {
                getWritableDatabase().update("c_replace_temp", contentValues, "d_key = '" + str + "'", null);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private boolean b(String str) {
        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT d_value FROM c_replace_temp WHERE d_key='" + str + "'", null);
        if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
            try {
                cursorRawQuery.close();
                return true;
            } catch (Exception unused) {
                return true;
            }
        }
        if (cursorRawQuery == null) {
            return false;
        }
        try {
            cursorRawQuery.close();
            return false;
        } catch (Exception unused2) {
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x006e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final JSONObject a() {
        JSONObject jSONObject;
        long jCurrentTimeMillis = System.currentTimeMillis() - ((long) BaseConstants.Time.WEEK);
        try {
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete("c_replace_temp", "time<?", new String[]{String.valueOf(jCurrentTimeMillis)});
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        JSONObject jSONObject2 = null;
        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM c_replace_temp", null);
        if (cursorRawQuery != null) {
            try {
                if (cursorRawQuery.getCount() > 0) {
                    jSONObject = new JSONObject();
                    while (cursorRawQuery.moveToNext()) {
                        try {
                            jSONObject.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("d_key")), new JSONObject(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("d_value"))));
                        } catch (Throwable th) {
                            th = th;
                            try {
                                z.d(a, th.getMessage());
                                if (cursorRawQuery == null) {
                                    return jSONObject;
                                }
                                try {
                                    cursorRawQuery.close();
                                    return jSONObject;
                                } catch (Exception unused) {
                                    return jSONObject;
                                }
                            } catch (Throwable th2) {
                                if (cursorRawQuery != null) {
                                    try {
                                        cursorRawQuery.close();
                                    } catch (Exception unused2) {
                                    }
                                }
                                throw th2;
                            }
                        }
                    }
                    jSONObject2 = jSONObject;
                } else if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            } catch (Throwable th3) {
                jSONObject = jSONObject2;
                th = th3;
            }
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return jSONObject2;
    }
}
