package com.alipay.sdk.util;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import com.alipay.sdk.app.EnvUtils;

/* JADX INFO: loaded from: classes.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1324a = "content://com.alipay.android.app.settings.data.ServerProvider/current_server";

    public static String a(Context context) {
        if (EnvUtils.isSandBox()) {
            return "https://mobilegw.alipaydev.com/mgw.htm";
        }
        if (context == null) {
            return com.alipay.sdk.cons.a.f1137a;
        }
        String str = com.alipay.sdk.cons.a.f1137a;
        return TextUtils.isEmpty(str) ? com.alipay.sdk.cons.a.f1137a : str;
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
