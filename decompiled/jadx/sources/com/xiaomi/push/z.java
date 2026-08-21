package com.xiaomi.push;

import android.content.Context;
import java.io.File;

/* JADX INFO: loaded from: classes4.dex */
final class z extends y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Runnable f8401a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    z(Context context, File file, Runnable runnable) {
        super(context, file, null);
        this.f8401a = runnable;
    }

    @Override // com.xiaomi.push.y
    protected void a(Context context) {
        Runnable runnable = this.f8401a;
        if (runnable != null) {
            runnable.run();
        }
    }
}
