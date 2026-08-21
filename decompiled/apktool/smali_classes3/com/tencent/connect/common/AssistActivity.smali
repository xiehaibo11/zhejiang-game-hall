.class public Lcom/tencent/connect/common/AssistActivity;
.super Landroid/app/Activity;
.source "ProGuard"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;
    }
.end annotation


# static fields
.field public static final EXTRA_INTENT:Ljava/lang/String; = "openSDK_LOG.AssistActivity.ExtraIntent"

.field public static final KEY_EXTRA_PENDING_INTENT:Ljava/lang/String; = "key_extra_pending_intent"

.field public static final KEY_REQUEST_ORIENTATION:Ljava/lang/String; = "key_request_orientation"


# instance fields
.field protected a:Z

.field protected b:Landroid/os/Handler;

.field private c:Z

.field private d:Ljava/lang/String;

.field private e:Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

.field private f:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->c:Z

    .line 46
    iput-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->a:Z

    .line 57
    new-instance v0, Lcom/tencent/connect/common/AssistActivity$1;

    invoke-direct {v0, p0}, Lcom/tencent/connect/common/AssistActivity$1;-><init>(Lcom/tencent/connect/common/AssistActivity;)V

    iput-object v0, p0, Lcom/tencent/connect/common/AssistActivity;->b:Landroid/os/Handler;

    return-void
.end method

.method private a(Landroid/content/Intent;Z)V
    .locals 2

    if-nez p1, :cond_0

    const-string p1, "openSDK_LOG.AssistActivity"

    const-string p2, "reportStartActivitySuccess, but intent is null."

    .line 169
    invoke-static {p1, p2}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 172
    :cond_0
    sget-object v0, Lcom/tencent/connect/common/Constants;->KEY_PASS_REPORT_VIA_PARAM:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getBundleExtra(Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_2

    if-eqz p2, :cond_1

    const-string p2, "0"

    goto :goto_0

    :cond_1
    const-string p2, "1"

    .line 174
    :goto_0
    invoke-static {v0, p2}, Lcom/tencent/open/utils/m;->a(Landroid/os/Bundle;Ljava/lang/String;)Landroid/os/Bundle;

    .line 175
    sget-object p2, Lcom/tencent/connect/common/Constants;->KEY_PASS_REPORT_VIA_TIMELY:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p1

    .line 176
    invoke-static {}, Lcom/tencent/open/b/h;->a()Lcom/tencent/open/b/h;

    move-result-object p2

    iget-object v1, p0, Lcom/tencent/connect/common/AssistActivity;->d:Ljava/lang/String;

    invoke-virtual {p2, v0, v1, p1}, Lcom/tencent/open/b/h;->a(Landroid/os/Bundle;Ljava/lang/String;Z)V

    :cond_2
    return-void
.end method

.method private a(Landroid/os/Bundle;)V
    .locals 12

    const-string v0, "viaShareType"

    .line 450
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v0, "callbackAction"

    .line 451
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "url"

    .line 452
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "openId"

    .line 453
    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "appId"

    .line 454
    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string p1, "shareToQQ"

    .line 458
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    const-string v4, ""

    if-eqz p1, :cond_0

    const-string p1, "ANDROIDQQ.SHARETOQQ.XX"

    const-string v4, "10"

    :goto_0
    move-object v5, v4

    move-object v4, p1

    goto :goto_1

    :cond_0
    const-string p1, "shareToQzone"

    .line 461
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "ANDROIDQQ.SHARETOQZ.XX"

    const-string v4, "11"

    goto :goto_0

    :cond_1
    move-object v5, v4

    .line 466
    :goto_1
    invoke-static {p0, v1}, Lcom/tencent/open/utils/m;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 468
    invoke-static {}, Lcom/tencent/connect/common/UIListenerManager;->getInstance()Lcom/tencent/connect/common/UIListenerManager;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tencent/connect/common/UIListenerManager;->getListnerWithAction(Ljava/lang/String;)Lcom/tencent/tauth/IUiListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 470
    new-instance v0, Lcom/tencent/tauth/UiError;

    const/4 v1, -0x6

    const/4 v6, 0x0

    const-string v7, "\u6253\u5f00\u6d4f\u89c8\u5668\u5931\u8d25!"

    invoke-direct {v0, v1, v7, v6}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v0}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    .line 473
    :cond_2
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v1

    const-string v6, "3"

    const-string v7, "1"

    const-string v9, "0"

    const-string v10, "2"

    const-string v11, "0"

    invoke-virtual/range {v1 .. v11}, Lcom/tencent/open/b/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_2

    .line 478
    :cond_3
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v1

    const-string v6, "3"

    const-string v7, "0"

    const-string v9, "0"

    const-string v10, "2"

    const-string v11, "0"

    invoke-virtual/range {v1 .. v11}, Lcom/tencent/open/b/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 482
    :goto_2
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "shareH5"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V

    return-void
