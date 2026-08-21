package com.tkay.expressad.video.signal.factory;

import com.tkay.expressad.video.signal.c;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.g;
import com.tkay.expressad.video.signal.i;
import com.tkay.expressad.video.signal.j;

public interface IJSFactory {
    com.tkay.expressad.video.signal.a getActivityProxy();

    i getIJSRewardVideoV1();

    com.tkay.expressad.video.signal.b getJSBTModule();

    c getJSCommon();

    e getJSContainerModule();

    g getJSNotifyProxy();

    j getJSVideoModule();
}
