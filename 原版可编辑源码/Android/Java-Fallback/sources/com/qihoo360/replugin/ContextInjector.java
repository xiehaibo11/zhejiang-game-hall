package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface ContextInjector {
    void startActivityAfter(android.content.Intent r1);

    void startActivityAfter(android.content.Intent r1, android.os.Bundle r2);

    void startActivityBefore(android.content.Intent r1);

    void startActivityBefore(android.content.Intent r1, android.os.Bundle r2);

    void startServiceAfter(android.content.Intent r1);

    void startServiceBefore(android.content.Intent r1);
}
