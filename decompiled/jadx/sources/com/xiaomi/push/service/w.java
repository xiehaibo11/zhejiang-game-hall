package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.XMPushService.b;
import com.xiaomi.push.service.bg;
import java.util.Collection;

/* JADX INFO: loaded from: classes4.dex */
public class w extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private XMPushService f8394a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f1022a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f1023a;
    private String b;
    private String c;

    public w(XMPushService xMPushService, String str, String str2, String str3, byte[] bArr) {
        super(9);
        this.f8394a = xMPushService;
        this.f1022a = str;
        this.f1023a = bArr;
        this.b = str2;
        this.c = str3;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "register app";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        bg.b next;
        t tVarM694a = u.m694a((Context) this.f8394a);
        if (tVarM694a == null) {
            try {
                tVarM694a = u.a(this.f8394a, this.f1022a, this.b, this.c);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("fail to register push account. " + e);
            }
        }
        if (tVarM694a == null) {
            com.xiaomi.channel.commonutils.logger.b.d("no account for registration.");
            x.a(this.f8394a, ErrorCode.ERROR_AUTHERICATION_ERROR, "no account.");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("do registration now.");
        Collection<bg.b> collectionM651a = bg.a().m651a("5");
        if (collectionM651a.isEmpty()) {
            next = tVarM694a.a(this.f8394a);
            ah.a(this.f8394a, next);
            bg.a().a(next);
        } else {
            next = collectionM651a.iterator().next();
        }
        if (!this.f8394a.m611c()) {
            x.a(this.f1022a, this.f1023a);
            this.f8394a.a(true);
            return;
        }
        try {
            if (next.f945a == bg.c.binded) {
                ah.a(this.f8394a, this.f1022a, this.f1023a);
            } else if (next.f945a == bg.c.unbind) {
                x.a(this.f1022a, this.f1023a);
                XMPushService xMPushService = this.f8394a;
                XMPushService xMPushService2 = this.f8394a;
                xMPushService2.getClass();
                xMPushService.a(xMPushService2.new b(next));
            }
        } catch (gh e2) {
            com.xiaomi.channel.commonutils.logger.b.d("meet error, disconnect connection. " + e2);
            this.f8394a.a(10, e2);
        }
    }
}
