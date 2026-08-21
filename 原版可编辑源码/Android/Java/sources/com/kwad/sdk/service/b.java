package com.kwad.sdk.service;

import com.ksad.annotation.invoker.ForInvoker;
import com.kwad.components.ad.feed.FeedDownloadActivityProxy;
import com.kwad.components.ad.fullscreen.KsFullScreenLandScapeVideoActivityProxy;
import com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy;
import com.kwad.components.ad.reward.KSRewardLandScapeVideoActivityProxy;
import com.kwad.components.ad.reward.KSRewardVideoActivityProxy;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.internal.api.VideoPlayConfigImpl;
import com.kwad.components.core.internal.api.d;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.page.AdWebViewVideoActivityProxy;
import com.kwad.framework.filedownloader.services.FileDownloadServiceProxy;
import com.kwad.sdk.internal.api.SceneImpl;
import java.util.HashMap;
import java.util.Map;

public final class b {
    private static final Map<Class<?>, Class<?>> aHz = new HashMap();
    private static final Map<Class<?>, Class<?>> aHA = new HashMap();
    private static boolean aHB = false;
    private static boolean aHC = false;

    private static synchronized void HA() {
        if (aHC) {
            return;
        }
        HB();
        aHC = true;
    }

    @ForInvoker(methodId = "initModeImplForInvoker")
    private static void HB() {
        KSAdVideoPlayConfigImpl.register();
        d.register();
        VideoPlayConfigImpl.register();
        com.kwad.components.core.q.b.register();
        SceneImpl.register();
    }

    private static synchronized void Hy() {
        if (aHB) {
            return;
        }
        Hz();
        aHB = true;
    }

    @ForInvoker(methodId = "initComponentProxyForInvoker")
    private static void Hz() {
        FeedDownloadActivityProxy.register();
        KsFullScreenLandScapeVideoActivityProxy.register();
        KsFullScreenVideoActivityProxy.register();
        KSRewardLandScapeVideoActivityProxy.register();
        KSRewardVideoActivityProxy.register();
        com.kwad.components.core.page.a.register();
        AdWebViewActivityProxy.register();
        AdWebViewVideoActivityProxy.register();
        com.kwad.components.core.page.d.register();
        com.kwad.components.core.s.a.a.register();
        FileDownloadServiceProxy.register();
        com.kwad.sdk.collector.b.a.register();
        a.register();
    }

    public static void a(Class<?> cls, Class<?> cls2) {
        aHz.put(cls, cls2);
    }

    public static void b(Class cls, Class cls2) {
        aHA.put(cls, cls2);
    }

    public static Class<?> g(Class<?> cls) {
        Hy();
        return aHz.get(cls);
    }

    public static Class<?> h(Class<?> cls) {
        HA();
        return aHA.get(cls);
    }

    public static void init() {
        Hy();
        HA();
    }
}
