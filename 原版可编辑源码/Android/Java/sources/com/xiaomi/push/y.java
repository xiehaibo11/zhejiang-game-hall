package com.xiaomi.push;

import android.content.Context;
import java.io.File;
import java.io.IOException;

public abstract class y implements Runnable {
    private Context a;
    private File a;
    private Runnable a;

    private y(Context context, File file) {
        this.a = context;
        this.a = file;
    }

    y(Context context, File file, z zVar) {
        this(context, file);
    }

    public static void a(Context context, File file, Runnable runnable) {
        new z(context, file, runnable).run();
    }

    protected abstract void a(Context context);

    @Override
    public final void run() {
        x xVarA = null;
        try {
            try {
                if (this.a == null) {
                    this.a = new File(this.a.getFilesDir(), "default_locker");
                }
                xVarA = x.a(this.a, this.a);
                if (this.a != null) {
                    this.a.run();
                }
                a(this.a);
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
