.class final Lcom/kwad/components/core/c/d$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$1;->mm()Lcom/kwad/components/core/p/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/c<",
        "Lcom/kwad/components/core/p/a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic Il:Lcom/kwad/components/core/c/d$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$1$1;->Il:Lcom/kwad/components/core/c/d$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private mn()Lcom/kwad/components/core/p/a;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/c/d$1$1;->Il:Lcom/kwad/components/core/c/d$1;

    iget-object v0, v0, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/p/a/a;->getAdStyle()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const-class v0, Lcom/kwad/components/ad/b/h;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/c/d$1$1;->Il:Lcom/kwad/components/core/c/d$1;

    iget-object v1, v1, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-interface {v0}, Lcom/kwad/components/ad/b/h;->R()Ljava/util/List;

    move-result-object v0

    iput-object v0, v1, Lcom/kwad/components/core/p/a/a;->PJ:Ljava/util/List;

    :cond_0
    new-instance v0, Lcom/kwad/components/core/p/a;

    iget-object v1, p0, Lcom/kwad/components/core/c/d$1$1;->Il:Lcom/kwad/components/core/c/d$1;

    iget-object v1, v1, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/p/a;-><init>(Lcom/kwad/components/core/p/a/a;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic get()Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/c/d$1$1;->mn()Lcom/kwad/components/core/p/a;

    move-result-object v0

    return-object v0
.end method
