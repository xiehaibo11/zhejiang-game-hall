.class public final Lcom/kwad/sdk/core/network/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/network/a/a$a;
    }
.end annotation


# static fields
.field private static apM:Lcom/kwad/sdk/export/proxy/AdHttpProxy;


# direct methods
.method private static Bl()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xJ()Z

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static a(Ljava/lang/String;Ljava/io/OutputStream;Lcom/kwad/sdk/core/network/a/a$a;I)Z
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/core/network/a/a;->Bl()Z

    move-result v0

    sget-object v1, Lcom/kwad/sdk/core/network/a/a;->apM:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    const-string v2, "VideoCacheHelper"

    if-nez v1, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "isAdCacheEnable:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v0

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/network/c/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/a;-><init>()V

    :goto_0
    move-object v1, v0

    sput-object v1, Lcom/kwad/sdk/core/network/a/a;->apM:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    :cond_1
    sget-object v0, Lcom/kwad/framework/b/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_3

    instance-of v0, v1, Lcom/kwad/sdk/core/network/c/b;

    if-eqz v0, :cond_2

    const-string v0, "okHttp"

    goto :goto_1

    :cond_2
    const-string v0, "Http"

    :goto_1
    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "downloadUrlToStream success size:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " url:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v1, p0, p1, p3}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->downloadUrlToStream(Ljava/lang/String;Ljava/io/OutputStream;I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    iput-object p0, p2, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    const/4 p0, 0x0

    return p0
.end method
