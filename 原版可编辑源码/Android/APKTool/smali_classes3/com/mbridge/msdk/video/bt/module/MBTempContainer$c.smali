.class final Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;
.super Lcom/mbridge/msdk/video/module/a/a/e;
.source "MBTempContainer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

.field private b:Landroid/app/Activity;

.field private c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 1450
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/e;-><init>()V

    .line 1451
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->b:Landroid/app/Activity;

    .line 1452
    iput-object p3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 8

    const-string v0, "-999"

    .line 1457
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 1458
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    if-eq v1, v2, :cond_0

    .line 1459
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v1}, Lcom/mbridge/msdk/video/js/c;->a(Landroid/content/Context;)V

    .line 1461
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->b:Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 1462
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->b:Landroid/app/Activity;

    invoke-interface {v1, v2}, Lcom/mbridge/msdk/video/js/c;->a(Landroid/app/Activity;)V

    .line 1464
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    const/16 v1, 0x6c

    const-string v3, ""

    if-eq p1, v1, :cond_a

    const/16 v1, 0x71

    if-eq p1, v1, :cond_9

    const/16 v1, 0x75

    if-eq p1, v1, :cond_7

    const/16 v1, 0x7e

    if-eq p1, v1, :cond_6

    const/16 v1, 0x80

    if-eq p1, v1, :cond_6

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_2

    .line 1517
    :pswitch_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->s(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/c;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1518
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->s(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/c;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->u(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->v(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v2, v3, v4}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1520
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->x(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v2, v3, v4}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLjava/lang/String;Ljava/lang/String;)V

    .line 1522
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->b:Landroid/app/Activity;

    if-eqz v1, :cond_d

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_d

    .line 1524
    :try_start_0
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    .line 1525
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 1526
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v0, v0}, Lcom/mbridge/msdk/click/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1528
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 1529
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 1530
    invoke-virtual {v1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 1531
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->b:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 1535
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NotifyListener"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 1537
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    goto/16 :goto_2

    .line 1471
    :pswitch_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    if-nez v0, :cond_4

    .line 1472
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;)V

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/a/b;)Lcom/mbridge/msdk/video/bt/module/a/b;

    .line 1488
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/bt/module/a/b;)V

    .line 1489
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    if-eqz p2, :cond_5

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    :cond_5
    invoke-interface {v0, v2, v3}, Lcom/mbridge/msdk/video/js/c;->click(ILjava/lang/String;)V

    goto/16 :goto_2

    .line 1468
    :pswitch_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    goto/16 :goto_2

    .line 1552
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object v0

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 1544
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_8

    .line 1545
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisible(I)V

    .line 1547
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1548
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/module/b/h;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 1541
    :cond_9
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v2, v1, v3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLjava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 1492
    :cond_a
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    if-nez v0, :cond_b

    .line 1493
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;)V

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/a/b;)Lcom/mbridge/msdk/video/bt/module/a/b;

    .line 1511
    :cond_b
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/bt/module/a/b;)V

    .line 1512
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/js/a/c$b;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v4

    new-instance v5, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 v7, 0x0

    invoke-direct {v5, v6, v7}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    invoke-direct {v1, v4, v5}, Lcom/mbridge/msdk/video/js/a/c$b;-><init>(Lcom/mbridge/msdk/video/js/c;Lcom/mbridge/msdk/video/js/c$a;)V

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/js/c$a;)V

    .line 1513
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    if-eqz p2, :cond_c

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    :cond_c
    invoke-interface {v0, v2, v3}, Lcom/mbridge/msdk/video/js/c;->click(ILjava/lang/String;)V

    .line 1556
    :cond_d
    :goto_2
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/e;->a(ILjava/lang/Object;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x67
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
