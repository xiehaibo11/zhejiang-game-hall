package com.kwad.components.ad.widget.tailframe.appbar;

import android.content.Context;
import android.graphics.Color;
import android.support.v4.content.ContextCompat;
import android.util.AttributeSet;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;

public class TailFrameBarAppPortraitHorizontal extends a {
    public TailFrameBarAppPortraitHorizontal(Context context) {
        this(context, null);
    }

    public TailFrameBarAppPortraitHorizontal(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TailFrameBarAppPortraitHorizontal(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override
    public final void b(AdTemplate adTemplate) {
        if (d.s(adTemplate)) {
            this.GA.setBackgroundColor(ContextCompat.getColor(getContext(), R.color.ksad_translucent));
            this.li.setTextColor(Color.parseColor("#FFFFFF"));
            this.HJ.setTextColor(Color.parseColor("#FFFFFF"));
        } else {
            this.GA.setBackgroundColor(Color.parseColor("#FFFFFF"));
        }
        super.b(adTemplate);
    }

    @Override
    public int getLayoutId() {
        return R.layout.ksad_video_tf_bar_app_portrait_horizontal;
    }
}
