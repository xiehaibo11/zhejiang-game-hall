package com.alipay.sdk.util;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import com.alipay.sdk.app.EnvUtils;

public class m {
    private static final String a = "content://com.alipay.android.app.settings.data.ServerProvider/current_server";

    public static String a(Context context) {
        if (EnvUtils.isSandBox()) {
            return "https://mobilegw.alipaydev.com/mgw.htm";
        }
        if (context == null) {
            return com.alipay.sdk.cons.a.a;
        }
        String str = com.alipay.sdk.cons.a.a;
        return TextUtils.isEmpty(str) ? com.alipay.sdk.cons.a.a : str;
    }

    private static String b(Context context) {
        Cursor cursorQuery = context.getContentResolver().query(Uri.parse("content://com.alipay.android.app.settings.data.ServerProvider/current_server"), null, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            string = cursorQuery.moveToFirst() ? cursorQuery.getString(cursorQuery.getColumnIndex("url")) : null;
            cursorQuery.close();
        }
        return string;
    }
}
