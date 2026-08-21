package com.tkay.core.api;

import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.core.common.b.k;
import com.tkay.core.common.f.d;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class BaseAd implements IATThirdPartyMaterial {
    public abstract void destroy();

    public abstract ViewGroup getCustomAdContainer();

    public abstract d getDetail();

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public abstract Map<String, Object> getNetworkInfoMap();

    public abstract void registerListener(View view, List<View> list, FrameLayout.LayoutParams layoutParams);

    public abstract void setNativeEventListener(k kVar);

    public abstract void setNetworkInfoMap(Map<String, Object> map);

    public abstract void setTrackingInfo(d dVar);

    public abstract void setVideoMute(boolean z);
}
