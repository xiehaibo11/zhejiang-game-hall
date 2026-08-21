package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.SharedPreferences;
import com.mbridge.msdk.foundation.tools.FastKV;

public final class ag {
    static FastKV a;

    public static void a(Context context, String str, Object obj) {
        String simpleName = obj.getClass().getSimpleName();
        if (context == null) {
            return;
        }
        if (com.mbridge.msdk.foundation.controller.b.a().d() && a == null) {
            try {
                a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), "share_date").build();
            } catch (Exception unused) {
                a = null;
            }
        }
        if (a != null) {
            try {
                if ("String".equals(simpleName)) {
                    a.putString(str, (String) obj);
                } else if ("Integer".equals(simpleName)) {
                    a.putInt(str, ((Integer) obj).intValue());
                } else if ("Boolean".equals(simpleName)) {
                    a.putBoolean(str, ((Boolean) obj).booleanValue());
                } else if ("Float".equals(simpleName)) {
                    a.putFloat(str, ((Float) obj).floatValue());
                } else if ("Long".equals(simpleName)) {
                    a.putLong(str, ((Long) obj).longValue());
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
        if (com.mbridge.msdk.foundation.controller.b.a().d() && a == null) {
            try {
                a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), "share_date").build();
            } catch (Exception unused) {
                a = null;
            }
        }
        if (a != null) {
            try {
                if ("String".equals(simpleName)) {
                    return a.getString(str, (String) obj);
                }
                if ("Integer".equals(simpleName)) {
                    return Integer.valueOf(a.getInt(str, ((Integer) obj).intValue()));
                }
                if ("Boolean".equals(simpleName)) {
                    return Boolean.valueOf(a.getBoolean(str, ((Boolean) obj).booleanValue()));
                }
                if ("Float".equals(simpleName)) {
                    return Float.valueOf(a.getFloat(str, ((Float) obj).floatValue()));
                }
                if ("Long".equals(simpleName)) {
                    return Long.valueOf(a.getLong(str, ((Long) obj).longValue()));
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
        if (com.mbridge.msdk.foundation.controller.b.a().d() && a == null) {
            try {
                a = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), "share_date").build();
            } catch (Exception unused) {
                a = null;
            }
        }
        int i = 0;
        if (a != null) {
            int length = strArr.length;
            while (i < length) {
                try {
                    a.remove(strArr[i]);
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
