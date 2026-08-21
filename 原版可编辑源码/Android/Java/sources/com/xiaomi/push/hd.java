package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;
import java.io.File;

public class hd implements XMPushService.n {
    private static boolean a;
    private int a;
    private Context a;
    private boolean b;

    public hd(Context context) {
        this.a = context;
    }

    private String a(String str) {
        return "com.xiaomi.xmsf".equals(str) ? "1000271" : this.a.getSharedPreferences("pref_registered_pkg_names", 0).getString(str, null);
    }

    private void a(Context context) {
        this.b = com.xiaomi.push.service.ba.a(context).a(ho.ak.a(), true);
        int iA = com.xiaomi.push.service.ba.a(context).a(ho.al.a(), 7200);
        this.a = iA;
        this.a = Math.max(60, iA);
    }

    public static void a(boolean z) {
        a = z;
    }

    private boolean a() {
        return Math.abs((System.currentTimeMillis() / 1000) - this.a.getSharedPreferences("mipush_extra", 4).getLong("last_tiny_data_upload_timestamp", -1L)) > ((long) this.a);
    }

    private boolean a(hh hhVar) {
        if (!bj.b(this.a) || hhVar == null || TextUtils.isEmpty(a(this.a.getPackageName())) || !new File(this.a.getFilesDir(), "tiny_data.data").exists() || a) {
            return false;
        }
        return !com.xiaomi.push.service.ba.a(this.a).a(ho.aV.a(), false) || j.a(this.a) || j.b(this.a);
    }

    @Override
    public void a() {
        hh hhVarA = hg.a(this.a).a();
        if (hi.a(this.a) && hhVarA != null) {
            hf.a(this.a, hhVarA, com.xiaomi.push.service.ca.a);
            com.xiaomi.push.service.ca.a();
            com.xiaomi.channel.commonutils.logger.b.c("coord data upload");
        }
        a(this.a);
        if (this.b && a()) {
            com.xiaomi.channel.commonutils.logger.b.a("TinyData TinyDataCacheProcessor.pingFollowUpAction ts:" + System.currentTimeMillis());
            if (a(hhVarA)) {
                a = true;
                he.a(this.a, hhVarA);
            } else {
                com.xiaomi.channel.commonutils.logger.b.a("TinyData TinyDataCacheProcessor.pingFollowUpAction !canUpload(uploader) ts:" + System.currentTimeMillis());
            }
        }
    }
}
