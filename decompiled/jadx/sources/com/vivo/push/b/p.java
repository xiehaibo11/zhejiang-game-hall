package com.vivo.push.b;

import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;

/* JADX INFO: loaded from: classes4.dex */
public final class p extends com.vivo.push.o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7887a;
    private String b;
    private byte[] c;
    private long d;
    private InsideNotificationItem e;

    public p() {
        super(5);
    }

    public p(String str, long j, InsideNotificationItem insideNotificationItem) {
        super(5);
        this.f7887a = str;
        this.d = j;
        this.e = insideNotificationItem;
    }

    @Override // com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        aVar.a("package_name", this.f7887a);
        aVar.a("notify_id", this.d);
        aVar.a("notification_v1", com.vivo.push.util.q.b(this.e));
        aVar.a("open_pkg_name", this.b);
        aVar.a("open_pkg_name_encode", this.c);
    }

    public final String d() {
        return this.f7887a;
    }

    @Override // com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        this.f7887a = aVar.a("package_name");
        this.d = aVar.b("notify_id", -1L);
        this.b = aVar.a("open_pkg_name");
        this.c = aVar.b("open_pkg_name_encode");
        String strA = aVar.a("notification_v1");
        if (!TextUtils.isEmpty(strA)) {
            this.e = com.vivo.push.util.q.a(strA);
        }
        InsideNotificationItem insideNotificationItem = this.e;
        if (insideNotificationItem != null) {
            insideNotificationItem.setMsgId(this.d);
        }
    }

    public final long e() {
        return this.d;
    }

    public final InsideNotificationItem f() {
        return this.e;
    }

    @Override // com.vivo.push.o
    public final String toString() {
        return "OnNotificationClickCommand";
    }
}
