.class Lcom/sigmob/sdk/mraid/m$7;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/m;->a(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->q(Lcom/sigmob/sdk/mraid/m;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/m;->e(Lcom/sigmob/sdk/mraid/m;)I

    move-result v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/sigmob/sdk/videoAd/a;->b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$7;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->r(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    return p2
.end method
