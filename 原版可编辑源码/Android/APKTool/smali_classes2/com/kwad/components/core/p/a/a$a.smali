.class public final Lcom/kwad/components/core/p/a/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/p/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public Lj:Lcom/kwad/components/core/p/a/b;

.field public PI:Lcom/kwad/components/core/p/b;

.field public PK:Z

.field public PL:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/p/a/a$a;->PI:Lcom/kwad/components/core/p/b;

    return-object p0
.end method

.method public final aE(Z)Lcom/kwad/components/core/p/a/a$a;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/p/a/a$a;->PK:Z

    return-object p0
.end method

.method public final aF(Z)Lcom/kwad/components/core/p/a/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/p/a/a$a;->PL:Z

    return-object p0
.end method

.method public final e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/p/a/a$a;->Lj:Lcom/kwad/components/core/p/a/b;

    return-object p0
.end method

.method public final pI()Lcom/kwad/components/core/p/a/a;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a$a;->Lj:Lcom/kwad/components/core/p/a/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a$a;->PI:Lcom/kwad/components/core/p/b;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "AdRequestParams build Illegal"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    :goto_0
    new-instance v0, Lcom/kwad/components/core/p/a/a;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/kwad/components/core/p/a/a;-><init>(Lcom/kwad/components/core/p/a/a$a;B)V

    return-object v0
.end method
