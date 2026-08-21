package com.huawei.hms.base.log;

import android.content.Context;
import android.util.Log;

/* JADX INFO: compiled from: LogCatNode.java */
/* JADX INFO: loaded from: classes.dex */
public class d implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public b f2043a;

    @Override // com.huawei.hms.base.log.b
    public void a(Context context, String str) {
        b bVar = this.f2043a;
        if (bVar != null) {
            bVar.a(context, str);
        }
    }

    @Override // com.huawei.hms.base.log.b
    public void a(String str, int i, String str2, String str3) {
        Log.println(i, "HMSSDK_" + str2, str3);
        b bVar = this.f2043a;
        if (bVar != null) {
            bVar.a(str, i, str2, str3);
        }
    }
}
