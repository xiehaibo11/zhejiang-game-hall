package com.kwad.components.ad.feed.b;

import android.content.Context;
import android.os.SystemClock;
import android.view.View;
import com.kwad.components.core.widget.ComplianceTextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.core.response.model.AdTemplate;

public abstract class a extends com.kwad.components.core.widget.b<AdTemplate> {
    private boolean eg;
    protected long eh;
    protected SimpleImageLoadingListener ei;

    public a(Context context) {
        super(context);
        this.ei = new SimpleImageLoadingListener() {
            @Override
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                com.kwad.components.ad.feed.monitor.b.a(a.this.mAdTemplate, 1, 2, str, null, SystemClock.elapsedRealtime() - a.this.eh);
            }

            @Override
            public final void onLoadingFailed(String str, View view, FailReason failReason) {
                com.kwad.components.ad.feed.monitor.b.a(a.this.mAdTemplate, 2, 2, str, failReason.toString(), SystemClock.elapsedRealtime() - a.this.eh);
            }
        };
    }

    public final void aY() {
        if (this.eg) {
            return;
        }
        this.eg = true;
        com.kwad.components.ad.feed.monitor.b.a(this.mAdTemplate, 1, getStayTime());
    }

    protected final void aZ() {
        ComplianceTextView complianceTextView = (ComplianceTextView) findViewById(R.id.ksad_compliance_view);
        if (!com.kwad.sdk.core.response.b.a.aH(this.mAdInfo)) {
            complianceTextView.setVisibility(8);
        } else {
            complianceTextView.setVisibility(0);
            complianceTextView.setAdTemplate(this.mAdTemplate);
        }
    }
}
