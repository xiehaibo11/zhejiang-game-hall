package com.xiaomi.push;

import com.xiaomi.channel.commonutils.logger.LoggerInterface;

public class di implements LoggerInterface {
    private LoggerInterface a;
    private LoggerInterface b;

    public di(LoggerInterface loggerInterface, LoggerInterface loggerInterface2) {
        this.a = null;
        this.b = null;
        this.a = loggerInterface;
        this.b = loggerInterface2;
    }

    @Override
    public void log(String str) {
        LoggerInterface loggerInterface = this.a;
        if (loggerInterface != null) {
            loggerInterface.log(str);
        }
        LoggerInterface loggerInterface2 = this.b;
        if (loggerInterface2 != null) {
            loggerInterface2.log(str);
        }
    }

    @Override
    public void log(String str, Throwable th) {
        LoggerInterface loggerInterface = this.a;
        if (loggerInterface != null) {
            loggerInterface.log(str, th);
        }
        LoggerInterface loggerInterface2 = this.b;
        if (loggerInterface2 != null) {
            loggerInterface2.log(str, th);
        }
    }

    @Override
    public void setTag(String str) {
    }
}
