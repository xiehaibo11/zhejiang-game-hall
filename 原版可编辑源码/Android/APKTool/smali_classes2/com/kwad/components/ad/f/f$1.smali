.class final Lcom/kwad/components/ad/f/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/widget/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/f/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mY:Lcom/kwad/components/ad/f/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/f$1;->mY:Lcom/kwad/components/ad/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final am()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/f$1;->mY:Lcom/kwad/components/ad/f/f;

    invoke-static {v0}, Lcom/kwad/components/ad/f/f;->a(Lcom/kwad/components/ad/f/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/l;->cB(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method
