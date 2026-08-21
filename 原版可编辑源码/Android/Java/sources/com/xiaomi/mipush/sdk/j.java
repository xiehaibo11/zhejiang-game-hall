package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;

final class j implements Runnable {
    final Context a;
    final e a;
    final String a;

    j(String str, Context context, e eVar) {
        this.a = str;
        this.a = context;
        this.a = eVar;
    }

    @Override
    public void run() {
        String strSubstring;
        if (TextUtils.isEmpty(this.a)) {
            return;
        }
        String[] strArrSplit = this.a.split(Constants.WAVE_SEPARATOR);
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
            com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive incorrect token");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive correct token");
        i.d(this.a, this.a, strSubstring);
        i.a(this.a);
    }
}
