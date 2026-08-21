package com.igexin.sdk.a;

import android.content.Context;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2667a;

    public d(Context context) {
        if (context == null) {
            return;
        }
        this.f2667a = context.getFilesDir().getPath() + "/push.pid";
    }

    public void a() {
        if (c()) {
            return;
        }
        try {
            new File(this.f2667a).createNewFile();
        } catch (IOException unused) {
        }
    }

    public void b() {
        if (c()) {
            new File(this.f2667a).delete();
        }
    }

    public boolean c() {
        return new File(this.f2667a).exists();
    }
}
