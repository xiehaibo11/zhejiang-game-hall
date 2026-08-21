package com.xiaomi.mipush.sdk;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f8024a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    String f102a = "";

    public boolean equals(Object obj) {
        if (obj == null || !(obj instanceof x)) {
            return false;
        }
        x xVar = (x) obj;
        return !TextUtils.isEmpty(xVar.f102a) && xVar.f102a.equals(this.f102a);
    }
}
