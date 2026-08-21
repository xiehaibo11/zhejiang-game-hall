package com.sigmob.windad;

public interface WindAdDebugLogListener {

    public enum WindAdLogLevel {
        WindLogLevelError,
        WindLogLevelWarning,
        WindLogLevelInformation,
        WindLogLevelDebug
    }

    void windAdDebugLog(String str, WindAdLogLevel windAdLogLevel);
}
