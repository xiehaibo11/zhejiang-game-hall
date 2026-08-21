package com.kwad.sdk.core.videocache;

import android.content.Context;
import com.kwad.sdk.utils.av;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public final class n {
    static File bi(Context context) {
        return new File(av.cJ(context), "video-cache");
    }
}
