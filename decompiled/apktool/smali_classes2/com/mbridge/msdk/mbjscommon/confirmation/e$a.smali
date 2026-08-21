.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private a:Landroid/content/BroadcastReceiver;

.field private final b:Ljava/lang/String;

.field private final c:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

.field private final d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private final e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private f:I


# direct methods
.method public constructor <init>(Landroid/content/BroadcastReceiver;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;I)V
    .locals 0

    .line 682
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 683
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->a:Landroid/content/BroadcastReceiver;

    .line 684
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->b:Ljava/lang/String;

    .line 685
    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->c:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    .line 686
    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 687
    iput-object p5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 688
    iput p6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->f:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;I)V
    .locals 0

    .line 692
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 693
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->b:Ljava/lang/String;

    .line 694
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->c:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    .line 695
    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 696
    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 697
    iput p5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->f:I

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 701
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->f:I

    return-void
.end method

.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 3

    .line 706
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->a:Landroid/content/BroadcastReceiver;

    if-eqz p1, :cond_0

    .line 708
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->a:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 710
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "SecondaryConfirmationManager"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 713
    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->c:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    .line 1718
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    invoke-static {v2, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1719
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 1721
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    invoke-static {v2, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1722
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    :cond_2
    if-eqz v0, :cond_3

    .line 1725
    iget p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->f:I

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a(I)V

    .line 1726
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->b()V

    .line 1728
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)V

    return-void
.end method
