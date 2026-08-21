package com.xiaomi.push;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;

class bf implements au {
    private static String a = "content://com.vivo.vms.IdProvider/IdentifierId/";
    private static String b = a + "OAID";
    private static String c = a + "VAID_";
    private static String d = a + "AAID_";
    private static String e = a + com.alipay.sdk.m.p0.b.h;
    private static String f = com.alipay.sdk.m.p0.c.c;
    private Context a;

    public bf(Context context) {
        this.a = context;
    }

    private String a(String str) throws Throwable {
        Throwable th;
        Cursor cursorQuery;
        String string = null;
        try {
            cursorQuery = this.a.getContentResolver().query(Uri.parse(str), null, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.moveToNext()) {
                        string = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                    }
                    return string;
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    throw th;
                }
            }
        } catch (Exception unused2) {
            cursorQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return string;
    }

    public static boolean a(Context context) {
        try {
            ProviderInfo providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider(Uri.parse(a).getAuthority(), 128);
            if (providerInfoResolveContentProvider != null) {
                if ((providerInfoResolveContentProvider.applicationInfo.flags & 1) != 0) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    @Override
    public String a() {
        return a(b);
    }

    @Override
    public boolean a() {
        return "1".equals(u.a(f, "0"));
    }
}
