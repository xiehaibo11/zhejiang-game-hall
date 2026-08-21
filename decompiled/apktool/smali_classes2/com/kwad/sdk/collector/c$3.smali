.class final Lcom/kwad/sdk/collector/c$3;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/collector/c;->b(Landroid/content/Context;Lcom/kwad/sdk/collector/c$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/sdk/collector/a/a;",
        "Lcom/kwad/sdk/collector/AppStatusRules;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic ajI:Lcom/kwad/sdk/collector/c$a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/collector/c$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/collector/c$3;->ajI:Lcom/kwad/sdk/collector/c$a;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/collector/AppStatusRules;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/collector/c$3;->ajI:Lcom/kwad/sdk/collector/c$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/collector/c$a;->b(Lcom/kwad/sdk/collector/AppStatusRules;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/kwad/sdk/collector/a/a;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/p;->onStartRequest(Lcom/kwad/sdk/core/network/g;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/collector/a/a;ILjava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/collector/c$3;->ajI:Lcom/kwad/sdk/collector/c$a;

    if-eqz p1, :cond_0

    invoke-interface {p1, p2, p3}, Lcom/kwad/sdk/collector/c$a;->k(ILjava/lang/String;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/collector/a/a;

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/collector/c$3;->a(Lcom/kwad/sdk/collector/a/a;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/collector/a/a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/collector/c$3;->a(Lcom/kwad/sdk/collector/a/a;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/collector/AppStatusRules;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/collector/c$3;->a(Lcom/kwad/sdk/collector/AppStatusRules;)V

    return-void
.end method
