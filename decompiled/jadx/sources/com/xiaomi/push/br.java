package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
public class br extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8066a;

    public br(Context context) {
        this.f8066a = context;
    }

    private boolean a() {
        return com.xiaomi.clientreport.manager.a.a(this.f8066a).m48a().isPerfUploadSwitchOpen();
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "100887";
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            if (a()) {
                com.xiaomi.clientreport.manager.a.a(this.f8066a).c();
                com.xiaomi.channel.commonutils.logger.b.c(this.f8066a.getPackageName() + " perf begin upload");
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("fail to send perf data. " + e);
        }
    }
}
