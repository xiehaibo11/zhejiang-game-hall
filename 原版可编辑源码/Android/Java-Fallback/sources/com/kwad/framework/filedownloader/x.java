package com.kwad.framework.filedownloader;

public interface x extends com.kwad.framework.filedownloader.s.a {

    public interface a {
        boolean a(com.kwad.framework.filedownloader.message.MessageSnapshot r1);

        boolean b(com.kwad.framework.filedownloader.message.MessageSnapshot r1);

        boolean c(com.kwad.framework.filedownloader.message.MessageSnapshot r1);

        boolean d(com.kwad.framework.filedownloader.message.MessageSnapshot r1);

        com.kwad.framework.filedownloader.message.MessageSnapshot g(java.lang.Throwable r1);

        com.kwad.framework.filedownloader.t tv();
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

    java.lang.Throwable sZ();

    int tb();

    boolean td();

    void tw();

    long tx();
}
