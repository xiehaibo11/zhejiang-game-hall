package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;
import java.io.File;

/* JADX INFO: loaded from: classes4.dex */
public class hd implements XMPushService.n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f8201a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f476a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f477a;
    private boolean b;

    public hd(Context context) {
        this.f477a = context;
    }

    private String a(String str) {
        return "com.xiaomi.xmsf".equals(str) ? "1000271" : this.f477a.getSharedPreferences("pref_registered_pkg_names", 0).getString(str, null);
    }

    private void a(Context context) {
        this.b = com.xiaomi.push.service.ba.a(context).a(ho.TinyDataUploadSwitch.a(), true);
        int iA = com.xiaomi.push.service.ba.a(context).a(ho.TinyDataUploadFrequency.a(), 7200);
        this.f476a = iA;
        this.f476a = Math.max(60, iA);
    }

    public static void a(boolean z) {
        f8201a = z;
    }

    private boolean a() {
        return Math.abs((System.currentTimeMillis() / 1000) - this.f477a.getSharedPreferences("mipush_extra", 4).getLong("last_tiny_data_upload_timestamp", -1L)) > ((long) this.f476a);
    }

    private boolean a(hh hhVar) {
        if (!bj.b(this.f477a) || hhVar == null || TextUtils.isEmpty(a(this.f477a.getPackageName())) || !new File(this.f477a.getFilesDir(), "tiny_data.data").exists() || f8201a) {
            return false;
        }
        return !com.xiaomi.push.service.ba.a(this.f477a).a(ho.ScreenOnOrChargingTinyDataUploadSwitch.a(), false) || j.m549a(this.f477a) || j.m551b(this.f477a);
    }

    @Override // com.xiaomi.push.service.XMPushService.n
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo407a() {
        hh hhVarA = hg.a(this.f477a).a();
        if (hi.a(this.f477a) && hhVarA != null) {
            hf.a(this.f477a, hhVarA, com.xiaomi.push.service.ca.f978a);
            com.xiaomi.push.service.ca.a();
            com.xiaomi.channel.commonutils.logger.b.c("coord data upload");
        }
        a(this.f477a);
        if (this.b && a()) {
            com.xiaomi.channel.commonutils.logger.b.m43a("TinyData TinyDataCacheProcessor.pingFollowUpAction ts:" + System.currentTimeMillis());
            if (a(hhVarA)) {
                f8201a = true;
                he.a(this.f477a, hhVarA);
            } else {
                com.xiaomi.channel.commonutils.logger.b.m43a("TinyData TinyDataCacheProcessor.pingFollowUpAction !canUpload(uploader) ts:" + System.currentTimeMillis());
            }
        }
    }
}
