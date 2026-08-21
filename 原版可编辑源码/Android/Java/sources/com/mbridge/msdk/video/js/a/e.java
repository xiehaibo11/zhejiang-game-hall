package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.module.MBridgeVideoView;

public class e implements com.mbridge.msdk.video.js.f {
    @Override
    public void a(int i) {
        z.a("DefaultJSNotifyProxy", "onVideoStatusNotify:" + i);
    }

    @Override
    public void a(int i, String str) {
        z.a("DefaultJSNotifyProxy", "onClick:" + i + ",pt:" + str);
    }

    @Override
    public void a(MBridgeVideoView.a aVar) {
        z.a("DefaultJSNotifyProxy", "onProgressNotify:" + aVar.toString());
    }

    @Override
    public void a(Object obj) {
        z.a("DefaultJSNotifyProxy", "onWebviewShow:" + obj);
    }

    @Override
    public void a(int i, int i2, int i3, int i4) {
        z.a("DefaultJSNotifyProxy", "showDataInfo");
    }
}
