.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper$1;
.super Ljava/lang/Object;
.source "HWDeviceIDHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 79
    :try_start_0
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;

    iget-object p1, p1, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 82
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
