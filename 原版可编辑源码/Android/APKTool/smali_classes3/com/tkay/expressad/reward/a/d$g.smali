.class final Lcom/tkay/expressad/reward/a/d$g;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "g"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/a/d;

.field private b:Ljava/lang/String;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/tkay/expressad/videocommon/e/d;

.field private g:I

.field private h:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V
    .locals 0

    .line 581
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$g;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 582
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$g;->b:Ljava/lang/String;

    .line 583
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$g;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 584
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/d$g;->d:Ljava/lang/String;

    .line 585
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d$g;->e:Ljava/lang/String;

    .line 586
    iput-object p6, p0, Lcom/tkay/expressad/reward/a/d$g;->f:Lcom/tkay/expressad/videocommon/e/d;

    .line 587
    iput p7, p0, Lcom/tkay/expressad/reward/a/d$g;->g:I

    .line 588
    iput-object p8, p0, Lcom/tkay/expressad/reward/a/d$g;->h:Lcom/tkay/expressad/reward/a/d;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 594
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "retry load tpl url = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$g;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 595
    new-instance v5, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v5}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 596
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 597
    invoke-virtual {v5, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 598
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v1

    .line 599
    invoke-virtual {v5, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 601
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$g;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->k(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v2

    .line 1374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    .line 601
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$g;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->k(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v2

    .line 2374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 601
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 602
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$g;->c:Lcom/tkay/expressad/foundation/d/c;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d$g;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v6}, Lcom/tkay/expressad/reward/a/d;->k(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v6

    .line 3374
    iget-object v6, v6, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 602
    invoke-direct {v2, v3, v4, v6}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 604
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$g;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v2, v3, v4}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_0
    move-object v10, v2

    .line 606
    iget v2, p0, Lcom/tkay/expressad/reward/a/d$g;->g:I

    invoke-virtual {v10, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    .line 607
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$g;->e:Ljava/lang/String;

    invoke-virtual {v10, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 608
    invoke-virtual {v10, v1}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    .line 609
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$g;->f:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v10, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 610
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$g;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v1}, Lcom/tkay/expressad/reward/a/d;->l(Lcom/tkay/expressad/reward/a/d;)Z

    move-result v1

    invoke-virtual {v10, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 611
    new-instance v1, Lcom/tkay/expressad/reward/a/d$a;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$g;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$g;->b:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d$g;->c:Lcom/tkay/expressad/foundation/d/c;

    iget-object v7, p0, Lcom/tkay/expressad/reward/a/d$g;->h:Lcom/tkay/expressad/reward/a/d;

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Lcom/tkay/expressad/reward/a/d$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$g;Landroid/os/Handler;)V

    .line 612
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 613
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 614
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$g;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 620
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 616
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 617
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method
