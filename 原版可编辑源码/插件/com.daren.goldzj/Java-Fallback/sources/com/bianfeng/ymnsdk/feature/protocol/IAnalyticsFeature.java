package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

public interface IAnalyticsFeature {
    void logError(String r1, String r2);

    void logEvent(String r1);

    void logEvent(String r1, Map<String, String> r2);

    void logTimedEventBegin(String r1);

    void logTimedEventEnd(String r1);

    void setCaptureUncaughtException(boolean r1);

    void setSessionContinueMillis(int r1);

    void startSession();

    void stopSession();
}
