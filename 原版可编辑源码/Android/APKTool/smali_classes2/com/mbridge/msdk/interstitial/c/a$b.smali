.class public final Lcom/mbridge/msdk/interstitial/c/a$b;
.super Ljava/lang/Object;
.source "InterstitialController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/c/a;

.field private b:Lcom/mbridge/msdk/interstitial/a/a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/interstitial/c/a;Lcom/mbridge/msdk/interstitial/a/a;)V
    .locals 0

    .line 508
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->a:Lcom/mbridge/msdk/interstitial/c/a;

    .line 509
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 510
    iput-object p2, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->b:Lcom/mbridge/msdk/interstitial/a/a;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 516
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "CommonCancelTimeTask"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 517
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->b:Lcom/mbridge/msdk/interstitial/a/a;

    if-eqz v0, :cond_2

    .line 518
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->b:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/interstitial/a/a;->d()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "load timeout"

    if-eqz v0, :cond_0

    .line 522
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;Ljava/lang/String;)V

    goto :goto_0

    .line 524
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 525
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;Ljava/lang/String;)V

    .line 528
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->b:Lcom/mbridge/msdk/interstitial/a/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/c/a$a;)V

    .line 529
    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a$b;->b:Lcom/mbridge/msdk/interstitial/a/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 532
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method
