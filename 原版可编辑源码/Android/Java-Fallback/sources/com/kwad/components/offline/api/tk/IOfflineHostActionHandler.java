package com.kwad.components.offline.api.tk;

public interface IOfflineHostActionHandler {
    void dismissDialog(com.kwad.components.offline.api.tk.IOfflineTKDialog r1);

    void showDialog(com.kwad.components.offline.api.tk.IOfflineTKDialog r1);

    void startActivity(com.kwad.components.offline.api.tk.IOfflineTKNativeIntent r1);
}
