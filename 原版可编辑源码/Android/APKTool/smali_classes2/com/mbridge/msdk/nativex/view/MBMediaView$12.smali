.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$12;
.super Lcom/mbridge/msdk/widget/a;
.source "MBMediaView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 602
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Lcom/mbridge/msdk/widget/a;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/view/View;)V
    .locals 3

    const-string v0, "MBMediaView"

    .line 606
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 607
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 611
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showSoundIndicator(Z)V

    .line 612
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showProgressView(Z)V

    .line 614
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    if-nez v1, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_4

    .line 615
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->halfLoadingViewisVisible()Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isPlaying()Z

    move-result p1

    if-nez p1, :cond_2

    goto :goto_0

    .line 619
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    goto :goto_2

    :cond_3
    :goto_0
    const-string p1, "is loading or no playing return;"

    .line 616
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 620
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    if-eqz v1, :cond_5

    const-string p1, "fullScreenShowUI"

    .line 621
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 622
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    return-void

    .line 625
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 626
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/content/Context;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Landroid/content/Context;)V

    goto :goto_1

    .line 628
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Landroid/content/Context;)V

    :goto_1
    const-string p1, "\u4e0d\u5141\u8bb8\u5168\u5c4f \u8df3gp"

    .line 630
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 631
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 632
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object p1

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/media/InteractionType;->CLICK:Lcom/iab/omid/library/mmadbridge/adsession/media/InteractionType;

    invoke-virtual {p1, v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->adUserInteraction(Lcom/iab/omid/library/mmadbridge/adsession/media/InteractionType;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 636
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_7
    :goto_2
    return-void
.end method
