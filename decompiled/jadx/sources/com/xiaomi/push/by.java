package com.xiaomi.push;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class by extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bx f8070a;

    by(bx bxVar) {
        this.f8070a = bxVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "10052";
    }

    @Override // java.lang.Runnable
    public void run() {
        com.xiaomi.channel.commonutils.logger.b.c("exec== mUploadJob");
        if (this.f8070a.f166a != null) {
            this.f8070a.f166a.a(this.f8070a.f163a);
            this.f8070a.b("upload_time");
        }
    }
}
