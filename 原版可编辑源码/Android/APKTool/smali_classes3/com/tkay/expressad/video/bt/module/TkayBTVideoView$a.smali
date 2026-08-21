.class final Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;
.super Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

.field private b:Landroid/webkit/WebView;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:I

.field private f:I

.field private g:Z

.field private h:Z

.field private i:Z

.field private j:Z

.field private k:I

.field private l:I

.field private m:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;Landroid/webkit/WebView;)V
    .locals 1

    .line 508
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;-><init>()V

    const/4 v0, 0x0

    .line 496
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->h:Z

    .line 497
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->i:Z

    .line 498
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->j:Z

    .line 502
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->m:Z

    .line 509
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    .line 510
    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    .line 512
    iget-object p2, p1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    .line 513
    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->d:Ljava/lang/String;

    return-void
.end method

.method private a()I
    .locals 1

    .line 505
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->e:I

    return v0
.end method

.method private b()V
    .locals 1

    const/4 v0, 0x0

    .line 705
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    .line 706
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    const/4 v0, 0x0

    .line 707
    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Z)Z

    return-void
.end method


# virtual methods
.method public final a(II)V
    .locals 0

    .line 518
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->k:I

    .line 519
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->l:I

    return-void
.end method

.method public final onBufferingEnd()V
    .locals 1

    .line 676
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onBufferingEnd()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 678
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onBufferingStart(Ljava/lang/String;)V
    .locals 3

    .line 655
    :try_start_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onBufferingStart(Ljava/lang/String;)V

    const-string v0, "mediaplayer prepare timeout"

    .line 656
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "play buffering tiemout"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p1, :cond_1

    .line 658
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 659
    sget v1, Lcom/tkay/expressad/video/bt/module/BTBaseView;->n:I

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "id"

    .line 660
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 661
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "data"

    .line 662
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 663
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    const-string v1, "onPlayerTimeout"

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v2, 0x2

    invoke-static {p1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 665
    :try_start_2
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :cond_1
    return-void

    :catch_1
    move-exception p1

    .line 669
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onPlayCompleted()V
    .locals 4

    .line 538
    invoke-super {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayCompleted()V

    .line 539
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    const-string v1, "0"

    if-eqz v0, :cond_1

    .line 540
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    if-lez v0, :cond_0

    .line 541
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->e(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_reward_video_view_reward_time_complete"

    const-string v3, "string"

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 543
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->e(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 546
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->e(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 548
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setClickable(Z)V

    .line 549
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 550
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    const-string v2, "onPlayerFinish"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 552
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->f:I

    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->e:I

    const/4 v0, 0x1

    .line 553
    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Z)Z

    .line 554
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->stop()V

    return-void
.end method

.method public final onPlayError(Ljava/lang/String;)V
    .locals 4

    const-string v0, "id"

    .line 559
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayError(Ljava/lang/String;)V

    .line 560
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 562
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 563
    sget v3, Lcom/tkay/expressad/video/bt/module/BTBaseView;->o:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 564
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 565
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "error"

    .line 566
    invoke-virtual {v2, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 567
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    invoke-virtual {v2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 568
    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 569
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    const-string v0, "onPlayerFailed"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 571
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onPlayProgress(II)V
    .locals 6

    const-string v0, "id"

    .line 578
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayProgress(II)V

    .line 579
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-boolean v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->h:Z

    if-eqz v1, :cond_6

    const/4 v1, 0x0

    .line 581
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v2, v2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 582
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v1

    .line 583
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v4, v4, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_1"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;I)V

    :cond_0
    if-le v1, p2, :cond_1

    move v1, p2

    :cond_1
    if-gtz v1, :cond_2

    sub-int v2, p2, p1

    goto :goto_0

    :cond_2
    sub-int v2, v1, p1

    :goto_0
    const-string v3, "string"

    if-gtz v2, :cond_4

    if-gtz v1, :cond_3

    const-string v1, "0"

    goto :goto_1

    .line 592
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v4, "tkay_reward_video_view_reward_time_complete"

    invoke-static {v2, v4, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    goto :goto_1

    :cond_4
    if-gtz v1, :cond_5

    .line 594
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_reward_video_view_reward_time_left"

    invoke-static {v4, v5, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 597
    :goto_1
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->e(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 599
    :cond_6
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->f:I

    .line 600
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->e:I

    .line 601
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/ProgressBar;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->f:I

    invoke-virtual {v1, v2}, Landroid/widget/ProgressBar;->setMax(I)V

    .line 602
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/ProgressBar;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->e:I

    invoke-virtual {v1, v2}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 603
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    if-eqz v1, :cond_7

    .line 605
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 606
    sget v3, Lcom/tkay/expressad/video/bt/module/BTBaseView;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 607
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 608
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 609
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "progress"

    .line 610
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(II)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "time"

    .line 611
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "duration"

    .line 612
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "data"

    .line 613
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 614
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    const-string v2, "onPlayerProgressChanged"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 616
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 623
    :cond_7
    :goto_2
    :try_start_1
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->k:I

    const/16 v1, 0x64

    if-eq v0, v1, :cond_b

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->m:Z

    if-nez v0, :cond_b

    .line 624
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->k:I

    if-nez v0, :cond_8

    return-void

    .line 627
    :cond_8
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->l:I

    if-ltz v0, :cond_b

    .line 628
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->l:I

    mul-int/2addr p2, v0

    div-int/2addr p2, v1

    if-lt p1, p2, :cond_b

    .line 632
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v0, 0x5e

    if-eq p1, v0, :cond_a

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v0, 0x11f

    if-ne p1, v0, :cond_9

    goto :goto_3

    .line 635
    :cond_9
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_4

    .line 633
    :cond_a
    :goto_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 638
    :goto_4
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 640
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->i()V

    const/4 p1, 0x1

    .line 641
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->m:Z

    .line 642
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "CDRate is : "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " and start download !"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :cond_b
    return-void

    :catch_1
    move-exception p1

    .line 648
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final onPlaySetDataSourceError(Ljava/lang/String;)V
    .locals 0

    .line 684
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlaySetDataSourceError(Ljava/lang/String;)V

    return-void
.end method

.method public final onPlayStarted(I)V
    .locals 2

    .line 524
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayStarted(I)V

    .line 525
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->g:Z

    if-nez v0, :cond_1

    .line 526
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setMax(I)V

    .line 527
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->b:Landroid/webkit/WebView;

    if-eqz p1, :cond_0

    .line 528
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->c:Ljava/lang/String;

    const-string v1, "onPlayerPlay"

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    .line 530
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->g:Z

    :cond_1
    const/4 p1, 0x0

    .line 533
    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Z)Z

    return-void
.end method

.method public final onVideoDownloadResume()V
    .locals 3

    .line 690
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x5e

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 693
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 691
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 696
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 698
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->i()V

    const/4 v0, 0x1

    .line 699
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->m:Z

    :cond_2
    return-void
.end method
