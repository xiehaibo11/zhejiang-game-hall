package com.xiaomi.push;

import android.content.Context;
import java.io.File;

final class z extends y {
    final Runnable a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    z(Context context, File file, Runnable runnable) {
        super(context, file, null);
        this.a = runnable;
    }

    @Override
    protected void a(Context context) {
        Runnable runnable = this.a;
        if (runnable != null) {
            runnable.run();
        }
    }
}
