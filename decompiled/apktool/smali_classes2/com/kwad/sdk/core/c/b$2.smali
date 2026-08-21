.class final Lcom/kwad/sdk/core/c/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/c/b;->onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/sdk/core/c/c;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aoy:Lcom/kwad/sdk/core/c/b;

.field final synthetic aoz:Landroid/os/Bundle;

.field final synthetic mJ:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/c/b;Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/c/b$2;->aoy:Lcom/kwad/sdk/core/c/b;

    iput-object p2, p0, Lcom/kwad/sdk/core/c/b$2;->mJ:Landroid/app/Activity;

    iput-object p3, p0, Lcom/kwad/sdk/core/c/b$2;->aoz:Landroid/os/Bundle;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private c(Lcom/kwad/sdk/core/c/c;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/c/b$2;->mJ:Landroid/app/Activity;

    iget-object v1, p0, Lcom/kwad/sdk/core/c/b$2;->aoz:Landroid/os/Bundle;

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/core/c/c;->a(Ljava/lang/Object;Landroid/os/Bundle;)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/c/c;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/c/b$2;->c(Lcom/kwad/sdk/core/c/c;)V

    return-void
.end method
