package com.vivo.push.b;

import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;

public final class q extends v {
    protected InsideNotificationItem a;
    private String b;

    public q() {
        super(4);
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        String strB = com.vivo.push.util.q.b(this.a);
        this.b = strB;
        aVar.a("notification_v1", strB);
    }

    public final InsideNotificationItem d() {
        return this.a;
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        String strA = aVar.a("notification_v1");
        this.b = strA;
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        InsideNotificationItem insideNotificationItemA = com.vivo.push.util.q.a(this.b);
        this.a = insideNotificationItemA;
        if (insideNotificationItemA != null) {
            insideNotificationItemA.setMsgId(f());
        }
    }

    public final String e() {
        if (!TextUtils.isEmpty(this.b)) {
            return this.b;
        }
        InsideNotificationItem insideNotificationItem = this.a;
        if (insideNotificationItem == null) {
            return null;
        }
        return com.vivo.push.util.q.b(insideNotificationItem);
    }

    @Override
    public final String toString() {
        return "OnNotifyArrivedCommand";
    }
}
