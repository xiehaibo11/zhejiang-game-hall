package com.tkay.expressad.video.module;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.webkit.URLUtil;
import android.webkit.WebView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.video.signal.factory.b;

public class TkayLandingPageView extends TkayH5EndCardView {
    public TkayLandingPageView(Context context) {
        super(context);
    }

    public TkayLandingPageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    public void init(Context context) {
        super.init(context);
    }

    @Override
    protected final String a() {
        if (this.b != null) {
            return this.b.ad();
        }
        return null;
    }

    @Override
    public void preLoadData(b bVar) {
        byte b = 0;
        if (this.f) {
            this.s.setFilter(new a(b));
        }
        super.preLoadData(bVar);
        setVisibility(0);
        setCloseVisible(0);
    }

    @Override
    public void webviewshow() {
        try {
            j.a();
            j.a((WebView) this.s, "webviewshow", "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static final class a implements com.tkay.expressad.atsignalcommon.base.a {
        private a() {
        }

        a(byte b) {
            this();
        }

        @Override
        public final boolean a(String str) {
            if (TextUtils.isEmpty(str) || URLUtil.isNetworkUrl(str)) {
                return false;
            }
            s.a(m.a().f(), str, null);
            return true;
        }
    }
}
