package com.mbridge.msdk.widget.custom;

/* JADX INFO: compiled from: CustomViewRenderListener.java */
/* JADX INFO: loaded from: classes3.dex */
public interface a {

    /* JADX INFO: renamed from: com.mbridge.msdk.widget.custom.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: CustomViewRenderListener.java */
    public enum EnumC0311a {
        CLICK_EVENT_OPEN_PRIVACY,
        CLICK_EVENT_DOWNLOAD,
        CLICK_EVENT_CLOSE
    }

    void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap);

    void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap, EnumC0311a enumC0311a);

    void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap, Exception exc);

    void b(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap);

    void c(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap);
}
