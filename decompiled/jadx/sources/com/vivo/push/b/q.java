package com.vivo.push.b;

import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;

/* JADX INFO: loaded from: classes4.dex */
public final class q extends v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected InsideNotificationItem f7888a;
    private String b;

    public q() {
        super(4);
    }

    @Override // com.vivo.push.b.v, com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        String strB = com.vivo.push.util.q.b(this.f7888a);
        this.b = strB;
        aVar.a("notification_v1", strB);
    }

    public final InsideNotificationItem d() {
        return this.f7888a;
    }

    @Override // com.vivo.push.b.v, com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        String strA = aVar.a("notification_v1");
        this.b = strA;
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        InsideNotificationItem insideNotificationItemA = com.vivo.push.util.q.a(this.b);
        this.f7888a = insideNotificationItemA;
        if (insideNotificationItemA != null) {
            insideNotificationItemA.setMsgId(f());
        }
    }

    public final String e() {
        if (!TextUtils.isEmpty(this.b)) {
            return this.b;
        }
        InsideNotificationItem insideNotificationItem = this.f7888a;
        if (insideNotificationItem == null) {
            return null;
        }
        return com.vivo.push.util.q.b(insideNotificationItem);
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnNotifyArrivedCommand";
    }
}
