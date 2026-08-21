package com.kwad.components.offline.api.obiwan;

public interface IObiwanOfflineCompoInitConfig extends com.kwad.components.offline.api.IOfflineCompoInitConfig {
    java.lang.String getLogDirPath();

    java.lang.String getLogObiwanData();

    long getLogObiwanStorageQuota();

    boolean isLogObiwanEnableNow();

    boolean isLogObiwanRecordAll();
}
