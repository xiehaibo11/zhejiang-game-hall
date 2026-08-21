package com.alipay.sdk.auth;

import android.content.Intent;
import android.net.Uri;
import android.webkit.DownloadListener;

/* JADX INFO: loaded from: classes.dex */
class a implements DownloadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AuthActivity f1123a;

    a(AuthActivity authActivity) {
        this.f1123a = authActivity;
    }

    @Override // android.webkit.DownloadListener
    public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        try {
            this.f1123a.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
        } catch (Throwable unused) {
        }
    }
}
