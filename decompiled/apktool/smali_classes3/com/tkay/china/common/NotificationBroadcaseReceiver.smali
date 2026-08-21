.class public Lcom/tkay/china/common/NotificationBroadcaseReceiver;
.super Landroid/content/BroadcastReceiver;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 19
    const-class v0, Lcom/tkay/china/common/NotificationBroadcaseReceiver;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/common/NotificationBroadcaseReceiver;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    .line 23
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkay_broadcast_receiver_extra_url"

    .line 24
    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    const-string v1, "tkay_broadcast_receiver_extra_unique_id"

    .line 25
    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_broadcast_receiver_extra_request_status"

    .line 26
    invoke-virtual {p2, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, -0x1

    const-string v4, "tkay_broadcast_receiver_extra_notification_id"

    .line 27
    invoke-virtual {p2, v4, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p2

    .line 29
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v4

    const v5, -0x30a06ca0

    const/4 v6, 0x1

    if-eq v4, v5, :cond_1

    const v5, -0x1a52d573

    if-eq v4, v5, :cond_0

    goto :goto_0

    :cond_0
    const-string v4, "tkay_action_notification_click"

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v3, 0x0

    goto :goto_0

    :cond_1
    const-string v4, "tkay_action_notification_cannel"

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    move v3, v6

    :cond_2
    :goto_0
    if-eqz v3, :cond_4

    if-eq v3, v6, :cond_3

    goto :goto_1

    .line 37
    :cond_3
    invoke-static {p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object p1

    invoke-virtual {p1, v1, v2}, Lcom/tkay/china/common/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void

    .line 32
    :cond_4
    invoke-static {p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object p1

    invoke-virtual {p1, v1, v2, p2}, Lcom/tkay/china/common/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
