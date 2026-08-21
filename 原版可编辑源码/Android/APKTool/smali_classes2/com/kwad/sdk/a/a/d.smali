.class public final Lcom/kwad/sdk/a/a/d;
.super Ljava/lang/Object;


# direct methods
.method public static A(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zU()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    const-string v2, "[appname]"

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    const/4 v3, 0x1

    invoke-static {v1, v2, v3}, Lcom/kwad/components/core/t/e;->a(JZ)Ljava/lang/String;

    move-result-object v1

    const-string v2, "[appsize]"

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    const-string v1, "[appver]"

    invoke-virtual {v0, v1, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static yh()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zV()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "\u5b89\u88c5"

    :cond_0
    return-object v0
.end method

.method public static yi()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zW()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "\u53d6\u6d88"

    :cond_0
    return-object v0
.end method
