.class public final Lcom/kwad/components/ad/c/a;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z
    .locals 7

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_0

    return v1

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 p0, 0x0

    return p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v2

    const-string v3, ""

    const-wide/16 v4, 0x0

    if-gez v2, :cond_4

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/utils/q;->L(Ljava/io/File;)Z

    move-result v6

    if-eqz v6, :cond_2

    goto :goto_0

    :cond_2
    new-instance v1, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v3

    invoke-virtual {v3, v0, v1}, Lcom/kwad/sdk/core/diskcache/b/a;->a(Ljava/lang/String;Lcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    iget-object v1, v1, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    move-object v3, v1

    move v1, v0

    :goto_0
    if-eqz v2, :cond_3

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v4

    :cond_3
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadType(I)V

    goto :goto_1

    :cond_4
    if-lez v2, :cond_5

    new-instance v1, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v3

    mul-int/lit16 v2, v2, 0x400

    invoke-virtual {v3, v0, v2, v1}, Lcom/kwad/sdk/core/videocache/f;->a(Ljava/lang/String;ILcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v0

    iget-object v3, v1, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    const/4 v1, 0x3

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadType(I)V

    int-to-long v1, v2

    invoke-virtual {p0, v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    move v1, v0

    goto :goto_2

    :cond_5
    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadType(I)V

    :goto_1
    invoke-virtual {p0, v4, v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadSize(J)V

    :goto_2
    if-nez v1, :cond_6

    invoke-static {p1, p0, v3}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V

    :cond_6
    return v1
.end method
