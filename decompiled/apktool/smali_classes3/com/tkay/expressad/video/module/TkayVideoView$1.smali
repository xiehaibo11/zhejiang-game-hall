.class final Lcom/tkay/expressad/video/module/TkayVideoView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->a(Landroid/view/ViewGroup;Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/expressad/video/dynview/c;

.field final synthetic c:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;Landroid/view/ViewGroup;Lcom/tkay/expressad/video/dynview/c;)V
    .locals 0

    .line 375
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->a:Landroid/view/ViewGroup;

    iput-object p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->b:Lcom/tkay/expressad/video/dynview/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/dynview/a;)V
    .locals 3

    .line 379
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->a:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 380
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v0

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 381
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 383
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->b()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 384
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->b()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 385
    new-instance v2, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView$1;)V

    invoke-virtual {v1, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 436
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->c()Z

    move-result p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Lcom/tkay/expressad/video/module/TkayVideoView;Z)Z

    .line 437
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    const/4 p1, 0x0

    .line 438
    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Z)Z

    .line 440
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1;->b:Lcom/tkay/expressad/video/dynview/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/c;->j()I

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Lcom/tkay/expressad/video/module/TkayVideoView;I)I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 2

    .line 446
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorMsg:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c/b;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method
