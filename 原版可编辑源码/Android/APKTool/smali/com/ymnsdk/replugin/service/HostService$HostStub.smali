.class Lcom/ymnsdk/replugin/service/HostService$HostStub;
.super Lcom/ymnsdk/replugin/service/IHostAidlInterface$Stub;
.source "HostService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/service/HostService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "HostStub"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/service/HostService;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/service/HostService;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/ymnsdk/replugin/service/HostService$HostStub;->this$0:Lcom/ymnsdk/replugin/service/HostService;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/service/IHostAidlInterface$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public postToSepperllita(Ljava/lang/String;)V
    .locals 2

    const-string v0, "ymn"

    const-string v1, "\u89e6\u53d1\u4e86aidl"

    .line 66
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 67
    invoke-static {p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->postToSepperllita(Ljava/lang/String;)V

    return-void
.end method
