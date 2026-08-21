.class final Lcom/kwad/components/ad/reward/presenter/f/a$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/a$2;->c(Lcom/kwad/components/core/webview/b/b/x;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/components/ad/reward/j/a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic wf:Lcom/kwad/components/ad/reward/presenter/f/a$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/a$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2$1;->wf:Lcom/kwad/components/ad/reward/presenter/f/a$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private c(Lcom/kwad/components/ad/reward/j/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2$1;->wf:Lcom/kwad/components/ad/reward/presenter/f/a$2;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->k(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/j/a;->iP()V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/j/a;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/a$2$1;->c(Lcom/kwad/components/ad/reward/j/a;)V

    return-void
.end method
