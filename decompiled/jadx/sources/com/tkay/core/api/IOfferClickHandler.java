package com.tkay.core.api;

import android.content.Context;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import java.io.Serializable;

/* JADX INFO: loaded from: classes3.dex */
public abstract class IOfferClickHandler implements Serializable {
    public abstract boolean startDownloadApp(Context context, h hVar, i iVar, String str);
}
