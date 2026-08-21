.class final Lcom/kwad/components/core/g/c$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/g/c$1;->u(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/components/core/video/h;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic KB:J

.field final synthetic KC:Lcom/kwad/components/core/g/c$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/g/c$1;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/g/c$1$1;->KC:Lcom/kwad/components/core/g/c$1;

    iput-wide p2, p0, Lcom/kwad/components/core/g/c$1$1;->KB:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private e(Lcom/kwad/components/core/video/h;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/g/c$1$1;->KC:Lcom/kwad/components/core/g/c$1;

    iget-object v0, v0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-static {v0}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/components/core/g/c;)J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/components/core/g/c$1$1;->KB:J

    invoke-interface {p1, v0, v1, v2, v3}, Lcom/kwad/components/core/video/h;->onMediaPlayProgress(JJ)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/video/h;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/g/c$1$1;->e(Lcom/kwad/components/core/video/h;)V

    return-void
.end method
