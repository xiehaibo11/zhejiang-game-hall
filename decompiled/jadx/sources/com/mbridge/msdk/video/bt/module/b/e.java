package com.mbridge.msdk.video.bt.module.b;

import com.mbridge.msdk.video.bt.module.MBTempContainer;

/* JADX INFO: compiled from: ReportBTContainerErrorListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class e extends MBTempContainer.a.C0303a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private h f4127a;

    public e(h hVar) {
        this.f4127a = hVar;
    }

    @Override // com.mbridge.msdk.video.bt.module.MBTempContainer.a.C0303a, com.mbridge.msdk.video.bt.module.MBTempContainer.a
    public final void a(String str) {
        super.a(str);
        h hVar = this.f4127a;
        if (hVar != null) {
            hVar.a(str);
        }
    }
}
