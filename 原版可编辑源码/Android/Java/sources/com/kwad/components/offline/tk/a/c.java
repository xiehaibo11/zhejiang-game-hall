package com.kwad.components.offline.tk.a;

import android.content.Intent;
import com.kwad.components.offline.api.tk.IOfflineHostActionHandler;
import com.kwad.components.offline.api.tk.IOfflineTKDialog;
import com.kwad.components.offline.api.tk.IOfflineTKNativeIntent;
import com.kwad.sdk.components.h;
import com.kwad.sdk.components.i;
import com.kwad.sdk.components.j;

public final class c implements IOfflineHostActionHandler {
    private final j Wi;

    public c(j jVar) {
        this.Wi = jVar;
    }

    private com.kwad.sdk.components.g a(final IOfflineTKDialog iOfflineTKDialog) {
        return new com.kwad.sdk.components.g() {
            @Override
            public final void a(i iVar) {
                iOfflineTKDialog.registerJSCallHandler(new e(iVar));
            }

            @Override
            public final void callTKBridge(String str) {
                iOfflineTKDialog.callTKBridge(str);
            }

            @Override
            public final void callbackDialogDismiss() {
                iOfflineTKDialog.callbackDialogDismiss();
            }

            @Override
            public final void callbackPageStatus(boolean z, String str) {
                iOfflineTKDialog.callbackPageStatus(z, str);
            }

            @Override
            public final int getDialogId() {
                return iOfflineTKDialog.getDialogId();
            }

            @Override
            public final String getStyleTemplate() {
                return iOfflineTKDialog.getStyleTemplate();
            }
        };
    }

    private h a(final IOfflineTKNativeIntent iOfflineTKNativeIntent) {
        return new h() {
            @Override
            public final void a(i iVar) {
                iOfflineTKNativeIntent.registerJSCallHandler(new e(iVar));
            }

            @Override
            public final void callTKBridge(String str) {
                iOfflineTKNativeIntent.callTKBridge(str);
            }

            @Override
            public final void callbackPageStatus(boolean z, String str) {
                iOfflineTKNativeIntent.callbackPageStatus(z, str);
            }

            @Override
            public final String getClassName() {
                return iOfflineTKNativeIntent.getClassName();
            }

            @Override
            public final Intent getIntent() {
                return iOfflineTKNativeIntent.getIntent();
            }

            @Override
            public final String getTemplateString() {
                return iOfflineTKNativeIntent.getTemplateString();
            }

            @Override
            public final String getUrl() {
                return iOfflineTKNativeIntent.getUrl();
            }
        };
    }

    @Override
    public final void dismissDialog(IOfflineTKDialog iOfflineTKDialog) {
        j jVar = this.Wi;
        if (jVar != null) {
            jVar.b(a(iOfflineTKDialog));
        }
    }

    @Override
    public final void showDialog(IOfflineTKDialog iOfflineTKDialog) {
        j jVar = this.Wi;
        if (jVar != null) {
            jVar.a(a(iOfflineTKDialog));
        }
    }

    @Override
    public final void startActivity(IOfflineTKNativeIntent iOfflineTKNativeIntent) {
        j jVar = this.Wi;
        if (jVar != null) {
            jVar.a(a(iOfflineTKNativeIntent));
        }
    }
}
