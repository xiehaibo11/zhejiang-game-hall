package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.module.MBridgeVideoView;

/* JADX INFO: compiled from: DefaultJSNotifyProxy.java */
/* JADX INFO: loaded from: classes3.dex */
public class e implements com.mbridge.msdk.video.js.f {
    @Override // com.mbridge.msdk.video.js.f
    public void a(int i) {
        z.a("DefaultJSNotifyProxy", "onVideoStatusNotify:" + i);
    }

    @Override // com.mbridge.msdk.video.js.f
    public void a(int i, String str) {
        z.a("DefaultJSNotifyProxy", "onClick:" + i + ",pt:" + str);
    }

    @Override // com.mbridge.msdk.video.js.f
    public void a(MBridgeVideoView.a aVar) {
        z.a("DefaultJSNotifyProxy", "onProgressNotify:" + aVar.toString());
    }

    @Override // com.mbridge.msdk.video.js.f
    public void a(Object obj) {
        z.a("DefaultJSNotifyProxy", "onWebviewShow:" + obj);
    }

    @Override // com.mbridge.msdk.video.js.f
    public void a(int i, int i2, int i3, int i4) {
        z.a("DefaultJSNotifyProxy", "showDataInfo");
    }
}
