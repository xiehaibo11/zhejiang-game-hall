package com.tkay.basead.ui;

import android.content.Context;
import android.util.Log;
import android.view.ViewGroup;
import com.tkay.basead.ui.BaseMediaATView;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public class MraidMediaView extends BaseMediaATView {
    private MraidContainerView g;
    private a h;

    public interface a {
        void a();

        void a(String str);
    }

    public MraidMediaView(Context context) {
        this(context, null, null, false, null);
    }

    public MraidMediaView(Context context, h hVar, i iVar, boolean z, BaseMediaATView.a aVar) {
        super(context, hVar, iVar, z, aVar);
    }

    public void fireAudioVolumeChange(boolean z) {
        MraidContainerView mraidContainerView = this.g;
        if (mraidContainerView != null) {
            mraidContainerView.fireAudioVolumeChange(z);
        }
    }

    @Override // com.tkay.basead.ui.BaseMediaATView
    public void init(int i, int i2) {
        super.init(i, i2);
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.f5735a, this.c, new AnonymousClass1());
        this.g = mraidContainerView;
        mraidContainerView.init();
        if (this.f == null || this.g == null) {
            return;
        }
        this.f.removeAllViews();
        this.f.addView(this.g, new ViewGroup.LayoutParams(-1, -1));
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.MraidMediaView$1, reason: invalid class name */
    final class AnonymousClass1 implements MraidContainerView.a {
        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void b() {
        }

        AnonymousClass1() {
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a(String str) {
            if (MraidMediaView.this.h != null) {
                MraidMediaView.this.h.a(str);
            }
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a() {
            if (MraidMediaView.this.h != null) {
                MraidMediaView.this.h.a();
            }
        }
    }

    private void a() {
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.f5735a, this.c, new AnonymousClass1());
        this.g = mraidContainerView;
        mraidContainerView.init();
        if (this.f == null || this.g == null) {
            return;
        }
        this.f.removeAllViews();
        this.f.addView(this.g, new ViewGroup.LayoutParams(-1, -1));
    }

    public void setMraidWebViewListener(a aVar) {
        this.h = aVar;
    }

    private static void a(String str) {
        Log.d("MraidMediaView", str);
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        MraidContainerView mraidContainerView = this.g;
        if (mraidContainerView != null) {
            mraidContainerView.fireMraidIsViewable(z);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // com.tkay.basead.ui.BaseMediaATView
    public void destroy() {
        super.destroy();
        MraidContainerView mraidContainerView = this.g;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }
}
