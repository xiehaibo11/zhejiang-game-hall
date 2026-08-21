.class final Lcom/kwad/sdk/api/loader/m$h$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/loader/m$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/api/loader/m$h;->a(Lcom/kwad/sdk/api/loader/v;Lcom/kwad/sdk/api/loader/m$c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/api/loader/m$c<",
        "Lcom/kwad/sdk/api/loader/a$a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aiP:Lcom/kwad/sdk/api/loader/m$c;

.field final synthetic aiQ:Lcom/kwad/sdk/api/loader/v;

.field final synthetic aiW:Lcom/kwad/sdk/api/loader/m$h;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/loader/m$h;Lcom/kwad/sdk/api/loader/v;Lcom/kwad/sdk/api/loader/m$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiW:Lcom/kwad/sdk/api/loader/m$h;

    iput-object p2, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiQ:Lcom/kwad/sdk/api/loader/v;

    iput-object p3, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiP:Lcom/kwad/sdk/api/loader/m$c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private c(Lcom/kwad/sdk/api/loader/a$a;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiQ:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v0}, Lcom/kwad/sdk/api/loader/v;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/g;->ay(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/c;->yk()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getSDKVersion()Ljava/lang/String;

    move-result-object v0

    :cond_0
    iget-object v1, p1, Lcom/kwad/sdk/api/loader/a$a;->sdkVersion:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "UpgradeProducer curVersion:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "-newVersion"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiQ:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v1}, Lcom/kwad/sdk/api/loader/v;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-wide v2, p1, Lcom/kwad/sdk/api/loader/a$a;->interval:J

    const-string v4, "interval"

    invoke-static {v1, v4, v2, v3}, Lcom/kwad/sdk/api/loader/t;->a(Landroid/content/Context;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiQ:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v1}, Lcom/kwad/sdk/api/loader/v;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-string v4, "lastUpdateTime"

    invoke-static {v1, v4, v2, v3}, Lcom/kwad/sdk/api/loader/t;->a(Landroid/content/Context;Ljava/lang/String;J)V

    invoke-virtual {p1}, Lcom/kwad/sdk/api/loader/a$a;->yo()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiQ:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {p1}, Lcom/kwad/sdk/api/loader/v;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/u;->aE(Landroid/content/Context;)V

    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "DynamicType == -1, curVersion: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    return-void

    :cond_1
    iget-object v1, p1, Lcom/kwad/sdk/api/loader/a$a;->sdkVersion:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kwad/sdk/api/loader/g;->F(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {p1}, Lcom/kwad/sdk/api/loader/a$a;->yn()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/m$h$1;->aiP:Lcom/kwad/sdk/api/loader/m$c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/loader/m$c;->g(Ljava/lang/Object;)V

    return-void

    :cond_2
    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "No new sdkVersion. remote sdkVersion:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p1, Lcom/kwad/sdk/api/loader/a$a;->sdkVersion:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " currentDynamicVersion:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " dynamicType:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/kwad/sdk/api/loader/a$a;->aib:I

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic g(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/api/loader/a$a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/api/loader/m$h$1;->c(Lcom/kwad/sdk/api/loader/a$a;)V

    return-void
.end method
