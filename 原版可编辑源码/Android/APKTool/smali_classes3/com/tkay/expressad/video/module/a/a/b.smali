.class public final Lcom/tkay/expressad/video/module/a/a/b;
.super Lcom/tkay/expressad/video/module/a/a/d;


# instance fields
.field private ag:Lcom/tkay/expressad/video/module/TkayVideoView;

.field private ah:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V
    .locals 12

    move-object v9, p0

    move-object v10, p1

    move-object v11, p2

    move-object v0, p0

    move-object v1, p3

    move-object/from16 v2, p5

    move-object/from16 v3, p4

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p8

    move/from16 v7, p9

    move/from16 v8, p10

    .line 18
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/video/module/a/a/d;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    .line 19
    iput-object v10, v9, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 20
    iput-object v11, v9, Lcom/tkay/expressad/video/module/a/a/b;->ah:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v10, :cond_0

    if-nez v11, :cond_1

    :cond_0
    const/4 v0, 0x0

    .line 22
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/b;->W:Z

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 4

    .line 28
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->W:Z

    if-eqz v0, :cond_6

    const/16 v0, 0x8

    if-eq p1, v0, :cond_3

    const/16 v0, 0x6b

    const/4 v1, 0x1

    if-eq p1, v0, :cond_2

    const/16 v0, 0x70

    if-eq p1, v0, :cond_1

    const/16 v0, 0x73

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ah:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->getBorderViewWidth()I

    move-result v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->getBorderViewHeight()I

    move-result v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->getBorderViewRadius()I

    move-result v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->resizeMiniCard(III)V

    goto :goto_0

    .line 31
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCover(Z)V

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    goto :goto_0

    .line 35
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ah:Lcom/tkay/expressad/video/module/TkayContainerView;

    const/4 v2, -0x1

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 36
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCover(Z)V

    .line 37
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    goto :goto_0

    .line 52
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ah:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_5

    .line 53
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_4

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_6

    .line 55
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->showAlertView()V

    goto :goto_0

    .line 58
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_6

    .line 59
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->alertWebViewShowed()V

    goto :goto_0

    .line 63
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/b;->ag:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_6

    .line 64
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->showAlertView()V

    .line 70
    :cond_6
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/d;->a(ILjava/lang/Object;)V

    return-void
.end method
