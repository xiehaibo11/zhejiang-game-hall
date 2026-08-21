.class final Lcom/tkay/expressad/video/module/TkayVideoView$6;
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

    .line 504
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$6;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 507
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$6;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_0

    .line 508
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$6;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 v0, 0x1

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method
