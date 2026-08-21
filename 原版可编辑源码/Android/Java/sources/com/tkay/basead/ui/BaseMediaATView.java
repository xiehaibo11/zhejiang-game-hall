package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.FrameLayout;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import java.util.ArrayList;
import java.util.List;

public abstract class BaseMediaATView extends FrameLayout {
    protected h a;
    protected j b;
    protected i c;
    protected a d;
    protected boolean e;
    protected FrameLayout f;
    private int g;
    private int h;
    private CloseImageView i;

    public interface a {
        void onClickCloseView();
    }

    public void destroy() {
    }

    public View getMonitorClickView() {
        return null;
    }

    public BaseMediaATView(Context context) {
        super(context);
        this.g = 0;
        this.h = 0;
    }

    public BaseMediaATView(Context context, h hVar, i iVar, boolean z, a aVar) {
        super(context);
        this.g = 0;
        this.h = 0;
        this.a = hVar;
        this.b = iVar.m;
        this.e = z;
        this.d = aVar;
        this.c = iVar;
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "base_myoffer_media_ad_view", "layout"), this);
        this.f = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "base_media_view_content", "id"));
        this.i = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "base_media_ad_close", "id"));
    }

    public int getMediaViewWidth() {
        return this.g;
    }

    public int getMediaViewHeight() {
        return this.h;
    }

    public void init(int i, int i2) {
        this.g = i;
        this.h = i2;
        CloseImageView closeImageView = this.i;
        if (closeImageView != null) {
            if (this.e) {
                closeImageView.setVisibility(0);
            } else {
                closeImageView.setVisibility(8);
            }
            a(this.i, this.b.h());
            this.i.setOnClickListener(new 1());
        }
    }

    private void a() {
        CloseImageView closeImageView = this.i;
        if (closeImageView == null) {
            return;
        }
        if (this.e) {
            closeImageView.setVisibility(0);
        } else {
            closeImageView.setVisibility(8);
        }
        a(this.i, this.b.h());
        this.i.setOnClickListener(new 1());
    }

    final class 1 implements View.OnClickListener {
        1() {
        }

        @Override
        public final void onClick(View view) {
            if (BaseMediaATView.this.d != null) {
                BaseMediaATView.this.d.onClickCloseView();
            }
        }
    }

    private static void a(com.tkay.basead.ui.a aVar, int i) {
        if (aVar != null) {
            aVar.setClickAreaScaleFactor(i != 2 ? i != 3 ? i != 4 ? 1.0f : 0.5f : 0.75f : 1.5f);
        }
    }

    public void notifyClick() {
        j jVar;
        CloseImageView closeImageView = this.i;
        if (closeImageView == null || (jVar = this.b) == null) {
            return;
        }
        a(closeImageView, jVar.g());
    }

    public List<View> getClickViews() {
        return new ArrayList();
    }
}
