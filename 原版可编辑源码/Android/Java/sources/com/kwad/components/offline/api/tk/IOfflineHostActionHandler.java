package com.kwad.components.offline.api.tk;

public interface IOfflineHostActionHandler {
    void dismissDialog(IOfflineTKDialog iOfflineTKDialog);

    void showDialog(IOfflineTKDialog iOfflineTKDialog);

    void startActivity(IOfflineTKNativeIntent iOfflineTKNativeIntent);
}
