package com.bianfeng.ymnsdk.feature.protocol;

public interface IAnalyticsFeature {
    void logError(java.lang.String r1, java.lang.String r2);

    void logEvent(java.lang.String r1);

    void logEvent(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2);

    void logTimedEventBegin(java.lang.String r1);

    void logTimedEventEnd(java.lang.String r1);

    void setCaptureUncaughtException(boolean r1);

    void setSessionContinueMillis(int r1);

    void startSession();

    void stopSession();
}
