.class final Lcom/mbridge/msdk/mbbanner/common/c/c$1;
.super Landroid/os/Handler;
.source "BannerShowManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/c;Landroid/os/Looper;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 118
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 119
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 122
    :cond_0
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 123
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    invoke-static {p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->createAdEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    move-result-object p1

    .line 124
    invoke-virtual {p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->impressionOccurred()V

    .line 125
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    invoke-virtual {p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    .line 126
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 129
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
