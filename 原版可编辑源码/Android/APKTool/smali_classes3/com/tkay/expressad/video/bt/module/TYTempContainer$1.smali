.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 273
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 277
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->h()I

    move-result v0

    if-nez v0, :cond_0

    .line 278
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "run: WebView load timeout"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v1, -0x1

    const-string v2, "WebView load timeout"

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void

    .line 281
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v1, -0x3

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I

    return-void
.end method
