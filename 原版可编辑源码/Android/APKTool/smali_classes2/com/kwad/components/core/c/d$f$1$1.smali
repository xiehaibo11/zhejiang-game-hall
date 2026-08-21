.class final Lcom/kwad/components/core/c/d$f$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$f$1;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Iu:Lcom/kwad/sdk/internal/api/SceneImpl;

.field final synthetic Iv:I

.field final synthetic Iw:Lcom/kwad/components/core/c/d$f$1;

.field final synthetic bv:Lcom/kwad/components/core/p/a/a;

.field final synthetic ie:Lcom/kwad/components/core/response/model/AdResultData;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$f$1;Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/core/response/model/AdResultData;ILcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iw:Lcom/kwad/components/core/c/d$f$1;

    iput-object p2, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iu:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object p3, p0, Lcom/kwad/components/core/c/d$f$1$1;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    iput p4, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iv:I

    iput-object p5, p0, Lcom/kwad/components/core/c/d$f$1$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iw:Lcom/kwad/components/core/c/d$f$1;

    iget-object v1, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iu:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v2, p0, Lcom/kwad/components/core/c/d$f$1$1;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    iget v3, p0, Lcom/kwad/components/core/c/d$f$1$1;->Iv:I

    new-instance v4, Lcom/kwad/components/core/c/d$f$1$1$1;

    invoke-direct {v4, p0}, Lcom/kwad/components/core/c/d$f$1$1$1;-><init>(Lcom/kwad/components/core/c/d$f$1$1;)V

    invoke-static {v0, v1, v2, v3, v4}, Lcom/kwad/components/core/c/d$f$1;->a(Lcom/kwad/components/core/c/d$f$1;Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/core/response/model/AdResultData;ILcom/kwad/components/core/c/d$c;)V

    return-void
.end method
