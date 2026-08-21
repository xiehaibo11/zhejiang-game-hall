package com.alipay.sdk.widget;

import android.content.Intent;
import android.net.Uri;
import android.webkit.DownloadListener;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
class i implements DownloadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ h f1337a;

    i(h hVar) {
        this.f1337a = hVar;
    }

    @Override // android.webkit.DownloadListener
    public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.f1337a.f1336a.startActivity(intent);
        } catch (Throwable unused) {
        }
    }
}
