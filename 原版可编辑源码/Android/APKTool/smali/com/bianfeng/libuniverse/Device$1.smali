.class Lcom/bianfeng/libuniverse/Device$1;
.super Landroid/content/BroadcastReceiver;
.source "Device.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/libuniverse/Device;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/libuniverse/Device;


# direct methods
.method constructor <init>(Lcom/bianfeng/libuniverse/Device;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/bianfeng/libuniverse/Device$1;->this$0:Lcom/bianfeng/libuniverse/Device;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 64
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android.intent.action.BATTERY_CHANGED"

    .line 65
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    const-string v0, "level"

    .line 66
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    sput v0, Lcom/bianfeng/libuniverse/Device;->mBatterylevel:I

    const-string v0, "scale"

    .line 67
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    sput v0, Lcom/bianfeng/libuniverse/Device;->mBatteryscale:I

    const-string v0, "status"

    .line 68
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    sput v0, Lcom/bianfeng/libuniverse/Device;->mBatterystatus:I

    const-string v0, "plugged"

    .line 69
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    sput p1, Lcom/bianfeng/libuniverse/Device;->mBatteryplugged:I

    :cond_0
    return-void
.end method
