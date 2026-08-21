package com.kwad.components.offline.api.tk;

public interface ITkOfflineCompoInitConfig extends com.kwad.components.offline.api.IOfflineCompoInitConfig {
    java.lang.String getSpKeyTkSoLoadTimes();

    java.lang.String getSpNameSoLoadTimes();

    java.lang.String getTkJsFileDir(android.content.Context r1, java.lang.String r2);

    java.lang.String getTkJsRootDir(android.content.Context r1);

    java.lang.String getTkVersion();

    boolean isCanUseTk();

    boolean isLocalDebugEnable();

    com.kwad.components.offline.api.core.soloader.ISoLoader soLoader();

    boolean useTkLite();
}
