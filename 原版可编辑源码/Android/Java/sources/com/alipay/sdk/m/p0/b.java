package com.alipay.sdk.m.p0;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;

public class b {
    public static final String b = "VMS_IDLG_SDK_DB";
    public static final String c = "content://com.vivo.vms.IdProvider/IdentifierId";
    public static final String d = "value";
    public static final String e = "OAID";
    public static final String f = "AAID";
    public static final String g = "VAID";
    public static final String h = "OAIDSTATUS";
    public static final int i = 0;
    public static final int j = 1;
    public static final int k = 2;
    public static final int l = 4;
    public Context a;

    public b(Context context) {
        this.a = context;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x006d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String a(int i2, String str) {
        Uri uri;
        Uri uri2;
        Cursor cursorQuery;
        if (i2 == 0) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID");
        } else if (i2 == 1) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/VAID_" + str);
        } else if (i2 == 2) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/AAID_" + str);
        } else {
            if (i2 != 4) {
                uri2 = null;
                cursorQuery = this.a.getContentResolver().query(uri2, null, null, null, null);
                if (cursorQuery == null) {
                    string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
                    cursorQuery.close();
                } else {
                    Log.d(b, "return cursor is null,return");
                }
                return string;
            }
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAIDSTATUS");
        }
        uri2 = uri;
        cursorQuery = this.a.getContentResolver().query(uri2, null, null, null, null);
        if (cursorQuery == null) {
        }
        return string;
    }
}
