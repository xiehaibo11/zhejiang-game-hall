.class final Lcom/tkay/expressad/video/module/a/a/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/j/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/a/a/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/a/a/m;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/a/a/m;)V
    .locals 0

    .line 310
    iput-object p1, p0, Lcom/tkay/expressad/video/module/a/a/m$1;->a:Lcom/tkay/expressad/video/module/a/a/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 313
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m$1;->a:Lcom/tkay/expressad/video/module/a/a/m;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/a/a/m;->a(Lcom/tkay/expressad/video/module/a/a/m;)Lcom/tkay/expressad/video/module/TkayContainerView;

    move-result-object v0

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 314
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m$1;->a:Lcom/tkay/expressad/video/module/a/a/m;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/a/a/m;->b(Lcom/tkay/expressad/video/module/a/a/m;)Lcom/tkay/expressad/video/module/TkayVideoView;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    return-void
.end method
