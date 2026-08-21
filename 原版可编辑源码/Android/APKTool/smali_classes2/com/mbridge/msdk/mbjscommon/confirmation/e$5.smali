.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/confirmation/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

.field final synthetic f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 0

    .line 477
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->c:Landroid/content/Context;

    iput-object p5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 17

    move-object/from16 v0, p0

    .line 480
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Landroid/os/Handler;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 481
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 482
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    .line 483
    sget v2, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 484
    iget-object v2, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 485
    iget-object v3, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v3}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v4

    iget-object v5, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->a:Ljava/lang/String;

    iget-object v6, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->c:Landroid/content/Context;

    iget-object v8, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->d:Ljava/lang/String;

    iget-object v9, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-static/range {v3 .. v9}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    .line 486
    iget-object v10, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->c:Landroid/content/Context;

    iget-object v11, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v12, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->a:Ljava/lang/String;

    iget-object v13, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->d:Ljava/lang/String;

    const/4 v14, 0x1

    const/16 v16, 0x2

    const-string v15, ""

    invoke-static/range {v10 .. v16}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 16

    move-object/from16 v0, p0

    .line 492
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Landroid/os/Handler;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 493
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 494
    iget-object v1, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    .line 495
    sget v2, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 496
    iget-object v2, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 497
    iget-object v3, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->f:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iget-object v4, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->a:Ljava/lang/String;

    iget-object v5, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->c:Landroid/content/Context;

    iget-object v7, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->d:Ljava/lang/String;

    iget-object v8, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-static/range {v3 .. v8}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    .line 498
    iget-object v9, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->c:Landroid/content/Context;

    iget-object v10, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v11, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->a:Ljava/lang/String;

    iget-object v12, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;->d:Ljava/lang/String;

    const/4 v13, 0x2

    const/4 v15, 0x2

    move-object/from16 v14, p2

    invoke-static/range {v9 .. v15}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    :cond_0
    return-void
.end method
