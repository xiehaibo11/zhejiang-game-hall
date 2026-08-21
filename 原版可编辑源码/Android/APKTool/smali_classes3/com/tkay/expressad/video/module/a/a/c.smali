.class public final Lcom/tkay/expressad/video/module/a/a/c;
.super Lcom/tkay/expressad/video/module/a/a/d;


# instance fields
.field private ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/signal/factory/IJSFactory;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V
    .locals 11

    move-object v9, p0

    move-object v10, p1

    move-object v0, p0

    move-object v1, p2

    move-object v2, p4

    move-object v3, p3

    move-object/from16 v4, p5

    move-object/from16 v5, p6

    move-object/from16 v6, p7

    move/from16 v7, p8

    move/from16 v8, p9

    .line 16
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/video/module/a/a/d;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    .line 17
    iput-object v10, v9, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-nez v10, :cond_0

    const/4 v0, 0x0

    .line 19
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/c;->W:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 4

    .line 25
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->W:Z

    const/4 v1, -0x1

    if-eqz v0, :cond_6

    const/16 v0, 0x8

    if-eq p1, v0, :cond_4

    const/16 v0, 0x69

    if-eq p1, v0, :cond_3

    const/16 v0, 0x6b

    const/4 v2, 0x1

    if-eq p1, v0, :cond_2

    const/16 v0, 0x70

    if-eq p1, v0, :cond_1

    const/16 v0, 0x73

    if-eq p1, v0, :cond_0

    goto/16 :goto_0

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    .line 50
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v1

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewWidth()I

    move-result v2

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewHeight()I

    move-result v3

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewRadius()I

    move-result v0

    invoke-interface {v1, v2, v3, v0}, Lcom/tkay/expressad/video/signal/e;->resizeMiniCard(III)V

    goto :goto_0

    .line 28
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/j;->setCover(Z)V

    .line 29
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    goto :goto_0

    .line 32
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/e;->showVideoClickView(I)V

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/j;->setCover(Z)V

    .line 34
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    goto :goto_0

    .line 44
    :cond_3
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 45
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    const/4 v2, 0x3

    invoke-interface {v0, v2, p1}, Lcom/tkay/expressad/video/signal/g;->a(ILjava/lang/String;)V

    move p1, v1

    goto :goto_0

    .line 53
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_5

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->showAlertView()V

    goto :goto_0

    .line 56
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/c;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->alertWebViewShowed()V

    .line 62
    :cond_6
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/d;->a(ILjava/lang/Object;)V

    return-void
.end method
