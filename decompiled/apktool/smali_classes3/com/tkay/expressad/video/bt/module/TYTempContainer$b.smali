.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;
.super Lcom/tkay/expressad/video/module/a/a/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "b"
.end annotation


# instance fields
.field private V:Landroid/app/Activity;

.field private W:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 1400
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    .line 1401
    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->V:Landroid/app/Activity;

    .line 1402
    iput-object p3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 8

    .line 1407
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1408
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 1409
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/video/signal/c;->a(Landroid/content/Context;)V

    .line 1411
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->V:Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 1412
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->V:Landroid/app/Activity;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Landroid/app/Activity;)V

    .line 1414
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    const/16 v0, 0x6c

    const-string v1, ""

    const/4 v2, 0x1

    if-eq p1, v0, :cond_8

    const/16 v0, 0x71

    if-eq p1, v0, :cond_7

    const/16 v0, 0x75

    if-eq p1, v0, :cond_5

    const/16 v0, 0x7e

    if-eq p1, v0, :cond_4

    const/16 v0, 0x80

    if-eq p1, v0, :cond_4

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_1

    .line 1467
    :pswitch_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->n(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/a/b;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1468
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->n(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    .line 1470
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1472
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->V:Landroid/app/Activity;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_a

    .line 1490
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b$1;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;)V

    const-wide/16 v2, 0x32

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    goto/16 :goto_1

    .line 1439
    :pswitch_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    if-eqz p2, :cond_3

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_3
    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V

    goto :goto_1

    .line 1418
    :pswitch_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    goto :goto_1

    .line 1511
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_1

    .line 1503
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_6

    .line 1504
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisible(I)V

    .line 1506
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1507
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/bt/module/b/h;->c()V

    goto :goto_1

    .line 1500
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->W:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_1

    .line 1462
    :cond_8
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    new-instance v3, Lcom/tkay/expressad/video/signal/a/c$b;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v4

    new-instance v5, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v7, 0x0

    invoke-direct {v5, v6, v7}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    invoke-direct {v3, v4, v5}, Lcom/tkay/expressad/video/signal/a/c$b;-><init>(Lcom/tkay/expressad/video/signal/c;Lcom/tkay/expressad/video/signal/c$a;)V

    invoke-interface {v0, v3}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 1463
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    if-eqz p2, :cond_9

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_9
    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V

    .line 1515
    :cond_a
    :goto_1
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/f;->a(ILjava/lang/Object;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x67
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
