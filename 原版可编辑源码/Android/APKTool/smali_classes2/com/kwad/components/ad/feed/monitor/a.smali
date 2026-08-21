.class public final Lcom/kwad/components/ad/feed/monitor/a;
.super Ljava/lang/Object;


# direct methods
.method public static d(Lcom/kwad/sdk/core/response/model/AdTemplate;)Landroid/util/Pair;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x2

    if-eqz v1, :cond_0

    new-instance p0, Landroid/util/Pair;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "empty videoUrl"

    invoke-direct {p0, v0, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v1

    const-string v3, ""

    const-wide/16 v4, 0x0

    const/4 v6, 0x1

    if-gez v1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/q;->L(Ljava/io/File;)Z

    move-result v7

    if-eqz v7, :cond_1

    goto :goto_0

    :cond_1
    new-instance v3, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v3}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v7

    invoke-virtual {v7, v0, v3}, Lcom/kwad/sdk/core/diskcache/b/a;->a(Ljava/lang/String;Lcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    if-eqz v0, :cond_2

    move v2, v6

    :cond_2
    iget-object v0, v3, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    move-object v3, v0

    move v6, v2

    :goto_0
    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v4

    goto :goto_1

    :cond_3
    if-lez v1, :cond_6

    new-instance v3, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v3}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v4

    invoke-virtual {v4, v0}, Lcom/kwad/sdk/core/videocache/f;->dP(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_5

    mul-int/lit16 v5, v1, 0x400

    invoke-virtual {v4, v0, v5, v3}, Lcom/kwad/sdk/core/videocache/f;->a(Ljava/lang/String;ILcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    if-eqz v0, :cond_4

    move v2, v6

    :cond_4
    move v6, v2

    :cond_5
    iget-object v3, v3, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    mul-int/lit16 v1, v1, 0x400

    int-to-long v0, v1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    goto :goto_2

    :cond_6
    :goto_1
    invoke-virtual {p0, v4, v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    :goto_2
    new-instance p0, Landroid/util/Pair;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, v0, v3}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p0
.end method
