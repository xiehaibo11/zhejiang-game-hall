.class Lcom/bianfeng/pluginlibrary/RePluginInterface$1;
.super Ljava/lang/Object;
.source "RePluginInterface.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/pluginlibrary/RePluginInterface;->onCreate(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/pluginlibrary/RePluginInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/pluginlibrary/RePluginInterface;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface$1;->this$0:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const-string p1, "ymn"

    const-string v0, "onServiceConnected: ok"

    .line 29
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 30
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface$1;->this$0:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-static {p2}, Lcom/ymnsdk/replugin/service/IHostAidlInterface$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ymnsdk/replugin/service/IHostAidlInterface;

    move-result-object p2

    iput-object p2, p1, Lcom/bianfeng/pluginlibrary/RePluginInterface;->iHostAidlInterface:Lcom/ymnsdk/replugin/service/IHostAidlInterface;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    const-string p1, "ymn"

    const-string v0, "onServiceDisconnected: "

    .line 35
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
