.class final Lcom/kwad/components/core/i/a$2;
.super Lcom/kwad/components/core/m/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/i/a;->a(Lcom/kwad/components/core/p/a/b;Ljava/util/List;ZZLcom/kwad/components/core/p/h;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic BD:Lcom/kwad/components/core/p/a/b;

.field final synthetic KN:Ljava/util/List;

.field final synthetic KO:Z

.field final synthetic KP:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/a/b;Ljava/util/List;ZZ)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/i/a$2;->BD:Lcom/kwad/components/core/p/a/b;

    iput-object p3, p0, Lcom/kwad/components/core/i/a$2;->KN:Ljava/util/List;

    iput-boolean p4, p0, Lcom/kwad/components/core/i/a$2;->KO:Z

    iput-boolean p5, p0, Lcom/kwad/components/core/i/a$2;->KP:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/m/a;-><init>(Lcom/kwad/components/core/p/a/b;)V

    return-void
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/i/a$2;->mm()Lcom/kwad/components/core/p/a;

    move-result-object v0

    return-object v0
.end method

.method public final mm()Lcom/kwad/components/core/p/a;
    .locals 5

    new-instance v0, Lcom/kwad/components/core/p/a;

    iget-object v1, p0, Lcom/kwad/components/core/i/a$2;->BD:Lcom/kwad/components/core/p/a/b;

    iget-object v2, p0, Lcom/kwad/components/core/i/a$2;->KN:Ljava/util/List;

    iget-boolean v3, p0, Lcom/kwad/components/core/i/a$2;->KO:Z

    const/4 v4, 0x0

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/components/core/p/a;-><init>(Lcom/kwad/components/core/p/a/b;Ljava/util/List;ZLcom/kwad/components/core/p/a/d;)V

    iget-boolean v1, p0, Lcom/kwad/components/core/i/a$2;->KP:Z

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/p/a;->aC(I)V

    return-object v0
.end method
