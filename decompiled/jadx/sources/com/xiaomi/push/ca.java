package com.xiaomi.push;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class ca extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bx f8073a;

    ca(bx bxVar) {
        this.f8073a = bxVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "10053";
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f8073a.f166a != null) {
            this.f8073a.f166a.b(this.f8073a.f163a);
            this.f8073a.b("delete_time");
        }
    }
}
