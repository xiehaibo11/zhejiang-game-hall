.class Lcom/sigmob/sdk/mraid2/m$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/m;->a(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/m$4;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$4;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$4;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/m;->l(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    return p2
.end method
