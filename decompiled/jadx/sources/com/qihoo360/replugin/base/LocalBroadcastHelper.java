package com.qihoo360.replugin.base;

import android.content.Context;
import android.content.Intent;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import java.util.concurrent.Callable;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class LocalBroadcastHelper {
    public static void sendBroadcastSyncUi(final Context context, final Intent intent) {
        try {
            ThreadUtils.syncToMainThread(new Callable<Void>() { // from class: com.qihoo360.replugin.base.LocalBroadcastHelper.1
                @Override // java.util.concurrent.Callable
                public Void call() throws Exception {
                    LocalBroadcastManager.getInstance(context).sendBroadcastSync(intent);
                    return null;
                }
            }, 10000);
        } catch (Throwable th) {
            throw new RuntimeException(th);
        }
    }
}
