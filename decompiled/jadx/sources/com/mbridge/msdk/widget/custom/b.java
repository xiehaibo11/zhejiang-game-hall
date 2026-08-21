package com.mbridge.msdk.widget.custom;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.widget.custom.a.d;
import com.mbridge.msdk.widget.custom.b.c;
import com.mbridge.msdk.widget.custom.baseview.MBButton;

/* JADX INFO: compiled from: MBridgeCustomRender.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private DownloadMessageDialog f4428a;
    private Context b;
    private final CustomViewMessageWrap c;
    private final a d;
    private d e;

    public b(DownloadMessageDialog downloadMessageDialog, Context context, CustomViewMessageWrap customViewMessageWrap, a aVar) {
        this.f4428a = downloadMessageDialog;
        this.b = context;
        this.c = customViewMessageWrap;
        this.d = aVar;
    }

    public final View a(int i, int i2) throws Exception {
        View viewA = c.a(this.b).a(this.c.getLayoutFilePath());
        d dVar = new d(this.c, this.d, this.f4428a, i, i2);
        this.e = dVar;
        dVar.a((ViewGroup) viewA);
        return viewA;
    }

    public final MBButton a() {
        d dVar = this.e;
        if (dVar != null) {
            return dVar.a();
        }
        return null;
    }
}
