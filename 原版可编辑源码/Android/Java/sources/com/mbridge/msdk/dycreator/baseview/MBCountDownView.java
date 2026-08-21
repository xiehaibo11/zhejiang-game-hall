package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.bus.EventBus;
import com.mbridge.msdk.dycreator.listener.action.EAction;
import com.mbridge.msdk.f.a.a;
import com.mbridge.msdk.f.a.b;

public class MBCountDownView extends MBTextView {
    private b a;
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

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        b bVar = this.a;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        b bVar = this.a;
        if (bVar != null) {
            bVar.b();
        }
    }

    public void initView(final String str, final String str2, int i) {
        this.a = new b().b(i * 1000).a(1000L).a(new a() {
            @Override
            public void onTick(long j) {
                if (str2.startsWith(com.tkay.expressad.video.dynview.a.a.Q)) {
                    MBCountDownView.this.b.setText((j / 1000) + "s" + str);
                    return;
                }
                MBCountDownView.this.b.setText(MBCountDownView.this.b + " " + (j / 1000) + "s");
            }

            @Override
            public void onFinish() {
                MBCountDownView.this.a.b();
                SplashResData splashResData = new SplashResData();
                splashResData.seteAction(EAction.CLOSE);
                EventBus.getDefault().post(splashResData);
            }
        });
    }
}
