package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import com.tkay.basead.ui.MraidBannerATView;
import com.tkay.basead.ui.SdkBannerATView;
import com.tkay.core.common.f.i;
import java.util.Map;

public final class b extends c {
    com.tkay.basead.e.a a;
    private final String k;

    @Override
    public final void a(Activity activity, Map<String, Object> map) {
    }

    public b(Context context, i iVar, String str, boolean z) {
        super(context, iVar, str, z);
        this.k = getClass().getSimpleName();
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.a = aVar;
    }

    public final View b() {
        if (!a()) {
            return null;
        }
        if (this.g.g()) {
            return new MraidBannerATView(this.c, this.d, this.g, this.a);
        }
        return new SdkBannerATView(this.c, this.d, this.g, this.a);
    }

    @Override
    public final void c() {
        this.a = null;
    }
}
