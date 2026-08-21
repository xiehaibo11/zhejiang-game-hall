package com.kwad.components.offline.api.obiwan;

public interface IObiwanOfflineCompo extends com.kwad.components.offline.api.IOfflineCompo {
    public static final java.lang.String IMPL = "com.kwad.sdk.core.log.ObiwanOfflineCompoImpl";
    public static final java.lang.String PACKAGE_NAME = "com.kwad.components.obiwan";

    com.kwad.components.offline.api.obiwan.IObiwanLogcat getLog();

    void initReal(android.content.Context r1, com.kwad.sdk.api.SdkConfig r2, com.kwad.components.offline.api.obiwan.IObiwanOfflineCompoInitConfig r3, com.kwad.components.offline.api.InitCallBack r4);

    void updateConfigs();
}
