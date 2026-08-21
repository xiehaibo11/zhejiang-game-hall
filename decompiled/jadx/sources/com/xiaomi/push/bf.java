package com.xiaomi.push;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;

/* JADX INFO: loaded from: classes4.dex */
class bf implements au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f8054a = "content://com.vivo.vms.IdProvider/IdentifierId/";
    private static String b = f8054a + "OAID";
    private static String c = f8054a + "VAID_";
    private static String d = f8054a + "AAID_";
    private static String e = f8054a + com.alipay.sdk.m.p0.b.h;
    private static String f = com.alipay.sdk.m.p0.c.c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f151a;

    public bf(Context context) {
        this.f151a = context;
    }

    private String a(String str) throws Throwable {
        Throwable th;
        Cursor cursorQuery;
        String string = null;
        try {
            cursorQuery = this.f151a.getContentResolver().query(Uri.parse(str), null, null, null, null);
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
            ProviderInfo providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider(Uri.parse(f8054a).getAuthority(), 128);
            if (providerInfoResolveContentProvider != null) {
                if ((providerInfoResolveContentProvider.applicationInfo.flags & 1) != 0) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public String mo126a() {
        return a(b);
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public boolean mo127a() {
        return "1".equals(u.a(f, "0"));
    }
}
