.class public Lcom/sigmob/sdk/base/common/AdActivity;
.super Lcom/sigmob/sdk/videoAd/BaseAdActivity;

# interfaces
.implements Lcom/sigmob/sdk/base/common/j;


# instance fields
.field private j:Lcom/sigmob/sdk/base/common/i;

.field private k:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;-><init>()V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)Lcom/sigmob/sdk/base/common/i;
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/IllegalStateException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "ad_view_class_name"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x5

    const/4 v3, 0x4

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "mraid_two"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v4

    goto :goto_1

    :sswitch_1
    const-string v1, "mraid"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v5

    goto :goto_1

    :sswitch_2
    const-string v1, "reward"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :sswitch_3
    const-string v1, "DisLike"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :sswitch_4
    const-string v1, "LandPage"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v6

    goto :goto_1

    :sswitch_5
    const-string v1, "LandNative"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    if-eqz v0, :cond_6

    if-eq v0, v6, :cond_5

    if-eq v0, v5, :cond_4

    if-eq v0, v4, :cond_3

    if-eq v0, v3, :cond_2

    if-eq v0, v2, :cond_1

    const/4 v0, 0x0

    return-object v0

    :cond_1
    new-instance v7, Lcom/sigmob/sdk/nativead/s;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/nativead/s;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :cond_2
    new-instance v7, Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/nativead/u;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :cond_3
    new-instance v7, Lcom/sigmob/sdk/mraid2/m;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/mraid2/m;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :cond_4
    new-instance v7, Lcom/sigmob/sdk/mraid/m;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/mraid/m;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :cond_5
    new-instance v7, Lcom/sigmob/sdk/base/common/u;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/base/common/u;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :cond_6
    new-instance v7, Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/videoAd/l;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-object v7

    :sswitch_data_0
    .sparse-switch
        -0x74ecb1fe -> :sswitch_5
        -0x5c8e20c6 -> :sswitch_4
        -0x3932b6db -> :sswitch_3
        -0x37b0b0d1 -> :sswitch_2
        0x6354d77 -> :sswitch_1
        0x2780ab84 -> :sswitch_0
    .end sparse-switch
.end method

.method private static a(Landroid/content/Intent;)Ljava/lang/String;
    .locals 1

    const-string v0, "broadcastIdentifier"

    invoke-virtual {p0, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Landroid/content/Context;)V
    .locals 6

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "input_method"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/inputmethod/InputMethodManager;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    move-object p0, v0

    :goto_0
    if-nez p0, :cond_1

    return-void

    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    :goto_1
    if-ge v3, v2, :cond_5

    aget-object v4, v1, v3

    :try_start_1
    invoke-virtual {v4}, Ljava/lang/reflect/Field;->isAccessible()Z

    move-result v5

    if-nez v5, :cond_2

    const/4 v5, 0x1

    invoke-virtual {v4, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    :cond_2
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_4

    instance-of v5, v5, Landroid/view/View;

    if-nez v5, :cond_3

    goto :goto_2

    :cond_3
    invoke-virtual {v4, p0, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v4

    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_4
    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_5
    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V

    const/4 v0, 0x0

    invoke-virtual {p0, v0, v0}, Lcom/sigmob/sdk/base/common/AdActivity;->overridePendingTransition(II)V

    return-void
.end method

.method public a(I)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/AdActivity;->setRequestedOrientation(I)V

    return-void
.end method

.method public a(Ljava/lang/Class;ILandroid/os/Bundle;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Activity;",
            ">;I",
            "Landroid/os/Bundle;",
            ")V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p3}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Ljava/lang/Class;Landroid/os/Bundle;)Landroid/content/Intent;

    move-result-object p3

    :try_start_0
    invoke-virtual {p0, p3, p2}, Lcom/sigmob/sdk/base/common/AdActivity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "Activity "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " not found. Did you declare it in your AndroidManifest.xml?"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/i;->a(IILandroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/i;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onBackPressed()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/i;->f()V

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/i;->a(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5

    const-string v0, "error"

    const-string v1, "com.sigmob.action.rewardedvideo.playFail"

    invoke-super {p0, p1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onCreate(Landroid/os/Bundle;)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "TaskId :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getTaskId()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-static {v2}, Lcom/sigmob/sdk/base/common/AdActivity;->a(Landroid/content/Intent;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    const-string v3, "adUnit_requestId_key"

    invoke-virtual {v2, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    if-eqz v3, :cond_2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {v2}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    const-string v4, "dislike_broadcastIdentifier"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    if-nez v2, :cond_1

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "playAdUnit"

    const-string v3, "playAdUnit is null"

    invoke-virtual {p1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    invoke-static {p0, v2, p1, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V

    return-void

    :cond_1
    invoke-direct {p0, v2, p1}, Lcom/sigmob/sdk/base/common/AdActivity;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)Lcom/sigmob/sdk/base/common/i;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/i;->b()V

    goto :goto_1

    :cond_2
    :goto_0
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "uuid is empty"

    invoke-virtual {p1, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    invoke-static {p0, v2, p1, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AdActivity onCreate Throwable:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    invoke-static {p0, p1, v2, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V

    :cond_3
    :goto_1
    return-void
.end method

.method protected onDestroy()V
    .locals 1

    const-string v0, "RewardVideoAdPlayerActivity onDestroy() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/i;->e()V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onDestroy()V

    return-void
.end method

.method protected onPause()V
    .locals 3

    :try_start_0
    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onPause()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/i;->c()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "error"

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    const-string v2, "com.sigmob.action.rewardedvideo.playFail"

    invoke-static {p0, v0, v1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V

    :cond_0
    :goto_0
    return-void
.end method

.method protected onResume()V
    .locals 3

    :try_start_0
    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onResume()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/i;->d()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "error"

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->k:Ljava/lang/String;

    const-string v2, "com.sigmob.action.rewardedvideo.playFail"

    invoke-static {p0, v0, v1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/AdActivity;->finish()V

    :cond_0
    :goto_0
    return-void
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->onSaveInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/AdActivity;->j:Lcom/sigmob/sdk/base/common/i;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/i;->a(Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onSetContentView(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/AdActivity;->setContentView(Landroid/view/View;)V

    return-void
.end method

.method public setRequestedOrientation(I)V
    .locals 2

    :try_start_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/videoAd/BaseAdActivity;->setRequestedOrientation(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setRequestedOrientation: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
