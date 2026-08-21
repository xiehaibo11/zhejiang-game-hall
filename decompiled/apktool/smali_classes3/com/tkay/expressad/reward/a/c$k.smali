.class final Lcom/tkay/expressad/reward/a/c$k;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "k"
.end annotation


# instance fields
.field private a:Landroid/os/Handler;

.field private b:Ljava/lang/Runnable;

.field private final c:Z

.field private final e:Z

.field private f:Ljava/lang/String;

.field private final g:Lcom/tkay/expressad/reward/a/c$j;

.field private final h:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private final i:Ljava/lang/String;

.field private final j:Ljava/lang/String;

.field private final k:Ljava/lang/String;

.field private final l:Lcom/tkay/expressad/videocommon/a$a;

.field private final m:Lcom/tkay/expressad/foundation/d/c;

.field private n:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private o:J

.field private p:Z

.field private q:Z

.field private final r:Ljava/lang/Runnable;

.field private final s:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Landroid/os/Handler;Ljava/lang/Runnable;ZZLjava/lang/String;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;J)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Handler;",
            "Ljava/lang/Runnable;",
            "ZZ",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/reward/a/c$j;",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/a$a;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;J)V"
        }
    .end annotation

    move-object/from16 v8, p0

    move-object/from16 v9, p1

    .line 1467
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    .line 1468
    iput-object v9, v8, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    move-object/from16 v0, p2

    .line 1469
    iput-object v0, v8, Lcom/tkay/expressad/reward/a/c$k;->b:Ljava/lang/Runnable;

    move/from16 v0, p3

    .line 1470
    iput-boolean v0, v8, Lcom/tkay/expressad/reward/a/c$k;->c:Z

    move/from16 v0, p4

    .line 1471
    iput-boolean v0, v8, Lcom/tkay/expressad/reward/a/c$k;->e:Z

    move-object/from16 v10, p5

    .line 1472
    iput-object v10, v8, Lcom/tkay/expressad/reward/a/c$k;->f:Ljava/lang/String;

    move-object/from16 v11, p6

    .line 1473
    iput-object v11, v8, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    move-object/from16 v0, p7

    .line 1474
    iput-object v0, v8, Lcom/tkay/expressad/reward/a/c$k;->h:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-object/from16 v12, p8

    .line 1475
    iput-object v12, v8, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    move-object/from16 v13, p10

    .line 1476
    iput-object v13, v8, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    move-object/from16 v14, p9

    .line 1477
    iput-object v14, v8, Lcom/tkay/expressad/reward/a/c$k;->k:Ljava/lang/String;

    move-object/from16 v15, p11

    .line 1478
    iput-object v15, v8, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    move-object/from16 v0, p12

    .line 1479
    iput-object v0, v8, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    move-object/from16 v0, p13

    .line 1480
    iput-object v0, v8, Lcom/tkay/expressad/reward/a/c$k;->n:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-wide/from16 v0, p14

    .line 1481
    iput-wide v0, v8, Lcom/tkay/expressad/reward/a/c$k;->o:J

    .line 1483
    new-instance v7, Lcom/tkay/expressad/reward/a/c$k$1;

    move-object v0, v7

    move-object/from16 v1, p0

    move-object/from16 v2, p6

    move-object/from16 v3, p11

    move-object/from16 v4, p10

    move-object/from16 v5, p5

    move-object/from16 v6, p8

    move-object v10, v7

    move-object/from16 v7, p9

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/reward/a/c$k$1;-><init>(Lcom/tkay/expressad/reward/a/c$k;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/videocommon/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v10, v8, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    .line 1515
    new-instance v10, Lcom/tkay/expressad/reward/a/c$k$2;

    move-object v0, v10

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/reward/a/c$k$2;-><init>(Lcom/tkay/expressad/reward/a/c$k;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/videocommon/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v10, v8, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz v9, :cond_0

    .line 1547
    iget-object v0, v8, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    const-wide/16 v1, 0x1388

    invoke-virtual {v9, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 4

    .line 1680
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 1683
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    if-eqz v1, :cond_0

    .line 1684
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1687
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$k;->p:Z

    if-nez v0, :cond_8

    const-string v0, "wfr=1"

    .line 1693
    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x1

    if-nez p2, :cond_6

    .line 1694
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1695
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$k;->f:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1, v0}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1696
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->b:Ljava/lang/Runnable;

    if-eqz p2, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz v1, :cond_1

    .line 1697
    invoke-virtual {v1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1699
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p2, :cond_2

    .line 1700
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1712
    :cond_2
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$k;->c:Z

    if-eqz p2, :cond_4

    .line 1713
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p2

    const/16 v1, 0x11f

    if-eqz p2, :cond_3

    .line 1715
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v1, p2, v2}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1718
    :cond_3
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v1, p2, v2}, Lcom/tkay/expressad/videocommon/a;->b(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1722
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p2

    const/16 v1, 0x5e

    if-eqz p2, :cond_5

    .line 1724
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v1, p2, v2}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1727
    :cond_5
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v1, p2, v2}, Lcom/tkay/expressad/videocommon/a;->b(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    .line 1732
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p2, :cond_7

    .line 1733
    invoke-interface {p2}, Lcom/tkay/expressad/reward/a/c$j;->a()V

    goto :goto_1

    .line 1736
    :cond_6
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz p2, :cond_7

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz v1, :cond_7

    const-wide/16 v2, 0x1388

    .line 1737
    invoke-virtual {p2, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 1740
    :cond_7
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Landroid/webkit/WebView;)V

    .line 1741
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$k;->p:Z

    :cond_8
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1611
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 1613
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, "_"

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->f:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1620
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_1

    .line 1621
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz p2, :cond_0

    .line 1622
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1625
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz p1, :cond_1

    .line 1626
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    invoke-virtual {p2, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1630
    :cond_1
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1631
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p1, :cond_2

    .line 1632
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1634
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p1, :cond_3

    .line 1635
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    invoke-interface {p1, p3}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception p1

    .line 1638
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_4

    .line 1639
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_4
    return-void
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 3

    .line 1646
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 1647
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string p2, ""

    if-nez p3, :cond_0

    move-object v0, p2

    goto :goto_0

    :cond_0
    invoke-virtual {p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    :goto_0
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 1648
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->f:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1654
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_2

    .line 1655
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 1656
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1659
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz p1, :cond_2

    .line 1660
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1664
    :cond_2
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1665
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p1, :cond_3

    .line 1666
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1668
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p1, :cond_5

    .line 1669
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-nez p3, :cond_4

    goto :goto_1

    :cond_4
    invoke-virtual {p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    :goto_1
    invoke-interface {p1, p2}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_5
    return-void

    :catch_0
    move-exception p1

    .line 1672
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_6

    .line 1673
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_6
    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 3

    .line 1553
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->readyState(Landroid/webkit/WebView;I)V

    .line 1554
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->r:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 1555
    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1558
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->s:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 1559
    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1562
    :cond_1
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$k;->q:Z

    if-nez p1, :cond_9

    .line 1568
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x1

    if-ne p2, p1, :cond_7

    .line 1571
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->b:Ljava/lang/Runnable;

    if-eqz p2, :cond_2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->a:Landroid/os/Handler;

    if-eqz v1, :cond_2

    .line 1572
    invoke-virtual {v1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1575
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->j:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->i:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1576
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p2, :cond_3

    .line 1577
    invoke-virtual {p2, p1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1579
    :cond_3
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$k;->c:Z

    if-eqz p2, :cond_5

    .line 1580
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$k;->e:Z

    const/16 v0, 0x11f

    if-eqz p2, :cond_4

    .line 1582
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1585
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1588
    :cond_5
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$k;->e:Z

    const/16 v0, 0x5e

    if-eqz p2, :cond_6

    .line 1590
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_0

    .line 1593
    :cond_6
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->m:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$k;->l:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    .line 1597
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p2, :cond_8

    .line 1598
    invoke-interface {p2}, Lcom/tkay/expressad/reward/a/c$j;->a()V

    goto :goto_1

    .line 1601
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k;->g:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz v0, :cond_8

    .line 1602
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string v1, "state "

    invoke-virtual {v1, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p2}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V

    .line 1605
    :cond_8
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$k;->q:Z

    :cond_9
    return-void
.end method
