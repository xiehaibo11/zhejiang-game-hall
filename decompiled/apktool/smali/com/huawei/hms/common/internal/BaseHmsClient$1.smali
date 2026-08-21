.class Lcom/huawei/hms/common/internal/BaseHmsClient$1;
.super Ljava/lang/Object;
.source "BaseHmsClient.java"

# interfaces
.implements Lcom/huawei/hms/adapter/BinderAdapter$BinderCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/huawei/hms/common/internal/BaseHmsClient;->bindCoreService()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;


# direct methods
.method constructor <init>(Lcom/huawei/hms/common/internal/BaseHmsClient;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onBinderFailed(I)V
    .locals 1

    const/4 v0, 0x0

    .line 1
    invoke-virtual {p0, p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->onBinderFailed(ILandroid/content/Intent;)V

    return-void
.end method

.method public onBinderFailed(ILandroid/content/Intent;)V
    .locals 4

    const/16 p1, 0xa

    const/4 v0, 0x0

    const-string v1, "BaseHmsClient"

    if-eqz p2, :cond_1

    .line 2
    iget-object v2, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-virtual {v2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->getClientSettings()Lcom/huawei/hms/common/internal/ClientSettings;

    move-result-object v2

    invoke-virtual {v2}, Lcom/huawei/hms/common/internal/ClientSettings;->getCpActivity()Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-virtual {v3}, Lcom/huawei/hms/common/internal/BaseHmsClient;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/huawei/hms/utils/Util;->getActiveActivity(Landroid/app/Activity;Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string p1, "onBinderFailed: SDK try to resolve and reConnect!"

    .line 4
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 5
    invoke-virtual {v2, p2}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    :cond_0
    const-string v2, "onBinderFailed: return pendingIntent to kit and cp"

    .line 7
    invoke-static {v1, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 8
    iget-object v1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {v1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$400(Lcom/huawei/hms/common/internal/BaseHmsClient;)Landroid/content/Context;

    move-result-object v1

    const/16 v2, 0xb

    const/high16 v3, 0x8000000

    invoke-static {v1, v2, p2, v3}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p2

    .line 10
    iget-object v1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    new-instance v2, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {v2, p1, p2}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    invoke-static {v1, v2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$500(Lcom/huawei/hms/common/internal/BaseHmsClient;Lcom/huawei/hms/api/ConnectionResult;)V

    .line 11
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$002(Lcom/huawei/hms/common/internal/BaseHmsClient;Lcom/huawei/hms/core/aidl/d;)Lcom/huawei/hms/core/aidl/d;

    goto :goto_0

    :cond_1
    const-string p2, "onBinderFailed: intent is null!"

    .line 14
    invoke-static {v1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 15
    iget-object p2, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    new-instance v1, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {v1, p1, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    invoke-static {p2, v1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$500(Lcom/huawei/hms/common/internal/BaseHmsClient;Lcom/huawei/hms/api/ConnectionResult;)V

    .line 16
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$002(Lcom/huawei/hms/common/internal/BaseHmsClient;Lcom/huawei/hms/core/aidl/d;)Lcom/huawei/hms/core/aidl/d;

    :goto_0
    return-void
.end method

.method public onNullBinding(Landroid/content/ComponentName;)V
    .locals 1

    .line 1
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$200(Lcom/huawei/hms/common/internal/BaseHmsClient;I)V

    .line 2
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    const/16 v0, 0xa

    invoke-static {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$300(Lcom/huawei/hms/common/internal/BaseHmsClient;I)V

    return-void
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const-string p1, "BaseHmsClient"

    const-string v0, "Enter onServiceConnected."

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p2}, Lcom/huawei/hms/core/aidl/d$a;->a(Landroid/os/IBinder;)Lcom/huawei/hms/core/aidl/d;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$002(Lcom/huawei/hms/common/internal/BaseHmsClient;Lcom/huawei/hms/core/aidl/d;)Lcom/huawei/hms/core/aidl/d;

    .line 3
    iget-object p2, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$000(Lcom/huawei/hms/common/internal/BaseHmsClient;)Lcom/huawei/hms/core/aidl/d;

    move-result-object p2

    if-nez p2, :cond_0

    const-string p2, "Failed to get service as interface, trying to unbind."

    .line 4
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 5
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$100(Lcom/huawei/hms/common/internal/BaseHmsClient;)Lcom/huawei/hms/adapter/BinderAdapter;

    move-result-object p1

    invoke-virtual {p1}, Lcom/huawei/hms/adapter/BinderAdapter;->unBind()V

    .line 6
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$200(Lcom/huawei/hms/common/internal/BaseHmsClient;I)V

    .line 7
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    const/16 p2, 0xa

    invoke-static {p1, p2}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$300(Lcom/huawei/hms/common/internal/BaseHmsClient;I)V

    return-void

    .line 10
    :cond_0
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-virtual {p1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->onConnecting()V

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    const-string p1, "BaseHmsClient"

    const-string v0, "Enter onServiceDisconnected."

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$200(Lcom/huawei/hms/common/internal/BaseHmsClient;I)V

    .line 5
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$600(Lcom/huawei/hms/common/internal/BaseHmsClient;)Lcom/huawei/hms/common/internal/BaseHmsClient$ConnectionCallbacks;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 6
    iget-object p1, p0, Lcom/huawei/hms/common/internal/BaseHmsClient$1;->this$0:Lcom/huawei/hms/common/internal/BaseHmsClient;

    invoke-static {p1}, Lcom/huawei/hms/common/internal/BaseHmsClient;->access$600(Lcom/huawei/hms/common/internal/BaseHmsClient;)Lcom/huawei/hms/common/internal/BaseHmsClient$ConnectionCallbacks;

    move-result-object p1

    invoke-interface {p1, v0}, Lcom/huawei/hms/common/internal/BaseHmsClient$ConnectionCallbacks;->onConnectionSuspended(I)V

    :cond_0
    return-void
.end method
