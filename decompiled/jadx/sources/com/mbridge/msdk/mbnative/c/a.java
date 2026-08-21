package com.mbridge.msdk.mbnative.c;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.NativeListener;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: compiled from: AdListenerProxy.java */
/* JADX INFO: loaded from: classes2.dex */
public class a implements NativeListener.NativeAdListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3748a = a.class.getSimpleName();
    private NativeListener.NativeAdListener b;
    private boolean c = false;
    private String d;
    private Context e;
    private boolean f;

    public final void a(boolean z) {
        this.f = z;
    }

    public final void a(String str) {
        this.d = str;
    }

    public a() {
    }

    public a(NativeListener.NativeAdListener nativeAdListener) {
        this.b = nativeAdListener;
    }

    public final boolean a() {
        return this.c;
    }

    public final void b() {
        this.c = true;
    }

    @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
    public void onAdLoaded(List<Campaign> list, int i) {
        CopyOnWriteArrayList copyOnWriteArrayList;
        try {
            this.c = false;
            synchronized (list) {
                copyOnWriteArrayList = new CopyOnWriteArrayList(list);
            }
            if (this.b != null) {
                if (copyOnWriteArrayList.size() > 0) {
                    this.b.onAdLoaded(copyOnWriteArrayList, i);
                } else {
                    this.b.onAdLoaded(list, i);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
    public void onAdLoadError(String str) {
        this.c = false;
        z.a(f3748a, "onAdLoadError,message:" + str);
        NativeListener.NativeAdListener nativeAdListener = this.b;
        if (nativeAdListener != null) {
            nativeAdListener.onAdLoadError(str);
            if (this.e == null) {
                this.e = com.mbridge.msdk.foundation.controller.a.f().j();
            }
            if (TextUtils.isEmpty(this.d)) {
                return;
            }
            com.mbridge.msdk.mbnative.d.a.a(this.e, str, this.d, this.f);
        }
    }

    @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
    public void onAdClick(Campaign campaign) {
        z.a(f3748a, "onAdClick,campaign:" + campaign);
        NativeListener.NativeAdListener nativeAdListener = this.b;
        if (nativeAdListener != null) {
            nativeAdListener.onAdClick(campaign);
        }
    }

    @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
    public void onAdFramesLoaded(List<Frame> list) {
        NativeListener.NativeAdListener nativeAdListener = this.b;
        if (nativeAdListener != null) {
            nativeAdListener.onAdFramesLoaded(list);
        }
    }

    @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
    public void onLoggingImpression(int i) {
        z.a(f3748a, "onLoggingImpression,adsourceType:" + i);
        NativeListener.NativeAdListener nativeAdListener = this.b;
        if (nativeAdListener != null) {
            nativeAdListener.onLoggingImpression(i);
        }
    }
}
