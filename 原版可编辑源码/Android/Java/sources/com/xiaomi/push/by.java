package com.xiaomi.push;

import com.xiaomi.push.al;

class by extends al.a {
    final bx a;

    by(bx bxVar) {
        this.a = bxVar;
    }

    @Override
    public String a() {
        return "10052";
    }

    @Override
    public void run() {
        com.xiaomi.channel.commonutils.logger.b.c("exec== mUploadJob");
        if (this.a.a != null) {
            this.a.a.a(this.a.a);
            this.a.b("upload_time");
        }
    }
}
