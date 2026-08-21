.class Lcom/sigmob/sdk/base/services/a;
.super Landroid/content/BroadcastReceiver;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "app_install_Monitor"

    invoke-static {p1, v0, p2, p3}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/content/pm/PackageInfo;)V
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->H:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v0, "1"

    const-string v1, "app_install_end"

    invoke-static {p2, v1, p3, v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V

    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    const-string v1, "result"

    invoke-virtual {p3, v1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.sigmob.action.interstitial.install.end"

    invoke-static {p1, v0, p3, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDeeplinkUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 12

    const-string v0, "app_install_end"

    const-string v1, "android.intent.action.PACKAGE_REMOVED"

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {p2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v3}, Landroid/net/Uri;->getSchemeSpecificPart()Ljava/lang/String;

    move-result-object v3

    const-string v4, "android.intent.extra.REPLACING"

    const/4 v5, 0x0

    invoke-virtual {p2, v4, v5}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v4

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v6, :cond_0

    if-nez v4, :cond_0

    return-void

    :cond_0
    const/4 v6, 0x0

    :try_start_1
    invoke-virtual {v2, v3, v5}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-object v2, v6

    :goto_0
    :try_start_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_3

    new-instance v7, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, ".log"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-direct {v7, v8, v9}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Lcom/czhj/sdk/common/utils/FileUtil;->readFromCache(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v8

    if-eqz v8, :cond_2

    instance-of v9, v8, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v9, :cond_2

    check-cast v8, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v8}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v6

    if-eqz v6, :cond_1

    goto :goto_1

    :cond_1
    move-object v6, v8

    :cond_2
    :goto_1
    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    :cond_3
    if-nez v6, :cond_4

    return-void

    :cond_4
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    const/4 v7, -0x1

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v8

    const/4 v9, 0x3

    const/4 v10, 0x2

    const/4 v11, 0x1

    sparse-switch v8, :sswitch_data_0

    goto :goto_2

    :sswitch_0
    const-string v1, "android.intent.action.PACKAGE_ADDED"

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    move v7, v5

    goto :goto_2

    :sswitch_1
    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    move v7, v11

    goto :goto_2

    :sswitch_2
    const-string v1, "android.intent.action.PACKAGE_REPLACED"

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    move v7, v10

    goto :goto_2

    :sswitch_3
    const-string v1, "android.intent.action.INSTALL_FAILURE"

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz p2, :cond_5

    move v7, v9

    :cond_5
    :goto_2
    if-eqz v7, :cond_c

    const-string p2, "\u66ff\u6362\u6210\u529f"

    if-eq v7, v11, :cond_a

    if-eq v7, v10, :cond_8

    if-eq v7, v9, :cond_6

    goto/16 :goto_4

    :cond_6
    :try_start_3
    sget-object p2, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_7

    const-string p2, "\u5b89\u88c5\u5931\u8d25"

    invoke-static {p1, p2, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    invoke-virtual {p2}, Landroid/widget/Toast;->show()V

    :cond_7
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",System"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v6, v0, v2, p2}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V

    sget-object p2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p2

    const-string v1, "system"

    invoke-static {v0, p2, v1, v6}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    const-string v0, "result"

    const-string v1, "0"

    invoke-virtual {p2, v0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v6}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.sigmob.action.interstitial.install.end"

    invoke-static {p1, v0, p2, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto/16 :goto_4

    :cond_8
    sget-object v0, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_9

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2, v11}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    invoke-virtual {p2}, Landroid/widget/Toast;->show()V

    :cond_9
    :goto_3
    invoke-direct {p0, p1, v6, v2}, Lcom/sigmob/sdk/base/services/a;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/content/pm/PackageInfo;)V

    goto :goto_4

    :cond_a
    if-eqz v4, :cond_b

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2, v11}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    invoke-virtual {p2}, Landroid/widget/Toast;->show()V

    goto :goto_3

    :cond_b
    sget-object p2, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_d

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u5378\u8f7d\u6210\u529f"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2, v11}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    goto :goto_4

    :cond_c
    sget-object p2, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_9

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u5b89\u88c5\u6210\u529f"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2, v11}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    invoke-virtual {p2}, Landroid/widget/Toast;->show()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_d
    :goto_4
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x5e8660bf -> :sswitch_3
        -0x304ed112 -> :sswitch_2
        0x1f50b9c2 -> :sswitch_1
        0x5c1076e2 -> :sswitch_0
    .end sparse-switch
.end method
