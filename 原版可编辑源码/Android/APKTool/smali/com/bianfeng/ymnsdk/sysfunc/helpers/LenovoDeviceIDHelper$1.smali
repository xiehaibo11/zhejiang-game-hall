.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper$1;
.super Ljava/lang/Object;
.source "LenovoDeviceIDHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    .line 56
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;

    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;

    invoke-direct {v0, p2}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;-><init>(Landroid/os/IBinder;)V

    iput-object v0, p1, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
