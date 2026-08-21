.class final Lcom/tkay/expressad/reward/a/d$h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "h"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/a/d;

.field private b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private c:Ljava/lang/String;

.field private d:Lcom/tkay/expressad/foundation/d/c;

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Lcom/tkay/expressad/videocommon/e/d;

.field private i:I

.field private j:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "I",
            "Lcom/tkay/expressad/reward/a/d;",
            ")V"
        }
    .end annotation

    .line 683
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$h;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 684
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$h;->b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 685
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$h;->c:Ljava/lang/String;

    .line 686
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/d$h;->d:Lcom/tkay/expressad/foundation/d/c;

    .line 687
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d$h;->e:Ljava/util/List;

    .line 688
    iput-object p6, p0, Lcom/tkay/expressad/reward/a/d$h;->f:Ljava/lang/String;

    .line 689
    iput-object p7, p0, Lcom/tkay/expressad/reward/a/d$h;->g:Ljava/lang/String;

    .line 690
    iput-object p8, p0, Lcom/tkay/expressad/reward/a/d$h;->h:Lcom/tkay/expressad/videocommon/e/d;

    .line 691
    iput p9, p0, Lcom/tkay/expressad/reward/a/d$h;->i:I

    .line 692
    iput-object p10, p0, Lcom/tkay/expressad/reward/a/d$h;->j:Lcom/tkay/expressad/reward/a/d;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 698
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "retry load template url = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$h;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 699
    new-instance v6, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v6}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 700
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 701
    invoke-virtual {v6, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 703
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$h;->e:Ljava/util/List;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$h;->e:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 704
    new-instance v1, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$h;->d:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$h;->e:Ljava/util/List;

    invoke-direct {v1, v2, v3, v4}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 706
    :cond_0
    new-instance v1, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$h;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    .line 708
    :goto_0
    iget v2, p0, Lcom/tkay/expressad/reward/a/d$h;->i:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    .line 709
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$h;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 710
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$h;->h:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 711
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$h;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->l(Lcom/tkay/expressad/reward/a/d;)Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 712
    new-instance v11, Lcom/tkay/expressad/reward/a/d$j;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$h;->b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$h;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d$h;->c:Ljava/lang/String;

    iget-object v7, p0, Lcom/tkay/expressad/reward/a/d$h;->d:Lcom/tkay/expressad/foundation/d/c;

    iget-object v8, p0, Lcom/tkay/expressad/reward/a/d$h;->j:Lcom/tkay/expressad/reward/a/d;

    const/4 v9, 0x0

    const/4 v10, 0x0

    move-object v2, v11

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/reward/a/d$j;-><init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$h;Landroid/os/Handler;)V

    .line 713
    invoke-virtual {v0, v11}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 714
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 715
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$h;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 721
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 717
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 718
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method
