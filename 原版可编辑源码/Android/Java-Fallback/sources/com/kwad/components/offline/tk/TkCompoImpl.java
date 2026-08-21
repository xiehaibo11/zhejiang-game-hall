package com.kwad.components.offline.tk;

public class TkCompoImpl extends com.kwad.components.core.offline.init.DefaultOfflineCompo implements com.kwad.components.core.offline.api.b.c {
    private final com.kwad.components.offline.api.tk.ITkOfflineCompo mOfflineCompo;

    public TkCompoImpl(com.kwad.components.offline.api.tk.ITkOfflineCompo r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mOfflineCompo = r1
            return
    }

    @Override
    public com.kwad.components.offline.api.tk.model.StyleTemplate checkStyleTemplateById(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, int r11) {
            r6 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r6.mOfflineCompo
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            com.kwad.components.offline.api.tk.model.StyleTemplate r7 = r0.checkStyleTemplateById(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.offline.tk.TkCompoImpl> r0 = com.kwad.components.offline.tk.TkCompoImpl.class
            return r0
    }

    @Override
    public java.lang.String getJsBaseDir(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            java.lang.String r2 = r0.getJsBaseDir(r2, r3)
            return r2
    }

    @Override
    public com.kwad.components.offline.api.tk.ITkOfflineCompo.TKState getState() {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.tk.ITkOfflineCompo$TKState r0 = r0.getState()
            return r0
    }

    public java.lang.String getTKVersion() {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            java.lang.String r0 = r0.getTKVersion()
            return r0
    }

    @Override
    public com.kwad.sdk.components.l getView(android.content.Context r2, java.lang.String r3, int r4, int r5) {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r2 = r0.getView(r2, r3, r4, r5)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            com.kwad.components.offline.tk.a.g r3 = new com.kwad.components.offline.tk.a.g
            r3.<init>(r2)
            return r3
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public void loadTkFileByTemplateId(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12, com.kwad.components.offline.api.tk.TKDownloadListener r13) {
            r7 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r7.mOfflineCompo
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.loadTkFileByTemplateId(r1, r2, r3, r4, r5, r6)
            return
    }

    public void onConfigRefresh(android.content.Context r2, org.json.JSONObject r3) {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            r0.onConfigRefresh(r2, r3)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.kwad.components.offline.api.tk.ITkOfflineCompo r0 = r1.mOfflineCompo
            r0.onDestroy()
            return
    }
}
