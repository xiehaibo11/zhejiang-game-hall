package com.kwad.components.core.offline.init.a;

import android.app.Application;
import android.content.Context;
import android.view.LayoutInflater;
import com.kwad.components.offline.api.core.api.IOfflineCompoWrapper;

public final class i extends IOfflineCompoWrapper {
    public i(String str) {
        super(str);
    }

    @Override
    public final Context unwrapContextIfNeed(Context context) {
        return com.kwad.library.b.c.a.unwrapContextIfNeed(context);
    }

    @Override
    public final Context wrapContextIfNeed(Context context) {
        return com.kwad.library.b.c.a.g(context, this.mOfflinePackageName);
    }

    @Override
    public final Application wrapGetApplication(Context context) {
        return com.kwad.sdk.m.l.KT();
    }

    @Override
    public final LayoutInflater wrapInflaterIfNeed(LayoutInflater layoutInflater) {
        return com.kwad.library.b.c.a.a(layoutInflater, this.mOfflinePackageName);
    }
}
