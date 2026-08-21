package com.tkay.basead.ui;

import android.content.Context;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public class MraidBannerATView extends BaseBannerATView {
    MraidContainerView u;

    public MraidBannerATView(Context context) {
        super(context);
    }

    public MraidBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
        c();
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0068  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void o() {
        /*
            Method dump skipped, instruction units count: 315
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.MraidBannerATView.o():void");
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.MraidBannerATView$1, reason: invalid class name */
    final class AnonymousClass1 implements MraidContainerView.a {
        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void b() {
        }

        AnonymousClass1() {
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a(String str) {
            MraidBannerATView.this.d.v(str);
            MraidBannerATView.this.b(1);
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a() {
            try {
                MraidBannerATView.this.b();
            } catch (Throwable unused) {
            }
        }
    }

    @Override // com.tkay.basead.ui.BaseBannerATView
    protected final void b() {
        if (this.u == null) {
            return;
        }
        super.b();
    }

    @Override // com.tkay.basead.ui.BaseATView
    public void destroy() {
        super.destroy();
        MraidContainerView mraidContainerView = this.u;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0068  */
    @Override // com.tkay.basead.ui.BaseATView
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void a() {
        /*
            Method dump skipped, instruction units count: 315
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.MraidBannerATView.a():void");
    }
}
