package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.XMPushService.b;
import com.xiaomi.push.service.bg;
import java.util.Collection;

public class w extends XMPushService.j {
    private XMPushService a;
    private String a;
    private byte[] a;
    private String b;
    private String c;

    public w(XMPushService xMPushService, String str, String str2, String str3, byte[] bArr) {
        super(9);
        this.a = xMPushService;
        this.a = str;
        this.a = bArr;
        this.b = str2;
        this.c = str3;
    }

    @Override
    public String a() {
        return "register app";
    }

    @Override
    public void a() {
        bg.b next;
        t tVarA = u.a((Context) this.a);
        if (tVarA == null) {
            try {
                tVarA = u.a(this.a, this.a, this.b, this.c);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("fail to register push account. " + e);
            }
        }
        if (tVarA == null) {
            com.xiaomi.channel.commonutils.logger.b.d("no account for registration.");
            x.a(this.a, ErrorCode.ERROR_AUTHERICATION_ERROR, "no account.");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("do registration now.");
        Collection<bg.b> collectionA = bg.a().a("5");
        if (collectionA.isEmpty()) {
            next = tVarA.a(this.a);
            ah.a(this.a, next);
            bg.a().a(next);
        } else {
            next = collectionA.iterator().next();
        }
        if (!this.a.c()) {
            x.a(this.a, this.a);
            this.a.a(true);
            return;
        }
        try {
            if (next.a == bg.c.c) {
                ah.a(this.a, this.a, this.a);
            } else if (next.a == bg.c.a) {
                x.a(this.a, this.a);
                XMPushService xMPushService = this.a;
                XMPushService xMPushService2 = this.a;
                xMPushService2.getClass();
                xMPushService.a(xMPushService2.new b(next));
            }
        } catch (gh e2) {
            com.xiaomi.channel.commonutils.logger.b.d("meet error, disconnect connection. " + e2);
            this.a.a(10, e2);
        }
    }
}
