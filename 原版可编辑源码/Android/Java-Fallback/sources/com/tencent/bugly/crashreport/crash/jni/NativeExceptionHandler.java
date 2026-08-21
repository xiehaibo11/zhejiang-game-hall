package com.tencent.bugly.crashreport.crash.jni;

public interface NativeExceptionHandler {
    boolean getAndUpdateAnrState();

    void handleNativeException(int r1, int r2, long r3, long r5, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, int r11, java.lang.String r12, int r13, int r14, int r15, java.lang.String r16, java.lang.String r17);

    void handleNativeException2(int r1, int r2, long r3, long r5, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, int r11, java.lang.String r12, int r13, int r14, int r15, java.lang.String r16, java.lang.String r17, java.lang.String[] r18);

    com.tencent.bugly.crashreport.crash.CrashDetailBean packageCrashDatas(java.lang.String r1, java.lang.String r2, long r3, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, byte[] r14, java.util.Map<java.lang.String, java.lang.String> r15, boolean r16, boolean r17);
}
