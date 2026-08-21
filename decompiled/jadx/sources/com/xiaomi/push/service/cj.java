package com.xiaomi.push.service;

import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class cj extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8361a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f985a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ byte[] f986a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cj(XMPushService xMPushService, int i, String str, byte[] bArr) {
        super(i);
        this.f8361a = xMPushService;
        this.f985a = str;
        this.f986a = bArr;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send mi push message";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            ah.a(this.f8361a, this.f985a, this.f986a);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f8361a.a(10, e);
        }
    }
}
