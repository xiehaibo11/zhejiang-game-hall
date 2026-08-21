.class public interface abstract Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;
.super Ljava/lang/Object;


# virtual methods
.method public abstract createJsBridge2(Landroid/content/Context;Ljava/lang/Object;)Ljava/lang/Object;
.end method

.method public abstract getFileProvider()Ljava/lang/String;
.end method

.method public abstract getGeckoChannel(Z)Ljava/lang/String;
.end method

.method public abstract getHeaderMap(Ljava/lang/String;)Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getOfflineCacheDir()Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract getSafeJsbHostList()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getShareCookie(Ljava/lang/String;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public abstract interceptRequest(Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
.end method

.method public abstract isSafeDomain(Ljava/lang/String;)Z
.end method

.method public abstract setCachePrefix(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/util/regex/Pattern;",
            ">;)V"
        }
    .end annotation
.end method
