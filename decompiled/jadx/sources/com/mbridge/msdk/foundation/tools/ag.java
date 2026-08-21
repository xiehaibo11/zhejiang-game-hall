package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.SharedPreferences;
import com.mbridge.msdk.foundation.tools.FastKV;

/* JADX INFO: compiled from: SharedPreferencesUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ag {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static FastKV f3516a;

    public static void a(Context context, String str, Object obj) {
        String simpleName = obj.getClass().getSimpleName();
        if (context == null) {
            return;
        }
        if (com.mbridge.msdk.foundation.controller.b.a().d() && f3516a == null) {
            try {
                f3516a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "share_date").build();
            } catch (Exception unused) {
                f3516a = null;
            }
        }
        if (f3516a != null) {
            try {
                if ("String".equals(simpleName)) {
                    f3516a.putString(str, (String) obj);
                } else if ("Integer".equals(simpleName)) {
                    f3516a.putInt(str, ((Integer) obj).intValue());
                } else if ("Boolean".equals(simpleName)) {
                    f3516a.putBoolean(str, ((Boolean) obj).booleanValue());
                } else if ("Float".equals(simpleName)) {
                    f3516a.putFloat(str, ((Float) obj).floatValue());
                } else if ("Long".equals(simpleName)) {
                    f3516a.putLong(str, ((Long) obj).longValue());
                }
                return;
            } catch (Exception unused2) {
                return;
            }
        }
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences("share_date", 0).edit();
        if ("String".equals(simpleName)) {
            editorEdit.putString(str, (String) obj);
        } else if ("Integer".equals(simpleName)) {
            editorEdit.putInt(str, ((Integer) obj).intValue());
        } else if ("Boolean".equals(simpleName)) {
            editorEdit.putBoolean(str, ((Boolean) obj).booleanValue());
        } else if ("Float".equals(simpleName)) {
            editorEdit.putFloat(str, ((Float) obj).floatValue());
        } else if ("Long".equals(simpleName)) {
            editorEdit.putLong(str, ((Long) obj).longValue());
        }
        editorEdit.apply();
    }

    public static Object b(Context context, String str, Object obj) {
        if (context == null) {
            return obj;
        }
        String simpleName = obj != null ? obj.getClass().getSimpleName() : "";
        if (com.mbridge.msdk.foundation.controller.b.a().d() && f3516a == null) {
            try {
                f3516a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "share_date").build();
            } catch (Exception unused) {
                f3516a = null;
            }
        }
        if (f3516a != null) {
            try {
                if ("String".equals(simpleName)) {
                    return f3516a.getString(str, (String) obj);
                }
                if ("Integer".equals(simpleName)) {
                    return Integer.valueOf(f3516a.getInt(str, ((Integer) obj).intValue()));
                }
                if ("Boolean".equals(simpleName)) {
                    return Boolean.valueOf(f3516a.getBoolean(str, ((Boolean) obj).booleanValue()));
                }
                if ("Float".equals(simpleName)) {
                    return Float.valueOf(f3516a.getFloat(str, ((Float) obj).floatValue()));
                }
                if ("Long".equals(simpleName)) {
                    return Long.valueOf(f3516a.getLong(str, ((Long) obj).longValue()));
                }
            } catch (Exception unused2) {
                return obj;
            }
        } else {
            SharedPreferences sharedPreferences = context.getSharedPreferences("share_date", 0);
            if ("String".equals(simpleName)) {
                return sharedPreferences.getString(str, (String) obj);
            }
            if ("Integer".equals(simpleName)) {
                return Integer.valueOf(sharedPreferences.getInt(str, ((Integer) obj).intValue()));
            }
            if ("Boolean".equals(simpleName)) {
                return Boolean.valueOf(sharedPreferences.getBoolean(str, ((Boolean) obj).booleanValue()));
            }
            if ("Float".equals(simpleName)) {
                return Float.valueOf(sharedPreferences.getFloat(str, ((Float) obj).floatValue()));
            }
            if ("Long".equals(simpleName)) {
                return Long.valueOf(sharedPreferences.getLong(str, ((Long) obj).longValue()));
            }
        }
        return obj;
    }

    public static void a(Context context, String... strArr) {
        if (context == null || strArr == null || strArr.length == 0) {
            return;
        }
        if (com.mbridge.msdk.foundation.controller.b.a().d() && f3516a == null) {
            try {
                f3516a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "share_date").build();
            } catch (Exception unused) {
                f3516a = null;
            }
        }
        int i = 0;
        if (f3516a != null) {
            int length = strArr.length;
            while (i < length) {
                try {
                    f3516a.remove(strArr[i]);
                } catch (Exception unused2) {
                }
                i++;
            }
            return;
        }
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences("share_date", 0).edit();
        int length2 = strArr.length;
        while (i < length2) {
            editorEdit.remove(strArr[i]);
            i++;
        }
        editorEdit.apply();
    }
}
