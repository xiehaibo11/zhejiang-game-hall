package com.xiaomi.push;

import android.content.Context;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes4.dex */
public abstract class y implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8400a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private File f1032a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Runnable f1033a;

    private y(Context context, File file) {
        this.f8400a = context;
        this.f1032a = file;
    }

    /* synthetic */ y(Context context, File file, z zVar) {
        this(context, file);
    }

    public static void a(Context context, File file, Runnable runnable) {
        new z(context, file, runnable).run();
    }

    protected abstract void a(Context context);

    @Override // java.lang.Runnable
    public final void run() {
        x xVarA = null;
        try {
            try {
                if (this.f1032a == null) {
                    this.f1032a = new File(this.f8400a.getFilesDir(), "default_locker");
                }
                xVarA = x.a(this.f8400a, this.f1032a);
                if (this.f1033a != null) {
                    this.f1033a.run();
                }
                a(this.f8400a);
                if (xVarA == null) {
                    return;
                }
            } catch (IOException e) {
                e.printStackTrace();
                if (xVarA == null) {
                    return;
                }
            }
            xVarA.a();
        } catch (Throwable th) {
            if (xVarA != null) {
                xVarA.a();
            }
            throw th;
        }
    }
}
