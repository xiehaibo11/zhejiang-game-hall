.class public Lcom/sigmob/sdk/videoAd/BaseAdActivity;
.super Landroid/app/Activity;


# static fields
.field public static final a:Ljava/lang/String; = "LandPage"

.field public static final b:Ljava/lang/String; = "reward"

.field public static final c:Ljava/lang/String; = "mraid"

.field public static final d:Ljava/lang/String; = "mraid_two"

.field public static final e:Ljava/lang/String; = "LandNative"

.field public static final f:Ljava/lang/String; = "DisLike"

.field protected static final g:Ljava/lang/String; = "ad_view_class_name"

.field protected static final h:Ljava/lang/String; = "adUnit_requestId_key"

.field public static final i:Ljava/lang/String; = "land_page_url"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/sigmob/sdk/videoAd/BaseAdActivity;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Landroid/content/Intent;"
        }
    .end annotation

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p1, 0x10000000

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string p1, "ad_view_class_name"

    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "adUnit_requestId_key"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    instance-of p1, p0, Landroid/app/Activity;

    if-eqz p1, :cond_0

    move-object p1, p0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getRequestedOrientation()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x3

    :goto_0
    const/4 p3, 0x6

    const/4 v1, 0x7

    if-eq p1, v1, :cond_2

    if-eq p1, p3, :cond_2

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I

    if-le p1, p0, :cond_1

    move p1, p3

    goto :goto_1

    :cond_1
    move p1, v1

    :cond_2
    :goto_1
    const-string p0, "REQUESTED_ORIENTATION"

    invoke-virtual {v0, p0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p0, "broadcastIdentifier"

    invoke-virtual {v0, p0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Class;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/sigmob/sdk/videoAd/BaseAdActivity;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LandPage"

    invoke-static {p0, p1, v0, v1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "land_page_url"

    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p1, v0}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p2, "error"

    invoke-virtual {p1, p2, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/sigmob/sdk/videoAd/BaseAdActivity;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    const-string v1, "LandPage"

    invoke-static {p0, p1, p2, v0, v1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/sigmob/sdk/videoAd/BaseAdActivity;",
            ">;",
            "Ljava/lang/String;",
            "Landroid/os/Bundle;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-static {p0, p1, p2, p4}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    if-eqz p3, :cond_0

    :try_start_0
    invoke-virtual {p1, p3}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    :cond_0
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p4, "error"

    invoke-virtual {p3, p4, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "com.sigmob.action.rewardedvideo.playFail"

    invoke-static {p0, p2, p3, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static b(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/sigmob/sdk/videoAd/BaseAdActivity;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p1, 0x10000000

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string p1, "ad_view_class_name"

    const-string v1, "DisLike"

    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "adUnit_requestId_key"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/4 p1, 0x3

    instance-of p2, p0, Landroid/app/Activity;

    if-eqz p2, :cond_0

    move-object p1, p0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getRequestedOrientation()I

    move-result p1

    :cond_0
    const/4 p2, 0x6

    const/4 v1, 0x7

    if-eq p1, v1, :cond_2

    if-eq p1, p2, :cond_2

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    if-le p1, v2, :cond_1

    move p1, p2

    goto :goto_0

    :cond_1
    move p1, v1

    :cond_2
    :goto_0
    const-string p2, "REQUESTED_ORIENTATION"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p1, "broadcastIdentifier"

    const-string p2, "dislike_broadcastIdentifier"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method


# virtual methods
.method protected attachBaseContext(Landroid/content/Context;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videoAd/BaseAdActivity$1;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity$1;-><init>(Lcom/sigmob/sdk/videoAd/BaseAdActivity;Landroid/content/Context;)V

    invoke-super {p0, v0}, Landroid/app/Activity;->attachBaseContext(Landroid/content/Context;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->abandonAudioFocus(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I

    :cond_0
    const-string v0, "BaseAdActivity onDestroy() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method
