.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;
.super Landroid/content/BroadcastReceiver;
.source "SysfuncInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 0

    .line 1086
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 1089
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 1090
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1091
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "connectivity"

    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/net/ConnectivityManager;

    .line 1093
    invoke-virtual {p1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1094
    invoke-virtual {p1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 1095
    invoke-virtual {p1}, Landroid/net/NetworkInfo;->getType()I

    move-result p2

    .line 1096
    invoke-virtual {p1}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    const/4 p1, 0x1

    if-eq p2, p1, :cond_0

    .line 1106
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x4c5

    const-string v0, "\u975ewifi"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 1103
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x4c4

    const-string v0, "WIFI"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 1114
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x4c6

    const-string v0, "\u65e0\u7f51\u7edc"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method
