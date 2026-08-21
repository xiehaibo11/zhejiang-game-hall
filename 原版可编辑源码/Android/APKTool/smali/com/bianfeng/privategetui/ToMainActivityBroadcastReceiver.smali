.class public Lcom/bianfeng/privategetui/ToMainActivityBroadcastReceiver;
.super Landroid/content/BroadcastReceiver;
.source "ToMainActivityBroadcastReceiver.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4

    const-string v0, "click"

    const-string v1, "notification"

    .line 18
    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    const-string v2, "notificationId"

    const/4 v3, -0x1

    .line 19
    invoke-virtual {p2, v2, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/app/NotificationManager;->cancel(I)V

    const-string v1, "PUSH_APP_MAIN_ACTIVITY"

    .line 20
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 22
    :try_start_0
    new-instance v2, Landroid/content/Intent;

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    invoke-direct {v2, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    invoke-virtual {v2, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    move-result-object v1

    .line 23
    invoke-virtual {p2, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 25
    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 27
    :cond_0
    invoke-virtual {p1, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 30
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
