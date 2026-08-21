.class final Lcom/kwad/components/core/offline/init/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/ICache;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getPreCacheUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    return-object p1

    :cond_0
    const/4 v0, 0x0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v1

    if-gez v1, :cond_2

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v0

    goto :goto_0

    :cond_2
    if-nez v1, :cond_3

    goto :goto_0

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/videocache/f;->dN(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1
.end method
