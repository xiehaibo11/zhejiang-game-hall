package com.alipay.sdk.widget;

import android.content.Intent;
import android.net.Uri;
import android.webkit.DownloadListener;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

class i implements DownloadListener {
    final h a;

    i(h hVar) {
        this.a = hVar;
    }

    @Override
    public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.a.a.startActivity(intent);
        } catch (Throwable unused) {
        }
    }
}
