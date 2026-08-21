package com.kwad.sdk.core.download.b;

import android.content.Context;
import android.graphics.Bitmap;
import android.widget.RemoteViews;
import com.kwad.sdk.api.core.ICompletedRemoteView;
import com.kwad.sdk.api.core.RemoteViewBuilder;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private ICompletedRemoteView aod;

    private b(ICompletedRemoteView iCompletedRemoteView) {
        this.aod = iCompletedRemoteView;
    }

    public static b aW(Context context) {
        try {
            return new b(RemoteViewBuilder.createCompletedView(context));
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return null;
        }
    }

    final RemoteViews build() {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            return iCompletedRemoteView.build();
        }
        return null;
    }

    public final void setIcon(Bitmap bitmap) {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            iCompletedRemoteView.setIcon(bitmap);
        }
    }

    public final void setInstallText(String str) {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            iCompletedRemoteView.setInstallText(str);
        }
    }

    public final void setName(String str) {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            iCompletedRemoteView.setName(str);
        }
    }

    public final void setSize(String str) {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            iCompletedRemoteView.setSize(str);
        }
    }

    public final void setStatus(String str) {
        ICompletedRemoteView iCompletedRemoteView = this.aod;
        if (iCompletedRemoteView != null) {
            iCompletedRemoteView.setStatus(str);
        }
    }
}
