package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.bus.EventBus;
import com.mbridge.msdk.dycreator.listener.action.EAction;
import com.mbridge.msdk.f.a.a;
import com.mbridge.msdk.f.a.b;

/* JADX INFO: loaded from: classes2.dex */
public class MBCountDownView extends MBTextView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3186a;
    private MBCountDownView b;

    public MBCountDownView(Context context) {
        super(context);
        this.b = this;
    }

    public MBCountDownView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = this;
    }

    public MBCountDownView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = this;
    }

    @Override // com.mbridge.msdk.dycreator.baseview.MBTextView, android.widget.TextView, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        b bVar = this.f3186a;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.MBTextView, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        b bVar = this.f3186a;
        if (bVar != null) {
            bVar.b();
        }
    }

    public void initView(final String str, final String str2, int i) {
        this.f3186a = new b().b(i * 1000).a(1000L).a(new a() { // from class: com.mbridge.msdk.dycreator.baseview.MBCountDownView.1
            @Override // com.mbridge.msdk.f.a.a
            public void onTick(long j) {
                if (str2.startsWith(com.tkay.expressad.video.dynview.a.a.Q)) {
                    MBCountDownView.this.b.setText((j / 1000) + "s" + str);
                    return;
                }
                MBCountDownView.this.b.setText(MBCountDownView.this.b + " " + (j / 1000) + "s");
            }

            @Override // com.mbridge.msdk.f.a.a
            public void onFinish() {
                MBCountDownView.this.f3186a.b();
                SplashResData splashResData = new SplashResData();
                splashResData.seteAction(EAction.CLOSE);
                EventBus.getDefault().post(splashResData);
            }
        });
    }
}
