.class Lcom/sigmob/sdk/videoAd/l$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->g(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->l(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->C:Lcom/sigmob/sdk/base/common/a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->m(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/views/o;->c:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/x;->a(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object p1

    const/high16 v0, 0x3f800000    # 1.0f

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->B:Lcom/sigmob/sdk/base/common/a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->m(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/views/o;->b:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/x;->a(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object p1

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoAd/b;->setVolume(F)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$5;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->l(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    xor-int/2addr v0, p2

    invoke-static {p1, v0}, Lcom/sigmob/sdk/videoAd/l;->f(Lcom/sigmob/sdk/videoAd/l;Z)Z

    :cond_1
    return p2
.end method
