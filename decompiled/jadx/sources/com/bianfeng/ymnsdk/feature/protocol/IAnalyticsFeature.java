package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface IAnalyticsFeature {
    void logError(String str, String str2);

    void logEvent(String str);

    void logEvent(String str, Map<String, String> map);

    void logTimedEventBegin(String str);

    void logTimedEventEnd(String str);

    void setCaptureUncaughtException(boolean z);

    void setSessionContinueMillis(int i);

    void startSession();

    void stopSession();
}
