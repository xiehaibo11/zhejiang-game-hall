package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
final class j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8012a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ e f96a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f97a;

    j(String str, Context context, e eVar) {
        this.f97a = str;
        this.f8012a = context;
        this.f96a = eVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        String strSubstring;
        if (TextUtils.isEmpty(this.f97a)) {
            return;
        }
        String[] strArrSplit = this.f97a.split(Constants.WAVE_SEPARATOR);
        int length = strArrSplit.length;
        int i = 0;
        while (true) {
            if (i >= length) {
                strSubstring = "";
                break;
            }
            String str = strArrSplit[i];
            if (!TextUtils.isEmpty(str) && str.startsWith("token:")) {
                strSubstring = str.substring(str.indexOf(Constants.COLON_SEPARATOR) + 1);
                break;
            }
            i++;
        }
        if (TextUtils.isEmpty(strSubstring)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive incorrect token");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive correct token");
        i.d(this.f8012a, this.f96a, strSubstring);
        i.m105a(this.f8012a);
    }
}