.end method

.method public static getAssistActivityIntent(Landroid/content/Context;)Landroid/content/Intent;
    .locals 2

    .line 53
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/tencent/connect/common/AssistActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    return-object v0
.end method


# virtual methods
.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 2

    .line 356
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "--onActivityResult--requestCode: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " | resultCode: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "data = null ? "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p3, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "openSDK_LOG.AssistActivity"

    invoke-static {v1, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 358
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    if-nez p1, :cond_1

    return-void

    :cond_1
    if-eqz p3, :cond_2

    const-string p2, "key_action"

    const-string v0, "action_login"

    .line 364
    invoke-virtual {p3, p2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 367
    :cond_2
    invoke-virtual {p0, p1, p3}, Lcom/tencent/connect/common/AssistActivity;->setResultData(ILandroid/content/Intent;)V

    .line 369
    iget-boolean p1, p0, Lcom/tencent/connect/common/AssistActivity;->f:Z

    if-nez p1, :cond_3

    const-string p1, "onActivityResult finish immediate"

    .line 370
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 371
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_1

    .line 373
    :cond_3
    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance p2, Lcom/tencent/connect/common/AssistActivity$2;

    invoke-direct {p2, p0}, Lcom/tencent/connect/common/AssistActivity$2;-><init>(Lcom/tencent/connect/common/AssistActivity;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :goto_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 14

    const-string v0, "--onCreate--startActException"

    .line 75
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    const/high16 v2, 0x4000000

    invoke-virtual {v1, v2}, Landroid/view/Window;->addFlags(I)V

    const/4 v1, 0x1

    .line 76
    invoke-virtual {p0, v1}, Lcom/tencent/connect/common/AssistActivity;->requestWindowFeature(I)Z

    .line 77
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 79
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    sget-object v3, Lcom/tencent/connect/common/Constants;->KEY_RESTORE_LANDSCAPE:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v2

    iput-boolean v2, p0, Lcom/tencent/connect/common/AssistActivity;->f:Z

    .line 80
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "--onCreate-- mRestoreLandscape="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/tencent/connect/common/AssistActivity;->f:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "openSDK_LOG.AssistActivity"

    invoke-static {v3, v2}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    if-nez v2, :cond_0

    const-string v2, "-->onCreate--getIntent() returns null"

    .line 82
    invoke-static {v3, v2}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    .line 86
    :cond_0
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    const-string v5, "openSDK_LOG.AssistActivity.ExtraIntent"

    invoke-virtual {v2, v5}, Landroid/content/Intent;->getParcelableExtra(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v2

    check-cast v2, Landroid/content/Intent;

    if-nez v2, :cond_1

    const/4 v5, 0x0

    goto :goto_0

    :cond_1
    const-string v5, "key_request_code"

    .line 88
    invoke-virtual {v2, v5, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    :goto_0
    const-string v13, ""

    if-nez v2, :cond_2

    move-object v6, v13

    goto :goto_1

    :cond_2
    const-string v6, "appid"

    .line 89
    invoke-virtual {v2, v6}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    :goto_1
    iput-object v6, p0, Lcom/tencent/connect/common/AssistActivity;->d:Ljava/lang/String;

    .line 91
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v6

    const-string v7, "h5_share_data"

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getBundleExtra(Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v6

    if-eqz p1, :cond_3

    const-string v7, "RESTART_FLAG"

    .line 94
    invoke-virtual {p1, v7}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v7

    iput-boolean v7, p0, Lcom/tencent/connect/common/AssistActivity;->c:Z

    const-string v7, "RESUME_FLAG"

    .line 95
    invoke-virtual {p1, v7, v4}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tencent/connect/common/AssistActivity;->a:Z

    .line 97
    :cond_3
    iget-boolean p1, p0, Lcom/tencent/connect/common/AssistActivity;->c:Z

    if-nez p1, :cond_c

    if-nez v6, :cond_b

    .line 101
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v6, "key_extra_pending_intent"

    invoke-virtual {p1, v6}, Landroid/content/Intent;->getParcelableExtra(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    check-cast p1, Landroid/app/PendingIntent;

    if-eqz v2, :cond_8

    if-eqz p1, :cond_8

    .line 103
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "--onCreate--activityIntent not null, will start activity, reqcode = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 105
    :try_start_0
    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v6

    const-string v7, "share_id"

    invoke-virtual {v6, v7}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 106
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "com.tencent.tauth.opensdk.SHARE_SUCCESS_AND_STAY_QQ_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 107
    new-instance v7, Landroid/content/IntentFilter;

    invoke-direct {v7, v6}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 108
    iget-object v6, p0, Lcom/tencent/connect/common/AssistActivity;->e:Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

    if-nez v6, :cond_4

    .line 109
    new-instance v6, Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

    const/4 v8, 0x0

    invoke-direct {v6, p0, v8}, Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;-><init>(Lcom/tencent/connect/common/AssistActivity;Lcom/tencent/connect/common/AssistActivity$1;)V

    iput-object v6, p0, Lcom/tencent/connect/common/AssistActivity;->e:Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

    .line 111
    :cond_4
    iget-object v6, p0, Lcom/tencent/connect/common/AssistActivity;->e:Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

    invoke-virtual {p0, v6, v7}, Lcom/tencent/connect/common/AssistActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v6

    .line 113
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "registerReceiver exception : "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    :goto_2
    :try_start_1
    invoke-virtual {p1}, Landroid/app/PendingIntent;->getIntentSender()Landroid/content/IntentSender;

    move-result-object v8

    const-string p1, "for_result"

    .line 119
    invoke-virtual {v2, p1, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p1

    if-eqz p1, :cond_5

    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v11, 0x0

    const/4 v12, 0x0

    move-object v6, p0

    move-object v7, v8

    move v8, v5

    .line 120
    invoke-virtual/range {v6 .. v12}, Lcom/tencent/connect/common/AssistActivity;->startIntentSenderForResult(Landroid/content/IntentSender;ILandroid/content/Intent;III)V

    goto :goto_3

    :cond_5
    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v11, 0x0

    const/4 v12, 0x0

    move-object v7, p0

    .line 122
    invoke-virtual/range {v7 .. v12}, Lcom/tencent/connect/common/AssistActivity;->startIntentSender(Landroid/content/IntentSender;Landroid/content/Intent;III)V

    .line 124
    :goto_3
    invoke-direct {p0, v2, v1}, Lcom/tencent/connect/common/AssistActivity;->a(Landroid/content/Intent;Z)V
    :try_end_1
    .catch Landroid/content/ActivityNotFoundException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto/16 :goto_7

    :catchall_0
    move-exception p1

    const/4 v1, 0x0

    goto :goto_4

    :catch_1
    move-exception p1

    .line 141
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    .line 142
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "--onCreate--startActivity exception: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 145
    invoke-static {v3, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto/16 :goto_7

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception p1

    .line 127
    :try_start_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "--onCreate--startActivity exception, ActivityNotFoundException : "

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 128
    invoke-static {}, Lcom/tencent/connect/common/UIListenerManager;->getInstance()Lcom/tencent/connect/common/UIListenerManager;

    move-result-object p1

    invoke-virtual {p1, v5}, Lcom/tencent/connect/common/UIListenerManager;->getListnerWithRequestCode(I)Lcom/tencent/tauth/IUiListener;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 130
    new-instance v1, Lcom/tencent/tauth/UiError;

    const/16 v5, -0x14

    const-string v6, "\u624bQ\u7248\u672c\u8fc7\u4f4e\uff0c\u8bf7\u4e0b\u8f7d\u5b89\u88c5\u6700\u65b0\u7248\u624bQ"

    invoke-direct {v1, v5, v6, v13}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v1}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    .line 132
    :cond_6
    invoke-direct {p0, v2, v4}, Lcom/tencent/connect/common/AssistActivity;->a(Landroid/content/Intent;Z)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_7

    :goto_4
    if-eqz v1, :cond_7

    .line 145
    invoke-static {v3, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    .line 148
    :cond_7
    throw p1

    .line 150
    :cond_8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "--onCreate--activityIntent or pendingIntent is null. activityIntent is null? "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v2, :cond_9

    const/4 v2, 0x1

    goto :goto_5

    :cond_9
    const/4 v2, 0x0

    :goto_5
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", pendingIntent is null? "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p1, :cond_a

    goto :goto_6

    :cond_a
    const/4 v1, 0x0

    :goto_6
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_7

    :cond_b
    const-string p1, "--onCreate--h5 bundle not null, will open browser"

    .line 158
    invoke-static {v3, p1}, Lcom/tencent/open/log/SLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    invoke-direct {p0, v6}, Lcom/tencent/connect/common/AssistActivity;->a(Landroid/os/Bundle;)V

    goto :goto_7

    :cond_c
    const-string p1, "is restart"

    .line 163
    invoke-static {v3, p1}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_7
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "-->onDestroy"

    .line 245
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 247
    iget-object v0, p0, Lcom/tencent/connect/common/AssistActivity;->e:Lcom/tencent/connect/common/AssistActivity$QQStayReceiver;

    if-eqz v0, :cond_0

    .line 248
    invoke-virtual {p0, v0}, Lcom/tencent/connect/common/AssistActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 8

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "--onNewIntent"

    .line 255
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 256
    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    const/4 v1, -0x1

    const-string v2, "key_request_code"

    .line 261
    invoke-virtual {p1, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    .line 262
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "--onNewIntent callbackRequestCode= "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    const/4 v4, 0x0

    const-string v5, "stay_back_stack"

    const-string v6, "key_action"

    const/16 v7, 0x277c

    if-ne v2, v7, :cond_1

    const-string v0, "action_request_avatar"

    .line 264
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 265
    invoke-virtual {p1, v5, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 267
    invoke-virtual {p0, v3}, Lcom/tencent/connect/common/AssistActivity;->moveTaskToBack(Z)Z

    .line 269
    :cond_0
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 270
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 271
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto/16 :goto_0

    :cond_1
    const/16 v7, 0x277d

    if-ne v2, v7, :cond_3

    const-string v0, "action_request_set_emotion"

    .line 274
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 275
    invoke-virtual {p1, v5, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 277
    invoke-virtual {p0, v3}, Lcom/tencent/connect/common/AssistActivity;->moveTaskToBack(Z)Z

    .line 279
    :cond_2
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 280
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 281
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto/16 :goto_0

    :cond_3
    const/16 v7, 0x277e

    if-ne v2, v7, :cond_5

    const-string v0, "action_request_dynamic_avatar"

    .line 284
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 285
    invoke-virtual {p1, v5, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 287
    invoke-virtual {p0, v3}, Lcom/tencent/connect/common/AssistActivity;->moveTaskToBack(Z)Z

    .line 289
    :cond_4
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 290
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 291
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto/16 :goto_0

    :cond_5
    const/16 v7, 0x277f

    if-ne v2, v7, :cond_7

    const-string v0, "joinGroup"

    .line 294
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 295
    invoke-virtual {p1, v5, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 297
    invoke-virtual {p0, v3}, Lcom/tencent/connect/common/AssistActivity;->moveTaskToBack(Z)Z

    .line 299
    :cond_6
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 300
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 301
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_0

    :cond_7
    const/16 v7, 0x2780

    if-ne v2, v7, :cond_9

    const-string v0, "bindGroup"

    .line 304
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 305
    invoke-virtual {p1, v5, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 307
    invoke-virtual {p0, v3}, Lcom/tencent/connect/common/AssistActivity;->moveTaskToBack(Z)Z

    .line 309
    :cond_8
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 310
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 311
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_0

    :cond_9
    const/16 v3, 0x2781

    const-string v4, "action"

    const-string v5, "--onNewIntent--activity not finished, finish now"

    if-ne v2, v3, :cond_a

    .line 314
    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v6, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 315
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 316
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 317
    invoke-static {v0, v5}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 318
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_0

    :cond_a
    const/16 v3, 0x2782

    if-eq v2, v3, :cond_b

    const-string v2, "action_share"

    .line 334
    invoke-virtual {p1, v6, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 335
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 336
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 337
    invoke-static {v0, v5}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    goto :goto_0

    .line 324
    :cond_b
    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v6, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 325
    invoke-virtual {p0, v1, p1}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 326
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result p1

    if-nez p1, :cond_c

    .line 327
    invoke-static {v0, v5}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 328
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    :cond_c
    :goto_0
    return-void
.end method

.method protected onPause()V
    .locals 2

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "-->onPause"

    .line 220
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    iget-object v0, p0, Lcom/tencent/connect/common/AssistActivity;->b:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 222
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method protected onResume()V
    .locals 3

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "-->onResume"

    .line 188
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 198
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "is_login"

    .line 199
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v2

    if-eqz v2, :cond_0

    return-void

    :cond_0
    const-string v2, "is_qq_mobile_share"

    .line 203
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_1

    .line 204
    iget-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->c:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_1

    .line 205
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->finish()V

    .line 208
    :cond_1
    iget-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->a:Z

    if-eqz v0, :cond_2

    .line 209
    iget-object v0, p0, Lcom/tencent/connect/common/AssistActivity;->b:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 211
    iget-object v1, p0, Lcom/tencent/connect/common/AssistActivity;->b:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    :cond_2
    const/4 v0, 0x1

    .line 214
    iput-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->a:Z

    return-void
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 2

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "--onSaveInstanceState--"

    .line 348
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "RESTART_FLAG"

    const/4 v1, 0x1

    .line 349
    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 350
    iget-boolean v0, p0, Lcom/tencent/connect/common/AssistActivity;->a:Z

    const-string v1, "RESUME_FLAG"

    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 351
    invoke-super {p0, p1}, Landroid/app/Activity;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onStart()V
    .locals 2

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "-->onStart"

    .line 182
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 5

    const-string v0, "openSDK_LOG.AssistActivity"

    const-string v1, "-->onStop"

    .line 227
    invoke-static {v0, v1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 228
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 229
    sget-boolean v1, Lcom/tencent/tauth/Tencent;->disableResetOrientation:Z

    if-nez v1, :cond_0

    .line 231
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/connect/common/AssistActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    const-string v2, "key_request_orientation"

    const/4 v3, -0x1

    invoke-virtual {v1, v2, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    .line 233
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getRequestedOrientation= "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-eq v1, v3, :cond_0

    .line 235
    invoke-virtual {p0, v1}, Lcom/tencent/connect/common/AssistActivity;->setRequestedOrientation(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "reset requestedOrientation catch exception"

    .line 238
    invoke-static {v0, v2, v1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public setResultData(ILandroid/content/Intent;)V
    .locals 11

    const/4 v0, 0x0

    const-string v1, "openSDK_LOG.AssistActivity"

    if-nez p2, :cond_1

    const-string p2, "--setResultData--intent is null, setResult ACTIVITY_CANCEL"

    .line 386
    invoke-static {v1, p2}, Lcom/tencent/open/log/SLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    invoke-virtual {p0, v0}, Lcom/tencent/connect/common/AssistActivity;->setResult(I)V

    const/16 p2, 0x2b5d

    if-ne p1, p2, :cond_0

    .line 390
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v0

    iget-object v2, p0, Lcom/tencent/connect/common/AssistActivity;->d:Ljava/lang/String;

    const-string v1, ""

    const-string v3, "2"

    const-string v4, "1"

    const-string v5, "7"

    const-string v6, "2"

    invoke-virtual/range {v0 .. v6}, Lcom/tencent/open/b/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void

    :cond_1
    :try_start_0
    const-string p1, "key_response"

    .line 398
    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "--setResultDataForLogin-- "

    .line 399
    invoke-static {v1, v2}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, -0x1

    if-nez v2, :cond_4

    .line 401
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "openid"

    .line 402
    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string p1, "access_token"

    .line 403
    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v4, "proxy_code"

    .line 404
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v6, "proxy_expires_in"

    .line 405
    invoke-virtual {v2, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v6

    .line 408
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "--setResultData--openid and token not empty, setResult ACTIVITY_OK"

    .line 409
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 410
    invoke-virtual {p0, v3, p2}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 412
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v4

    iget-object v6, p0, Lcom/tencent/connect/common/AssistActivity;->d:Ljava/lang/String;

    const-string v7, "2"

    const-string v8, "1"

    const-string v9, "7"

    const-string v10, "0"

    invoke-virtual/range {v4 .. v10}, Lcom/tencent/open/b/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 414
    :cond_2
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    const-wide/16 v4, 0x0

    cmp-long p1, v6, v4

    if-eqz p1, :cond_3

    const-string p1, "--setResultData--proxy_code and proxy_expires_in are valid"

    .line 415
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 416
    invoke-virtual {p0, v3, p2}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    goto :goto_0

    :cond_3
    const-string p1, "--setResultData--openid or token is empty, setResult ACTIVITY_CANCEL"

    .line 418
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 419
    invoke-virtual {p0, v0, p2}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V

    .line 421
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v2

    const-string v3, ""

    iget-object v4, p0, Lcom/tencent/connect/common/AssistActivity;->d:Ljava/lang/String;

    const-string v5, "2"

    const-string v6, "1"

    const-string v7, "7"

    const-string v8, "1"

    invoke-virtual/range {v2 .. v8}, Lcom/tencent/open/b/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const-string p1, "--setResultData--response is empty, setResult ACTIVITY_OK"

    .line 435
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 437
    invoke-virtual {p0, v3, p2}, Lcom/tencent/connect/common/AssistActivity;->setResult(ILandroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const-string p2, "--setResultData--parse response failed"

    .line 440
    invoke-static {v1, p2}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 441
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
