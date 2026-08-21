package com.kwad.components.ad;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import com.kwad.components.ad.adbit.c;
import com.kwad.components.ad.i.b;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsExitInstallListener;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.components.d;
import com.kwad.sdk.internal.api.SceneImpl;

public final class a extends d implements com.kwad.components.ad.b.a {
    @Override
    public final String getBidRequestToken(KsScene ksScene) {
        return c.a(SceneImpl.covert(ksScene));
    }

    @Override
    public final String getBidRequestTokenV2(KsScene ksScene) {
        return c.getBidRequestTokenV2(ksScene);
    }

    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.a.class;
    }

    @Override
    public final void init(Context context) {
        b.lP().init();
    }

    @Override
    public final int priority() {
        return -100;
    }

    @Override
    public final boolean showInstallDialog(Activity activity, final KsExitInstallListener ksExitInstallListener) {
        if (KsAdSDKImpl.get().hasInitFinish()) {
            return com.kwad.sdk.a.a.a.a(activity, new DialogInterface.OnDismissListener() {
                @Override
                public final void onDismiss(DialogInterface dialogInterface) {
                    KsExitInstallListener ksExitInstallListener2 = ksExitInstallListener;
                    if (ksExitInstallListener2 != null) {
                        ksExitInstallListener2.onDialogClose();
                    }
                }
            }, new DialogInterface.OnClickListener() {
                @Override
                public final void onClick(DialogInterface dialogInterface, int i) {
                    KsExitInstallListener ksExitInstallListener2 = ksExitInstallListener;
                    if (ksExitInstallListener2 == null || i != -1) {
                        return;
                    }
                    ksExitInstallListener2.onInstallClick();
                }
            });
        }
        return false;
    }
}
