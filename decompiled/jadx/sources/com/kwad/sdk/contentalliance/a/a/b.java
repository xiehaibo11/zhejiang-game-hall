package com.kwad.sdk.contentalliance.a.a;

import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.VideoPlayerStatus;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public AdTemplate adTemplate;
    public com.kwad.sdk.contentalliance.a.a.a aka;
    public boolean isNoCache;
    public String manifest;
    public VideoPlayerStatus videoPlayerStatus;
    public String videoUrl;

    public static class a {
        private AdTemplate adTemplate;
        private com.kwad.sdk.contentalliance.a.a.a aka;
        private boolean isNoCache = false;
        private String manifest;
        private VideoPlayerStatus videoPlayerStatus;
        private String videoUrl;

        public a(AdTemplate adTemplate) {
            this.adTemplate = adTemplate;
        }

        public a(String str) {
            this.videoUrl = str;
        }

        public final a a(VideoPlayerStatus videoPlayerStatus) {
            this.videoPlayerStatus = videoPlayerStatus;
            return this;
        }

        public final a b(com.kwad.sdk.contentalliance.a.a.a aVar) {
            this.aka = aVar;
            return this;
        }

        public final a bd(boolean z) {
            this.isNoCache = z;
            return this;
        }

        public final a cn(String str) {
            this.videoUrl = str;
            return this;
        }

        public final a co(String str) {
            this.manifest = str;
            return this;
        }

        public final b yS() {
            return new b(this, (byte) 0);
        }
    }

    private b(a aVar) {
        this.aka = new com.kwad.sdk.contentalliance.a.a.a();
        this.isNoCache = false;
        this.adTemplate = aVar.adTemplate;
        this.videoUrl = aVar.videoUrl;
        this.manifest = aVar.manifest;
        this.videoPlayerStatus = aVar.videoPlayerStatus;
        if (aVar.aka != null) {
            this.aka.photoId = aVar.aka.photoId;
            this.aka.clickTime = aVar.aka.clickTime;
            this.aka.adStyle = aVar.aka.adStyle;
            this.aka.contentType = aVar.aka.contentType;
        }
        this.isNoCache = aVar.isNoCache;
    }

    /* synthetic */ b(a aVar, byte b) {
        this(aVar);
    }
}
