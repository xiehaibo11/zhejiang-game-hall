package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import com.tkay.basead.ui.MraidBannerATView;
import com.tkay.basead.ui.SdkBannerATView;
import com.tkay.core.common.f.i;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.basead.e.a f5683a;
    private final String k;

    @Override // com.tkay.basead.f.a
    public final void a(Activity activity, Map<String, Object> map) {
    }

    public b(Context context, i iVar, String str, boolean z) {
        super(context, iVar, str, z);
        this.k = getClass().getSimpleName();
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.f5683a = aVar;
    }

    public final View b() {
        if (!a()) {
            return null;
        }
        if (this.g.g()) {
            return new MraidBannerATView(this.c, this.d, this.g, this.f5683a);
        }
        return new SdkBannerATView(this.c, this.d, this.g, this.f5683a);
    }

    @Override // com.tkay.basead.f.c
    public final void c() {
        this.f5683a = null;
    }
}
