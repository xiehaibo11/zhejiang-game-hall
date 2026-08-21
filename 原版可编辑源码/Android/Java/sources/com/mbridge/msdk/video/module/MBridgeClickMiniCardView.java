package com.mbridge.msdk.video.module;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.js.factory.b;
import org.json.JSONObject;

public class MBridgeClickMiniCardView extends MBridgeH5EndCardView {
    private boolean y;

    public MBridgeClickMiniCardView(Context context) {
        super(context);
        this.y = false;
    }

    public MBridgeClickMiniCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.y = false;
    }

    @Override
    public void onSelfConfigurationChanged(Configuration configuration) {
        if (this.f) {
            a(this.n);
        }
        super.onSelfConfigurationChanged(configuration);
    }

    @Override
    protected final RelativeLayout.LayoutParams b() {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(13, -1);
        return layoutParams;
    }

    @Override
    protected final void e() {
        super.e();
        if (this.f) {
            setBackgroundResource(findColor("mbridge_reward_minicard_bg"));
            a(this.n);
            setClickable(true);
        }
    }

    @Override
    protected final String a() {
        if (this.b == null) {
            return null;
        }
        CampaignEx.c rewardTemplateMode = this.b.getRewardTemplateMode();
        String strD = rewardTemplateMode != null ? rewardTemplateMode.d() : null;
        if (TextUtils.isEmpty(strD) || !strD.contains(".zip")) {
            return strD;
        }
        String h5ResAddress = H5DownLoadManager.getInstance().getH5ResAddress(strD);
        return !TextUtils.isEmpty(h5ResAddress) ? h5ResAddress : strD;
    }

    @Override
    public void preLoadData(b bVar) {
        super.preLoadData(bVar);
        setCloseVisible(0);
    }

    @Override
    public void webviewshow() {
        if (this.q != null) {
            this.q.post(new Runnable() {
                @Override
                public final void run() {
                    try {
                        z.a(MBridgeBaseView.TAG, "webviewshow");
                        String string = "";
                        try {
                            int[] iArr = new int[2];
                            MBridgeClickMiniCardView.this.q.getLocationOnScreen(iArr);
                            z.d(MBridgeBaseView.TAG, "coordinate:" + iArr[0] + "--" + iArr[1]);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("startX", ae.a(a.f().j(), (float) iArr[0]));
                            jSONObject.put("startY", ae.a(a.f().j(), (float) iArr[1]));
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
                        }
                        h.a().a((WebView) MBridgeClickMiniCardView.this.q, "webviewshow", Base64.encodeToString(string.toString().getBytes(), 2));
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
        }
    }

    private void a(View view) {
        int iH = ae.h(this.a);
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.width = (int) ((iH * 0.7f) + 0.5f);
        layoutParams.height = (int) ((ae.g(this.a) * 0.7f) + 0.5f);
        view.setLayoutParams(layoutParams);
    }

    public void setMBridgeClickMiniCardViewTransparent() {
        setBackgroundColor(0);
    }

    public void setMBridgeClickMiniCardViewClickable(boolean z) {
        setClickable(z);
    }

    public void setMiniCardLocation(int i, int i2, int i3, int i4) {
        this.y = true;
        resizeMiniCard(i3, i4);
    }

    public void resizeMiniCard(int i, int i2) {
        if (Build.VERSION.SDK_INT < 11) {
            return;
        }
        View viewFindViewById = ((Activity) this.a).getWindow().findViewById(R.id.content);
        int width = viewFindViewById.getWidth();
        int height = viewFindViewById.getHeight();
        if (i <= 0 || i2 <= 0 || i > width || i2 > height) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = this.n.getLayoutParams();
        layoutParams.width = i;
        layoutParams.height = i2;
        this.n.setLayoutParams(layoutParams);
    }

    public void setRadius(int i) {
        if (i > 0) {
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setCornerRadius(ae.b(getContext(), i));
            gradientDrawable.setColor(-1);
            if (Build.VERSION.SDK_INT >= 16) {
                this.q.setBackground(gradientDrawable);
            } else {
                this.q.setBackgroundDrawable(gradientDrawable);
            }
            if (Build.VERSION.SDK_INT >= 21) {
                this.q.setClipToOutline(true);
            }
        }
    }
}
