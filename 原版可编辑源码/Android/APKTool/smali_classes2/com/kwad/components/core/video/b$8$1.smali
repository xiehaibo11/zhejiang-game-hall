.class final Lcom/kwad/components/core/video/b$8$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/video/b$8;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic So:Lcom/kwad/components/core/video/b$8;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/video/b$8;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/video/b$8$1;->So:Lcom/kwad/components/core/video/b$8;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/b$8$1;->So:Lcom/kwad/components/core/video/b$8;

    iget-object v0, v0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    iget-object v1, p0, Lcom/kwad/components/core/video/b$8$1;->So:Lcom/kwad/components/core/video/b$8;

    iget-object v1, v1, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/b;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->onPlayStateChanged(I)V

    return-void
.end method
