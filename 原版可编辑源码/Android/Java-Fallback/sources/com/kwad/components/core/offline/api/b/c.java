package com.kwad.components.core.offline.api.b;

public interface c extends com.kwad.sdk.components.a {
    com.kwad.components.offline.api.tk.model.StyleTemplate checkStyleTemplateById(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, int r5);

    java.lang.String getJsBaseDir(android.content.Context r1, java.lang.String r2);

    com.kwad.components.offline.api.tk.ITkOfflineCompo.TKState getState();

    com.kwad.sdk.components.l getView(android.content.Context r1, java.lang.String r2, int r3, int r4);

    void loadTkFileByTemplateId(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, int r5, com.kwad.components.offline.api.tk.TKDownloadListener r6);

    void onDestroy();
}
