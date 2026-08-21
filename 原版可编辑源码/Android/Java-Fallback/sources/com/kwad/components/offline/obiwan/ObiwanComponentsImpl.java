package com.kwad.components.offline.obiwan;

public class ObiwanComponentsImpl extends com.kwad.components.core.offline.init.DefaultOfflineCompo implements com.kwad.components.core.offline.api.obiwan.ObiwanComponents {
    private final com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo mOfflineCompo;

    public ObiwanComponentsImpl(com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mOfflineCompo = r1
            return
    }

    @Override
    public java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.offline.obiwan.ObiwanComponentsImpl> r0 = com.kwad.components.offline.obiwan.ObiwanComponentsImpl.class
            return r0
    }

    @Override
    public com.kwad.components.offline.api.obiwan.IObiwanLogcat getLog() {
            r1 = this;
            com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.obiwan.IObiwanLogcat r0 = r0.getLog()
            return r0
    }

    @Override
    public void initReal(android.content.Context r2, com.kwad.sdk.api.SdkConfig r3, com.kwad.components.offline.api.obiwan.IObiwanOfflineCompoInitConfig r4, com.kwad.components.offline.api.InitCallBack r5) {
            r1 = this;
            com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo r0 = r1.mOfflineCompo
            r0.initReal(r2, r3, r4, r5)
            return
    }

    @Override
    public void updateConfigs() {
            r1 = this;
            com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo r0 = r1.mOfflineCompo
            r0.updateConfigs()
            return
    }
}
