.class public final Lcom/tkay/basead/a/g;
.super Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    .line 21
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_5

    const-string v1, "receiver_extra_offer_id"

    .line 23
    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "receiver_extra_click_id"

    .line 24
    invoke-virtual {p2, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v2, -0x1

    .line 25
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    sparse-switch v3, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v3, "action_offer_install_start"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v2, v4

    goto :goto_0

    :sswitch_1
    const-string v3, "action_offer_install_successful"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v2, v5

    goto :goto_0

    :sswitch_2
    const-string v3, "action_offer_download_start"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v2, 0x0

    goto :goto_0

    :sswitch_3
    const-string v3, "action_offer_download_end"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v2, v6

    :cond_0
    :goto_0
    if-eqz v2, :cond_4

    if-eq v2, v6, :cond_3

    if-eq v2, v5, :cond_2

    if-eq v2, v4, :cond_1

    goto :goto_1

    .line 36
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object p1

    invoke-virtual {p1, v1, p2}, Lcom/tkay/basead/a/h;->c(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 33
    :cond_2
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object p1

    invoke-virtual {p1, v1, p2}, Lcom/tkay/basead/a/h;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 30
    :cond_3
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object p1

    invoke-virtual {p1, v1, p2}, Lcom/tkay/basead/a/h;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 27
    :cond_4
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object p1

    invoke-virtual {p1, v1, p2}, Lcom/tkay/basead/a/h;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x4d8cbdb0 -> :sswitch_3
        -0x1c8c0b69 -> :sswitch_2
        0x1be7306a -> :sswitch_1
        0x4ae0dc92 -> :sswitch_0
    .end sparse-switch
.end method
