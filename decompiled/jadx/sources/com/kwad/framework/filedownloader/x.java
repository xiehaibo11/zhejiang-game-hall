package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.s;

/* JADX INFO: loaded from: classes2.dex */
public interface x extends s.a {

    public interface a {
        boolean a(MessageSnapshot messageSnapshot);

        boolean b(MessageSnapshot messageSnapshot);

        boolean c(MessageSnapshot messageSnapshot);

        boolean d(MessageSnapshot messageSnapshot);

        MessageSnapshot g(Throwable th);

        t tv();
    }

    public interface b {
        void start();
    }

    void free();

    long getStatusUpdateTime();

    long getTotalBytes();

    boolean pause();

    void reset();

    byte sX();

    Throwable sZ();

    int tb();

    boolean td();

    void tw();

    long tx();
}
