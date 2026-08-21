.class final Lcom/tkay/expressad/video/module/TkayVideoView$8;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 533
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 536
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 537
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->e(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 539
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->f(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 540
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_2

    .line 541
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x7b

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 544
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->g(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    return-void

    .line 547
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$8;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->g(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    :cond_2
    return-void
.end method
