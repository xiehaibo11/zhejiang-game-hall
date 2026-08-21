package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
final class cd extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f8356a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Notification f980a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Context f981a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f982a;
    final /* synthetic */ String b;

    cd(int i, String str, Context context, String str2, Notification notification) {
        this.f8356a = i;
        this.f982a = str;
        this.f981a = context;
        this.b = str2;
        this.f980a = notification;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return cc.b(this.f8356a, this.f982a);
    }

    @Override // java.lang.Runnable
    public void run() {
        cc.c(this.f981a, this.b, this.f8356a, this.f982a, this.f980a);
    }
}
