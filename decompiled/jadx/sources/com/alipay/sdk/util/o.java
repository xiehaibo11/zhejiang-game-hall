package com.alipay.sdk.util;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.webkit.DownloadListener;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
final class o implements DownloadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f1327a;

    o(Context context) {
        this.f1327a = context;
    }

    @Override // android.webkit.DownloadListener
    public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.f1327a.startActivity(intent);
        } catch (Throwable unused) {
        }
    }
}
