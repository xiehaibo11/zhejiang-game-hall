package com.sigmob.windad;

/* JADX INFO: loaded from: classes3.dex */
public interface WindAdDebugLogListener {

    public enum WindAdLogLevel {
        WindLogLevelError,
        WindLogLevelWarning,
        WindLogLevelInformation,
        WindLogLevelDebug
    }

    void windAdDebugLog(String str, WindAdLogLevel windAdLogLevel);
}
