.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Landroid/os/Looper;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 188
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 189
    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x64

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 191
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->a(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    move-result p1

    const-string v0, ""

    if-eqz p1, :cond_1

    .line 192
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x7a

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 194
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x67

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :goto_0
    return-void
.end method
