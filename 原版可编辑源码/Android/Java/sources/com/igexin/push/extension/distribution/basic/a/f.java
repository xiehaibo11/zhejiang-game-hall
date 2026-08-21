package com.igexin.push.extension.distribution.basic.a;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.igexin.push.core.bean.PushTaskBean;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

class f implements Runnable {
    final com.igexin.push.extension.distribution.basic.b.b a;
    final PushTaskBean b;
    final e c;

    f(e eVar, com.igexin.push.extension.distribution.basic.b.b bVar, PushTaskBean pushTaskBean) {
        this.c = eVar;
        this.a = bVar;
        this.b = pushTaskBean;
    }

    @Override
    public void run() {
        Context context = com.igexin.push.core.d.g;
        try {
            Intent intent = new Intent("android.intent.action.MAIN");
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.addCategory("android.intent.category.HOME");
            context.startActivity(intent);
            if (TextUtils.isEmpty(this.a.getDoActionId())) {
                return;
            }
            com.igexin.push.core.a.e.a().a(this.b.getTaskId(), this.b.getMessageId(), this.a.getDoActionId());
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("StartHomeAction | " + th.toString(), new Object[0]);
        }
    }
}
