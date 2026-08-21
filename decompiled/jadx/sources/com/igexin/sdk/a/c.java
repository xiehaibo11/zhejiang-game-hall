package com.igexin.sdk.a;

import android.content.Context;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2666a;

    public c(Context context) {
        if (context == null) {
            return;
        }
        this.f2666a = context.getFilesDir().getPath() + "/init.pid";
    }

    public void a() {
        if (b()) {
            return;
        }
        try {
            new File(this.f2666a).createNewFile();
        } catch (IOException unused) {
        }
    }

    public boolean b() {
        return new File(this.f2666a).exists();
    }
}
