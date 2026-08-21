.class public final Lcom/mbridge/msdk/video/module/a/a/b;
.super Lcom/mbridge/msdk/video/module/a/a/c;
.source "ContainerViewJSListener.java"


# instance fields
.field private k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/js/factory/IJSFactory;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V
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

    .line 22
    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/video/module/a/a/c;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    .line 23
    iput-object v10, v9, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-nez v10, :cond_0

    const/4 v0, 0x0

    .line 25
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/b;->a:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 4

    .line 31
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->a:Z

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

    .line 63
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    .line 64
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v1

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewWidth()I

    move-result v2

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewHeight()I

    move-result v3

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewRadius()I

    move-result v0

    invoke-interface {v1, v2, v3, v0}, Lcom/mbridge/msdk/video/js/e;->resizeMiniCard(III)V

    goto/16 :goto_0

    .line 34
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/i;->setCover(Z)V

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/i;->setMiniEndCardState(Z)V

    .line 36
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    goto :goto_0

    .line 40
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/e;->showVideoClickView(I)V

    .line 41
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setCover(Z)V

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setMiniEndCardState(Z)V

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    goto :goto_0

    .line 56
    :cond_3
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 57
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "pt:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "======="

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    const/4 v2, 0x3

    invoke-interface {v0, v2, p1}, Lcom/mbridge/msdk/video/js/f;->a(ILjava/lang/String;)V

    move p1, v1

    goto :goto_0

    .line 67
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_5

    .line 68
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->showAlertView()V

    goto :goto_0

    .line 70
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/b;->k:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->alertWebViewShowed()V

    .line 76
    :cond_6
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/c;->a(ILjava/lang/Object;)V

    return-void
.end method
