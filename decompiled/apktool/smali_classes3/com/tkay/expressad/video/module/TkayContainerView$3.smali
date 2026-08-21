.class final Lcom/tkay/expressad/video/module/TkayContainerView$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayContainerView;->showOrderCampView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayContainerView;)V
    .locals 0

    .line 432
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 435
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    .line 436
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x75

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 2

    .line 442
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 443
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoEndCover()V

    return-void

    .line 445
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$3;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, v0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showEndcard(I)V

    return-void
.end method
