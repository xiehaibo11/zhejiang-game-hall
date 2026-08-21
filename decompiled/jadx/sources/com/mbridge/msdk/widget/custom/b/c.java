package com.mbridge.msdk.widget.custom.b;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import java.io.File;

/* JADX INFO: compiled from: InflaterUtil.java */
/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f4437a;
    private com.mbridge.msdk.widget.custom.a.b b;

    public static c a(Context context) {
        if (f4437a == null) {
            f4437a = new c(context);
        }
        return f4437a;
    }

    private c(Context context) {
        this.b = null;
        com.mbridge.msdk.widget.custom.a.b bVarA = com.mbridge.msdk.widget.custom.a.b.a();
        this.b = bVarA;
        bVarA.a("");
    }

    public final View a(String str) {
        if (TextUtils.isEmpty(str) || !new File(str).exists()) {
            return null;
        }
        return this.b.f(str);
    }
}
