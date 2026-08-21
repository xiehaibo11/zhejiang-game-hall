package com.alipay.sdk.util;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.webkit.DownloadListener;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

final class o implements DownloadListener {
    final Context a;

    o(Context context) {
        this.a = context;
    }

    @Override
    public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.a.startActivity(intent);
        } catch (Throwable unused) {
        }
    }
}
