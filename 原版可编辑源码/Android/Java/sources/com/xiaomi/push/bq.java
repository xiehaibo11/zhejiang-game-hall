package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.al;

public class bq extends al.a {
    private Context a;

    public bq(Context context) {
        this.a = context;
    }

    private boolean a() {
        return com.xiaomi.clientreport.manager.a.a(this.a).a().isEventUploadSwitchOpen();
    }

    @Override
    public String a() {
        return "100886";
    }

    @Override
    public void run() {
        try {
            if (a()) {
                com.xiaomi.channel.commonutils.logger.b.c(this.a.getPackageName() + " begin upload event");
                com.xiaomi.clientreport.manager.a.a(this.a).b();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }
}
