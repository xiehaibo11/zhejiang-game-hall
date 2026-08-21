.class final Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;
.super Lcom/mbridge/msdk/video/module/a/a/e;
.source "MBTempContainer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "f"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 0

    .line 1348
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/e;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V
    .locals 0

    .line 1348
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 6

    .line 1351
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/e;->a(ILjava/lang/Object;)V

    .line 1352
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result v0

    const-string v1, "NotifyListener"

    if-eqz v0, :cond_0

    .line 1354
    :try_start_0
    instance-of v0, p2, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 1355
    move-object v0, p2

    check-cast v0, Ljava/lang/String;

    .line 1356
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1357
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1358
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const-string v3, "Alert_window_status"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;I)I

    .line 1359
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const-string v3, "complete_info"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;I)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1363
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    const/4 v0, 0x2

    const/4 v2, 0x0

    if-eq p1, v0, :cond_7

    const/16 v3, 0x79

    const/4 v4, 0x1

    if-eq p1, v3, :cond_6

    const/16 v3, 0x10

    if-eq p1, v3, :cond_5

    const/16 v3, 0x11

    if-eq p1, v3, :cond_4

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_6

    .line 1369
    :pswitch_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1370
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_d

    .line 1371
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1372
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1373
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCampaignIsFiltered()Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_1

    .line 1377
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a()V

    goto :goto_2

    .line 1380
    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a()V

    .line 1382
    :cond_3
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)I

    move-result v1

    invoke-static {p1, p2, v0, v1}, Lcom/mbridge/msdk/video/bt/module/b/f;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    goto/16 :goto_6

    .line 1387
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1388
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object p1, p1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz p1, :cond_d

    .line 1389
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object p1, p1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setRewardStatus(Z)V

    goto/16 :goto_6

    .line 1435
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    goto/16 :goto_6

    .line 1438
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1439
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->p(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->q(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1440
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    goto/16 :goto_6

    :cond_7
    :pswitch_1
    const/16 v3, 0xc

    if-ne p1, v3, :cond_c

    const-string v3, "Play error but has no message."

    .line 1398
    :try_start_1
    instance-of v4, p2, Ljava/lang/String;

    if-eqz v4, :cond_8

    .line 1399
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v3, p2

    goto :goto_3

    :catchall_0
    move-exception p2

    .line 1402
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1404
    :cond_8
    :goto_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)I

    move-result v5

    invoke-static {p2, v1, v4, v3, v5}, Lcom/mbridge/msdk/video/bt/module/b/f;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;I)V

    .line 1406
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p2

    if-nez p2, :cond_c

    .line 1407
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/d/c;->I()I

    move-result p2

    if-nez p2, :cond_9

    .line 1408
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p1

    const-string p2, "play error"

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 1409
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1410
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    return-void

    .line 1413
    :cond_9
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    if-eqz p2, :cond_b

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p2

    if-eqz p2, :cond_b

    .line 1414
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->n(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p2

    if-eqz p2, :cond_a

    .line 1415
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCampaignIsFiltered()Z

    move-result p2

    if-eqz p2, :cond_c

    goto :goto_4

    .line 1419
    :cond_a
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a()V

    goto :goto_5

    .line 1422
    :cond_b
    :goto_4
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a()V

    .line 1428
    :cond_c
    :goto_5
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object p2

    const/4 v1, 0x3

    invoke-interface {p2, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 1429
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1430
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object p2

    if-eqz p2, :cond_d

    if-ne p1, v0, :cond_d

    .line 1431
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object p1

    invoke-virtual {p1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->skipped()V

    :cond_d
    :goto_6
    return-void

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method
