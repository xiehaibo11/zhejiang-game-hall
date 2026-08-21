.class Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;
.super Ljava/lang/Object;
.source "PluginServiceRecord.java"

# interfaces
.implements Landroid/os/IBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "ProcessRecord"
.end annotation


# instance fields
.field final deathMonitor:Landroid/os/IBinder;

.field final pid:I

.field private refCount:I

.field final synthetic this$0:Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;


# direct methods
.method private constructor <init>(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;ILandroid/os/IBinder;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->this$0:Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    iput p2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->pid:I

    .line 60
    iput-object p3, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->deathMonitor:Landroid/os/IBinder;

    const/4 p1, 0x0

    .line 62
    :try_start_0
    invoke-interface {p3, p0, p1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 64
    :catch_0
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->access$000()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 65
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->access$100()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Error when linkToDeath: "

    invoke-static {p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :goto_0
    const/4 p1, 0x1

    .line 68
    iput p1, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    return-void
.end method

.method synthetic constructor <init>(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;ILandroid/os/IBinder;Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$1;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1, p2, p3}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;-><init>(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;ILandroid/os/IBinder;)V

    return-void
.end method

.method static synthetic access$200(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;)I
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->decrementRef()I

    move-result p0

    return p0
.end method

.method static synthetic access$300(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;)I
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->incrementRef()I

    move-result p0

    return p0
.end method

.method static synthetic access$500(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;)I
    .locals 0

    .line 51
    iget p0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    return p0
.end method

.method private decrementRef()I
    .locals 1

    .line 76
    iget v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    return v0
.end method

.method private incrementRef()I
    .locals 1

    .line 72
    iget v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->refCount:I

    return v0
.end method


# virtual methods
.method public binderDied()V
    .locals 3

    .line 81
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->this$0:Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    iget-object v0, v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mPluginName:Ljava/lang/String;

    iget-object v1, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->this$0:Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    iget-object v1, v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mServiceName:Ljava/lang/String;

    iget v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord$ProcessRecord;->pid:I

    invoke-static {v0, v1, v2}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->onRefProcessDied(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
