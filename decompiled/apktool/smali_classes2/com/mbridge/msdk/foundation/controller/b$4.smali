.class final Lcom/mbridge/msdk/foundation/controller/b$4;
.super Landroid/os/Handler;
.source "SDKController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/controller/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/controller/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/controller/b;Landroid/os/Looper;)V
    .locals 0

    .line 529
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 7

    .line 535
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x0

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_2

    .line 554
    :pswitch_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/c/a;

    .line 555
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->K()I

    move-result p1

    if-ne p1, v1, :cond_5

    .line 556
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/report/b/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/report/b/a;->a()V

    goto/16 :goto_2

    .line 621
    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_5

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_5

    .line 622
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 623
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 624
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 625
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 627
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 608
    :pswitch_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_5

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/util/List;

    if-eqz v0, :cond_5

    .line 609
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/util/List;

    if-eqz p1, :cond_5

    .line 610
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_applist"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 612
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "mbridge_setting_campaign_time"

    new-instance v2, Ljava/lang/Long;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-direct {v2, v4, v5}, Ljava/lang/Long;-><init>(J)V

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 613
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/n;

    .line 614
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/entity/n;)V

    goto :goto_0

    .line 595
    :pswitch_3
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_5

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_5

    .line 596
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 597
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 598
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 599
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 601
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    const-string v1, "device_data"

    invoke-virtual {v0, v1, p1, v2, v2}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Frame;)V

    goto/16 :goto_2

    .line 584
    :pswitch_4
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 585
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 586
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 587
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 589
    :cond_2
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    const-string v1, "load_duration"

    invoke-virtual {v0, v1, p1, v2, v2}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Frame;)V

    goto/16 :goto_2

    .line 573
    :pswitch_5
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 574
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 575
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 576
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 578
    :cond_3
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    const-string v1, "click_duration"

    invoke-virtual {v0, v1, p1, v2, v2}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Frame;)V

    goto/16 :goto_2

    .line 560
    :pswitch_6
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/io/File;

    if-eqz p1, :cond_5

    .line 562
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    .line 563
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "===="

    .line 564
    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 565
    array-length v1, v0

    if-lez v1, :cond_5

    .line 566
    aget-object v0, v0, v3

    .line 567
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0, p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/io/File;)V

    goto :goto_2

    .line 538
    :pswitch_7
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/util/List;

    if-eqz v0, :cond_5

    .line 539
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/util/List;

    if-eqz p1, :cond_5

    .line 540
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 541
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b$4;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    move v2, v3

    .line 542
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v2, v4, :cond_5

    .line 543
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/n;

    .line 544
    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    .line 545
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v6

    sub-int/2addr v6, v1

    if-ne v2, v6, :cond_4

    .line 546
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    .line 548
    :cond_4
    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/entity/n;Ljava/lang/Boolean;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :catch_0
    const-string p1, "SDKController"

    const-string v0, "REPORT HANDLE ERROR!"

    .line 636
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
