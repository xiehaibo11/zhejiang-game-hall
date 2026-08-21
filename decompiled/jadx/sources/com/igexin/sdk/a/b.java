package com.igexin.sdk.a;

import android.content.Context;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2665a;

    public b(Context context) {
        if (context == null) {
            return;
        }
        this.f2665a = context.getFilesDir().getPath() + "/push_sd.pid";
    }

    public boolean a() {
        return new File(this.f2665a).exists();
    }
}
