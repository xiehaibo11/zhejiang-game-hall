package com.xiaomi.push;

import com.xiaomi.channel.commonutils.logger.LoggerInterface;

/* JADX INFO: loaded from: classes4.dex */
public class di implements LoggerInterface {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private LoggerInterface f8106a;
    private LoggerInterface b;

    public di(LoggerInterface loggerInterface, LoggerInterface loggerInterface2) {
        this.f8106a = null;
        this.b = null;
        this.f8106a = loggerInterface;
        this.b = loggerInterface2;
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public void log(String str) {
        LoggerInterface loggerInterface = this.f8106a;
        if (loggerInterface != null) {
            loggerInterface.log(str);
        }
        LoggerInterface loggerInterface2 = this.b;
        if (loggerInterface2 != null) {
            loggerInterface2.log(str);
        }
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public void log(String str, Throwable th) {
        LoggerInterface loggerInterface = this.f8106a;
        if (loggerInterface != null) {
            loggerInterface.log(str, th);
        }
        LoggerInterface loggerInterface2 = this.b;
        if (loggerInterface2 != null) {
            loggerInterface2.log(str, th);
        }
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public void setTag(String str) {
    }
}
