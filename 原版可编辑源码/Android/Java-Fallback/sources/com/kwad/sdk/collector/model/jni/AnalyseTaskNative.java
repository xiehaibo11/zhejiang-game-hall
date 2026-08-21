package com.kwad.sdk.collector.model.jni;

public class AnalyseTaskNative extends com.kwad.sdk.collector.model.jni.NativeObject implements com.kwad.sdk.collector.model.a {
    public AnalyseTaskNative(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r2, java.util.Set<java.lang.String> r3, long r4) {
            r1 = this;
            r1.<init>()
            int r0 = r3.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            r3.toArray(r0)
            long r2 = r2.mPtr
            long r2 = com.kwad.sdk.collector.AppStatusNative.nativeCreateAnalyseTask(r2, r0, r4)
            r1.mPtr = r2
            return
    }

    @Override
    public void destroy() {
            r4 = this;
            long r0 = r4.mPtr
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            long r0 = r4.mPtr
            com.kwad.sdk.collector.AppStatusNative.nativeDeleteAnalyseTask(r0)
            r4.mPtr = r2
        Lf:
            return
    }
}
