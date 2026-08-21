.class public final Lcom/kwad/components/offline/tk/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/tk/IOfflineTKRenderListener;


# instance fields
.field private final ZR:Lcom/kwad/sdk/components/k;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/components/k;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/tk/a/f;->ZR:Lcom/kwad/sdk/components/k;

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/Throwable;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/f;->ZR:Lcom/kwad/sdk/components/k;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/k;->onFailed(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/f;->ZR:Lcom/kwad/sdk/components/k;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/components/k;->onSuccess()V

    :cond_0
    return-void
.end method
