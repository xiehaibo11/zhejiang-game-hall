package com.qihoo360.replugin;

import android.content.Intent;
import android.os.Bundle;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface ContextInjector {
    void startActivityAfter(Intent intent);

    void startActivityAfter(Intent intent, Bundle bundle);

    void startActivityBefore(Intent intent);

    void startActivityBefore(Intent intent, Bundle bundle);

    void startServiceAfter(Intent intent);

    void startServiceBefore(Intent intent);
}
