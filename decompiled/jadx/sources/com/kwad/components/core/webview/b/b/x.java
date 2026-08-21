package com.kwad.components.core.webview.b.b;

import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;

/* JADX INFO: loaded from: classes2.dex */
public class x extends com.kwad.sdk.core.response.a.a {
    public String Xj;
    public int errorCode;
    public String errorReason;
    public int nM;

    public final boolean isFailed() {
        return TextUtils.equals("failed", this.Xj);
    }

    public final boolean rU() {
        return TextUtils.equals("start", this.Xj);
    }

    public final boolean rV() {
        return TextUtils.equals(TtmlNode.END, this.Xj);
    }

    public final boolean rW() {
        return TextUtils.equals(NotificationCompat.CATEGORY_PROGRESS, this.Xj);
    }

    public final int rX() {
        String str = this.errorReason;
        if (str != null) {
            return (int) Long.parseLong(str);
        }
        return 0;
    }
}
