.class final Lcom/kwad/sdk/core/video/videoview/a$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/video/videoview/a;->DA()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic awe:Lcom/kwad/sdk/core/video/videoview/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/video/videoview/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$7;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$7;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->k(Lcom/kwad/sdk/core/video/videoview/a;)Landroid/widget/FrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a$7;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v1}, Lcom/kwad/sdk/core/video/videoview/a;->j(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/a;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    return-void
.end method
