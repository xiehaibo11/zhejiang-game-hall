package com.kwad.sdk.collector;

public class AppStatusNative {
    public AppStatusNative() {
            r0 = this;
            r0.<init>()
            return
    }

    public static native java.lang.String[] analyseTaskGetPathSuffixSet(com.kwad.sdk.collector.model.jni.AnalyseTaskNative r0);

    public static native long analyseTaskGetRunningInfo(com.kwad.sdk.collector.model.jni.AnalyseTaskNative r0);

    public static native long analyseTaskGetStartTime(com.kwad.sdk.collector.model.jni.AnalyseTaskNative r0);

    public static native long[] analysis(long[] r0, java.lang.String r1);

    public static native long appRunningInfoGetGranularity(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0);

    public static native long appRunningInfoGetLastRunningTime(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0);

    public static native java.lang.String appRunningInfoGetName(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0);

    public static native java.lang.String appRunningInfoGetPackageName(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0);

    public static native void appRunningInfoSetLastRunningTime(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0, long r1);

    public static native long nativeCreateAnalyseTask(long r0, java.lang.String[] r2, long r3);

    public static native long nativeCreateAppRunningInfo(long r0, java.lang.String r2, java.lang.String r3);

    public static native long nativeCreateRulesTarget();

    public static native long nativeCreateUploadEntry();

    public static native void nativeDeleteAnalyseTask(long r0);

    public static native void nativeDeleteAppRunningInfo(long r0);

    public static native void nativeDeleteRulesTarget(long r0);

    public static native void nativeDeleteUploadEntry(long r0);

    public static native long[] nativeGetUploadEntry(long[] r0, long r1, java.lang.String r3);

    public static native java.lang.String rulesTargetGetPackageName(com.kwad.sdk.collector.model.jni.RulesTargetNative r0);

    public static native java.lang.String[] rulesTargetGetPaths(com.kwad.sdk.collector.model.jni.RulesTargetNative r0);

    public static native void rulesTargetSetPackageName(com.kwad.sdk.collector.model.jni.RulesTargetNative r0, java.lang.String r1);

    public static native void rulesTargetSetPaths(com.kwad.sdk.collector.model.jni.RulesTargetNative r0, java.lang.String[] r1);

    public static native java.lang.String uploadEntryGetOriginFilePath(com.kwad.sdk.collector.model.jni.UploadEntryNative r0);

    public static native java.lang.String uploadEntryGetPackageName(com.kwad.sdk.collector.model.jni.UploadEntryNative r0);

    public static native void uploadEntrySetOriginFilePath(com.kwad.sdk.collector.model.jni.UploadEntryNative r0, java.lang.String r1);

    public static native void uploadEntrySetPackageName(com.kwad.sdk.collector.model.jni.UploadEntryNative r0, java.lang.String r1);
}
