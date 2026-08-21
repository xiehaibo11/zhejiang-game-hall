.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;
.super Ljava/lang/Object;
.source "OppoDeviceIDHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 112
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up;->genInterface(Landroid/os/IBinder;)Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    move-result-object p2

    iput-object p2, p1, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->oppoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 117
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->oppoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    return-void
.end method
