.class public final Lcom/kwad/components/ad/interstitial/monitor/a;
.super Ljava/lang/Object;


# direct methods
.method public static h(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 7

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    invoke-static {p0}, Lcom/kwad/components/ad/interstitial/monitor/b;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v1

    const-string v2, ""

    const-wide/16 v3, 0x0

    const/4 v5, 0x1

    if-gez v1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/q;->L(Ljava/io/File;)Z

    move-result v6

    if-eqz v6, :cond_1

    goto :goto_0

    :cond_1
    new-instance v2, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v2}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v5

    invoke-virtual {v5, v0, v2}, Lcom/kwad/sdk/core/diskcache/b/a;->a(Ljava/lang/String;Lcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    iget-object v2, v2, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    move v5, v0

    :goto_0
    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v3

    :cond_2
    invoke-virtual {p0, v3, v4}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    const/4 v0, 0x2

    goto :goto_1

    :cond_3
    if-lez v1, :cond_5

    new-instance v2, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v2}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/kwad/sdk/core/videocache/f;->dP(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_4

    mul-int/lit16 v4, v1, 0x400

    invoke-virtual {v3, v0, v4, v2}, Lcom/kwad/sdk/core/videocache/f;->a(Ljava/lang/String;ILcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    move v5, v0

    :cond_4
    iget-object v2, v2, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    mul-int/lit16 v1, v1, 0x400

    int-to-long v0, v1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    const/4 v0, 0x3

    :goto_1
    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadType(I)V

    goto :goto_2

    :cond_5
    invoke-virtual {p0, v3, v4}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    invoke-virtual {p0, v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadType(I)V

    :goto_2
    if-nez v5, :cond_6

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    invoke-static {p0, v2}, Lcom/kwad/components/ad/interstitial/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V

    :cond_6
    return v5
.end method
