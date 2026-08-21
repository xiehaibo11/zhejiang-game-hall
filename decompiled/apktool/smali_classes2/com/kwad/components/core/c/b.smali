.class public final Lcom/kwad/components/core/c/b;
.super Ljava/lang/Object;


# direct methods
.method private static af(Ljava/lang/String;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/c/b;->mi()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/v;->L(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static b(Lcom/kwad/components/core/c/e;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/c/e;->mq()I

    move-result p0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u4f7f\u7528\u7f13\u5b58\u7b56\u7565: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/core/c/b;->af(Ljava/lang/String;)V

    return-void
.end method

.method public static mi()Z
    .locals 2

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    const/4 v1, 0x0

    return v1
.end method
