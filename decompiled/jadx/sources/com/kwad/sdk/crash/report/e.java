package com.kwad.sdk.crash.report;

import com.kwad.sdk.crash.model.message.ExceptionMessage;
import java.io.File;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes2.dex */
public interface e {
    File Ey();

    void a(ExceptionMessage exceptionMessage, CountDownLatch countDownLatch);
}
